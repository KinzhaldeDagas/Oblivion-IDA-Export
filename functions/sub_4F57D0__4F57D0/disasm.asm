0x4F57D0: fldz
0x4F57D2: push    esi
0x4F57D3: mov     esi, [esp+4+arg_C]
0x4F57D7: fstp    qword ptr [esi]
0x4F57D9: call    sub_57BDE0
0x4F57DE: test    eax, eax
0x4F57E0: jz      short loc_4F57EA
0x4F57E2: fild    dword ptr [eax+0F4h]
0x4F57E8: fstp    qword ptr [esi]
0x4F57EA: mov     al, 1
0x4F57EC: pop     esi
0x4F57ED: retn
