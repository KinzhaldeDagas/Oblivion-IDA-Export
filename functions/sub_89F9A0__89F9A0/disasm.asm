0x89F9A0: push    ecx
0x89F9A1: push    esi
0x89F9A2: push    edi
0x89F9A3: mov     edi, ecx
0x89F9A5: mov     eax, [edi]
0x89F9A7: mov     edx, [eax+74h]
0x89F9AA: lea     ecx, [esp+0Ch+var_4]
0x89F9AE: push    ecx
0x89F9AF: mov     ecx, edi
0x89F9B1: call    edx
0x89F9B3: mov     esi, eax
0x89F9B5: mov     eax, [esi+14h]
0x89F9B8: test    eax, eax
0x89F9BA: js      short loc_89F9F3
0x89F9BC: mov     ecx, ds:0BA9DE4h
0x89F9C2: mov     edx, large fs:2Ch
0x89F9C9: mov     ecx, [edx+ecx*4]
0x89F9CC: mov     ecx, [ecx+19Ch]
0x89F9D2: test    ecx, ecx
0x89F9D4: jnz     short loc_89F9DC
0x89F9D6: mov     ecx, ds:0BA7D9Ch
0x89F9DC: mov     edx, [esi+0Ch]
0x89F9DF: and     eax, 3FFFFFFFh
0x89F9E4: add     eax, eax
0x89F9E6: add     eax, eax
0x89F9E8: push    14h
0x89F9EA: add     eax, eax
0x89F9EC: push    eax
0x89F9ED: push    edx
0x89F9EE: call    sub_8A75D0
0x89F9F3: mov     eax, [esi+14h]
0x89F9F6: and     eax, 0C0000000h
0x89F9FB: or      eax, 80000000h
0x89FA00: test    esi, esi
0x89FA02: mov     dword ptr [esi+0Ch], 0
0x89FA09: mov     dword ptr [esi+10h], 0
0x89FA10: mov     [esi+14h], eax
0x89FA13: jz      short loc_89FA21
0x89FA15: mov     esi, [esi+4]
0x89FA18: test    esi, esi
0x89FA1A: jz      short loc_89FA21
0x89FA1C: mov     eax, [esi+8]
0x89FA1F: jmp     short loc_89FA23
0x89FA21: xor     eax, eax
0x89FA23: mov     esi, [esp+0Ch+arg_0]
0x89FA27: mov     edx, [esi]
0x89FA29: push    eax
0x89FA2A: mov     eax, [edx+2Ch]
0x89FA2D: mov     ecx, esi
0x89FA2F: call    eax
0x89FA31: push    esi
0x89FA32: mov     ecx, edi
0x89FA34: call    sub_89D7B0
0x89FA39: mov     edx, [edi]
0x89FA3B: mov     eax, dword ptr [esp+0Ch+var_4]
0x89FA3F: mov     edx, [edx+64h]
0x89FA42: push    eax
0x89FA43: mov     ecx, edi
0x89FA45: call    edx
0x89FA47: pop     edi
0x89FA48: pop     esi
0x89FA49: pop     ecx
0x89FA4A: retn    4
