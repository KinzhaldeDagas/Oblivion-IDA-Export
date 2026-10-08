0x51A9B0: mov     eax, [esp+arg_0]; CustomAnimSupport decode: encoded anim key = group_id | (weapon_modifier << 8) | (movement_prefix << 12).
0x51A9B4: shl     eax, 4
0x51A9B7: add     eax, [esp+arg_4]
0x51A9BB: shl     eax, 8
0x51A9BE: add     eax, [esp+arg_8]
0x51A9C2: retn
