0x41B5F3: cmp     eax, 44494445h
0x41B5F8: jz      short MagicItemObject_LoadForm___LoadEditorName
0x41B5FA: cmp     eax, 44494645h
0x41B5FF: jz      short MagicItemObject_LoadForm___LoadEffectItem
0x41B601: cmp     eax, 4C4C5546h
0x41B606: jnz     MagicItemObject_LoadForm___LoadBaseData
