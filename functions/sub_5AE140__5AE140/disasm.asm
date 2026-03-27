0x5AE140: sub     esp, 8
0x5AE143: push    esi
0x5AE144: push    edi
0x5AE145: push    1; arg1
0x5AE147: push    0; canCreate
0x5AE149: mov     esi, ecx
0x5AE14B: call    InterfaceManager_GetSingleton
0x5AE150: add     esp, 8
0x5AE153: mov     edi, eax
0x5AE155: call    sub_57D7F0
0x5AE15A: fstp    [esp+10h+var_8]
0x5AE15E: call    sub_57D7F0
0x5AE163: fmul    qword ptr ds:0A2FAA0h
0x5AE169: fadd    dword ptr [edi+28h]
0x5AE16C: fsubr   [esp+10h+var_8]
0x5AE170: call    Double_To_SInt32
0x5AE175: mov     ecx, [esi+38h]
0x5AE178: mov     dword ptr [esp+10h+var_8], eax
0x5AE17C: call    sub_588CF0
0x5AE181: fisub   dword ptr [esp+10h+var_8]
0x5AE185: pop     edi
0x5AE186: fstp    dword ptr [esi+50h]
0x5AE189: pop     esi
0x5AE18A: add     esp, 8
0x5AE18D: retn    8
