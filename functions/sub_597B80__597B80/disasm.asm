0x597B80: sub     esp, 8
0x597B83: push    esi
0x597B84: push    edi
0x597B85: push    1; arg1
0x597B87: push    0; canCreate
0x597B89: mov     esi, ecx
0x597B8B: call    InterfaceManager_GetSingleton
0x597B90: add     esp, 8
0x597B93: mov     edi, eax
0x597B95: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x597B9A: fstp    [esp+10h+var_8]
0x597B9E: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x597BA3: fmul    qword ptr ds:0A2FAA0h
0x597BA9: fadd    dword ptr [edi+28h]
0x597BAC: fsubr   [esp+10h+var_8]
0x597BB0: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x597BB5: mov     ecx, [esi+2Ch]
0x597BB8: mov     dword ptr [esp+10h+var_8], eax
0x597BBC: call    sub_588CF0; AchievementsNative evidence: stock tile Y helper starts with tile y and adds ancestor y only when ancestor locus is nonzero; inventory hover passes this row Y to popup path.
0x597BC1: fisub   dword ptr [esp+10h+var_8]
0x597BC5: pop     edi
0x597BC6: fstp    dword ptr [esi+50h]
0x597BC9: pop     esi
0x597BCA: add     esp, 8
0x597BCD: retn    8
