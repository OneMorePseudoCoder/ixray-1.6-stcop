# Стиль фиксаций

[English](./commit-style.md) | Русский

Стиль фиксаций, принятый в проекте __IX-Ray__

## Обзор

В проекте принят стандарт фиксаций для обеспечения прозрачности и понимания вносимых изменений. Приемлемый стиль фиксаций описан ниже

## Именование

### Начальные фиксации

Первоначальное сообщение о фиксации должно быть написано в следующем стиле:

```text
Initial commit
```

### Рабочие фиксации

- Шаблон

  Обычное сообщение о фиксации должно состоять из одной части и быть построено в соответствии со следующим шаблоном:

  ```test
  Тело сообщения фиксации

  Длинное описание, если необходимо
  ```

  Текст сообщения о фиксации и описание должны кратко отражать смысл изменений, внесенных при фиксации

  Текст сообщения о фиксации должен начинаться с заглавной буквы

  Первое слово должно обозначать глагол действия, выполняемого коммитом, это слово должно быть в форме инфинитива без частицы `to`

  Описание должно быть отделено от основного текста одной пустой строкой

- Длина

  Максимальная длина заголовка фиксации или строки описания фиксации составляет 72 символа