0x50AAA0: push    ecx
0x50AAA1: mov     ecx, [esp+4+l]
0x50AAA5: mov     edx, [esp+4+arg_10]
0x50AAA9: push    esi
0x50AAAA: mov     esi, [esp+8+a4]
0x50AAAE: lea     eax, [esp+8+var_4]
0x50AAB2: push    eax; UInt16
0x50AAB3: mov     eax, [esp+0Ch+arg_C]
0x50AAB7: push    ecx; l
0x50AAB8: mov     ecx, [esp+10h+a3]
0x50AABC: push    edx; a6
0x50AABD: mov     edx, [esp+14h+arg_4]
0x50AAC1: push    eax; a5
0x50AAC2: mov     eax, [esp+18h+a1]
0x50AAC6: push    esi; a4
0x50AAC7: push    ecx; a3
0x50AAC8: push    edx; a2
0x50AAC9: push    eax; a1
0x50AACA: mov     dword ptr [esp+28h+var_4], 0
0x50AAD2: call    Script_ExtractArgs
0x50AAD7: add     esp, 20h
0x50AADA: test    al, al
0x50AADC: jnz     short loc_50AAE1
0x50AADE: pop     esi
0x50AADF: pop     ecx
0x50AAE0: retn
0x50AAE1: test    esi, esi
0x50AAE3: jz      loc_50AB78
0x50AAE9: mov     edx, [esi]
0x50AAEB: mov     eax, [edx+190h]
0x50AAF1: mov     ecx, esi
0x50AAF3: call    eax
0x50AAF5: test    al, al
0x50AAF7: jz      short loc_50AB78
0x50AAF9: cmp     dword ptr [esp+8+var_4], 0
0x50AAFE: jz      short loc_50AB78
0x50AB00: mov     edx, [esi]
0x50AB02: mov     eax, [edx+170h]
0x50AB08: push    0; int
0x50AB0A: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x50AB0F: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x50AB14: push    0; int
0x50AB16: mov     ecx, esi
0x50AB18: call    eax
0x50AB1A: push    eax; void *
0x50AB1B: call    OblivionDynamicCast
0x50AB20: mov     ecx, dword ptr [esp+1Ch+var_4]
0x50AB24: mov     edx, [ecx]
0x50AB26: add     esp, 14h
0x50AB29: push    0; int
0x50AB2B: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x50AB30: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x50AB35: mov     esi, eax
0x50AB37: mov     eax, [edx+170h]
0x50AB3D: push    0; int
0x50AB3F: call    eax
0x50AB41: push    eax; void *
0x50AB42: call    OblivionDynamicCast
0x50AB47: add     esp, 14h
0x50AB4A: test    esi, esi
0x50AB4C: jz      short loc_50AB78
0x50AB4E: test    eax, eax
0x50AB50: jz      short loc_50AB78
0x50AB52: mov     ecx, [eax+104h]
0x50AB58: mov     [esi+104h], ecx
0x50AB5E: lea     ecx, [eax+24h]
0x50AB61: call    TESActorBaseData_GetLevel
0x50AB66: lea     ecx, [esi+24h]
0x50AB69: push    eax
0x50AB6A: call    TESActorBaseData_SetLevel
0x50AB6F: push    0
0x50AB71: mov     ecx, esi
0x50AB73: call    sub_5222D0
0x50AB78: mov     al, 1
0x50AB7A: pop     esi
0x50AB7B: pop     ecx
0x50AB7C: retn
