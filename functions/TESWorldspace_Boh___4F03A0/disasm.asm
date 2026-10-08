0x4F03A0: push    esi
0x4F03A1: mov     esi, [esp+4+arg_0]
0x4F03A5: test    esi, esi
0x4F03A7: jz      short loc_4F03C0
0x4F03A9: mov     eax, [esi+8]
0x4F03AC: shr     eax, 0Eh
0x4F03AF: test    al, 1
0x4F03B1: jnz     short loc_4F03C0
0x4F03B3: call    sub_4EF1F0
0x4F03B8: push    esi; reference
0x4F03B9: mov     ecx, eax; this
0x4F03BB: call    TESObjectCELL_AddReference; Verified: persistent-cell AddReference updates the WorldSpace coordinate/fallback persistent-reference index (+0x64) through TESWorldSpace_IndexReference. Ordinary cell additions do not index there. This routine does not populate the separate SubSpace spatial index at +0x60.
0x4F03C0: pop     esi
0x4F03C1: retn    4
