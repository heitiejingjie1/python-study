import sys
import pygame

def runGame():
    # 初始化游戏并创建一个屏幕
    pygame.init()
    screen = pygame.display.set_mode((100,100))
    pygame.display.set_caption("alien")

    # 开始游戏主循环
    while True:

        # 监视键盘和鼠标时间
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit()
        
        pygame.display.flip()

runGame()
