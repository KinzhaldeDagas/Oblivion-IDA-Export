0x5B68F0: mov     eax, [esp+arg_0]
0x5B68F4: sub     esp, 8
0x5B68F7: cmp     eax, 29h ; ')'
0x5B68FA: push    esi
0x5B68FB: mov     esi, ecx
0x5B68FD: jz      short loc_5B691C
0x5B68FF: cmp     eax, 2Dh ; '-'
0x5B6902: jz      short loc_5B691C
0x5B6904: mov     eax, [esp+0Ch+arg_4]
0x5B6908: test    eax, eax
0x5B690A: jz      loc_5B69A1
0x5B6910: mov     eax, [eax+10h]
0x5B6913: cmp     eax, [esi+58h]
0x5B6916: jnz     loc_5B69A1
0x5B691C: push    edi
0x5B691D: push    1; arg1
0x5B691F: push    0; canCreate
0x5B6921: call    InterfaceManager_GetSingleton
0x5B6926: add     esp, 8
0x5B6929: mov     edi, eax
0x5B692B: call    sub_57D7A0
0x5B6930: fmul    qword ptr ds:0A2FAA0h
0x5B6936: fadd    dword ptr [edi+20h]
0x5B6939: call    Double_To_SInt32
0x5B693E: mov     [esp+10h+arg_0], eax
0x5B6942: fild    [esp+10h+arg_0]
0x5B6946: fstp    dword ptr [esi+88h]
0x5B694C: call    sub_57D7F0
0x5B6951: fstp    [esp+10h+var_8]
0x5B6955: call    sub_57D7F0
0x5B695A: fmul    qword ptr ds:0A2FAA0h
0x5B6960: fadd    dword ptr [edi+28h]
0x5B6963: fsubr   [esp+10h+var_8]
0x5B6967: call    Double_To_SInt32
0x5B696C: mov     ecx, [esi+58h]
0x5B696F: mov     [esp+10h+arg_0], eax
0x5B6973: fild    [esp+10h+arg_0]
0x5B6977: push    0FDAh
0x5B697C: fstp    dword ptr [esi+8Ch]
0x5B6982: call    Tile_GetFloat
0x5B6987: mov     ecx, [esi+58h]
0x5B698A: fstp    dword ptr [esi+0E4h]
0x5B6990: push    0FD9h
0x5B6995: call    Tile_GetFloat
0x5B699A: fstp    dword ptr [esi+0E8h]
0x5B69A0: pop     edi
0x5B69A1: pop     esi
0x5B69A2: add     esp, 8
0x5B69A5: retn    8
