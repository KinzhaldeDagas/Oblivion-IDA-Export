0x5020E5: mov     ecx, esi; this
0x5020E7: call    TESObjectREFR_GetParentCell
0x5020EC: mov     ecx, [esp+arg_10]; this
0x5020F0: mov     esi, eax
0x5020F2: call    TESObjectREFR_GetParentCell
0x5020F7: test    esi, esi
0x5020F9: mov     edi, eax
0x5020FB: jz      short Cmd_Cast___Done_
0x5020FD: test    edi, edi
0x5020FF: jz      short Cmd_Cast___Done_
0x502101: mov     ecx, ds:0B333A0h
0x502107: push    1; a2
0x502109: push    esi; a1
0x50210A: call    TESObjectCELL_IsProcessLevel?LowHigh
0x50210F: test    al, al
0x502111: jz      short Cmd_Cast___Done_
0x502113: mov     ecx, ds:0B333A0h
0x502119: push    0; a2
0x50211B: push    edi; a1
0x50211C: call    TESObjectCELL_IsProcessLevel?LowHigh
0x502121: test    al, al
0x502123: jz      short Cmd_Cast___Done_
0x502125: mov     eax, [esp+arg_C]
0x502129: push    0
0x50212B: push    ebp
0x50212C: push    eax
0x50212D: mov     ecx, ebx
0x50212F: call    MagicCaster_CastMagicItem
