0x5AE140: sub     esp, 8
0x5AE143: push    esi
0x5AE144: push    edi
0x5AE145: push    1; arg1
0x5AE147: push    0; canCreate
0x5AE149: mov     esi, ecx
0x5AE14B: call    InterfaceManager_GetSingleton
0x5AE150: add     esp, 8
0x5AE153: mov     edi, eax
0x5AE155: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x5AE15A: fstp    [esp+10h+var_8]
0x5AE15E: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x5AE163: fmul    qword ptr ds:0A2FAA0h
0x5AE169: fadd    dword ptr [edi+28h]
0x5AE16C: fsubr   [esp+10h+var_8]
0x5AE170: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5AE175: mov     ecx, [esi+38h]
0x5AE178: mov     dword ptr [esp+10h+var_8], eax
0x5AE17C: call    sub_588CF0; AchievementsNative evidence: stock tile Y helper starts with tile y and adds ancestor y only when ancestor locus is nonzero; inventory hover passes this row Y to popup path.
0x5AE181: fisub   dword ptr [esp+10h+var_8]
0x5AE185: pop     edi
0x5AE186: fstp    dword ptr [esi+50h]
0x5AE189: pop     esi
0x5AE18A: add     esp, 8
0x5AE18D: retn    8
