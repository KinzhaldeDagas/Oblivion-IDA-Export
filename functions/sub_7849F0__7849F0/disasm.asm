0x7849F0: push    esi; Oblivion 1.2.0.416: destroys [first,last) in 0x18-byte steps through the folded trivial record destructor.
0x7849F1: mov     esi, [esp+4+first]
0x7849F5: push    edi
0x7849F6: mov     edi, [esp+8+last]
0x7849FA: cmp     esi, edi
0x7849FC: jz      short loc_784A0E
0x7849FE: mov     edi, edi
0x784A00: mov     ecx, esi; this
0x784A02: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x784A07: add     esi, 18h
0x784A0A: cmp     esi, edi
0x784A0C: jnz     short loc_784A00
0x784A0E: pop     edi
0x784A0F: pop     esi
0x784A10: retn    8
