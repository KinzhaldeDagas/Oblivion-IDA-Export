0x4F57F0: fldz
0x4F57F2: push    esi
0x4F57F3: mov     esi, [esp+4+arg_C]
0x4F57F7: fstp    qword ptr [esi]
0x4F57F9: call    sub_57BDE0
0x4F57FE: test    eax, eax
0x4F5800: jz      short loc_4F580A
0x4F5802: fild    dword ptr [eax+0F8h]
0x4F5808: fstp    qword ptr [esi]
0x4F580A: mov     al, 1
0x4F580C: pop     esi
0x4F580D: retn
