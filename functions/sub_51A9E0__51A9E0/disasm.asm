0x51A9E0: mov     eax, [esp+arg_0]; CustomAnimSupport decode: extracts weapon prefix from encoded anim key ((key >> 8) & 0xF).
0x51A9E4: shr     eax, 8
0x51A9E7: and     eax, 0Fh
0x51A9EA: retn
