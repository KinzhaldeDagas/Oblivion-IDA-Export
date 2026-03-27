0x69EE30: push    ebx
0x69EE31: push    ebp
0x69EE32: mov     ebp, [esp+8+arg_0]
0x69EE36: push    esi
0x69EE37: push    edi
0x69EE38: mov     edi, [esp+10h+Src]
0x69EE3C: push    edi
0x69EE3D: push    ebp
0x69EE3E: mov     esi, ecx
0x69EE40: call    sub_69DBB0
0x69EE45: mov     esi, [esi+30h]
0x69EE48: xor     ebx, ebx
0x69EE4A: test    esi, esi
0x69EE4C: jz      short loc_69EE61
0x69EE4E: mov     esi, [esi+0Ch]
0x69EE51: push    esi
0x69EE52: push    offset stru_B3CAC0
0x69EE57: call    NiRTTI_Cast
0x69EE5C: add     esp, 8
0x69EE5F: mov     ebx, eax
0x69EE61: test    ebx, ebx
0x69EE63: mov     [esp+10h+Src], 0
0x69EE6B: jz      short loc_69EE7D
0x69EE6D: push    ebx
0x69EE6E: call    sub_4DA760
0x69EE73: movzx   eax, ax
0x69EE76: add     esp, 4
0x69EE79: mov     [esp+10h+Src], eax
0x69EE7D: push    2; Size
0x69EE7F: lea     ecx, [esp+14h+Src]
0x69EE83: push    ecx; Src
0x69EE84: mov     ecx, ds:0B33B00h
0x69EE8A: call    SaveLoad_SaveData
0x69EE8F: cmp     word ptr [esp+10h+Src], 0
0x69EE95: jz      short loc_69EEFC
0x69EE97: test    edi, edi
0x69EE99: fld     dword ptr ds:0A30634h
0x69EE9F: fstp    [esp+10h+arg_0]
0x69EEA3: jz      short loc_69EEEB
0x69EEA5: mov     edx, [edi]
0x69EEA7: mov     eax, [edx+190h]
0x69EEAD: mov     ecx, edi
0x69EEAF: call    eax
0x69EEB1: test    al, al
0x69EEB3: jz      short loc_69EEEB
0x69EEB5: test    ebp, ebp
0x69EEB7: jz      short loc_69EEEB
0x69EEB9: mov     edi, [edi+58h]
0x69EEBC: push    0; int
0x69EEBE: push    offset ??_R0?AVMiddleHighProcess@@@8; struct TypeDescriptor *
0x69EEC3: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x69EEC8: push    0; int
0x69EECA: push    edi; void *
0x69EECB: call    OblivionDynamicCast
0x69EED0: add     esp, 14h
0x69EED3: test    eax, eax
0x69EED5: jz      short loc_69EEEB
0x69EED7: mov     eax, [eax+17Ch]
0x69EEDD: test    eax, eax
0x69EEDF: jz      short loc_69EEEB
0x69EEE1: fld     dword ptr [eax+94h]
0x69EEE7: fstp    [esp+10h+arg_0]
0x69EEEB: fld     [esp+10h+arg_0]
0x69EEEF: push    ecx
0x69EEF0: fstp    [esp+14h+var_14]; float
0x69EEF3: push    ebx; int
0x69EEF4: call    sub_4DA7F0
0x69EEF9: add     esp, 8
0x69EEFC: pop     edi
0x69EEFD: pop     esi
0x69EEFE: pop     ebp
0x69EEFF: pop     ebx
0x69EF00: retn    8
