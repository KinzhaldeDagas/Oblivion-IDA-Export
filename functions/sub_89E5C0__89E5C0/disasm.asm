0x89E5C0: push    esi
0x89E5C1: mov     esi, ecx
0x89E5C3: cmp     dword ptr [esi+0Ch], 0
0x89E5C7: jnz     short loc_89E60E
0x89E5C9: push    1
0x89E5CB: push    50h ; 'P'
0x89E5CD: mov     ecx, offset FormHeap
0x89E5D2: call    j_MemoryHeap_Alloc
0x89E5D7: mov     dl, al
0x89E5D9: and     dl, 0Fh
0x89E5DC: mov     cl, 10h
0x89E5DE: sub     cl, dl
0x89E5E0: movzx   edx, cl
0x89E5E3: add     eax, edx
0x89E5E5: mov     [eax-1], cl
0x89E5E8: mov     ecx, eax
0x89E5EA: call    sub_47F9F0
0x89E5EF: cmp     dword ptr [esi+8], 0
0x89E5F3: mov     [esi+0Ch], eax
0x89E5F6: jz      short loc_89E600
0x89E5F8: push    eax
0x89E5F9: mov     ecx, esi
0x89E5FB: call    sub_89E370
0x89E600: mov     eax, [esp+4+arg_0]
0x89E604: mov     byte ptr [eax], 1
0x89E607: mov     eax, [esi+0Ch]
0x89E60A: pop     esi
0x89E60B: retn    4
0x89E60E: mov     ecx, [esp+4+arg_0]
0x89E612: mov     byte ptr [ecx], 0
0x89E615: mov     eax, [esi+0Ch]
0x89E618: pop     esi
0x89E619: retn    4
