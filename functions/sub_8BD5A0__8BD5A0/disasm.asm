0x8BD5A0: push    esi
0x8BD5A1: mov     esi, ecx
0x8BD5A3: cmp     dword ptr [esi+0Ch], 0
0x8BD5A7: jnz     short loc_8BD5F2
0x8BD5A9: push    ebx
0x8BD5AA: push    1
0x8BD5AC: push    70h ; 'p'
0x8BD5AE: mov     ecx, offset FormHeap
0x8BD5B3: call    j_MemoryHeap_Alloc
0x8BD5B8: mov     ebx, eax
0x8BD5BA: mov     cl, bl
0x8BD5BC: and     cl, 0Fh
0x8BD5BF: mov     al, 10h
0x8BD5C1: sub     al, cl
0x8BD5C3: movzx   edx, al
0x8BD5C6: add     ebx, edx
0x8BD5C8: mov     ecx, ebx
0x8BD5CA: mov     [ebx-1], al
0x8BD5CD: call    sub_532250
0x8BD5D2: cmp     dword ptr [esi+8], 0
0x8BD5D6: mov     [esi+0Ch], ebx
0x8BD5D9: jz      short loc_8BD5E3
0x8BD5DB: push    ebx
0x8BD5DC: mov     ecx, esi
0x8BD5DE: call    sub_8AEE10
0x8BD5E3: mov     eax, [esp+8+arg_0]
0x8BD5E7: mov     byte ptr [eax], 1
0x8BD5EA: mov     eax, [esi+0Ch]
0x8BD5ED: pop     ebx
0x8BD5EE: pop     esi
0x8BD5EF: retn    4
0x8BD5F2: mov     ecx, [esp+4+arg_0]
0x8BD5F6: mov     byte ptr [ecx], 0
0x8BD5F9: mov     eax, [esi+0Ch]
0x8BD5FC: pop     esi
0x8BD5FD: retn    4
