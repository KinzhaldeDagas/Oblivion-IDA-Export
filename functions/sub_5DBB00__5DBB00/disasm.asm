0x5DBB00: push    ecx; a3
0x5DBB01: push    esi
0x5DBB02: mov     esi, ecx
0x5DBB04: mov     ecx, ds:0B333C4h; this
0x5DBB0A: call    TESObjectREFR_GetName
0x5DBB0F: mov     ecx, [esi+28h]
0x5DBB12: push    eax
0x5DBB13: push    0FAFh
0x5DBB18: call    Tile_SetString
0x5DBB1D: mov     ecx, ds:0B333C4h
0x5DBB23: call    sub_5EA720
0x5DBB28: mov     ecx, [esi+28h]
0x5DBB2B: push    eax
0x5DBB2C: push    0FB0h
0x5DBB31: call    Tile_SetString
0x5DBB36: mov     ecx, ds:0B333C4h
0x5DBB3C: mov     eax, [ecx]
0x5DBB3E: mov     edx, [eax+268h]
0x5DBB44: call    edx
0x5DBB46: test    eax, eax
0x5DBB48: jz      short loc_5DBB6C
0x5DBB4A: mov     ecx, ds:0B333C4h
0x5DBB50: mov     eax, [ecx]
0x5DBB52: mov     edx, [eax+268h]
0x5DBB58: call    edx
0x5DBB5A: add     eax, 18h
0x5DBB5D: mov     eax, [eax+4]
0x5DBB60: test    eax, eax
0x5DBB62: jnz     short loc_5DBB69
0x5DBB64: mov     eax, offset EmptyString
0x5DBB69: push    eax
0x5DBB6A: jmp     short loc_5DBB71
0x5DBB6C: push    offset asc_A3A0E4; "-"
0x5DBB71: mov     ecx, [esi+28h]
0x5DBB74: push    0FB1h
0x5DBB79: call    Tile_SetString
0x5DBB7E: mov     ecx, ds:0B333C4h
0x5DBB84: call    sub_5EA6B0
0x5DBB89: mov     ecx, [esi+28h]
0x5DBB8C: push    eax
0x5DBB8D: push    0FB2h
0x5DBB92: call    Tile_SetString
0x5DBB97: mov     ecx, ds:0B333C4h
0x5DBB9D: call    Actor_GetLevel
0x5DBBA2: movzx   eax, ax
0x5DBBA5: mov     [esp+4], eax
0x5DBBA9: push    ecx
0x5DBBAA: mov     ecx, [esi+28h]; this
0x5DBBAD: fild    dword ptr [esp+8]
0x5DBBB1: fstp    [esp+8+a2]; a3
0x5DBBB4: push    0FB3h; a2
0x5DBBB9: call    Tile_SetFloat
0x5DBBBE: pop     esi
0x5DBBBF: pop     ecx
0x5DBBC0: retn
