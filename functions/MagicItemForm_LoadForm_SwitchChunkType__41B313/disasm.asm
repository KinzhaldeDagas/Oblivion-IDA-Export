0x41B313: cmp     eax, 44494445h
0x41B318: jz      short MagicItemForm_LoadForm___LoadEditorName
0x41B31A: cmp     eax, 44494645h
0x41B31F: jz      short MagicItemForm_LoadForm___LoadEffectItem
0x41B321: cmp     eax, 4C4C5546h
0x41B326: jnz     MagicItemForm_LoadForm___LoadBaseData
