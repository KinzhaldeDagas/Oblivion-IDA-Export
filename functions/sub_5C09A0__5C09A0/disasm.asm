0x5C09A0: sub     esp, 8
0x5C09A3: push    esi
0x5C09A4: push    edi
0x5C09A5: push    1; arg1
0x5C09A7: push    0; canCreate
0x5C09A9: mov     esi, ecx
0x5C09AB: call    InterfaceManager_GetSingleton
0x5C09B0: add     esp, 8
0x5C09B3: cmp     [esp+10h+arg_0], 4
0x5C09B8: mov     edi, eax
0x5C09BA: jnz     short loc_5C09EA
0x5C09BC: call    sub_57D7A0
0x5C09C1: fmul    qword ptr ds:0A2FAA0h
0x5C09C7: fadd    dword ptr [edi+20h]
0x5C09CA: call    Double_To_SInt32
0x5C09CF: mov     ecx, [esi+34h]
0x5C09D2: mov     [esp+10h+arg_0], eax
0x5C09D6: fild    [esp+10h+arg_0]
0x5C09DA: fstp    [esp+10h+var_8]
0x5C09DE: call    sub_588C50
0x5C09E3: fsubr   [esp+10h+var_8]
0x5C09E7: fstp    dword ptr [esi+54h]
0x5C09EA: pop     edi
0x5C09EB: pop     esi
0x5C09EC: add     esp, 8
0x5C09EF: retn    8
