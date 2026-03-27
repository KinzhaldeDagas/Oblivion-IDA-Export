0x768980: push    ebx
0x768981: mov     ebx, [esp+4+a2]
0x768985: push    ebp
0x768986: push    esi
0x768987: mov     esi, ecx
0x768989: mov     eax, [esi]
0x76898B: mov     edx, [eax+4]
0x76898E: push    edi
0x76898F: push    ebx
0x768990: call    edx
0x768992: mov     ebp, eax
0x768994: mov     eax, [esi+8]
0x768997: mov     edi, [eax+ebp*4]
0x76899A: test    edi, edi
0x76899C: jz      short loc_7689B8
0x76899E: mov     edi, edi
0x7689A0: mov     eax, [edi+4]
0x7689A3: mov     edx, [esi]
0x7689A5: mov     edx, [edx+8]
0x7689A8: push    eax
0x7689A9: push    ebx
0x7689AA: mov     ecx, esi
0x7689AC: call    edx
0x7689AE: test    al, al
0x7689B0: jnz     short loc_768A1E
0x7689B2: mov     edi, [edi]
0x7689B4: test    edi, edi
0x7689B6: jnz     short loc_7689A0
0x7689B8: mov     edx, [esi]
0x7689BA: mov     eax, [edx+14h]
0x7689BD: mov     ecx, esi
0x7689BF: call    eax
0x7689C1: mov     ebx, [esp+0Ch+a4]
0x7689C5: test    ebx, ebx
0x7689C7: push    ecx
0x7689C8: mov     edi, eax
0x7689CA: mov     eax, esp
0x7689CC: mov     [eax], ebx
0x7689CE: jz      short loc_7689DA
0x7689D0: lea     ecx, [ebx+4]
0x7689D3: push    ecx; lpAddend
0x7689D4: call    dword ptr ds:0A28078h
0x7689DA: mov     eax, [esp+10h+a3]
0x7689DE: mov     edx, [esi]
0x7689E0: mov     edx, [edx+0Ch]
0x7689E3: push    eax
0x7689E4: push    edi
0x7689E5: mov     ecx, esi
0x7689E7: call    edx
0x7689E9: mov     eax, [esi+8]
0x7689EC: mov     ecx, [eax+ebp*4]
0x7689EF: mov     [edi], ecx
0x7689F1: mov     edx, [esi+8]
0x7689F4: mov     [edx+ebp*4], edi
0x7689F7: add     dword ptr [esi+0Ch], 1
0x7689FB: test    ebx, ebx
0x7689FD: jz      short loc_768A17
0x7689FF: lea     eax, [ebx+4]
0x768A02: push    eax; lpAddend
0x768A03: call    dword ptr ds:0A2807Ch
0x768A09: test    eax, eax
0x768A0B: jnz     short loc_768A17
0x768A0D: mov     edx, [ebx]
0x768A0F: mov     eax, [edx]
0x768A11: push    1
0x768A13: mov     ecx, ebx
0x768A15: call    eax
0x768A17: pop     edi
0x768A18: pop     esi
0x768A19: pop     ebp
0x768A1A: pop     ebx
0x768A1B: retn    8
0x768A1E: mov     eax, [esi]
0x768A20: mov     edx, [eax+10h]
0x768A23: push    edi
0x768A24: mov     ecx, esi
0x768A26: call    edx
0x768A28: push    ecx
0x768A29: mov     eax, esp
0x768A2B: mov     ebx, [esp+10h+a4]
0x768A2F: mov     [eax], ebx
0x768A31: test    ebx, ebx
0x768A33: jz      short loc_768A3F
0x768A35: lea     eax, [ebx+4]
0x768A38: push    eax; lpAddend
0x768A39: call    dword ptr ds:0A28078h
0x768A3F: mov     eax, [esp+10h+a3]
0x768A43: mov     edx, [esi]
0x768A45: mov     edx, [edx+0Ch]
0x768A48: push    eax
0x768A49: push    edi
0x768A4A: mov     ecx, esi
0x768A4C: call    edx
0x768A4E: jmp     short loc_7689FB
