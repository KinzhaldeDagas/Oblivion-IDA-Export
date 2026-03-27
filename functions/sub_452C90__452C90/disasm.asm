0x452C90: push    ebx
0x452C91: mov     ebx, [esp+4+a2]
0x452C95: push    edi
0x452C96: lea     eax, [esp+8+a2]
0x452C9A: push    eax
0x452C9B: push    ebx
0x452C9C: mov     edi, ecx
0x452C9E: call    NiTMap_GetAt
0x452CA3: test    al, al
0x452CA5: jnz     short loc_452CD6
0x452CA7: push    esi
0x452CA8: push    8; Size
0x452CAA: call    FormHeapAlloc
0x452CAF: xor     esi, esi
0x452CB1: add     esp, 4
0x452CB4: cmp     eax, esi
0x452CB6: jz      short loc_452CBF
0x452CB8: mov     [eax], esi
0x452CBA: mov     [eax+4], esi
0x452CBD: mov     esi, eax
0x452CBF: push    esi; a3
0x452CC0: push    ebx; a2
0x452CC1: mov     ecx, edi; this
0x452CC3: call    NiTMap_SetAt
0x452CC8: mov     ecx, [esp+0Ch+arg_4]
0x452CCC: mov     [esi], ecx
0x452CCE: mov     eax, esi
0x452CD0: pop     esi
0x452CD1: pop     edi
0x452CD2: pop     ebx
0x452CD3: retn    8
0x452CD6: mov     eax, [esp+8+a2]
0x452CDA: mov     edx, [esp+8+arg_4]
0x452CDE: pop     edi
0x452CDF: mov     [eax], edx
0x452CE1: pop     ebx
0x452CE2: retn    8
