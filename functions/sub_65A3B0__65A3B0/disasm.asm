0x65A3B0: call    MobileObject_GetCharProxy
0x65A3B5: mov     ecx, eax
0x65A3B7: test    ecx, ecx
0x65A3B9: jz      short locret_65A3D9
0x65A3BB: cmp     byte ptr [esp+arg_0], 0
0x65A3C0: jz      short loc_65A3D4
0x65A3C2: mov     eax, [ecx]
0x65A3C4: mov     edx, [eax+88h]
0x65A3CA: mov     [esp+arg_0], 0
0x65A3D2: jmp     edx
0x65A3D4: call    sub_893950
0x65A3D9: retn    4
