0x57F9F0: push    ebx; a3
0x57F9F1: push    ebp; a3
0x57F9F2: push    esi; a3
0x57F9F3: push    edi; a3
0x57F9F4: mov     edi, [esp+10h+a3]
0x57F9F8: xor     ebp, ebp
0x57F9FA: cmp     edi, ebp
0x57F9FC: mov     esi, ecx
0x57F9FE: jz      short loc_57FA79
0x57FA00: push    0FF6h
0x57FA05: mov     ecx, edi
0x57FA07: call    Tile_GetFloat
0x57FA0C: fcomp   qword ptr ds:0A69070h
0x57FA12: fnstsw  ax
0x57FA14: test    ah, 44h
0x57FA17: jp      short loc_57FA79
0x57FA19: mov     ecx, [edi+10h]
0x57FA1C: lea     eax, [esp+10h+a3]
0x57FA20: push    eax
0x57FA21: push    0FF5h
0x57FA26: mov     [esp+18h+a3], ebp; a3
0x57FA2A: call    sub_58E3B0
0x57FA2F: mov     ebx, eax
0x57FA31: cmp     ebx, ebp
0x57FA33: jz      short loc_57FA79
0x57FA35: fld     dword ptr ds:0A6906Ch
0x57FA3B: push    ecx
0x57FA3C: fstp    [esp+14h+a2]; a3
0x57FA3F: push    0FB3h; a2
0x57FA44: mov     ecx, ebx; this
0x57FA46: call    Tile_SetFloat
0x57FA4B: push    0FF5h
0x57FA50: mov     ecx, edi
0x57FA52: call    Tile_GetFloat
0x57FA57: push    ecx
0x57FA58: fstp    [esp+14h+a2]; a3
0x57FA5B: push    0FB3h; a2
0x57FA60: mov     ecx, ebx; this
0x57FA62: call    Tile_SetFloat
0x57FA67: fldz
0x57FA69: push    ecx
0x57FA6A: fstp    [esp+14h+a2]; a3
0x57FA6D: push    0FB3h; a2
0x57FA72: mov     ecx, ebx; this
0x57FA74: call    Tile_SetFloat
0x57FA79: mov     ecx, [esi+88h]
0x57FA7F: cmp     ecx, ebp
0x57FA81: jz      short loc_57FACF
0x57FA83: cmp     ecx, edi
0x57FA85: jz      short loc_57FACF
0x57FA87: push    0FF0h
0x57FA8C: call    Tile_GetFloat
0x57FA91: fcomp   dword ptr ds:0A2FAA8h
0x57FA97: fnstsw  ax
0x57FA99: test    ah, 41h
0x57FA9C: jnz     short loc_57FACF
0x57FA9E: add     dword ptr [esi+8Ch], 1
0x57FAA5: fild    dword ptr [esi+8Ch]
0x57FAAB: mov     ecx, [esi+8Ch]
0x57FAB1: test    ecx, ecx
0x57FAB3: jge     short loc_57FABB
0x57FAB5: fadd    dword ptr ds:0A2FC78h
0x57FABB: push    ecx
0x57FABC: mov     ecx, [esi+88h]; this
0x57FAC2: fstp    [esp+14h+a2]; a3
0x57FAC5: push    0FF0h; a2
0x57FACA: call    Tile_SetFloat
0x57FACF: cmp     edi, ebp
0x57FAD1: jz      loc_57FC13
0x57FAD7: mov     ecx, [esi+98h]; this
0x57FADD: cmp     ecx, ebp
0x57FADF: jz      short loc_57FB23
0x57FAE1: fldz
0x57FAE3: push    ecx
0x57FAE4: fstp    [esp+14h+a2]; a3
0x57FAE7: push    0FDDh; a2
0x57FAEC: call    Tile_SetFloat
0x57FAF1: mov     ecx, [esi+98h]
0x57FAF7: call    Tile_GetParentMenu
0x57FAFC: mov     ecx, [esi+98h]
0x57FB02: mov     ebp, eax
0x57FB04: mov     ebx, [ebp+0]
0x57FB07: push    ecx; a3
0x57FB08: push    0FA8h
0x57FB0D: add     ebx, 14h
0x57FB10: call    Tile_GetFloat
0x57FB15: call    Double_To_SInt32
0x57FB1A: mov     edx, [ebx]
0x57FB1C: push    eax; a3
0x57FB1D: mov     ecx, ebp
0x57FB1F: call    edx
0x57FB21: xor     ebp, ebp
0x57FB23: mov     eax, [esp+10h+arg_4]
0x57FB27: cmp     eax, 0FDDh
0x57FB2C: mov     [esi+98h], ebp
0x57FB32: mov     [esi+9Ch], ebp
0x57FB38: jnz     loc_57FC27
0x57FB3E: mov     ecx, [esi+88h]; this
0x57FB44: cmp     ecx, edi
0x57FB46: jz      loc_57FD57
0x57FB4C: cmp     ecx, ebp
0x57FB4E: jz      short loc_57FB8C
0x57FB50: fldz
0x57FB52: push    ecx
0x57FB53: fstp    [esp+14h+a2]; a3
0x57FB56: push    eax; a2
0x57FB57: call    Tile_SetFloat
0x57FB5C: mov     ecx, [esi+88h]
0x57FB62: call    Tile_GetParentMenu
0x57FB67: mov     ecx, [esi+88h]
0x57FB6D: mov     ebp, eax
0x57FB6F: mov     ebx, [ebp+0]
0x57FB72: push    ecx
0x57FB73: push    0FA8h
0x57FB78: add     ebx, 14h
0x57FB7B: call    Tile_GetFloat
0x57FB80: call    Double_To_SInt32
0x57FB85: mov     edx, [ebx]
0x57FB87: push    eax; a3
0x57FB88: mov     ecx, ebp
0x57FB8A: call    edx
0x57FB8C: push    0FF0h
0x57FB91: mov     ecx, edi
0x57FB93: mov     [esi+88h], edi
0x57FB99: call    Tile_GetFloat
0x57FB9E: fcomp   dword ptr ds:0A2FAA8h
0x57FBA4: fnstsw  ax
0x57FBA6: test    ah, 41h
0x57FBA9: jnz     short loc_57FBC9
0x57FBAB: add     dword ptr [esi+8Ch], 1
0x57FBB2: mov     eax, [esi+8Ch]
0x57FBB8: mov     ecx, [esi+88h]
0x57FBBE: push    eax
0x57FBBF: push    0FF0h
0x57FBC4: call    sub_57D300
0x57FBC9: fld1
0x57FBCB: push    ecx
0x57FBCC: fstp    [esp+14h+a2]; a3
0x57FBCF: mov     ecx, edi; this
0x57FBD1: push    0FDDh; a2
0x57FBD6: call    Tile_SetFloat
0x57FBDB: mov     ecx, [esi+88h]
0x57FBE1: call    Tile_GetParentMenu
0x57FBE6: mov     esi, [esi+88h]
0x57FBEC: mov     ebx, eax
0x57FBEE: mov     edi, [ebx]
0x57FBF0: push    esi
0x57FBF1: push    0FA8h
0x57FBF6: mov     ecx, esi
0x57FBF8: add     edi, 10h
0x57FBFB: call    Tile_GetFloat
0x57FC00: call    Double_To_SInt32
0x57FC05: push    eax
0x57FC06: mov     eax, [edi]
0x57FC08: mov     ecx, ebx
0x57FC0A: call    eax
0x57FC0C: pop     edi
0x57FC0D: pop     esi
0x57FC0E: pop     ebp
0x57FC0F: pop     ebx
0x57FC10: retn    0Ch
0x57FC13: mov     ecx, [esi+88h]
0x57FC19: cmp     ecx, ebp
0x57FC1B: jz      loc_57FD45
0x57FC21: push    ecx
0x57FC22: jmp     loc_57FD07
0x57FC27: cmp     eax, 0FE1h
0x57FC2C: jnz     loc_57FD57
0x57FC32: push    0FE5h
0x57FC37: mov     ecx, edi
0x57FC39: call    Tile_GetFloat
0x57FC3E: call    Double_To_SInt32
0x57FC43: cmp     eax, ebp
0x57FC45: jz      short loc_57FC50
0x57FC47: push    eax; int
0x57FC48: call    sub_57DE50
0x57FC4D: add     esp, 4
0x57FC50: push    0FE2h
0x57FC55: mov     ecx, edi
0x57FC57: call    Tile_GetFloat
0x57FC5C: fadd    qword ptr ds:0A2F928h
0x57FC62: push    ecx
0x57FC63: mov     ecx, edi; this
0x57FC65: fstp    [esp+14h+a3]
0x57FC69: fld     [esp+14h+a3]
0x57FC6D: fstp    [esp+14h+a2]; a3
0x57FC70: push    0FE3h; a2
0x57FC75: call    Tile_SetFloat
0x57FC7A: fld1
0x57FC7C: push    ecx
0x57FC7D: fstp    [esp+14h+a2]; a3
0x57FC80: push    0FE1h; a2
0x57FC85: mov     ecx, edi; this
0x57FC87: call    Tile_SetFloat
0x57FC8C: fldz
0x57FC8E: push    ecx
0x57FC8F: fstp    [esp+14h+a2]; a3
0x57FC92: push    0FE1h; a2
0x57FC97: mov     ecx, edi; this
0x57FC99: call    Tile_SetFloat
0x57FC9E: mov     ecx, edi
0x57FCA0: call    Tile_GetParentMenu
0x57FCA5: mov     ebp, eax
0x57FCA7: mov     ebx, [ebp+0]
0x57FCAA: push    edi
0x57FCAB: push    0FA8h
0x57FCB0: mov     ecx, edi
0x57FCB2: add     ebx, 0Ch
0x57FCB5: call    Tile_GetFloat
0x57FCBA: call    Double_To_SInt32
0x57FCBF: mov     edx, [ebx]
0x57FCC1: push    eax; a3
0x57FCC2: mov     ecx, ebp
0x57FCC4: call    edx
0x57FCC6: xor     ebp, ebp
0x57FCC8: push    ebp; float
0x57FCC9: mov     ecx, edi
0x57FCCB: call    sub_58FBA0
0x57FCD0: mov     ecx, [esi+88h]
0x57FCD6: cmp     ecx, ebp
0x57FCD8: jz      short loc_57FD57
0x57FCDA: call    sub_5893B0
0x57FCDF: test    al, al
0x57FCE1: jz      short loc_57FD00
0x57FCE3: mov     ecx, [esi+88h]
0x57FCE9: push    0FC9h
0x57FCEE: call    Tile_GetFloat
0x57FCF3: fcomp   dword ptr ds:0A379B4h
0x57FCF9: fnstsw  ax
0x57FCFB: test    ah, 44h
0x57FCFE: jnp     short loc_57FD57
0x57FD00: push    ecx
0x57FD01: mov     ecx, [esi+88h]; this
0x57FD07: fldz
0x57FD09: fstp    [esp+14h+a2]; a3
0x57FD0C: push    0FDDh; a2
0x57FD11: call    Tile_SetFloat
0x57FD16: mov     ecx, [esi+88h]
0x57FD1C: call    Tile_GetParentMenu
0x57FD21: mov     ecx, [esi+88h]
0x57FD27: mov     ebx, eax
0x57FD29: mov     edi, [ebx]
0x57FD2B: push    ecx
0x57FD2C: push    0FA8h
0x57FD31: add     edi, 14h
0x57FD34: call    Tile_GetFloat
0x57FD39: call    Double_To_SInt32
0x57FD3E: push    eax
0x57FD3F: mov     eax, [edi]
0x57FD41: mov     ecx, ebx
0x57FD43: call    eax
0x57FD45: mov     [esi+88h], ebp
0x57FD4B: mov     [esi+9Ch], ebp
0x57FD51: mov     [esi+98h], ebp
0x57FD57: pop     edi
0x57FD58: pop     esi
0x57FD59: pop     ebp
0x57FD5A: pop     ebx
0x57FD5B: retn    0Ch
