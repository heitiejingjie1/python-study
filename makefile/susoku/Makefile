####结构
# 目标:依赖
# 	方法
####

# 最终目标默认为第一行代码
# 指定最终目标
.DEFAULT_GOAL = sudoku

sudoku:block.o command.o i18n.o input.o main.o scene.o
	g++ -o sudoku block.o command.o i18n.o input.o main.o scene.o

block.o:block.cpp block.h common.h color.h display_symbol.h
	g++ -c block.cpp

command.o: command.cpp scene.h common.h block.h command.h
	g++ -c command.cpp

i18n.o:i18n.cpp i18n.h
	g++ -c i18n.cpp

input.o:input.cpp common.h i18n.h utility.inl
	g++ -c input.cpp

main.o:main.cpp i18n.h input.h common.h scene.h block.h command.h system_env.hpp utility.inl
	g++ -c main.cpp

scene.o:scene.cpp scene.h common.h block.h command.h display_symbol.h i18n.h utility.inl color.h
	g++ -c scene.cpp

# 设定伪目标
.PHONY: clean
# 清除中间目标和最终目标	
clean:
	rm block.o command.o i18n.o input.o main.o scene.o
	rm sudoku
	

