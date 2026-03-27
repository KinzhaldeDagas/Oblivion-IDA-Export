0x95F960: push    ecx
0x95F961: push    ebx
0x95F962: push    ebp
0x95F963: push    esi
0x95F964: push    edi
0x95F965: push    18h; Size
0x95F967: mov     ebx, ecx
0x95F969: call    FormHeapAlloc
0x95F96E: xor     edi, edi
0x95F970: add     esp, 4
0x95F973: cmp     eax, edi
0x95F975: jz      short loc_95F986
0x95F977: mov     ecx, eax
0x95F979: call    sub_95F810
0x95F97E: mov     ebp, eax
0x95F980: mov     [esp+14h+var_4], ebp
0x95F984: jmp     short loc_95F98C
0x95F986: mov     [esp+14h+var_4], edi
0x95F98A: mov     ebp, edi
0x95F98C: movzx   eax, word ptr [ebx+0Eh]
0x95F990: lea     esi, [ebp+4]
0x95F993: push    eax
0x95F994: mov     ecx, esi
0x95F996: call    NiTArray_SetSize
0x95F99B: cmp     [ebx+0Eh], di
0x95F99F: jbe     short loc_95FA08
0x95F9A1: mov     ebp, 1
0x95F9A6: mov     ecx, [ebx+8]
0x95F9A9: mov     ecx, [ecx+edi*4]
0x95F9AC: mov     edx, [ecx]
0x95F9AE: mov     eax, [edx+18h]
0x95F9B1: call    eax
0x95F9B3: movzx   ecx, word ptr [esi+0Ah]
0x95F9B7: cmp     edi, ecx
0x95F9B9: jb      short loc_95F9CC
0x95F9BB: test    eax, eax
0x95F9BD: lea     edx, [edi+1]
0x95F9C0: mov     [esi+0Ah], dx
0x95F9C4: jz      short loc_95F9EE
0x95F9C6: add     [esi+0Ch], bp
0x95F9CA: jmp     short loc_95F9EE
0x95F9CC: test    eax, eax
0x95F9CE: jz      short loc_95F9DF
0x95F9D0: mov     ecx, [esi+4]
0x95F9D3: cmp     dword ptr [ecx+edi*4], 0
0x95F9D7: jnz     short loc_95F9EE
0x95F9D9: add     [esi+0Ch], bp
0x95F9DD: jmp     short loc_95F9EE
0x95F9DF: mov     edx, [esi+4]
0x95F9E2: cmp     dword ptr [edx+edi*4], 0
0x95F9E6: jz      short loc_95F9EE
0x95F9E8: add     word ptr [esi+0Ch], 0FFFFh
0x95F9EE: mov     ecx, [esi+4]
0x95F9F1: mov     [ecx+edi*4], eax
0x95F9F4: movzx   edx, word ptr [ebx+0Eh]
0x95F9F8: add     edi, ebp
0x95F9FA: cmp     edi, edx
0x95F9FC: jb      short loc_95F9A6
0x95F9FE: mov     eax, [esp+14h+var_4]
0x95FA02: pop     edi
0x95FA03: pop     esi
0x95FA04: pop     ebp
0x95FA05: pop     ebx
0x95FA06: pop     ecx
0x95FA07: retn
0x95FA08: pop     edi
0x95FA09: pop     esi
0x95FA0A: mov     eax, ebp
0x95FA0C: pop     ebp
0x95FA0D: pop     ebx
0x95FA0E: pop     ecx
0x95FA0F: retn
