0x77DD40: push    esi
0x77DD41: push    edi
0x77DD42: mov     edi, [esp+8+arg_0]
0x77DD46: mov     esi, [edi+28h]
0x77DD49: test    esi, esi
0x77DD4B: jz      short loc_77DD6A
0x77DD4D: push    esi
0x77DD4E: call    sub_782930
0x77DD53: mov     ecx, esi
0x77DD55: call    sub_778110
0x77DD5A: push    esi
0x77DD5B: call    FormHeapFree
0x77DD60: add     esp, 4
0x77DD63: mov     dword ptr [edi+28h], 0
0x77DD6A: pop     edi
0x77DD6B: pop     esi
0x77DD6C: retn    4
