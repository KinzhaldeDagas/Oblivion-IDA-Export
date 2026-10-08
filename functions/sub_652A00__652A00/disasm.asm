0x652A00: fld     dword ptr ds:0A71E4Ch
0x652A06: mov     eax, [esp+arg_0]
0x652A0A: push    1
0x652A0C: push    ecx
0x652A0D: fstp    [esp+8+var_8]
0x652A10: push    eax
0x652A11: call    sub_64EC50; 3DTheft decode 2026-05-16: Follow procedure execution reads its target ref from procedure state +0x2C/+0xB and drives movement toward that target's cell/worldspace; no plugin-owned actor/package memory is dereferenced at the later 0x0040DECF crash site.
0x652A16: retn    4
