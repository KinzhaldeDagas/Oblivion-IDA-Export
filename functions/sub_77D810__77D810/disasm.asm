0x77D810: push    esi
0x77D811: push    edi
0x77D812: mov     edi, [esp+8+arg_0]
0x77D816: mov     esi, [edi+1Ch]
0x77D819: test    esi, esi
0x77D81B: jz      short loc_77D83A
0x77D81D: push    esi
0x77D81E: call    sub_782930
0x77D823: mov     ecx, esi
0x77D825: call    sub_778110
0x77D82A: push    esi
0x77D82B: call    FormHeapFree
0x77D830: add     esp, 4
0x77D833: mov     dword ptr [edi+1Ch], 0
0x77D83A: pop     edi
0x77D83B: pop     esi
0x77D83C: retn    4
