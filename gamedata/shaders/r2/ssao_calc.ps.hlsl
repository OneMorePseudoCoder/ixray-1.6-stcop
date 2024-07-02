#include "common.hlsli"

uniform float3x4 m_v2w;
uniform sampler2D s_half_depth;

#include "ssao_blur.ps.hlsl"
#include "ssao.ps.hlsl"
// #include "ssao_hbao.ps.hlsl"

struct _input
{
    float4 hpos : POSITION;
    float4 tc0 : TEXCOORD0;
    float2 tcJ : TEXCOORD1;
};

float4 main(_input I) : COLOR0
{
    float4 P = tex2D(s_position, I.tc0); // position.(mtl or sun)
    float4 N = tex2D(s_normal, I.tc0); // normal.hemi

#ifndef USE_HBAO
    float o = calc_ssao(P, N, I.tc0, I.tcJ);
#else
    //	NOw is not supported
    float o = 1.0f; // hbao_calc(P, N, I.tc0.xy, I.hpos);
#endif

    return float4(o, P.z, 0.0f, 0.0f);
}