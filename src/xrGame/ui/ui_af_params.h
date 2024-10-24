#pragma once
#include "../../xrUI/Widgets/UIWindow.h"
#include "../../xrEngine/AI/alife_space.h"


class CUIXml;
class CUIStatic;
class CUITextWnd;
class UIArtefactParamItem;
class CInventoryItem;

class CUIArtefactParams : public CUIWindow
{
public:
	enum class CParamType
	{
		eParamTypeOutfit,
		eParamTypeArtefact
	};

					CUIArtefactParams		(const CParamType& type);
	virtual			~CUIArtefactParams		();
			void	InitFromXml				(CUIXml& xml);
			bool	Check					(const shared_str& af_section);
			void	SetInfo					(CInventoryItem& pInvItem);

protected:
	UIArtefactParamItem*	m_immunity_item[ALife::infl_max_count];
	UIArtefactParamItem*	m_restore_item[ALife::eRestoreTypeMax];
	UIArtefactParamItem*	m_disp_condition;
	UIArtefactParamItem*	m_additional_weight;
	UIArtefactParamItem*	m_af_slots;

	CUIStatic*				m_Prop_line;

	CParamType				object_type;

	bool is_artefact() const { return object_type == CParamType::eParamTypeArtefact; }

}; // class CUIArtefactParams

// -----------------------------------

class UIArtefactParamItem : public CUIWindow
{
public:
				UIArtefactParamItem	();
	virtual		~UIArtefactParamItem();
		
		void	Init				( CUIXml& xml, LPCSTR section );
		void	SetCaption			( LPCSTR name );
		void	SetValue			( float value );
	
private:
	CUIStatic*	m_caption;
	CUITextWnd*	m_value;
	float		m_magnitude;
	bool		m_sign_inverse;
	shared_str	m_unit_str;
	shared_str	m_texture_minus;
	shared_str	m_texture_plus;

}; // class UIArtefactParamItem
