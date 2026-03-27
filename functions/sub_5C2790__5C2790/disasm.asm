0x5C2790: sub     esp, 8
0x5C2793: push    ebx
0x5C2794: push    esi
0x5C2795: push    edi
0x5C2796: push    1; arg1
0x5C2798: push    0; canCreate
0x5C279A: mov     esi, ecx
0x5C279C: call    InterfaceManager_GetSingleton
0x5C27A1: mov     ebx, [esp+1Ch+arg_0]
0x5C27A5: add     esp, 8
0x5C27A8: cmp     dword ptr [esi+ebx*4+94h], 0
0x5C27B0: mov     edi, eax
0x5C27B2: jz      short loc_5C27F6
0x5C27B4: push    ebp
0x5C27B5: call    sub_57D7A0
0x5C27BA: fmul    qword ptr ds:0A2FAA0h
0x5C27C0: fadd    dword ptr [edi+20h]
0x5C27C3: call    Double_To_SInt32
0x5C27C8: mov     ebp, [esp+18h+arg_4]
0x5C27CC: mov     ecx, ebp
0x5C27CE: mov     [esp+18h+arg_0], eax
0x5C27D2: call    sub_588C50
0x5C27D7: fisub   [esp+18h+arg_0]
0x5C27DB: push    0FCBh
0x5C27E0: mov     ecx, ebp
0x5C27E2: fstp    [esp+1Ch+var_8]
0x5C27E6: call    Tile_GetFloat
0x5C27EB: fsubr   [esp+18h+var_8]
0x5C27EF: pop     ebp
0x5C27F0: fstp    dword ptr [esi+898h]
0x5C27F6: call    sub_57D7F0
0x5C27FB: fstp    [esp+14h+var_8]
0x5C27FF: call    sub_57D7F0
0x5C2804: fmul    qword ptr ds:0A2FAA0h
0x5C280A: fadd    dword ptr [edi+28h]
0x5C280D: fsubr   [esp+14h+var_8]
0x5C2811: call    Double_To_SInt32
0x5C2816: mov     ecx, [esi+34h]
0x5C2819: mov     [esp+14h+arg_0], eax
0x5C281D: call    sub_588CF0
0x5C2822: fisub   [esp+14h+arg_0]
0x5C2826: cmp     ebx, 2
0x5C2829: fstp    dword ptr [esi+89Ch]
0x5C282F: jnz     short loc_5C2865
0x5C2831: mov     eax, [edi+118h]
0x5C2837: shr     eax, 2
0x5C283A: test    al, 1
0x5C283C: jnz     short loc_5C2865
0x5C283E: call    sub_57D7A0
0x5C2843: fmul    qword ptr ds:0A2FAA0h
0x5C2849: fadd    dword ptr [edi+20h]
0x5C284C: call    Double_To_SInt32
0x5C2851: mov     [esp+14h+arg_0], eax
0x5C2855: fild    [esp+14h+arg_0]
0x5C2859: fsub    dword ptr [esi+8A0h]
0x5C285F: fstp    dword ptr [esi+898h]
0x5C2865: pop     edi
0x5C2866: pop     esi
0x5C2867: pop     ebx
0x5C2868: add     esp, 8
0x5C286B: retn    8
