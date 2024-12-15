local vim = vim
local Plug = vim.fn['plug#']

vim.call('plug#begin')
-- coc.nvim
Plug ('neoclide/coc.nvim', {['branch']= 'release'})
-- 加强c++
Plug "octol/vim-cpp-enhanced-highlight"
-- 提供c++snippets
Plug 'honza/vim-snippets'
-- 主题
Plug 'crusoexia/vim-monokai'
Plug 'folke/tokyonight.nvim'
-- 折叠
Plug "nvim-treesitter/nvim-treesitter"

vim.call('plug#end')

--"""""""""""""""""基础配置"""""""""""""""
require ("basic")
vim.cmd[[colorscheme tokyonight]]
require('keybindings')

--"""""""""""""""""插件配置"""""""""""""""
require	("plugins.coc")
require ("plugins.nvim-treesitter")
