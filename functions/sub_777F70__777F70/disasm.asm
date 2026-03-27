0x777F70: push    esi
0x777F71: push    edi
0x777F72: mov     edi, [esp+8+streamCount]
0x777F76: mov     esi, ecx
0x777F78: cmp     edi, [esi+1Ch]
0x777F7B: jz      loc_778038
0x777F81: xor     ecx, ecx
0x777F83: mov     eax, edi
0x777F85: mov     edx, 4
0x777F8A: mul     edx
0x777F8C: seto    cl
0x777F8F: push    ebx
0x777F90: push    ebp
0x777F91: neg     ecx
0x777F93: or      ecx, eax
0x777F95: push    ecx; Size
0x777F96: call    FormHeapAlloc
0x777F9B: mov     ebp, eax
0x777F9D: xor     ecx, ecx
0x777F9F: mov     eax, edi
0x777FA1: mov     edx, 4
0x777FA6: mul     edx
0x777FA8: seto    cl
0x777FAB: neg     ecx
0x777FAD: or      ecx, eax
0x777FAF: push    ecx; Size
0x777FB0: call    FormHeapAlloc
0x777FB5: mov     ebx, eax
0x777FB7: mov     eax, [esi+1Ch]
0x777FBA: add     esp, 8
0x777FBD: cmp     edi, eax
0x777FBF: mov     [esp+10h+streamCount], ebx
0x777FC3: jnb     short loc_77803D
0x777FC5: lea     eax, ds:0[edi*4]
0x777FCC: push    eax; Size
0x777FCD: mov     eax, [esi+24h]
0x777FD0: push    eax; Src
0x777FD1: push    ebp; Dst
0x777FD2: call    _memcpy
0x777FD7: mov     ecx, [esi+20h]
0x777FDA: lea     eax, ds:0[edi*4]
0x777FE1: push    eax; Size
0x777FE2: push    ecx; Src
0x777FE3: push    ebx; Dst
0x777FE4: call    _memcpy
0x777FE9: add     esp, 18h
0x777FEC: cmp     dword ptr [esi+4], 0
0x777FF0: jz      short loc_778018
0x777FF2: cmp     edi, [esi+1Ch]
0x777FF5: mov     ebx, edi
0x777FF7: jnb     short loc_778014
0x777FF9: lea     esp, [esp+0]
0x778000: mov     ecx, [esi+4]
0x778003: mov     edx, [ecx]
0x778005: mov     eax, [edx+1Ch]
0x778008: push    ebx
0x778009: push    esi
0x77800A: call    eax
0x77800C: add     ebx, 1
0x77800F: cmp     ebx, [esi+1Ch]
0x778012: jb      short loc_778000
0x778014: mov     ebx, [esp+10h+streamCount]
0x778018: mov     eax, [esi+24h]
0x77801B: push    eax
0x77801C: call    FormHeapFree
0x778021: mov     ecx, [esi+20h]
0x778024: push    ecx
0x778025: call    FormHeapFree
0x77802A: add     esp, 8
0x77802D: mov     [esi+24h], ebp
0x778030: pop     ebp
0x778031: mov     [esi+20h], ebx
0x778034: mov     [esi+1Ch], edi
0x778037: pop     ebx
0x778038: pop     edi
0x778039: pop     esi
0x77803A: retn    4
0x77803D: mov     edx, [esi+24h]
0x778040: lea     ecx, ds:0[eax*4]
0x778047: push    ecx; Size
0x778048: push    edx; Src
0x778049: push    ebp; Dst
0x77804A: call    _memcpy
0x77804F: mov     eax, [esi+1Ch]
0x778052: mov     ecx, [esi+20h]
0x778055: add     eax, eax
0x778057: add     eax, eax
0x778059: push    eax; Size
0x77805A: push    ecx; Src
0x77805B: push    ebx; Dst
0x77805C: call    _memcpy
0x778061: mov     eax, [esi+1Ch]
0x778064: mov     edx, edi
0x778066: sub     edx, eax
0x778068: add     edx, edx
0x77806A: add     edx, edx
0x77806C: push    edx
0x77806D: lea     eax, [ebp+eax*4+0]
0x778071: push    0
0x778073: push    eax
0x778074: call    __memset
0x778079: mov     eax, [esi+1Ch]
0x77807C: mov     ecx, edi
0x77807E: sub     ecx, eax
0x778080: add     ecx, ecx
0x778082: add     ecx, ecx
0x778084: push    ecx
0x778085: lea     edx, [ebx+eax*4]
0x778088: push    0
0x77808A: push    edx
0x77808B: call    __memset
0x778090: add     esp, 30h
0x778093: jmp     short loc_778018
