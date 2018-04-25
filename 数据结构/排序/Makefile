base:base.c
	gcc -std=c89 header/common.c merge.c -o build/merge
	chmod +x build/merge
	cat data/data.txt | build/merge
	# cat data/data.txt | build/merge > data/merge.txt
