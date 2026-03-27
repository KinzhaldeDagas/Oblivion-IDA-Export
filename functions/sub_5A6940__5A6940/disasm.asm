0x5A6940: sub     esp, 8
0x5A6943: cmp     [esp+8+arg_0], 5Bh ; '['
0x5A6948: push    edi
0x5A6949: mov     edi, ecx
0x5A694B: jnz     loc_5A6A0F
0x5A6951: push    esi
0x5A6952: push    1; arg1
0x5A6954: push    0; canCreate
0x5A6956: call    InterfaceManager_GetSingleton
0x5A695B: mov     esi, eax
0x5A695D: call    sub_57D7F0
0x5A6962: fstp    [esp+18h+var_8]
0x5A6966: call    sub_57D7F0
0x5A696B: fmul    qword ptr ds:0A2FAA0h
0x5A6971: fadd    dword ptr [esi+28h]
0x5A6974: fsubr   [esp+18h+var_8]
0x5A6978: call    Double_To_SInt32
0x5A697D: mov     [esp+18h+arg_0], eax
0x5A6981: call    sub_57D7A0
0x5A6986: fmul    qword ptr ds:0A2FAA0h
0x5A698C: fadd    dword ptr [esi+20h]
0x5A698F: call    Double_To_SInt32
0x5A6994: fld     dword ptr [edi+6Ch]
0x5A6997: fisub   [esp+18h+arg_0]
0x5A699B: mov     dword ptr [esp+18h+var_8], eax
0x5A699F: fstp    [esp+18h+arg_0]
0x5A69A3: fld     [esp+18h+arg_0]
0x5A69A7: fstp    [esp+18h+var_14]; float
0x5A69AB: fild    dword ptr [esp+18h+var_8]
0x5A69AF: fsub    dword ptr [edi+68h]
0x5A69B2: fstp    [esp+18h+arg_0]
0x5A69B6: fld     [esp+18h+arg_0]
0x5A69BA: fstp    [esp+18h+var_18]; float
0x5A69BD: call    sub_5A5900
0x5A69C2: add     esp, 8
0x5A69C5: call    sub_57D7A0
0x5A69CA: fmul    qword ptr ds:0A2FAA0h
0x5A69D0: fadd    dword ptr [esi+20h]
0x5A69D3: call    Double_To_SInt32
0x5A69D8: mov     [esp+10h+arg_0], eax
0x5A69DC: fild    [esp+10h+arg_0]
0x5A69E0: fstp    dword ptr [edi+68h]
0x5A69E3: call    sub_57D7F0
0x5A69E8: fstp    [esp+10h+var_8]
0x5A69EC: call    sub_57D7F0
0x5A69F1: fmul    qword ptr ds:0A2FAA0h
0x5A69F7: fadd    dword ptr [esi+28h]
0x5A69FA: fsubr   [esp+10h+var_8]
0x5A69FE: call    Double_To_SInt32
0x5A6A03: mov     [esp+10h+arg_0], eax
0x5A6A07: fild    [esp+10h+arg_0]
0x5A6A0B: pop     esi
0x5A6A0C: fstp    dword ptr [edi+6Ch]
0x5A6A0F: pop     edi
0x5A6A10: add     esp, 8
0x5A6A13: retn    8
