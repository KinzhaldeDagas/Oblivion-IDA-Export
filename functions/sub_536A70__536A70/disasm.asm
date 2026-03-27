0x536A70: push    ebx
0x536A71: push    esi
0x536A72: mov     esi, [esp+8+arg_0]
0x536A76: mov     eax, [esi+30h]
0x536A79: add     esi, 14h
0x536A7C: and     eax, 3Fh
0x536A7F: cmp     al, 0Ch
0x536A81: mov     ebx, ecx
0x536A83: jnz     short loc_536AD1
0x536A85: push    edi
0x536A86: push    esi
0x536A87: call    sub_536110
0x536A8C: mov     edi, eax
0x536A8E: add     esp, 4
0x536A91: test    edi, edi
0x536A93: jz      short loc_536AD0
0x536A95: push    10h; Size
0x536A97: call    FormHeapAlloc
0x536A9C: add     esp, 4
0x536A9F: test    eax, eax
0x536AA1: jz      short loc_536AC5
0x536AA3: mov     [eax+8], esi
0x536AA6: mov     [eax+0Ch], edi
0x536AA9: mov     dword ptr [eax], 0
0x536AAF: mov     dword ptr [eax+4], 0
0x536AB6: mov     ecx, [ebx+8]
0x536AB9: pop     edi
0x536ABA: mov     [eax+4], ecx
0x536ABD: pop     esi
0x536ABE: mov     [ebx+8], eax
0x536AC1: pop     ebx
0x536AC2: retn    4
0x536AC5: mov     ecx, [ebx+8]
0x536AC8: xor     eax, eax
0x536ACA: mov     [eax+4], ecx
0x536ACD: mov     [ebx+8], eax
0x536AD0: pop     edi
0x536AD1: pop     esi
0x536AD2: pop     ebx
0x536AD3: retn    4
