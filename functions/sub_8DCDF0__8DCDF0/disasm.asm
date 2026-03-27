0x8DCDF0: push    ebx
0x8DCDF1: push    esi
0x8DCDF2: mov     esi, [esp+8+arg_0]
0x8DCDF6: push    edi
0x8DCDF7: mov     edi, [esi+11Ch]
0x8DCDFD: dec     edi
0x8DCDFE: js      short loc_8DCE1B
0x8DCE00: mov     ebx, [esp+0Ch+arg_4]
0x8DCE04: mov     eax, [esi+118h]
0x8DCE0A: mov     ecx, [eax+edi*4]
0x8DCE0D: test    ecx, ecx
0x8DCE0F: jz      short loc_8DCE18
0x8DCE11: mov     edx, [ecx]
0x8DCE13: push    ebx
0x8DCE14: push    esi
0x8DCE15: call    dword ptr [edx+4]
0x8DCE18: dec     edi
0x8DCE19: jns     short loc_8DCE04
0x8DCE1B: mov     edx, [esi+11Ch]
0x8DCE21: dec     edx
0x8DCE22: js      short loc_8DCE6D
0x8DCE24: mov     eax, [esi+118h]
0x8DCE2A: cmp     dword ptr [eax+edx*4], 0
0x8DCE2E: jnz     short loc_8DCE6A
0x8DCE30: mov     ebx, [esi+11Ch]
0x8DCE36: dec     ebx
0x8DCE37: mov     ecx, ebx
0x8DCE39: cmp     edx, ecx
0x8DCE3B: mov     [esi+11Ch], ebx
0x8DCE41: mov     eax, edx
0x8DCE43: jge     short loc_8DCE6A
0x8DCE45: jmp     short loc_8DCE50
0x8DCE47: align 10h
0x8DCE50: mov     ecx, [esi+118h]
0x8DCE56: mov     edi, [ecx+eax*4+4]
0x8DCE5A: lea     ecx, [ecx+eax*4]
0x8DCE5D: mov     [ecx], edi
0x8DCE5F: mov     ecx, [esi+11Ch]
0x8DCE65: inc     eax
0x8DCE66: cmp     eax, ecx
0x8DCE68: jl      short loc_8DCE50
0x8DCE6A: dec     edx
0x8DCE6B: jns     short loc_8DCE24
0x8DCE6D: pop     edi
0x8DCE6E: pop     esi
0x8DCE6F: pop     ebx
0x8DCE70: retn
