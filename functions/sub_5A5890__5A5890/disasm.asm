0x5A5890: sub     esp, 8
0x5A5893: cmp     [esp+8+arg_0], 5Bh ; '['
0x5A5898: push    edi
0x5A5899: mov     edi, ecx
0x5A589B: jnz     short loc_5A58F6
0x5A589D: push    esi
0x5A589E: push    1; arg1
0x5A58A0: push    0; canCreate
0x5A58A2: call    InterfaceManager_GetSingleton
0x5A58A7: add     esp, 8
0x5A58AA: mov     esi, eax
0x5A58AC: call    sub_57D7A0
0x5A58B1: fmul    qword ptr ds:0A2FAA0h
0x5A58B7: fadd    dword ptr [esi+20h]
0x5A58BA: call    Double_To_SInt32
0x5A58BF: mov     [esp+10h+arg_0], eax
0x5A58C3: fild    [esp+10h+arg_0]
0x5A58C7: fstp    dword ptr [edi+68h]
0x5A58CA: call    sub_57D7F0
0x5A58CF: fstp    [esp+10h+var_8]
0x5A58D3: call    sub_57D7F0
0x5A58D8: fmul    qword ptr ds:0A2FAA0h
0x5A58DE: fadd    dword ptr [esi+28h]
0x5A58E1: fsubr   [esp+10h+var_8]
0x5A58E5: call    Double_To_SInt32
0x5A58EA: mov     [esp+10h+arg_0], eax
0x5A58EE: fild    [esp+10h+arg_0]
0x5A58F2: pop     esi
0x5A58F3: fstp    dword ptr [edi+6Ch]
0x5A58F6: pop     edi
0x5A58F7: add     esp, 8
0x5A58FA: retn    8
