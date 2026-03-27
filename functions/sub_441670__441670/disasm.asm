0x441670: push    esi
0x441671: mov     esi, [esp+4+arg_0]
0x441675: test    esi, esi
0x441677: push    edi
0x441678: mov     edi, ecx
0x44167A: jz      short loc_4416C8
0x44167C: mov     ecx, [edi+88h]
0x441682: test    ecx, ecx
0x441684: jnz     short loc_4416B5
0x441686: push    8; Size
0x441688: call    FormHeapAlloc
0x44168D: add     esp, 4
0x441690: test    eax, eax
0x441692: jz      short loc_4416A8
0x441694: mov     [eax], esi
0x441696: mov     dword ptr [eax+4], 0
0x44169D: mov     [edi+88h], eax
0x4416A3: pop     edi
0x4416A4: pop     esi
0x4416A5: retn    4
0x4416A8: xor     eax, eax
0x4416AA: mov     [edi+88h], eax
0x4416B0: pop     edi
0x4416B1: pop     esi
0x4416B2: retn    4
0x4416B5: mov     eax, ecx
0x4416B7: cmp     [eax], esi
0x4416B9: jz      short loc_4416C8
0x4416BB: mov     eax, [eax+4]
0x4416BE: test    eax, eax
0x4416C0: jnz     short loc_4416B7
0x4416C2: push    esi
0x4416C3: call    BSSimpleList_PushFront
0x4416C8: pop     edi
0x4416C9: pop     esi
0x4416CA: retn    4
