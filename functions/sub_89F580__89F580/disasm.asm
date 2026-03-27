0x89F580: test    ecx, ecx
0x89F582: mov     edx, [esp+arg_0]
0x89F586: jz      short loc_89F5A1
0x89F588: mov     eax, [ecx+8]
0x89F58B: test    eax, eax
0x89F58D: jz      short loc_89F5A1
0x89F58F: add     eax, 14h
0x89F592: jz      short loc_89F5A1
0x89F594: push    esi
0x89F595: mov     esi, [eax]
0x89F597: mov     [edx+4], esi
0x89F59A: mov     al, [eax+18h]
0x89F59D: mov     [edx+8], al
0x89F5A0: pop     esi
0x89F5A1: test    ecx, ecx
0x89F5A3: mov     dword ptr [edx+10h], 0
0x89F5AA: jz      short loc_89F5C2
0x89F5AC: mov     ecx, [ecx+8]
0x89F5AF: test    ecx, ecx
0x89F5B1: jz      short loc_89F5C2
0x89F5B3: lea     eax, [ecx+14h]
0x89F5B6: test    eax, eax
0x89F5B8: jz      short loc_89F5C2
0x89F5BA: mov     eax, [eax+1Ch]
0x89F5BD: mov     [edx], eax
0x89F5BF: retn    4
0x89F5C2: xor     eax, eax
0x89F5C4: mov     [edx], eax
0x89F5C6: retn    4
