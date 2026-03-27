0x402640: sub     esp, 8
0x402643: push    ebp
0x402644: push    esi
0x402645: mov     esi, ecx
0x402647: push    offset aMemorypoolFree; "MemoryPool::FreeUnusedPagesForAllPools("...
0x40264C: mov     ecx, offset HeapCriticalSection
0x402651: call    NiEnterCriticalSection
0x402656: xor     ebp, ebp
0x402658: cmp     [esi+10Ch], ebp
0x40265E: mov     byte ptr [esp+10h+var_8+3], 0
0x402663: jbe     loc_402724
0x402669: push    ebx
0x40266A: mov     [esp+14h+var_4], ebp
0x40266E: push    edi; dwFreeType
0x40266F: nop
0x402670: mov     eax, [esi+108h]
0x402676: cmp     word ptr [eax+ebp*2], 0
0x40267B: jnz     loc_40270B
0x402681: cmp     byte ptr [esp+18h+var_8+3], 0
0x402686: jnz     short loc_4026A4
0x402688: cmp     dword ptr [esi+114h], 2
0x40268F: jb      short loc_40269F
0x402691: mov     ecx, [esi+44h]
0x402694: push    ecx
0x402695: mov     ecx, esi
0x402697: call    sub_402190
0x40269C: mov     [esi+44h], eax
0x40269F: mov     byte ptr [esp+18h+var_8+3], 1
0x4026A4: mov     edi, [esi+100h]
0x4026AA: xor     edx, edx
0x4026AC: mov     eax, 1000h
0x4026B1: div     edi
0x4026B3: mov     ecx, [esi+40h]
0x4026B6: add     ecx, [esp+18h+var_4]
0x4026BA: lea     edx, [eax-1]
0x4026BD: imul    edx, edi
0x4026C0: mov     edi, [ecx]
0x4026C2: add     edx, ecx
0x4026C4: test    edi, edi
0x4026C6: jz      short loc_4026D0
0x4026C8: mov     ebx, [edx+4]
0x4026CB: mov     [edi+4], ebx
0x4026CE: jmp     short loc_4026D6
0x4026D0: mov     edi, [edx+4]
0x4026D3: mov     [esi+44h], edi
0x4026D6: mov     edx, [edx+4]
0x4026D9: test    edx, edx
0x4026DB: jz      short loc_4026E1
0x4026DD: mov     edi, [ecx]
0x4026DF: mov     [edx], edi
0x4026E1: sub     [esi+114h], eax
0x4026E7: push    4000h; dwFreeType
0x4026EC: push    1000h; dwSize
0x4026F1: push    ecx; lpAddress
0x4026F2: call    ds:VirtualFree
0x4026F8: mov     edx, [esi+108h]
0x4026FE: mov     word ptr [edx+ebp*2], 0FFFFh
0x402704: add     dword ptr [esi+118h], 0FFFFFFFFh
0x40270B: add     [esp+18h+var_4], 1000h
0x402713: add     ebp, 1
0x402716: cmp     ebp, [esi+10Ch]
0x40271C: jb      loc_402670
0x402722: pop     edi
0x402723: pop     ebx
0x402724: pop     esi
0x402725: mov     ecx, offset HeapCriticalSection; lpCriticalSection
0x40272A: pop     ebp
0x40272B: add     esp, 8
0x40272E: jmp     NiLeaveCriticalSection_0
