0x475B60: push    0FFFFFFFFh
0x475B62: push    offset DisposeActorAnimData_SEH
0x475B67: mov     eax, large fs:0
0x475B6D: push    eax
0x475B6E: sub     esp, 10h
0x475B71: push    ebx
0x475B72: push    ebp
0x475B73: push    esi
0x475B74: push    edi
0x475B75: mov     eax, ds:0B30AACh
0x475B7A: xor     eax, esp
0x475B7C: push    eax
0x475B7D: lea     eax, [esp+30h+var_C]
0x475B81: mov     large fs:0, eax
0x475B87: mov     esi, ecx
0x475B89: mov     [esp+30h+var_10], esi
0x475B8D: xor     ebp, ebp
0x475B8F: cmp     [esi+0CCh], ebp
0x475B95: lea     edi, [esi+0CCh]
0x475B9B: mov     [esp+30h+var_4], ebp
0x475B9F: jz      short loc_475BA7
0x475BA1: push    edi
0x475BA2: call    sub_472ED0
0x475BA7: cmp     [esi+0D0h], ebp
0x475BAD: lea     eax, [esi+0D0h]
0x475BB3: jz      short loc_475BBF
0x475BB5: push    eax
0x475BB6: mov     ecx, esi
0x475BB8: call    sub_472ED0
0x475BBD: jmp     short loc_475BC3
0x475BBF: mov     [edi], ebp
0x475BC1: mov     [eax], ebp
0x475BC3: lea     edi, [esi+0D4h]
0x475BC9: mov     ebx, 2
0x475BCE: mov     edi, edi
0x475BD0: cmp     [edi], ebp
0x475BD2: jz      short loc_475BDE
0x475BD4: push    edi
0x475BD5: mov     ecx, esi
0x475BD7: call    sub_472ED0
0x475BDC: mov     [edi], ebp
0x475BDE: add     edi, 4
0x475BE1: sub     ebx, 1
0x475BE4: jnz     short loc_475BD0
0x475BE6: mov     ebx, [esi+98h]
0x475BEC: cmp     ebx, ebp
0x475BEE: jz      loc_475C74
0x475BF4: xor     edi, edi
0x475BF6: cmp     [ebx+54h], ebp
0x475BF9: jbe     short loc_475C15
0x475BFB: mov     eax, [ebx+4Ch]
0x475BFE: fldz
0x475C00: mov     ecx, [eax+edi*4]
0x475C03: push    ebp; char
0x475C04: push    ecx
0x475C05: fstp    [esp+38h+var_38]; float
0x475C08: call    sub_6C9CB0
0x475C0D: add     edi, 1
0x475C10: cmp     edi, [ebx+54h]
0x475C13: jb      short loc_475BFB
0x475C15: mov     ecx, [esi+98h]
0x475C1B: call    sub_6C4BD0
0x475C20: mov     eax, [esi+98h]
0x475C26: mov     edi, [eax+30h]
0x475C29: cmp     edi, ebp
0x475C2B: jz      short loc_475C48
0x475C2D: mov     edx, [edi]
0x475C2F: mov     eax, [edx+8]
0x475C32: mov     ecx, edi
0x475C34: call    eax
0x475C36: test    eax, eax
0x475C38: jz      short loc_475C48
0x475C3A: mov     eax, [esi+98h]
0x475C40: push    eax
0x475C41: mov     ecx, edi
0x475C43: call    sub_6FFE90
0x475C48: mov     edi, [esi+98h]
0x475C4E: cmp     edi, ebp
0x475C50: jz      short loc_475C74
0x475C52: lea     ecx, [edi+4]
0x475C55: push    ecx; lpAddend
0x475C56: call    dword ptr ds:0A2807Ch
0x475C5C: test    eax, eax
0x475C5E: jnz     short loc_475C6E
0x475C60: cmp     edi, ebp
0x475C62: jz      short loc_475C6E
0x475C64: mov     edx, [edi]
0x475C66: mov     eax, [edx]
0x475C68: push    1
0x475C6A: mov     ecx, edi
0x475C6C: call    eax
0x475C6E: mov     [esi+98h], ebp
0x475C74: mov     ecx, [esi+9Ch]
0x475C7A: mov     edx, [ecx+4]
0x475C7D: xor     eax, eax
0x475C7F: cmp     edx, ebp
0x475C81: jbe     short loc_475C9A
0x475C83: mov     edi, [ecx+8]
0x475C86: mov     ecx, edi
0x475C88: cmp     [ecx], ebp
0x475C8A: jnz     loc_475D6A
0x475C90: add     eax, 1
0x475C93: add     ecx, 4
0x475C96: cmp     eax, edx
0x475C98: jb      short loc_475C88
0x475C9A: xor     eax, eax
0x475C9C: cmp     eax, ebp
0x475C9E: mov     [esp+30h+var_14], eax
0x475CA2: jz      short loc_475CD8
0x475CA4: lea     ecx, [esp+30h+var_18]
0x475CA8: push    ecx
0x475CA9: mov     ecx, [esi+9Ch]
0x475CAF: lea     edx, [esp+34h+var_1C]
0x475CB3: push    edx
0x475CB4: lea     eax, [esp+38h+var_14]
0x475CB8: push    eax
0x475CB9: mov     [esp+3Ch+var_18], ebp
0x475CBD: call    sub_4709C0
0x475CC2: mov     ecx, [esp+30h+var_18]
0x475CC6: cmp     ecx, ebp
0x475CC8: jz      short loc_475CD2
0x475CCA: mov     edx, [ecx]
0x475CCC: mov     eax, [edx]
0x475CCE: push    1
0x475CD0: call    eax
0x475CD2: cmp     [esp+30h+var_14], ebp
0x475CD6: jnz     short loc_475CA4
0x475CD8: cmp     [esi+0B8h], ebp
0x475CDE: jz      short loc_475CFC
0x475CE0: mov     eax, [esi+0B8h]
0x475CE6: mov     edi, [eax+4]
0x475CE9: push    eax
0x475CEA: call    FormHeapFree
0x475CEF: add     esp, 4
0x475CF2: cmp     edi, ebp
0x475CF4: mov     [esi+0B8h], edi
0x475CFA: jnz     short loc_475CE0
0x475CFC: mov     [esi+0B4h], ebp
0x475D02: mov     ecx, [esi+9Ch]
0x475D08: call    NiTMap_Clear
0x475D0D: mov     ecx, [esi+9Ch]
0x475D13: cmp     ecx, ebp
0x475D15: jz      short loc_475D1F
0x475D17: mov     edx, [ecx]
0x475D19: mov     eax, [edx]
0x475D1B: push    1
0x475D1D: call    eax
0x475D1F: mov     [esi+9Ch], ebp
0x475D25: mov     [esi+8], ebp
0x475D28: mov     esi, [esi+98h]
0x475D2E: cmp     esi, ebp
0x475D30: mov     [esp+30h+var_4], 0FFFFFFFFh
0x475D38: jz      short loc_475D56
0x475D3A: lea     ecx, [esi+4]
0x475D3D: push    ecx; lpAddend
0x475D3E: call    dword ptr ds:0A2807Ch
0x475D44: test    eax, eax
0x475D46: jnz     short loc_475D56
0x475D48: cmp     esi, ebp
0x475D4A: jz      short loc_475D56
0x475D4C: mov     edx, [esi]
0x475D4E: mov     eax, [edx]
0x475D50: push    1
0x475D52: mov     ecx, esi
0x475D54: call    eax
0x475D56: mov     ecx, dword ptr [esp+30h+var_C]
0x475D5A: mov     large fs:0, ecx
0x475D61: pop     ecx
0x475D62: pop     edi
0x475D63: pop     esi
0x475D64: pop     ebp
0x475D65: pop     ebx
0x475D66: add     esp, 1Ch
0x475D69: retn
0x475D6A: mov     eax, [edi+eax*4]
0x475D6D: jmp     loc_475C9C
