0x4DBF00: push    esi
0x4DBF01: mov     esi, [esp+4+arg_0]
0x4DBF05: test    esi, esi
0x4DBF07: push    edi
0x4DBF08: mov     edi, ecx
0x4DBF0A: jz      short loc_4DBF17
0x4DBF0C: mov     ecx, esi; this
0x4DBF0E: call    TESObjectREFR_IsPersistent?
0x4DBF13: test    al, al
0x4DBF15: jz      short loc_4DBF20
0x4DBF17: push    esi
0x4DBF18: lea     ecx, [edi+44h]
0x4DBF1B: call    sub_4205C0
0x4DBF20: pop     edi
0x4DBF21: pop     esi
0x4DBF22: retn    4
