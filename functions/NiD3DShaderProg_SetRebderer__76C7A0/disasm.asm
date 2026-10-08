0x76C7A0: mov     eax, [esp+a2]
0x76C7A4: push    esi
0x76C7A5: mov     esi, ecx
0x76C7A7: cmp     byte ptr [esi+1Ch], 1
0x76C7AB: jnz     short loc_76C7B2
0x76C7AD: cmp     eax, [esi+14h]
0x76C7B0: jz      short loc_76C7C7
0x76C7B2: push    eax; a2
0x76C7B3: call    NiD3DShader__SetRenderer
0x76C7B8: test    al, al
0x76C7BA: jnz     short loc_76C7C0
0x76C7BC: pop     esi
0x76C7BD: retn    4
0x76C7C0: mov     ecx, esi; this
0x76C7C2: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x76C7C7: mov     al, 1
0x76C7C9: pop     esi
0x76C7CA: retn    4
