0x46C7A0: push    ebp
0x46C7A1: mov     ebp, esp
0x46C7A3: push    ecx
0x46C7A4: mov     eax, ds:0B30AACh
0x46C7A9: xor     eax, ebp
0x46C7AB: mov     [ebp+var_4], eax
0x46C7AE: push    ebx
0x46C7AF: mov     ebx, [ebp+a1]
0x46C7B2: push    esi
0x46C7B3: xor     esi, esi
0x46C7B5: cmp     ebx, esi
0x46C7B7: push    edi
0x46C7B8: jz      short loc_46C820
0x46C7BA: mov     edi, [ebp+arg_0]
0x46C7BD: cmp     edi, esi
0x46C7BF: jz      short loc_46C820
0x46C7C1: mov     ecx, ebx
0x46C7C3: call    TESFile_GetChunkType
0x46C7C8: cmp     eax, 4C4C5546h
0x46C7CD: jnz     short loc_46C820
0x46C7CF: mov     eax, [ebx+254h]
0x46C7D5: cmp     eax, esi
0x46C7D7: jz      short loc_46C809
0x46C7D9: call    __alloca?
0x46C7DE: mov     esi, esp
0x46C7E0: push    0; a4
0x46C7E2: push    esi; Dst
0x46C7E3: mov     ecx, ebx; a1
0x46C7E5: call    TESFile_GetChunkData
0x46C7EA: push    0; a3
0x46C7EC: push    esi; a2
0x46C7ED: lea     ecx, [edi+4]; this
0x46C7F0: call    BSStringT_Set
0x46C7F5: lea     esp, [ebp-10h]
0x46C7F8: pop     edi
0x46C7F9: pop     esi
0x46C7FA: pop     ebx
0x46C7FB: mov     ecx, [ebp+var_4]
0x46C7FE: xor     ecx, ebp
0x46C800: call    @__security_check_cookie@4; __security_check_cookie(x)
0x46C805: mov     esp, ebp
0x46C807: pop     ebp
0x46C808: retn
0x46C809: mov     eax, [edi+4]
0x46C80C: push    eax
0x46C80D: call    FormHeapFree
0x46C812: add     esp, 4
0x46C815: mov     [edi+4], esi
0x46C818: mov     [edi+0Ah], si
0x46C81C: mov     [edi+8], si
0x46C820: lea     esp, [ebp-10h]
0x46C823: pop     edi
0x46C824: pop     esi
0x46C825: pop     ebx
0x46C826: mov     ecx, [ebp+var_4]
0x46C829: xor     ecx, ebp
0x46C82B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x46C830: mov     esp, ebp
0x46C832: pop     ebp
0x46C833: retn
