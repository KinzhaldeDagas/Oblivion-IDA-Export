0x5D76F0: sub     esp, 8
0x5D76F3: push    esi
0x5D76F4: push    edi
0x5D76F5: push    1; arg1
0x5D76F7: push    0; canCreate
0x5D76F9: mov     esi, ecx
0x5D76FB: call    InterfaceManager_GetSingleton
0x5D7700: add     esp, 8
0x5D7703: mov     edi, eax
0x5D7705: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x5D770A: fstp    [esp+10h+var_8]
0x5D770E: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x5D7713: fmul    qword ptr ds:0A2FAA0h
0x5D7719: fadd    dword ptr [edi+28h]
0x5D771C: fsubr   [esp+10h+var_8]
0x5D7720: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5D7725: mov     ecx, [esi+3Ch]
0x5D7728: mov     dword ptr [esp+10h+var_8], eax
0x5D772C: call    sub_588CF0; AchievementsNative evidence: stock tile Y helper starts with tile y and adds ancestor y only when ancestor locus is nonzero; inventory hover passes this row Y to popup path.
0x5D7731: fisub   dword ptr [esp+10h+var_8]
0x5D7735: fstp    dword ptr [esi+64h]
0x5D7738: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x5D773D: fstp    [esp+10h+var_8]
0x5D7741: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x5D7746: fmul    qword ptr ds:0A2FAA0h
0x5D774C: fadd    dword ptr [edi+28h]
0x5D774F: fsubr   [esp+10h+var_8]
0x5D7753: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5D7758: mov     ecx, [esi+44h]
0x5D775B: mov     dword ptr [esp+10h+var_8], eax
0x5D775F: call    sub_588CF0; AchievementsNative evidence: stock tile Y helper starts with tile y and adds ancestor y only when ancestor locus is nonzero; inventory hover passes this row Y to popup path.
0x5D7764: fisub   dword ptr [esp+10h+var_8]
0x5D7768: pop     edi
0x5D7769: fstp    dword ptr [esi+68h]
0x5D776C: pop     esi
0x5D776D: add     esp, 8
0x5D7770: retn    8
