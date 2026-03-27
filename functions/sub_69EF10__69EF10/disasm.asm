0x69EF10: mov     eax, [esp+arg_4]
0x69EF14: sub     esp, 8
0x69EF17: push    ebx
0x69EF18: push    ebp
0x69EF19: push    esi
0x69EF1A: push    edi
0x69EF1B: mov     edi, [esp+18h+Dst]
0x69EF1F: push    0
0x69EF21: push    eax
0x69EF22: push    edi
0x69EF23: mov     esi, ecx
0x69EF25: call    nullsub_18
0x69EF2A: test    edi, edi
0x69EF2C: mov     ebp, [esi+2Ch]
0x69EF2F: jz      short loc_69EF47
0x69EF31: mov     ecx, [edi+0Ch]
0x69EF34: mov     eax, [ecx+1Ch]
0x69EF37: mov     edx, [eax+18h]
0x69EF3A: lea     ecx, [eax+18h]
0x69EF3D: mov     eax, [edx+14h]
0x69EF40: call    eax
0x69EF42: mov     [esi+2Ch], eax
0x69EF45: jmp     short loc_69EF4E
0x69EF47: mov     ecx, [esp+18h+arg_8]
0x69EF4B: mov     [esi+2Ch], ecx
0x69EF4E: mov     edx, [esi]
0x69EF50: fld     dword ptr [esi+20h]
0x69EF53: mov     eax, [edx+68h]
0x69EF56: fstp    [esp+18h+Dst]
0x69EF5A: mov     bl, [esi+24h]
0x69EF5D: mov     ecx, esi
0x69EF5F: call    eax
0x69EF61: fld     [esp+18h+Dst]
0x69EF65: test    ebp, ebp
0x69EF67: fstp    dword ptr [esi+20h]
0x69EF6A: mov     [esi+24h], bl
0x69EF6D: jz      loc_69F041
0x69EF73: mov     eax, ds:0B33B00h
0x69EF78: mov     ecx, [eax+14h]
0x69EF7B: push    2; Size
0x69EF7D: lea     edx, [esp+1Ch+Dst]
0x69EF81: mov     [esp+1Ch+var_4], ecx
0x69EF85: mov     [eax+14h], ebp
0x69EF88: mov     ecx, ds:0B33B00h
0x69EF8E: push    edx; Dst
0x69EF8F: call    SaveLoad_LoadData
0x69EF94: mov     eax, [esi+30h]
0x69EF97: test    eax, eax
0x69EF99: jz      loc_69F029
0x69EF9F: mov     eax, [eax+0Ch]
0x69EFA2: push    eax
0x69EFA3: push    offset stru_B3CAC0
0x69EFA8: call    NiRTTI_Cast
0x69EFAD: add     esp, 8
0x69EFB0: test    eax, eax
0x69EFB2: mov     [esp+18h+var_8], eax
0x69EFB6: jz      short loc_69F029
0x69EFB8: mov     ebx, [esp+18h+arg_4]
0x69EFBC: fld     dword ptr ds:0A30634h
0x69EFC2: test    ebx, ebx
0x69EFC4: fstp    [esp+18h+arg_8]
0x69EFC8: jz      short loc_69F010
0x69EFCA: mov     eax, [ebx]
0x69EFCC: mov     edx, [eax+190h]
0x69EFD2: mov     ecx, ebx
0x69EFD4: call    edx
0x69EFD6: test    al, al
0x69EFD8: jz      short loc_69F010
0x69EFDA: test    edi, edi
0x69EFDC: jz      short loc_69F010
0x69EFDE: mov     eax, [ebx+58h]
0x69EFE1: push    0; int
0x69EFE3: push    offset ??_R0?AVMiddleHighProcess@@@8; struct TypeDescriptor *
0x69EFE8: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x69EFED: push    0; int
0x69EFEF: push    eax; void *
0x69EFF0: call    OblivionDynamicCast
0x69EFF5: add     esp, 14h
0x69EFF8: test    eax, eax
0x69EFFA: jz      short loc_69F010
0x69EFFC: mov     eax, [eax+17Ch]
0x69F002: test    eax, eax
0x69F004: jz      short loc_69F010
0x69F006: fld     dword ptr [eax+94h]
0x69F00C: fstp    [esp+18h+arg_8]
0x69F010: fld     [esp+18h+arg_8]
0x69F014: mov     eax, [esi+30h]
0x69F017: push    ecx
0x69F018: mov     ecx, [esp+1Ch+var_8]
0x69F01C: fstp    dword ptr [esp+1Ch+var_1C]; float
0x69F01F: push    eax; int
0x69F020: push    ecx; int
0x69F021: call    sub_4DA8F0
0x69F026: add     esp, 0Ch
0x69F029: mov     edx, ds:0B33B00h
0x69F02F: mov     eax, [esp+18h+var_4]
0x69F033: push    ebp; void *
0x69F034: mov     ecx, offset FormHeap
0x69F039: mov     [edx+14h], eax
0x69F03C: call    MemoryHeap_Free_checked
0x69F041: mov     edx, [esi]
0x69F043: fldz
0x69F045: mov     eax, [edx+50h]
0x69F048: push    ecx
0x69F049: mov     ecx, esi
0x69F04B: fstp    dword ptr [esp+1Ch+var_1C]
0x69F04E: call    eax
0x69F050: pop     edi
0x69F051: pop     esi
0x69F052: pop     ebp
0x69F053: pop     ebx
0x69F054: add     esp, 8
0x69F057: retn    0Ch
