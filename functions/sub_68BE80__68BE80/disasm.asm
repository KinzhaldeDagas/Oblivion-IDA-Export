0x68BE80: push    esi
0x68BE81: mov     esi, [esp+4+arg_0]
0x68BE85: test    esi, esi
0x68BE87: push    edi
0x68BE88: mov     edi, ecx
0x68BE8A: jz      short loc_68BECA
0x68BE8C: push    ebx
0x68BE8D: mov     ebx, [esp+0Ch+arg_4]
0x68BE91: test    ebx, ebx
0x68BE93: jz      short loc_68BEA4
0x68BE95: mov     ecx, esi
0x68BE97: call    NiDX92DBufferData__GetSurfaceData
0x68BE9C: push    eax
0x68BE9D: mov     ecx, ebx
0x68BE9F: call    sub_6A2FD0
0x68BEA4: cmp     esi, [edi]
0x68BEA6: jnz     short loc_68BEB1
0x68BEA8: mov     ecx, esi
0x68BEAA: call    NiDX92DBufferData__GetSurfaceData
0x68BEAF: mov     [edi], eax
0x68BEB1: cmp     esi, [edi+4]
0x68BEB4: jnz     short loc_68BEB9
0x68BEB6: mov     [edi+4], ebx
0x68BEB9: mov     ecx, esi; this
0x68BEBB: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x68BEC0: push    esi
0x68BEC1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x68BEC6: add     esp, 4
0x68BEC9: pop     ebx
0x68BECA: pop     edi
0x68BECB: pop     esi
0x68BECC: retn    8
