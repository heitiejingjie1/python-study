import sys
import pygame


class AlienIvasion:
    """管理游戏资源和行为"""

    def __init__(self) -> None:
        """初始化游戏并创建游戏资源"""
        pygame.init()
        self.screen = pygame.display.set_mode((300, 600))
        pygame.display.set_caption("Alien Invasion")

    def runGame(self):
        """开始游戏主循环"""
        while True:
            # 监视键盘和鼠标
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    sys.exit()
            # 让最近绘制的屏幕可见
            pygame.display.flip()


if __name__ == "__main__":
    """创建游戏实例并运行游戏"""
    ai = AlienIvasion()
    ai.runGame()
