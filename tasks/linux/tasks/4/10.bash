# Выведи мне топ 5 файлов, в которых чаще всего встречается слово pizza

grep -r -o -i 'pizza' . | head -5
