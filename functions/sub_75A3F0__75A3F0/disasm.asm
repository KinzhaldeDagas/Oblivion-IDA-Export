0x75A3F0: push    ebx
0x75A3F1: mov     ebx, [esp+4+arg_0]
0x75A3F5: push    esi
0x75A3F6: mov     esi, ecx
0x75A3F8: push    edi
0x75A3F9: mov     edi, [esi+18h]
0x75A3FC: cmp     edi, ebx
0x75A3FE: jz      short loc_75A431
0x75A400: test    edi, edi
0x75A402: jz      short loc_75A420
0x75A404: lea     eax, [edi+4]
0x75A407: push    eax; lpAddend
0x75A408: call    dword ptr ds:0A2807Ch
0x75A40E: test    eax, eax
0x75A410: jnz     short loc_75A420
0x75A412: test    edi, edi
0x75A414: jz      short loc_75A420
0x75A416: mov     edx, [edi]
0x75A418: mov     eax, [edx]
0x75A41A: push    1
0x75A41C: mov     ecx, edi
0x75A41E: call    eax
0x75A420: test    ebx, ebx
0x75A422: mov     [esi+18h], ebx
0x75A425: jz      short loc_75A431
0x75A427: add     ebx, 4
0x75A42A: push    ebx; lpAddend
0x75A42B: call    dword ptr ds:0A28078h
0x75A431: fldz
0x75A433: mov     eax, [esi+18h]
0x75A436: test    eax, eax
0x75A438: fst     dword ptr [esi+1Ch]
0x75A43B: fstp    dword ptr [esi+20h]
0x75A43E: jz      short loc_75A461
0x75A440: mov     ecx, [eax+8]
0x75A443: test    ecx, ecx
0x75A445: mov     dl, [eax+14h]
0x75A448: mov     eax, [eax+0Ch]
0x75A44B: jz      short loc_75A461
0x75A44D: fld     dword ptr [eax]
0x75A44F: movzx   edx, dl
0x75A452: add     ecx, 0FFFFFFFFh
0x75A455: fstp    dword ptr [esi+1Ch]
0x75A458: imul    ecx, edx
0x75A45B: fld     dword ptr [ecx+eax]
0x75A45E: fstp    dword ptr [esi+20h]
0x75A461: pop     edi
0x75A462: pop     esi
0x75A463: pop     ebx
0x75A464: retn    4
