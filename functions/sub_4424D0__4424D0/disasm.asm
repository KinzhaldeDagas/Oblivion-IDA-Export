0x4424D0: sub     esp, 8
0x4424D3: push    esi
0x4424D4: push    edi
0x4424D5: mov     esi, ecx
0x4424D7: mov     edi, [esi+34h]
0x4424DA: sub     esp, 8
0x4424DD: test    edi, edi
0x4424DF: jz      short loc_4424F7
0x4424E1: fldz
0x4424E3: fst     [esp+18h+var_14]; float
0x4424E7: fstp    [esp+18h+a2]; float
0x4424EA: call    sub_6FACA0
0x4424EF: fldz
0x4424F1: fst     [esp+18h+var_14]
0x4424F5: jmp     short loc_44252E
0x4424F7: mov     eax, [esi+5Ch]
0x4424FA: fld     dword ptr [eax+0C0h]
0x442500: fstp    [esp+18h+var_4]
0x442504: fld     dword ptr [eax+0C4h]
0x44250A: fstp    [esp+18h+var_8]
0x44250E: fld     [esp+18h+var_8]
0x442512: fstp    [esp+18h+var_14]; float
0x442516: fld     [esp+18h+var_4]
0x44251A: fstp    [esp+18h+a2]; float
0x44251D: call    sub_6FACA0
0x442522: fld     [esp+18h+var_8]
0x442526: fstp    [esp+18h+var_14]; float
0x44252A: fld     [esp+18h+var_4]
0x44252E: fstp    [esp+18h+a2]; float
0x442531: call    sub_8984A0
0x442536: fld     dword ptr ds:0B33A30h
0x44253C: add     esp, 8
0x44253F: test    edi, edi
0x442541: fadd    [esp+10h+arg_0]
0x442545: push    ecx
0x442546: fstp    dword ptr ds:0B33A30h
0x44254C: fld     dword ptr ds:0B33A30h
0x442552: fstp    [esp+14h+var_14]; float
0x442555: jz      short loc_442560
0x442557: mov     ecx, edi
0x442559: call    sub_4D4970
0x44255E: jmp     short loc_442568
0x442560: mov     ecx, [esi+8]
0x442563: call    sub_4823D0
0x442568: mov     ecx, ds:0B333A0h
0x44256E: cmp     dword ptr [ecx+58h], 0
0x442572: jnz     short loc_442579
0x442574: call    sub_43F560
0x442579: call    InterfaceManager__IsOpenedMenuDialogue
0x44257E: test    al, al
0x442580: jz      short loc_442590
0x442582: fld     dword ptr ds:0B06530h
0x442588: fmul    dword ptr ds:0B33E9Ch
0x44258E: jmp     short loc_442594
0x442590: fld     [esp+10h+arg_0]
0x442594: fstp    [esp+10h+arg_0]
0x442598: push    ecx
0x442599: fld     [esp+14h+arg_0]
0x44259D: mov     ecx, [esi+5Ch]
0x4425A0: fstp    [esp+14h+var_14]; float
0x4425A3: call    sub_542F20
0x4425A8: fld     dword ptr ds:0B33A30h
0x4425AE: push    1; a3
0x4425B0: push    ecx
0x4425B1: mov     ecx, [esi+14h]; this
0x4425B4: fstp    [esp+18h+a2]; a2
0x4425B7: call    NiAVObject_UpdateNiAVObject
0x4425BC: mov     ecx, offset ActorProcessManager_ptr
0x4425C1: call    sub_676E40
0x4425C6: pop     edi
0x4425C7: pop     esi
0x4425C8: add     esp, 8
0x4425CB: retn    4
