0x5A9BE0: sub     esp, 8
0x5A9BE3: push    esi
0x5A9BE4: push    edi
0x5A9BE5: push    1; arg1
0x5A9BE7: push    0; canCreate
0x5A9BE9: mov     esi, ecx
0x5A9BEB: call    InterfaceManager_GetSingleton
0x5A9BF0: add     esp, 8
0x5A9BF3: mov     edi, eax
0x5A9BF5: call    sub_57D7F0
0x5A9BFA: fstp    [esp+10h+var_8]
0x5A9BFE: call    sub_57D7F0
0x5A9C03: fmul    qword ptr ds:0A2FAA0h
0x5A9C09: fadd    dword ptr [edi+28h]
0x5A9C0C: fsubr   [esp+10h+var_8]
0x5A9C10: call    Double_To_SInt32
0x5A9C15: mov     ecx, [esi+34h]
0x5A9C18: mov     dword ptr [esp+10h+var_8], eax
0x5A9C1C: call    sub_588CF0
0x5A9C21: fisub   dword ptr [esp+10h+var_8]
0x5A9C25: pop     edi
0x5A9C26: mov     byte ptr ds:0B3B3D9h, 1
0x5A9C2D: fstp    dword ptr [esi+48h]
0x5A9C30: pop     esi
0x5A9C31: add     esp, 8
0x5A9C34: retn    8
