0x56B9C0: push    ebx
0x56B9C1: mov     bl, [esp+4+arg_0]
0x56B9C5: test    bl, 2
0x56B9C8: push    esi
0x56B9C9: mov     esi, ecx
0x56B9CB: jz      short loc_56B9F8
0x56B9CD: mov     eax, [esi-4]
0x56B9D0: push    edi
0x56B9D1: push    offset sub_56B820; void (__thiscall *)(void *)
0x56B9D6: lea     edi, [esi-4]
0x56B9D9: push    eax; int
0x56B9DA: push    10h; unsigned int
0x56B9DC: push    esi; void *
0x56B9DD: call    $LN21
0x56B9E2: test    bl, 1
0x56B9E5: jz      short loc_56B9F0
0x56B9E7: push    edi
0x56B9E8: call    FormHeapFree
0x56B9ED: add     esp, 4
0x56B9F0: mov     eax, edi
0x56B9F2: pop     edi
0x56B9F3: pop     esi
0x56B9F4: pop     ebx
0x56B9F5: retn    4
0x56B9F8: call    sub_56B820
0x56B9FD: test    bl, 1
0x56BA00: jz      short loc_56BA0B
0x56BA02: push    esi
0x56BA03: call    FormHeapFree
0x56BA08: add     esp, 4
0x56BA0B: mov     eax, esi
0x56BA0D: pop     esi
0x56BA0E: pop     ebx
0x56BA0F: retn    4
