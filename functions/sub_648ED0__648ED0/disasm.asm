0x648ED0: sub     esp, 0Ch
0x648ED3: push    esi
0x648ED4: mov     esi, ecx
0x648ED6: mov     eax, [esi+8]
0x648ED9: push    edi
0x648EDA: mov     edi, [eax+28h]
0x648EDD: test    edi, edi
0x648EDF: jz      loc_649185
0x648EE5: push    ebx
0x648EE6: mov     ecx, edi
0x648EE8: call    TargetData__GetTargetType
0x648EED: test    eax, eax
0x648EEF: jnz     loc_648FDA
0x648EF5: mov     ecx, edi
0x648EF7: call    sub_569E60
0x648EFC: test    eax, eax
0x648EFE: jnz     short loc_648F16
0x648F00: mov     edx, [esi]
0x648F02: push    eax
0x648F03: mov     eax, [edx+0D0h]
0x648F09: mov     ecx, esi
0x648F0B: call    eax
0x648F0D: pop     ebx
0x648F0E: pop     edi
0x648F0F: pop     esi
0x648F10: add     esp, 0Ch
0x648F13: retn    4
0x648F16: mov     ecx, edi
0x648F18: call    sub_569E60
0x648F1D: mov     edx, [eax]
0x648F1F: mov     ecx, eax
0x648F21: mov     eax, [edx+198h]
0x648F27: push    1
0x648F29: call    eax
0x648F2B: test    al, al
0x648F2D: jz      short loc_648F46
0x648F2F: mov     ecx, [esi+2Ch]
0x648F32: push    1
0x648F34: push    ecx
0x648F35: mov     ecx, [esi+8]
0x648F38: call    sub_566870
0x648F3D: pop     ebx
0x648F3E: pop     edi
0x648F3F: pop     esi
0x648F40: add     esp, 0Ch
0x648F43: retn    4
0x648F46: mov     ecx, [esi+8]
0x648F49: movsx   eax, byte ptr [ecx+20h]
0x648F4D: test    eax, eax
0x648F4F: jle     short loc_648F73
0x648F51: cmp     eax, 2
0x648F54: jle     short loc_648F5B
0x648F56: cmp     eax, 7
0x648F59: jnz     short loc_648F73
0x648F5B: call    sub_567CA0
0x648F60: test    al, al
0x648F62: jz      short loc_648F73
0x648F64: mov     edx, [esp+18h+arg_0]
0x648F68: mov     ecx, [esi+8]
0x648F6B: push    edx
0x648F6C: call    sub_568BB0
0x648F71: jmp     short loc_648F87
0x648F73: mov     ebx, [esi]
0x648F75: mov     ecx, edi
0x648F77: call    sub_569E60
0x648F7C: push    eax
0x648F7D: mov     eax, [ebx+0D0h]
0x648F83: mov     ecx, esi
0x648F85: call    eax
0x648F87: mov     ecx, [esi+2Ch]
0x648F8A: test    ecx, ecx
0x648F8C: jz      loc_649184
0x648F92: mov     edx, [ecx+8]
0x648F95: shr     edx, 5
0x648F98: test    dl, 1
0x648F9B: jz      loc_649184
0x648FA1: mov     eax, [ecx]
0x648FA3: mov     edx, [eax+190h]
0x648FA9: call    edx
0x648FAB: test    al, al
0x648FAD: jnz     loc_649184
0x648FB3: mov     ecx, [esi+2Ch]
0x648FB6: add     ecx, 44h ; 'D'
0x648FB9: jz      loc_649184
0x648FBF: mov     edi, [esi]
0x648FC1: call    ExtraDataList_GetReferencePointer
0x648FC6: push    eax
0x648FC7: mov     eax, [edi+0D0h]
0x648FCD: mov     ecx, esi
0x648FCF: call    eax
0x648FD1: pop     ebx
0x648FD2: pop     edi
0x648FD3: pop     esi
0x648FD4: add     esp, 0Ch
0x648FD7: retn    4
0x648FDA: mov     ecx, [esi+8]
0x648FDD: mov     edx, [ecx+1Ch]
0x648FE0: shr     edx, 2
0x648FE3: test    dl, 1
0x648FE6: jz      loc_649184
0x648FEC: cmp     dword ptr [esi+40h], 0
0x648FF0: jnz     loc_649103
0x648FF6: cmp     dword ptr [esi+3Ch], 0
0x648FFA: jnz     loc_649103
0x649000: movsx   eax, byte ptr [ecx+20h]
0x649004: test    eax, eax
0x649006: jle     short loc_64902D
0x649008: cmp     eax, 2
0x64900B: jle     short loc_649012
0x64900D: cmp     eax, 7
0x649010: jnz     short loc_64902D
0x649012: call    sub_567CA0
0x649017: test    al, al
0x649019: jz      short loc_64902D
0x64901B: mov     eax, [esp+18h+arg_0]
0x64901F: mov     ecx, [esi+8]
0x649022: push    eax
0x649023: call    sub_568BB0
0x649028: jmp     loc_649103
0x64902D: mov     edi, [esp+18h+arg_0]
0x649031: push    ebp
0x649032: mov     ecx, edi; this
0x649034: call    TESObjectREFR_GetParentCell
0x649039: mov     edx, [edi]
0x64903B: mov     ebp, eax
0x64903D: mov     eax, [edx+174h]
0x649043: mov     ecx, edi
0x649045: call    eax
0x649047: mov     ecx, [eax]
0x649049: mov     [esp+18h+a2], ecx
0x64904D: mov     edx, [eax+4]
0x649050: mov     ecx, [esi+8]
0x649053: mov     [esp+18h+var_4], edx
0x649057: mov     eax, [eax+8]
0x64905A: mov     [esp+18h], eax
0x64905E: mov     ebx, [ecx+28h]
0x649061: mov     ecx, ebx
0x649063: call    TargetData__GetTargetType
0x649068: cmp     eax, 1
0x64906B: jnz     short loc_649080
0x64906D: mov     ecx, ebx
0x64906F: call    sub_569E70
0x649074: mov     [esi+64h], eax
0x649077: mov     dword ptr [esi+6Ch], 0
0x64907E: jmp     short loc_649096
0x649080: cmp     eax, 2
0x649083: jnz     short loc_649096
0x649085: mov     ecx, ebx
0x649087: mov     dword ptr [esi+64h], 0
0x64908E: call    sub_569E80
0x649093: mov     [esi+6Ch], eax
0x649096: mov     edx, [edi]
0x649098: fld     dword ptr ds:0B368E8h
0x64909E: mov     eax, [edx+174h]
0x6490A4: push    edi; a7
0x6490A5: push    offset sub_646600; a6
0x6490AA: push    ecx
0x6490AB: mov     ecx, edi
0x6490AD: fstp    [esp+24h+a5]; a5
0x6490B0: call    eax
0x6490B2: fld     dword ptr ds:0B368E8h
0x6490B8: push    eax; a4
0x6490B9: push    ecx
0x6490BA: fstp    [esp+2Ch+a3]; a3
0x6490BD: lea     ecx, [esp+2Ch+a2]
0x6490C1: push    ecx; a2
0x6490C2: mov     ecx, ds:0B33A98h
0x6490C8: push    ebp; a1
0x6490C9: call    sub_446B90
0x6490CE: mov     edx, [esi]
0x6490D0: mov     eax, [edx+568h]
0x6490D6: xor     ebx, ebx
0x6490D8: push    edi
0x6490D9: mov     ecx, esi
0x6490DB: mov     [esi+6Ch], ebx
0x6490DE: mov     [esi+64h], ebx
0x6490E1: call    eax
0x6490E3: mov     ecx, [esi+8]
0x6490E6: mov     edi, [ecx+28h]
0x6490E9: cmp     edi, ebx
0x6490EB: pop     ebp
0x6490EC: jz      short loc_649103
0x6490EE: mov     ecx, edi
0x6490F0: call    TargetData__GetTargetType
0x6490F5: test    eax, eax
0x6490F7: jz      short loc_649103
0x6490F9: mov     ecx, edi
0x6490FB: call    sub_452A60
0x649100: mov     [esi+38h], eax
0x649103: cmp     dword ptr [esi+40h], 0
0x649107: lea     edi, [esi+3Ch]
0x64910A: jnz     short loc_649111
0x64910C: cmp     dword ptr [edi], 0
0x64910F: jz      short loc_649184
0x649111: mov     eax, [edi]
0x649113: mov     [esi+44h], eax
0x649116: cmp     dword ptr [eax+1Ch], 2
0x64911A: mov     eax, [eax]
0x64911C: jnz     short loc_64916C
0x64911E: mov     edx, [eax]
0x649120: mov     ecx, eax
0x649122: mov     eax, [edx+190h]
0x649128: call    eax
0x64912A: test    al, al
0x64912C: mov     eax, [esi+44h]
0x64912F: mov     ecx, [eax]; this
0x649131: jz      short loc_649136
0x649133: push    ecx
0x649134: jmp     short loc_64916D
0x649136: push    0; int
0x649138: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x64913D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x649142: push    0; int
0x649144: call    TESObjectREFR_GetOwner
0x649149: push    eax; void *
0x64914A: call    OblivionDynamicCast
0x64914F: add     esp, 14h
0x649152: test    eax, eax
0x649154: jz      short loc_649179
0x649156: mov     ebx, [esi]
0x649158: push    eax
0x649159: mov     ecx, offset ActorProcessManager_ptr
0x64915E: call    sub_675220
0x649163: mov     edx, [ebx+0D0h]
0x649169: push    eax
0x64916A: jmp     short loc_649175
0x64916C: push    eax
0x64916D: mov     edx, [esi]
0x64916F: mov     edx, [edx+0D0h]
0x649175: mov     ecx, esi
0x649177: call    edx
0x649179: mov     eax, [esi+44h]
0x64917C: push    eax
0x64917D: mov     ecx, edi
0x64917F: call    BSSimpleList_Remove
0x649184: pop     ebx
0x649185: pop     edi
0x649186: pop     esi
0x649187: add     esp, 0Ch
0x64918A: retn    4
