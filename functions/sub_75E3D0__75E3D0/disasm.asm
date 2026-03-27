0x75E3D0: push    esi
0x75E3D1: push    edi
0x75E3D2: mov     edi, ecx
0x75E3D4: mov     esi, [edi+0Ch]
0x75E3D7: test    esi, esi
0x75E3D9: jz      short loc_75E3FE
0x75E3DB: lea     eax, [esi+4]
0x75E3DE: push    eax; lpAddend
0x75E3DF: call    dword ptr ds:0A2807Ch
0x75E3E5: test    eax, eax
0x75E3E7: jnz     short loc_75E3F7
0x75E3E9: test    esi, esi
0x75E3EB: jz      short loc_75E3F7
0x75E3ED: mov     edx, [esi]
0x75E3EF: mov     eax, [edx]
0x75E3F1: push    1
0x75E3F3: mov     ecx, esi
0x75E3F5: call    eax
0x75E3F7: mov     dword ptr [edi+0Ch], 0
0x75E3FE: push    edi
0x75E3FF: call    sub_75E370
0x75E404: add     esp, 4
0x75E407: pop     edi
0x75E408: mov     al, 1
0x75E40A: pop     esi
0x75E40B: retn
