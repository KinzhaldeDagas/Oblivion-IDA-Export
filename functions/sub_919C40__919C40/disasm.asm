0x919C40: push    ecx
0x919C41: push    ebx
0x919C42: push    ebp
0x919C43: mov     ebp, ecx
0x919C45: test    ebp, ebp
0x919C47: push    esi
0x919C48: push    edi
0x919C49: mov     [esp+14h+var_4], ebp
0x919C4D: jz      short loc_919C54
0x919C4F: lea     eax, [ebp+28h]
0x919C52: jmp     short loc_919C56
0x919C54: xor     eax, eax
0x919C56: mov     ebx, [esp+14h+arg_0]
0x919C5A: push    eax
0x919C5B: mov     ecx, ebx
0x919C5D: call    sub_8989E0
0x919C62: test    ebp, ebp
0x919C64: jz      short loc_919C6B
0x919C66: lea     eax, [ebp+2Ch]
0x919C69: jmp     short loc_919C6D
0x919C6B: xor     eax, eax
0x919C6D: push    eax
0x919C6E: mov     ecx, ebx
0x919C70: call    sub_898A80
0x919C75: mov     ecx, [ebx+3Ch]
0x919C78: xor     eax, eax
0x919C7A: test    ecx, ecx
0x919C7C: mov     [esp+14h+arg_0], eax
0x919C80: jle     short loc_919CC1
0x919C82: mov     ecx, [ebx+38h]
0x919C85: mov     esi, [ecx+eax*4]
0x919C88: mov     ecx, [esi+38h]
0x919C8B: add     esi, 34h ; '4'
0x919C8E: xor     edi, edi
0x919C90: test    ecx, ecx
0x919C92: jle     short loc_919CB5
0x919C94: add     ebp, 28h ; '('
0x919C97: mov     eax, [esi]
0x919C99: mov     ecx, [eax+edi*4]
0x919C9C: mov     edx, [ebp+0]
0x919C9F: push    ecx
0x919CA0: mov     ecx, ebp
0x919CA2: call    dword ptr [edx+8]
0x919CA5: mov     eax, [esi+4]
0x919CA8: inc     edi
0x919CA9: cmp     edi, eax
0x919CAB: jl      short loc_919C97
0x919CAD: mov     ebp, [esp+14h+var_4]
0x919CB1: mov     eax, [esp+14h+arg_0]
0x919CB5: mov     ecx, [ebx+3Ch]
0x919CB8: inc     eax
0x919CB9: cmp     eax, ecx
0x919CBB: mov     [esp+14h+arg_0], eax
0x919CBF: jl      short loc_919C82
0x919CC1: mov     ecx, [ebx+48h]
0x919CC4: xor     eax, eax
0x919CC6: test    ecx, ecx
0x919CC8: mov     [esp+14h+arg_0], eax
0x919CCC: jle     short loc_919D0F
0x919CCE: mov     edi, edi
0x919CD0: mov     edx, [ebx+44h]
0x919CD3: mov     esi, [edx+eax*4]
0x919CD6: mov     ecx, [esi+38h]
0x919CD9: add     esi, 34h ; '4'
0x919CDC: xor     edi, edi
0x919CDE: test    ecx, ecx
0x919CE0: jle     short loc_919D03
0x919CE2: add     ebp, 28h ; '('
0x919CE5: mov     ecx, [esi]
0x919CE7: mov     edx, [ecx+edi*4]
0x919CEA: mov     eax, [ebp+0]
0x919CED: push    edx
0x919CEE: mov     ecx, ebp
0x919CF0: call    dword ptr [eax+8]
0x919CF3: mov     eax, [esi+4]
0x919CF6: inc     edi
0x919CF7: cmp     edi, eax
0x919CF9: jl      short loc_919CE5
0x919CFB: mov     eax, [esp+14h+arg_0]
0x919CFF: mov     ebp, [esp+14h+var_4]
0x919D03: mov     ecx, [ebx+48h]
0x919D06: inc     eax
0x919D07: cmp     eax, ecx
0x919D09: mov     [esp+14h+arg_0], eax
0x919D0D: jl      short loc_919CD0
0x919D0F: mov     ebx, [ebx+30h]
0x919D12: test    ebx, ebx
0x919D14: jz      short loc_919D38
0x919D16: mov     eax, [ebx+38h]
0x919D19: xor     esi, esi
0x919D1B: test    eax, eax
0x919D1D: jle     short loc_919D38
0x919D1F: lea     edi, [ebp+28h]
0x919D22: mov     ecx, [ebx+34h]
0x919D25: mov     edx, [ecx+esi*4]
0x919D28: mov     eax, [edi]
0x919D2A: push    edx
0x919D2B: mov     ecx, edi
0x919D2D: call    dword ptr [eax+8]
0x919D30: mov     eax, [ebx+38h]
0x919D33: inc     esi
0x919D34: cmp     esi, eax
0x919D36: jl      short loc_919D22
0x919D38: pop     edi
0x919D39: pop     esi
0x919D3A: pop     ebp
0x919D3B: pop     ebx
0x919D3C: pop     ecx
0x919D3D: retn    4
