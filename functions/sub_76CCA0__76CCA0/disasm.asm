0x76CCA0: push    ebp
0x76CCA1: mov     ebp, [esp+4+arg_0]
0x76CCA5: push    edi
0x76CCA6: mov     edi, ecx
0x76CCA8: movzx   eax, word ptr [edi+8]
0x76CCAC: cmp     ebp, eax
0x76CCAE: jz      loc_76CE2D
0x76CCB4: movzx   eax, word ptr [edi+0Ah]
0x76CCB8: movzx   ecx, ax
0x76CCBB: cmp     ebp, ecx
0x76CCBD: push    ebx
0x76CCBE: push    esi
0x76CCBF: jnb     short loc_76CD0E
0x76CCC1: cmp     bp, ax
0x76CCC4: movzx   ebx, bp
0x76CCC7: jnb     short loc_76CD0A
0x76CCC9: lea     esp, [esp+0]
0x76CCD0: mov     eax, [edi+4]
0x76CCD3: movzx   edx, bx
0x76CCD6: cmp     dword ptr [eax+edx*4], 0
0x76CCDA: lea     esi, [eax+edx*4]
0x76CCDD: setnz   al
0x76CCE0: test    al, al
0x76CCE2: jz      short loc_76CD01
0x76CCE4: mov     ecx, [esi]
0x76CCE6: test    ecx, ecx
0x76CCE8: jz      short loc_76CCFB
0x76CCEA: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x76CCEE: jnz     short loc_76CCF5
0x76CCF0: call    sub_7604D0
0x76CCF5: mov     dword ptr [esi], 0
0x76CCFB: add     word ptr [edi+0Ch], 0FFFFh
0x76CD01: add     ebx, 1
0x76CD04: cmp     bx, [edi+0Ah]
0x76CD08: jb      short loc_76CCD0
0x76CD0A: mov     [edi+0Ah], bp
0x76CD0E: test    ebp, ebp
0x76CD10: mov     ebx, [edi+4]
0x76CD13: mov     [esp+10h+arg_0], ebx
0x76CD17: mov     [edi+8], bp
0x76CD1B: jbe     loc_76CDEF
0x76CD21: movzx   esi, bp
0x76CD24: xor     ecx, ecx
0x76CD26: mov     eax, esi
0x76CD28: mov     edx, 4
0x76CD2D: mul     edx
0x76CD2F: seto    cl
0x76CD32: neg     ecx
0x76CD34: or      ecx, eax
0x76CD36: xor     eax, eax
0x76CD38: add     ecx, 4
0x76CD3B: setb    al
0x76CD3E: neg     eax
0x76CD40: or      eax, ecx
0x76CD42: push    eax; Size
0x76CD43: call    FormHeapAlloc
0x76CD48: add     esp, 4
0x76CD4B: test    eax, eax
0x76CD4D: jz      short loc_76CD64
0x76CD4F: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; Concurrency::details::_NonReentrantLock::_Release(void)
0x76CD54: push    esi
0x76CD55: lea     ebp, [eax+4]
0x76CD58: push    4
0x76CD5A: push    ebp
0x76CD5B: mov     [eax], esi
0x76CD5D: call    sub_401080
0x76CD62: jmp     short loc_76CD66
0x76CD64: xor     ebp, ebp
0x76CD66: mov     [edi+4], ebp
0x76CD69: xor     ebp, ebp
0x76CD6B: cmp     [edi+0Ah], bp
0x76CD6F: jbe     short loc_76CDB6
0x76CD71: mov     ebx, [edi+4]
0x76CD74: mov     edx, [esp+10h+arg_0]
0x76CD78: movzx   esi, bp
0x76CD7B: add     esi, esi
0x76CD7D: add     esi, esi
0x76CD7F: mov     ecx, [ebx+esi]
0x76CD82: add     ebx, esi
0x76CD84: cmp     ecx, [esi+edx]
0x76CD87: jz      short loc_76CDA9
0x76CD89: test    ecx, ecx
0x76CD8B: jz      short loc_76CD98
0x76CD8D: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x76CD91: jnz     short loc_76CD98
0x76CD93: call    sub_7604D0
0x76CD98: mov     eax, [esp+10h+arg_0]
0x76CD9C: mov     esi, [esi+eax]
0x76CD9F: test    esi, esi
0x76CDA1: mov     [ebx], esi
0x76CDA3: jz      short loc_76CDA9
0x76CDA5: add     dword ptr [esi+60h], 1
0x76CDA9: add     ebp, 1
0x76CDAC: cmp     bp, [edi+0Ah]
0x76CDB0: jb      short loc_76CD71
0x76CDB2: mov     ebx, [esp+10h+arg_0]
0x76CDB6: movzx   esi, word ptr [edi+0Ah]
0x76CDBA: cmp     si, [edi+8]
0x76CDBE: jnb     short loc_76CDF6
0x76CDC0: mov     edx, [edi+4]
0x76CDC3: movzx   ecx, si
0x76CDC6: lea     ebx, [edx+ecx*4]
0x76CDC9: mov     ecx, [ebx]
0x76CDCB: test    ecx, ecx
0x76CDCD: jz      short loc_76CDE0
0x76CDCF: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x76CDD3: jnz     short loc_76CDDA
0x76CDD5: call    sub_7604D0
0x76CDDA: mov     dword ptr [ebx], 0
0x76CDE0: add     esi, 1
0x76CDE3: cmp     si, [edi+8]
0x76CDE7: jb      short loc_76CDC0
0x76CDE9: mov     ebx, [esp+10h+arg_0]
0x76CDED: jmp     short loc_76CDF6
0x76CDEF: mov     dword ptr [edi+4], 0
0x76CDF6: test    ebx, ebx
0x76CDF8: jz      short loc_76CE2B
0x76CDFA: mov     edi, [ebx-4]
0x76CDFD: lea     ebp, [ebx-4]
0x76CE00: lea     esi, [ebx+edi*4]
0x76CE03: sub     edi, 1
0x76CE06: js      short loc_76CE22
0x76CE08: mov     ecx, [esi-4]
0x76CE0B: sub     esi, 4
0x76CE0E: test    ecx, ecx
0x76CE10: jz      short loc_76CE1D
0x76CE12: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x76CE16: jnz     short loc_76CE1D
0x76CE18: call    sub_7604D0
0x76CE1D: sub     edi, 1
0x76CE20: jns     short loc_76CE08
0x76CE22: push    ebp
0x76CE23: call    FormHeapFree
0x76CE28: add     esp, 4
0x76CE2B: pop     esi
0x76CE2C: pop     ebx
0x76CE2D: pop     edi
0x76CE2E: pop     ebp
0x76CE2F: retn    4
