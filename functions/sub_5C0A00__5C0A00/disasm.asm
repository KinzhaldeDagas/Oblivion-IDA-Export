0x5C0A00: sub     esp, 8
0x5C0A03: cmp     [esp+8+arg_0], 4
0x5C0A08: push    esi; a3
0x5C0A09: mov     esi, ecx
0x5C0A0B: jnz     loc_5C0AB1
0x5C0A11: push    edi; a3
0x5C0A12: push    1; arg1
0x5C0A14: push    0; canCreate
0x5C0A16: call    InterfaceManager_GetSingleton
0x5C0A1B: add     esp, 8
0x5C0A1E: mov     edi, eax
0x5C0A20: call    UI_GetVirtualScreenWidth; Returns virtual UI width: 1280 for portrait/square, otherwise aspect*960. Layout coordinates are independent of output pixel resolution.
0x5C0A25: fmul    qword ptr ds:0A2FAA0h
0x5C0A2B: fadd    dword ptr [edi+20h]
0x5C0A2E: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C0A33: mov     ecx, [esi+30h]
0x5C0A36: mov     [esp+10h+arg_0], eax
0x5C0A3A: fild    [esp+10h+arg_0]
0x5C0A3E: fstp    [esp+10h+arg_0]
0x5C0A42: call    sub_588C50; AchievementsNative evidence: stock tile X helper starts with tile x and adds ancestor x only when ancestor locus is nonzero; use for inventory focus/popup coordinate mimic.
0x5C0A47: fsubr   [esp+10h+arg_0]
0x5C0A4B: mov     ecx, [esi+34h]
0x5C0A4E: push    0FB6h
0x5C0A53: fstp    qword ptr [esp+14h+a3]; a3
0x5C0A57: call    Tile_GetFloat
0x5C0A5C: fdivr   qword ptr [esp+10h+a3]
0x5C0A60: push    ecx
0x5C0A61: mov     ecx, [esi+34h]; this
0x5C0A64: fstp    [esp+14h+arg_0]
0x5C0A68: fld     dword ptr ds:0A6B1F0h
0x5C0A6E: fstp    [esp+14h+a2]; value
0x5C0A71: push    0FB7h; propertyCode
0x5C0A76: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C0A7B: fld     [esp+10h+arg_0]
0x5C0A7F: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C0A84: mov     [esp+10h+arg_0], eax
0x5C0A88: fild    [esp+10h+arg_0]
0x5C0A8C: push    ecx
0x5C0A8D: mov     ecx, [esi+34h]; this
0x5C0A90: fstp    [esp+14h+a2]; value
0x5C0A93: push    0FB7h; propertyCode
0x5C0A98: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C0A9D: fldz
0x5C0A9F: push    ecx
0x5C0AA0: fstp    [esp+14h+a2]; value
0x5C0AA3: mov     ecx, [esi+34h]; this
0x5C0AA6: push    0FB7h; propertyCode
0x5C0AAB: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C0AB0: pop     edi
0x5C0AB1: pop     esi
0x5C0AB2: add     esp, 8
0x5C0AB5: retn    8
