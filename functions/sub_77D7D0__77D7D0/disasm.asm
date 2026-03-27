0x77D7D0: mov     eax, [esp+arg_0]
0x77D7D4: cmp     dword ptr [eax+1Ch], 0
0x77D7D8: push    esi
0x77D7D9: mov     esi, ecx
0x77D7DB: jnz     short loc_77D80B
0x77D7DD: push    50h ; 'P'; Size
0x77D7DF: call    FormHeapAlloc
0x77D7E4: add     esp, 4
0x77D7E7: test    eax, eax
0x77D7E9: jz      short loc_77D7F4
0x77D7EB: mov     ecx, eax
0x77D7ED: call    NiGeometryBufferData__NiGeometryBufferData
0x77D7F2: jmp     short loc_77D7F6
0x77D7F4: xor     eax, eax
0x77D7F6: push    eax
0x77D7F7: mov     ecx, esi
0x77D7F9: mov     dword ptr [eax+38h], 4
0x77D800: mov     dword ptr [eax], 1400000h
0x77D806: call    sub_782910
0x77D80B: pop     esi
0x77D80C: retn    4
