0x4B0770: push    ecx
0x4B0771: push    esi
0x4B0772: push    1
0x4B0774: lea     eax, [esp+0Ch+arg_4]
0x4B0778: push    eax
0x4B0779: mov     eax, [esp+10h+arg_4]
0x4B077D: lea     edx, [esp+10h+var_4]
0x4B0781: push    edx
0x4B0782: mov     edx, [esp+14h+arg_0]
0x4B0786: push    eax
0x4B0787: xor     esi, esi
0x4B0789: push    edx
0x4B078A: mov     [esp+1Ch+var_4], esi
0x4B078E: call    sub_4B05E0
0x4B0793: mov     eax, [esp+8+var_4]
0x4B0797: cmp     eax, esi
0x4B0799: jz      short loc_4B07B5
0x4B079B: push    esi; int
0x4B079C: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x4B07A1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B07A6: push    esi; int
0x4B07A7: push    eax; void *
0x4B07A8: call    OblivionDynamicCast
0x4B07AD: add     esp, 14h
0x4B07B0: pop     esi
0x4B07B1: pop     ecx
0x4B07B2: retn    8
0x4B07B5: mov     eax, esi
0x4B07B7: pop     esi
0x4B07B8: pop     ecx
0x4B07B9: retn    8
