0x65E030: sub     esp, 0Ch
0x65E033: push    esi
0x65E034: push    edi
0x65E035: mov     edi, [esp+14h+arg_0]
0x65E039: cmp     edi, 0Bh
0x65E03C: mov     esi, ecx
0x65E03E: jnz     short loc_65E07C
0x65E040: fld     dword ptr [esi+230h]
0x65E046: fstp    [esp+14h+arg_0]
0x65E04A: fld     dword ptr [esi+350h]
0x65E050: fstp    [esp+14h+var_C]
0x65E054: fld     dword ptr [esi+47Ch]
0x65E05A: fstp    [esp+14h+var_8]
0x65E05E: call    sub_4D8FB0
0x65E063: fadd    [esp+14h+arg_0]
0x65E067: fadd    [esp+14h+var_C]
0x65E06B: fadd    [esp+14h+var_8]
0x65E06F: call    Double_To_SInt32
0x65E074: pop     edi
0x65E075: pop     esi
0x65E076: add     esp, 0Ch
0x65E079: retn    4
0x65E07C: push    0; a2
0x65E07E: call    Actor_GetActorBaseForm
0x65E083: test    eax, eax
0x65E085: jz      short loc_65E0FA
0x65E087: fld     dword ptr [esi+edi*4+204h]
0x65E08E: mov     eax, edi
0x65E090: sub     eax, 8
0x65E093: fstp    [esp+14h+var_C]
0x65E097: fld     dword ptr [esi+edi*4+324h]
0x65E09E: fstp    [esp+14h+var_4]
0x65E0A2: jz      short loc_65E0C7
0x65E0A4: sub     eax, 1
0x65E0A7: jz      short loc_65E0BF
0x65E0A9: sub     eax, 1
0x65E0AC: jz      short loc_65E0B7
0x65E0AE: fld     dword ptr [esi+edi*4+450h]
0x65E0B5: jmp     short loc_65E0CD
0x65E0B7: fld     dword ptr [esi+44Ch]
0x65E0BD: jmp     short loc_65E0CD
0x65E0BF: fld     dword ptr [esi+448h]
0x65E0C5: jmp     short loc_65E0CD
0x65E0C7: fld     dword ptr [esi+444h]
0x65E0CD: push    edi
0x65E0CE: fstp    [esp+18h+arg_0]
0x65E0D2: mov     ecx, esi
0x65E0D4: call    Actor_GetBaseCalcAVi
0x65E0D9: mov     [esp+14h+var_8], eax
0x65E0DD: fild    [esp+14h+var_8]
0x65E0E1: fadd    [esp+14h+var_C]
0x65E0E5: fadd    [esp+14h+var_4]
0x65E0E9: fadd    [esp+14h+arg_0]
0x65E0ED: call    Double_To_SInt32
0x65E0F2: pop     edi
0x65E0F3: pop     esi
0x65E0F4: add     esp, 0Ch
0x65E0F7: retn    4
0x65E0FA: pop     edi
0x65E0FB: xor     eax, eax
0x65E0FD: pop     esi
0x65E0FE: add     esp, 0Ch
0x65E101: retn    4
