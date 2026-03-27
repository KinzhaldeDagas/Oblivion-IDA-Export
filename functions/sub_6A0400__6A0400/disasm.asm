0x6A0400: mov     eax, [esp+arg_4]
0x6A0404: mov     edx, [esp+arg_0]
0x6A0408: push    eax
0x6A0409: push    edx
0x6A040A: call    sub_69DB90
0x6A040F: mov     ecx, ds:0B33B00h
0x6A0415: add     ax, 4
0x6A0419: cmp     byte ptr [ecx+7Ch], 37h ; '7'
0x6A041D: movzx   eax, ax
0x6A0420: jb      short locret_6A0425
0x6A0422: add     eax, 9
0x6A0425: retn    8
