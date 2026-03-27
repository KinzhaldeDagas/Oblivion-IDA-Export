0x487930: push    ecx
0x487931: mov     eax, [esp+4+arg_10]
0x487935: test    eax, eax
0x487937: push    ebp
0x487938: mov     ebp, ecx
0x48793A: mov     [esp+8+var_4], 0
0x487942: jz      short loc_48794F
0x487944: push    eax
0x487945: call    sub_487820
0x48794A: pop     ebp
0x48794B: pop     ecx
0x48794C: retn    18h
0x48794F: mov     eax, [esp+8+arg_14]
0x487953: test    eax, eax
0x487955: mov     [esp+8+arg_10], 0
0x48795D: jz      short loc_48797A
0x48795F: push    0; int
0x487961: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x487966: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x48796B: push    0; int
0x48796D: push    eax; void *
0x48796E: call    OblivionDynamicCast
0x487973: add     esp, 14h
0x487976: mov     [esp+8+arg_10], eax
0x48797A: mov     ecx, [ebp+4]; this
0x48797D: test    ecx, ecx
0x48797F: jz      short loc_487988
0x487981: call    TESObjectREFR_GetContainer
0x487986: jmp     short loc_48798A
0x487988: xor     eax, eax
0x48798A: push    ebx
0x48798B: lea     ebx, [eax+8]
0x48798E: test    ebx, ebx
0x487990: push    esi
0x487991: push    edi
0x487992: jz      loc_487A39
0x487998: cmp     dword ptr [ebx+4], 0
0x48799C: jnz     short loc_4879A7
0x48799E: cmp     dword ptr [ebx], 0
0x4879A1: jz      loc_487A39
0x4879A7: mov     eax, [ebx]
0x4879A9: mov     edi, [eax+4]
0x4879AC: test    edi, edi
0x4879AE: jz      short loc_487A2E
0x4879B0: mov     eax, [esp+14h+arg_0]
0x4879B4: test    eax, eax
0x4879B6: jz      short loc_4879BE
0x4879B8: cmp     edi, eax
0x4879BA: jz      short loc_4879D4
0x4879BC: jmp     short loc_487A2E
0x4879BE: mov     eax, [esp+14h+arg_4]
0x4879C2: test    eax, eax
0x4879C4: jz      short loc_487A2E
0x4879C6: push    eax
0x4879C7: push    edi
0x4879C8: call    sub_568370
0x4879CD: add     esp, 8
0x4879D0: test    al, al
0x4879D2: jz      short loc_487A2E
0x4879D4: push    0
0x4879D6: push    1
0x4879D8: push    edi
0x4879D9: mov     ecx, ebp
0x4879DB: call    ContainerExtraData_GetEntryForForm
0x4879E0: mov     esi, eax
0x4879E2: test    esi, esi
0x4879E4: jz      loc_487AAB
0x4879EA: mov     ecx, [ebx]
0x4879EC: mov     eax, [ecx]
0x4879EE: test    eax, eax
0x4879F0: jl      loc_487B51
0x4879F6: mov     edx, [esi+4]
0x4879F9: add     edx, eax
0x4879FB: mov     eax, [esp+14h+arg_10]
0x4879FF: add     [esp+14h+var_4], edx
0x487A03: test    eax, eax
0x487A05: jz      short loc_487A1C
0x487A07: mov     ecx, [eax+58h]
0x487A0A: test    ecx, ecx
0x487A0C: jz      short loc_487A1C
0x487A0E: mov     eax, [ecx]
0x487A10: mov     edx, [esi+8]
0x487A13: mov     eax, [eax+154h]
0x487A19: push    edx
0x487A1A: call    eax
0x487A1C: mov     esi, [esi+8]
0x487A1F: push    esi
0x487A20: call    sub_568240
0x487A25: mov     ecx, [esp+18h+arg_C]
0x487A29: add     esp, 4
0x487A2C: mov     [ecx], eax
0x487A2E: mov     ebx, [ebx+4]
0x487A31: test    ebx, ebx
0x487A33: jnz     loc_487998
0x487A39: mov     edi, [esp+14h+arg_8]
0x487A3D: cmp     [esp+14h+var_4], edi
0x487A41: jge     loc_487B51
0x487A47: mov     eax, [esp+14h+arg_0]
0x487A4B: test    eax, eax
0x487A4D: jz      loc_487ADE
0x487A53: push    0
0x487A55: push    1
0x487A57: push    eax
0x487A58: mov     ecx, ebp
0x487A5A: call    ContainerExtraData_GetEntryForForm
0x487A5F: mov     esi, eax
0x487A61: test    esi, esi
0x487A63: jz      loc_487B16
0x487A69: cmp     [esi+4], edi
0x487A6C: jl      loc_487B16
0x487A72: mov     eax, [esp+14h+arg_10]
0x487A76: test    eax, eax
0x487A78: jz      short loc_487A8F
0x487A7A: mov     ecx, [eax+58h]
0x487A7D: test    ecx, ecx
0x487A7F: jz      short loc_487A8F
0x487A81: mov     edx, [ecx]
0x487A83: mov     eax, [esi+8]
0x487A86: mov     edx, [edx+154h]
0x487A8C: push    eax
0x487A8D: call    edx
0x487A8F: mov     esi, [esi+8]
0x487A92: push    esi
0x487A93: call    sub_568240
0x487A98: mov     ecx, [esp+18h+arg_C]
0x487A9C: add     esp, 4
0x487A9F: pop     edi
0x487AA0: pop     esi
0x487AA1: pop     ebx
0x487AA2: mov     [ecx], eax
0x487AA4: mov     al, 1
0x487AA6: pop     ebp
0x487AA7: pop     ecx
0x487AA8: retn    18h
0x487AAB: mov     eax, [esp+14h+arg_10]
0x487AAF: test    eax, eax
0x487AB1: jz      short loc_487AC5
0x487AB3: mov     ecx, [eax+58h]
0x487AB6: test    ecx, ecx
0x487AB8: jz      short loc_487AC5
0x487ABA: mov     edx, [ecx]
0x487ABC: mov     eax, [edx+154h]
0x487AC2: push    edi
0x487AC3: call    eax
0x487AC5: push    edi
0x487AC6: call    sub_568240
0x487ACB: mov     ecx, [esp+18h+arg_C]
0x487ACF: add     esp, 4
0x487AD2: pop     edi
0x487AD3: pop     esi
0x487AD4: pop     ebx
0x487AD5: mov     [ecx], eax
0x487AD7: mov     al, 1
0x487AD9: pop     ebp
0x487ADA: pop     ecx
0x487ADB: retn    18h
0x487ADE: mov     esi, [ebp+0]
0x487AE1: test    esi, esi
0x487AE3: jz      short loc_487B16
0x487AE5: mov     eax, [esi]
0x487AE7: test    eax, eax
0x487AE9: jz      short loc_487B16
0x487AEB: mov     eax, [eax+8]
0x487AEE: test    eax, eax
0x487AF0: jz      short loc_487B0F
0x487AF2: mov     ecx, [esp+14h+arg_4]
0x487AF6: test    ecx, ecx
0x487AF8: jz      short loc_487B0F
0x487AFA: push    ecx
0x487AFB: push    eax
0x487AFC: call    sub_568370
0x487B01: add     esp, 8
0x487B04: test    al, al
0x487B06: jz      short loc_487B0F
0x487B08: mov     edx, [esi]
0x487B0A: cmp     [edx+4], edi
0x487B0D: jge     short loc_487B20
0x487B0F: mov     esi, [esi+4]
0x487B12: test    esi, esi
0x487B14: jnz     short loc_487AE5
0x487B16: pop     edi
0x487B17: pop     esi
0x487B18: pop     ebx
0x487B19: xor     al, al
0x487B1B: pop     ebp
0x487B1C: pop     ecx
0x487B1D: retn    18h
0x487B20: mov     eax, [esp+14h+arg_10]
0x487B24: test    eax, eax
0x487B26: jz      short loc_487B3D
0x487B28: mov     ecx, [eax+58h]
0x487B2B: test    ecx, ecx
0x487B2D: jz      short loc_487B3D
0x487B2F: mov     eax, [ecx]
0x487B31: mov     edx, [edx+8]
0x487B34: mov     eax, [eax+154h]
0x487B3A: push    edx
0x487B3B: call    eax
0x487B3D: mov     ecx, [esi]
0x487B3F: mov     eax, [ecx+8]
0x487B42: push    eax
0x487B43: call    sub_568240
0x487B48: mov     edx, [esp+18h+arg_C]
0x487B4C: add     esp, 4
0x487B4F: mov     [edx], eax
0x487B51: pop     edi
0x487B52: pop     esi
0x487B53: pop     ebx
0x487B54: mov     al, 1
0x487B56: pop     ebp
0x487B57: pop     ecx
0x487B58: retn    18h
