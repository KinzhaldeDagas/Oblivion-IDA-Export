0x595C70: sub     esp, 8
0x595C73: cmp     [esp+8+arg_0], 0Ch
0x595C78: push    esi
0x595C79: mov     esi, ecx
0x595C7B: jnz     short loc_595CC0
0x595C7D: push    edi
0x595C7E: push    1; arg1
0x595C80: push    0; canCreate
0x595C82: call    InterfaceManager_GetSingleton
0x595C87: add     esp, 8
0x595C8A: mov     edi, eax
0x595C8C: call    sub_57D7F0
0x595C91: fstp    [esp+10h+var_8]
0x595C95: call    sub_57D7F0
0x595C9A: fmul    qword ptr ds:0A2FAA0h
0x595CA0: fadd    dword ptr [edi+28h]
0x595CA3: fsubr   [esp+10h+var_8]
0x595CA7: call    Double_To_SInt32
0x595CAC: mov     ecx, [esi+2Ch]
0x595CAF: mov     [esp+10h+arg_0], eax
0x595CB3: call    sub_588CF0
0x595CB8: fisub   [esp+10h+arg_0]
0x595CBC: pop     edi
0x595CBD: fstp    dword ptr [esi+38h]
0x595CC0: pop     esi
0x595CC1: add     esp, 8
0x595CC4: retn    8
