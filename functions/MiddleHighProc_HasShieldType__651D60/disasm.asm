0x651D60: push    edi
0x651D61: mov     edi, ecx
0x651D63: cmp     byte ptr [edi+161h], 0
0x651D6A: jz      short MiddleHighProc_HasShieldType___Done
0x651D6C: push    esi
0x651D6D: mov     esi, [esp+8+arg_0]
0x651D71: test    esi, esi
0x651D73: mov     dword ptr [edi+164h], 0
0x651D7D: jz      short loc_651DAF
0x651D7F: nop
