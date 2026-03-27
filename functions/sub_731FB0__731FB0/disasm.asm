0x731FB0: cmp     dword ptr [ecx+10h], 0
0x731FB4: mov     eax, ds:0B3F928h
0x731FB9: jz      short loc_731FED
0x731FBB: test    eax, eax
0x731FBD: jz      short loc_731FED
0x731FBF: mov     edx, [esp+arg_0]
0x731FC3: cmp     dword ptr [edx+10h], 0
0x731FC7: jz      short loc_731FED
0x731FC9: push    esi
0x731FCA: mov     esi, [eax]
0x731FCC: push    edi
0x731FCD: mov     edi, [esp+8+arg_C]
0x731FD1: push    edi
0x731FD2: mov     edi, [esp+0Ch+arg_8]
0x731FD6: push    edi
0x731FD7: mov     edi, [esp+10h+arg_4]
0x731FDB: push    edi
0x731FDC: push    edx
0x731FDD: push    ecx
0x731FDE: mov     ecx, eax
0x731FE0: mov     eax, [esi+0D8h]
0x731FE6: call    eax
0x731FE8: pop     edi
0x731FE9: pop     esi
0x731FEA: retn    10h
0x731FED: xor     al, al
0x731FEF: retn    10h
