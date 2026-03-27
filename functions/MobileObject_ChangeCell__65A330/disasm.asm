0x65A330: push    ebx
0x65A331: push    edi
0x65A332: mov     edi, ecx
0x65A334: call    TESObjectREFR_GetParentCell
0x65A339: mov     ebx, [esp+8+a2]
0x65A33D: cmp     ebx, eax
0x65A33F: jz      short loc_65A36F
0x65A341: test    ebx, ebx
0x65A343: jz      short loc_65A367
0x65A345: push    esi
0x65A346: mov     ecx, edi; this
0x65A348: call    MobileObject_GetCharProxy
0x65A34D: mov     esi, eax
0x65A34F: test    esi, esi
0x65A351: jz      short loc_65A366
0x65A353: mov     ecx, ebx
0x65A355: call    TESObjectCELL_GetWaterHeight
0x65A35A: fmul    qword ptr ds:0A39088h
0x65A360: fstp    dword ptr [esi+318h]
0x65A366: pop     esi
0x65A367: push    ebx; a2
0x65A368: mov     ecx, edi; this
0x65A36A: call    TESObjectREFR_ChangeCell
0x65A36F: pop     edi
0x65A370: pop     ebx
0x65A371: retn    4
