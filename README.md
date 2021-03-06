# Memento
### Тип: Поведенческий

![Image alt](https://github.com/sergeybushuev/Memento/raw/master/UML.png)

**Хранитель** - Шаблон проектирования, позволяющий, не нарушая инкапсуляцию, зафиксировать и сохранить внутреннее состояние объекта так, чтобы позднее восстановить его в это состояние.
## Описание
  Шаблон Хранитель используется двумя объектами: "Создателем" (originator) и "Опекуном" (caretaker). "Создатель" - это объект, у которого есть внутреннее состояние. Объект "Опекун" может производить некоторые действия с "Создателем", но при этом необходимо иметь возможность откатить изменения. Для этого "Опекун" запрашивает у "Создателя" объект "Хранителя". Затем выполняет запланированное действие (или последовательность действий). Для выполнения отката "Создателя" к состоянию, которое предшествовало изменениям, "Опекун" возвращает объект "Хранителя" его "Создателю". "Хранитель" является непрозрачным (т.е. таким, который не может или не должен изменяться "Опекуном").
## Применение
  Шаблон Хранитель используется, когда:
  - необходимо сохранить снимок состояния объекта (или его части) для последующего восстановления
  - прямой интерфейс получения состояния объекта раскрывает детали реализации и нарушает инкапсуляцию объекта

 
