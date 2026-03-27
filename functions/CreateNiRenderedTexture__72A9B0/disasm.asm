0x72A9B0: push    0FFFFFFFFh
0x72A9B2: push    offset SEH_71BE30
0x72A9B7: mov     eax, large fs:0
0x72A9BD: push    eax
0x72A9BE: push    ebx
0x72A9BF: push    ebp
0x72A9C0: push    esi
0x72A9C1: push    edi
0x72A9C2: mov     eax, ds:0B30AACh
0x72A9C7: xor     eax, esp
0x72A9C9: push    eax
0x72A9CA: lea     eax, [esp+20h+var_C]
0x72A9CE: mov     large fs:0, eax
0x72A9D4: mov     ebp, [esp+20h+a3]
0x72A9D8: xor     esi, esi
0x72A9DA: cmp     ebp, esi
0x72A9DC: jz      loc_72AAAF
0x72A9E2: mov     edi, [esp+20h+a1]
0x72A9E6: cmp     edi, esi
0x72A9E8: mov     ebx, [esp+20h+a2]
0x72A9EC: jz      short loc_72AA0A
0x72A9EE: lea     eax, [edi-1]
0x72A9F1: test    edi, eax
0x72A9F3: setz    al
0x72A9F6: test    al, al
0x72A9F8: jz      short loc_72AA0A
0x72A9FA: cmp     ebx, esi
0x72A9FC: jz      short loc_72AA0A
0x72A9FE: lea     ecx, [ebx-1]
0x72AA01: test    ebx, ecx
0x72AA03: setz    al
0x72AA06: test    al, al
0x72AA08: jnz     short loc_72AA2A
0x72AA0A: mov     edx, [ebp+0]
0x72AA0D: mov     eax, [edx+54h]
0x72AA10: mov     ecx, ebp
0x72AA12: call    eax
0x72AA14: test    al, 8
0x72AA16: jnz     short loc_72AA2A
0x72AA18: mov     edx, [ebp+0]
0x72AA1B: mov     eax, [edx+54h]
0x72AA1E: mov     ecx, ebp
0x72AA20: call    eax
0x72AA22: test    al, 4
0x72AA24: jz      loc_72AAAF
0x72AA2A: push    40h ; '@'; Size
0x72AA2C: call    FormHeapAlloc
0x72AA31: add     esp, 4
0x72AA34: mov     [esp+20h+a3], eax
0x72AA38: cmp     eax, esi
0x72AA3A: mov     [esp+20h+var_4], esi
0x72AA3E: jz      short loc_72AA49
0x72AA40: mov     ecx, eax; this
0x72AA42: call    NiRenderedTexture__NiRenderedTexture
0x72AA47: mov     esi, eax
0x72AA49: mov     eax, [esp+20h+a4]
0x72AA4D: mov     ecx, [eax]
0x72AA4F: mov     [esi+18h], ecx
0x72AA52: mov     edx, [eax+4]
0x72AA55: mov     [esi+1Ch], edx
0x72AA58: mov     eax, [eax+8]
0x72AA5B: push    ebx
0x72AA5C: push    edi
0x72AA5D: mov     [esp+28h+var_4], 0FFFFFFFFh
0x72AA65: mov     [esi+20h], eax
0x72AA68: call    Ni2DBuffer__Ni2DBuffer
0x72AA6D: add     esp, 8
0x72AA70: push    eax; a2
0x72AA71: lea     ecx, [esi+30h]; this
0x72AA74: call    NiSmartPointer_Set??
0x72AA79: mov     cl, ds:0B3FF00h
0x72AA7F: mov     [esi+34h], cl
0x72AA82: mov     edx, ds:0B2752Ch
0x72AA88: mov     [esi+38h], edx
0x72AA8B: mov     al, ds:0B27530h
0x72AA90: mov     [esi+3Ch], al
0x72AA93: mov     edx, [ebp+0]
0x72AA96: mov     eax, [edx+108h]
0x72AA9C: push    esi
0x72AA9D: mov     ecx, ebp
0x72AA9F: call    eax
0x72AAA1: test    al, al
0x72AAA3: jnz     short loc_72AAC5
0x72AAA5: mov     edx, [esi]
0x72AAA7: mov     eax, [edx]
0x72AAA9: push    1
0x72AAAB: mov     ecx, esi
0x72AAAD: call    eax
0x72AAAF: xor     eax, eax
0x72AAB1: mov     ecx, dword ptr [esp+20h+var_C]
0x72AAB5: mov     large fs:0, ecx
0x72AABC: pop     ecx
0x72AABD: pop     edi
0x72AABE: pop     esi
0x72AABF: pop     ebp
0x72AAC0: pop     ebx
0x72AAC1: add     esp, 0Ch
0x72AAC4: retn
0x72AAC5: mov     eax, esi
0x72AAC7: mov     ecx, dword ptr [esp+20h+var_C]
0x72AACB: mov     large fs:0, ecx
0x72AAD2: pop     ecx
0x72AAD3: pop     edi
0x72AAD4: pop     esi
0x72AAD5: pop     ebp
0x72AAD6: pop     ebx
0x72AAD7: add     esp, 0Ch
0x72AADA: retn
