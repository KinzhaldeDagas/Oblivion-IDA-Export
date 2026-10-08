0x5A47B0: mov     eax, ds:0B3B33Ch
0x5A47B5: test    eax, eax
0x5A47B7: jz      short loc_5A47CA
0x5A47B9: mov     ecx, [eax+50h]
0x5A47BC: test    ecx, ecx
0x5A47BE: jz      short loc_5A47CA
0x5A47C0: call    sub_588CF0; AchievementsNative evidence: stock tile Y helper starts with tile y and adds ancestor y only when ancestor locus is nonzero; inventory hover passes this row Y to popup path.
0x5A47C5: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5A47CA: push    1; arg1
0x5A47CC: push    0; canCreate
0x5A47CE: call    InterfaceManager_GetSingleton
0x5A47D3: add     esp, 8
0x5A47D6: call    UI_GetVirtualScreenHeight; Returns virtual UI height: 960 for landscape/square, otherwise (height/width)*1280.
0x5A47DB: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
