0x4C9FB0: push    0Dh; a2
0x4C9FB2: add     ecx, 28h ; '('; this
0x4C9FB5: call    BaseExtraList_GetExtraData
0x4C9FBA: test    eax, eax
0x4C9FBC: setnz   al
0x4C9FBF: retn
