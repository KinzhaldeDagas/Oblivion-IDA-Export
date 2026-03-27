0x8BD9C0: push    esi
0x8BD9C1: mov     esi, ecx
0x8BD9C3: cmp     dword ptr [esi+0Ch], 0
0x8BD9C7: jnz     short loc_8BDA0E
0x8BD9C9: push    1
0x8BD9CB: push    50h ; 'P'
0x8BD9CD: mov     ecx, offset FormHeap
0x8BD9D2: call    j_MemoryHeap_Alloc
0x8BD9D7: mov     dl, al
0x8BD9D9: and     dl, 0Fh
0x8BD9DC: mov     cl, 10h
0x8BD9DE: sub     cl, dl
0x8BD9E0: movzx   edx, cl
0x8BD9E3: add     eax, edx
0x8BD9E5: mov     [eax-1], cl
0x8BD9E8: mov     ecx, eax
0x8BD9EA: call    sub_8BD940
0x8BD9EF: cmp     dword ptr [esi+8], 0
0x8BD9F3: mov     [esi+0Ch], eax
0x8BD9F6: jz      short loc_8BDA00
0x8BD9F8: push    eax
0x8BD9F9: mov     ecx, esi
0x8BD9FB: call    sub_8BD720
0x8BDA00: mov     eax, [esp+4+arg_0]
0x8BDA04: mov     byte ptr [eax], 1
0x8BDA07: mov     eax, [esi+0Ch]
0x8BDA0A: pop     esi
0x8BDA0B: retn    4
0x8BDA0E: mov     ecx, [esp+4+arg_0]
0x8BDA12: mov     byte ptr [ecx], 0
0x8BDA15: mov     eax, [esi+0Ch]
0x8BDA18: pop     esi
0x8BDA19: retn    4
