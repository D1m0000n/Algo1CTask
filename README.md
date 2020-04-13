# Algo1CTask

Попытаемся как можно быстрее решить задачу, хоть в конкретно нашем случае курсов и немного, но со временем их число 
может увеличиться.
Для решения этой задачи будем использовать поиск в глубину. Как несложно убедиться разу, зависимости, необходимые
для закрытия определенных предметов образуют ориентированный граф.
Тогда в каждой вершине будем хранить следующую информацию:
- список предков
- список сыновей
- минимальное количество курсов, которое на текущий момент(число будет обновляться в ходе работы программы) необходимо 
закрыть, чтобы можно было закрыть этот курс(включая сам курс)

Сам алгоритм. Можно было решать так: заведем очередь с приоритетом для курсов(приоритетом является их уровень, 
как видно из таблицы зависимость не может идти в такой же уровень или уровень выше). То есть для нас важен порядок, в
котором мы хотим обрабатывать курсы. То есть понятно, что все 
необходимые зависимости обрабатывать просто, потому что их просто обязательно брать для того, чтобы закрыть курс, 
сложности возникают, когда есть выбор из курсов, которые мы можем закрыть. Тогда для каждого такого случая мы бы могли
рекурсивно запустить ту же функцию, что вычисляла для нас ответ(минимальное количество курсов для прохождения данного).
Тогда из всех результатов мы бы могли просто выбрать минимальное значение. Конечно, эта функция будет сразу же вычислять
ответ для всего запроса(потому что мы в ней будем проверять, прошли ли мы помимо курса 5го уровня, курсы 3го уровня).
Какие-то оптипизаии в связи с текущим видом таблицы не выгодно делать какие-то оптимизации, потому что мы хотим решать 
задачу в общем случае. Помимо этого также необходимо будет учитывать, что когда мы будем выбирать из одинаковых курсов,
которые мы хотим пройти и оба эти курса имеют второй уровень, то приоритетом для нас становится не минимальное 
количество курсов, которое мы хотим закрыть, а его приоритет.
Наверняка просто перебрать все возможные пути обхода данного графа было бы проще, но это работало бы дольше. Но из-за
не самой простой структуры решение дописать не удалось за отведенное время, надеюсь, его суть ясна.

## Relations
   Здесь хранятся все данные о курсах, включая их имена и все зависимости.
   
## Course
   Хранит имя курса
   
## Algo
   Непосредственно сам алгоритм
    
Для удобства будем считать, что желания о курсах студент выражает в виде их номеров.
Также считаем, что всего 66 курсов. Эта константа фигурирует в Relations.h(ее, коненчо, можно получить из ввода, но
поиск максимума особого смысла не несет). 

TODO: Распрарсить уже удобные для парсинга входные данные