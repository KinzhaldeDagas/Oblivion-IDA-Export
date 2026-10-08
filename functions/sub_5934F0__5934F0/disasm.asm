0x5934F0: sub     esp, 8
0x5934F3: cmp     [esp+8+arg_0], 0Ch
0x5934F8: push    esi; a3
0x5934F9: mov     esi, ecx
0x5934FB: jnz     loc_5935B4
0x593501: push    edi; a3
0x593502: push    1; arg1
0x593504: push    0; canCreate
0x593506: call    InterfaceManager_GetSingleton
0x59350B: add     esp, 8
0x59350E: mov     edi, eax
0x593510: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x593515: fstp    qword ptr [esp+10h+a3]
0x593519: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x59351E: fmul    qword ptr ds:0A2FAA0h
0x593524: fadd    dword ptr [edi+28h]
0x593527: fsubr   qword ptr [esp+10h+a3]
0x59352B: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x593530: fld     dword ptr [esi+8Ch]
0x593536: mov     ecx, [esi+64h]
0x593539: mov     [esp+10h+arg_0], eax
0x59353D: fiadd   [esp+10h+arg_0]
0x593541: fstp    qword ptr [esp+10h+a3]
0x593545: call    sub_588CF0; AchievementsNative evidence: stock tile Y helper starts with tile y and adds ancestor y only when ancestor locus is nonzero; inventory hover passes this row Y to popup path.
0x59354A: fsubr   qword ptr [esp+10h+a3]
0x59354E: mov     ecx, [esi+64h]
0x593551: push    0FB6h
0x593556: fstp    qword ptr [esp+14h+a3]; a3
0x59355A: call    Tile_GetFloat
0x59355F: fdivr   qword ptr [esp+10h+a3]
0x593563: push    ecx
0x593564: mov     ecx, [esi+64h]; this
0x593567: fstp    [esp+14h+arg_0]
0x59356B: fld     dword ptr ds:0A6B1F0h
0x593571: fstp    [esp+14h+a2]; value
0x593574: push    0FB7h; propertyCode
0x593579: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59357E: fld     [esp+10h+arg_0]
0x593582: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x593587: mov     [esp+10h+arg_0], eax
0x59358B: fild    [esp+10h+arg_0]
0x59358F: push    ecx
0x593590: mov     ecx, [esi+64h]; this
0x593593: fstp    [esp+14h+a2]; value
0x593596: push    0FB7h; propertyCode
0x59359B: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5935A0: fldz
0x5935A2: push    ecx
0x5935A3: fstp    [esp+14h+a2]; value
0x5935A6: mov     ecx, [esi+64h]; this
0x5935A9: push    0FB7h; propertyCode
0x5935AE: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5935B3: pop     edi
0x5935B4: pop     esi
0x5935B5: add     esp, 8
0x5935B8: retn    8
