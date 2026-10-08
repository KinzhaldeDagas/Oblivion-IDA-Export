0x59DA30: push    ecx
0x59DA31: push    esi
0x59DA32: push    edi
0x59DA33: push    1; arg1
0x59DA35: push    0; canCreate
0x59DA37: call    InterfaceManager_GetSingleton
0x59DA3C: add     esp, 8
0x59DA3F: mov     esi, eax
0x59DA41: call    UI_GetVirtualScreenWidth; Returns virtual UI width: 1280 for portrait/square, otherwise aspect*960. Layout coordinates are independent of output pixel resolution.
0x59DA46: fmul    qword ptr ds:0A2FAA0h
0x59DA4C: fadd    dword ptr [esi+2Ch]
0x59DA4F: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x59DA54: mov     edi, [esp+0Ch+arg_4]
0x59DA58: mov     ecx, edi
0x59DA5A: mov     [esp+0Ch+var_4], eax
0x59DA5E: call    sub_588C50; AchievementsNative evidence: stock tile X helper starts with tile x and adds ancestor x only when ancestor locus is nonzero; use for inventory focus/popup coordinate mimic.
0x59DA63: fisub   [esp+0Ch+var_4]
0x59DA67: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x59DA6C: fld     dword ptr [esi+34h]
0x59DA6F: mov     [esi+40h], eax
0x59DA72: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x59DA77: mov     ecx, edi
0x59DA79: mov     [esp+0Ch+arg_4], eax
0x59DA7D: call    sub_588CF0; AchievementsNative evidence: stock tile Y helper starts with tile y and adds ancestor y only when ancestor locus is nonzero; inventory hover passes this row Y to popup path.
0x59DA82: fisub   [esp+0Ch+arg_4]
0x59DA86: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x59DA8B: mov     [esi+44h], eax
0x59DA8E: mov     eax, [esp+0Ch+arg_0]
0x59DA92: mov     [esi+4Ch], edi
0x59DA95: pop     edi
0x59DA96: mov     [esi+48h], eax
0x59DA99: pop     esi
0x59DA9A: pop     ecx
0x59DA9B: retn    8
