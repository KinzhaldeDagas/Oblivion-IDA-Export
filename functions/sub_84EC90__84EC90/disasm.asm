0x84EC90: push    0FFFFFFFFh
0x84EC92: push    offset SEH_851CA0
0x84EC97: mov     eax, large fs:0
0x84EC9D: push    eax
0x84EC9E: push    ecx
0x84EC9F: push    ebx
0x84ECA0: push    ebp
0x84ECA1: push    esi
0x84ECA2: push    edi
0x84ECA3: mov     eax, ds:0B30AACh
0x84ECA8: xor     eax, esp
0x84ECAA: push    eax
0x84ECAB: lea     eax, [esp+24h+var_C]
0x84ECAF: mov     large fs:0, eax
0x84ECB5: mov     ebp, ecx
0x84ECB7: mov     esi, ds:0B4592Ch
0x84ECBD: mov     eax, [esi+24h]
0x84ECC0: mov     ebx, [esp+24h+arg_C]
0x84ECC4: mov     edi, [eax]
0x84ECC6: mov     edx, [ebx]
0x84ECC8: mov     eax, [edx+8Ch]
0x84ECCE: push    0
0x84ECD0: mov     ecx, ebx
0x84ECD2: mov     [esp+28h+var_10], edi
0x84ECD6: call    eax
0x84ECD8: test    eax, eax
0x84ECDA: jz      short loc_84ECEE
0x84ECDC: mov     edx, [ebx]
0x84ECDE: mov     eax, [edx+8Ch]
0x84ECE4: push    0
0x84ECE6: mov     ecx, ebx
0x84ECE8: call    eax
0x84ECEA: mov     ebx, eax
0x84ECEC: jmp     short loc_84ED03
0x84ECEE: test    dword ptr [ebx+1Ch], 80h
0x84ECF5: mov     ebx, ds:0B430F0h
0x84ECFB: ja      short loc_84ED03
0x84ECFD: mov     ebx, ds:0B430DCh
0x84ED03: mov     edi, [edi+4]
0x84ED06: cmp     edi, ebx
0x84ED08: jz      short loc_84ED41
0x84ED0A: test    edi, edi
0x84ED0C: jz      short loc_84ED2A
0x84ED0E: lea     ecx, [edi+4]
0x84ED11: push    ecx; lpAddend
0x84ED12: call    dword ptr ds:0A2807Ch
0x84ED18: test    eax, eax
0x84ED1A: jnz     short loc_84ED2A
0x84ED1C: test    edi, edi
0x84ED1E: jz      short loc_84ED2A
0x84ED20: mov     edx, [edi]
0x84ED22: mov     eax, [edx]
0x84ED24: push    1
0x84ED26: mov     ecx, edi
0x84ED28: call    eax
0x84ED2A: test    ebx, ebx
0x84ED2C: mov     edi, [esp+24h+var_10]
0x84ED30: mov     [edi+4], ebx
0x84ED33: jz      short loc_84ED45
0x84ED35: add     ebx, 4
0x84ED38: push    ebx; lpAddend
0x84ED39: call    dword ptr ds:0A28078h
0x84ED3F: jmp     short loc_84ED45
0x84ED41: mov     edi, [esp+24h+var_10]
0x84ED45: test    edi, edi
0x84ED47: jz      short loc_84ED65
0x84ED49: cmp     byte ptr ds:0B42CDDh, 0
0x84ED50: jz      short loc_84ED65
0x84ED52: mov     ecx, [esp+24h+arg_C]
0x84ED56: mov     edx, [ecx]
0x84ED58: mov     eax, [edx+78h]
0x84ED5B: call    eax
0x84ED5D: push    eax
0x84ED5E: mov     ecx, edi
0x84ED60: call    sub_7715E0
0x84ED65: mov     edi, 1
0x84ED6A: add     [esi+60h], edi
0x84ED6D: mov     [esp+24h+arg_C], esi
0x84ED71: mov     edx, [ebp+38h]
0x84ED74: lea     ecx, [esp+24h+arg_C]
0x84ED78: push    ecx
0x84ED79: push    edx
0x84ED7A: lea     ecx, [ebp+40h]
0x84ED7D: mov     [esp+2Ch+var_4], 0
0x84ED85: call    sub_76CE40
0x84ED8A: or      eax, 0FFFFFFFFh
0x84ED8D: add     [esi+60h], eax
0x84ED90: mov     [esp+24h+var_4], eax
0x84ED94: jnz     short loc_84ED9D
0x84ED96: mov     ecx, esi
0x84ED98: call    sub_7604D0
0x84ED9D: add     [ebp+38h], edi
0x84EDA0: mov     ecx, dword ptr [esp+24h+var_C]
0x84EDA4: mov     large fs:0, ecx
0x84EDAB: pop     ecx
0x84EDAC: pop     edi
0x84EDAD: pop     esi
0x84EDAE: pop     ebp
0x84EDAF: pop     ebx
0x84EDB0: add     esp, 10h
0x84EDB3: retn    10h
