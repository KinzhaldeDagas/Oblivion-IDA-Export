0x44E905: cmp     [esp+arg_27], bl; jumptable 0044E8D5 default case
0x44E909: jnz     loc_44ED7B
0x44E90F: movzx   eax, word ptr [edi+8]
0x44E913: cmp     ax, 0FFFFh
0x44E917: jnz     short loc_44E92D
0x44E919: mov     eax, [edi+4]
0x44E91C: lea     edx, [eax+1]
0x44E91F: nop
0x44E920: mov     cl, [eax]
0x44E922: add     eax, 1
0x44E925: cmp     cl, bl
0x44E927: jnz     short loc_44E920
0x44E929: sub     eax, edx
0x44E92B: jmp     short loc_44E930
0x44E92D: movzx   eax, ax
0x44E930: cmp     eax, ebx
0x44E932: jz      loc_44ED8B
0x44E938: mov     edx, [edi]
0x44E93A: mov     eax, [edx+14h]
0x44E93D: mov     ecx, edi
0x44E93F: call    eax
0x44E941: cmp     [esp+arg_28], 0Ch
0x44E946: push    eax
0x44E947: lea     ecx, [esp+4+FileName]
0x44E94B: jnz     short loc_44E954
0x44E94D: push    offset aTreesS; "Trees\\%s"
0x44E952: jmp     short loc_44E959
0x44E954: push    offset aMeshesS; "Meshes\\%s"
0x44E959: push    ecx
0x44E95A: call    __sprintf
0x44E95F: mov     ecx, ds:0B33A04h
0x44E965: add     esp, 0Ch
0x44E968: cmp     ecx, ebx
0x44E96A: jz      short loc_44E984
0x44E96C: mov     edx, [ecx]
0x44E96E: mov     edx, [edx+4]
0x44E971: push    0FFFFFFFFh
0x44E973: push    ebx
0x44E974: push    ebx
0x44E975: lea     eax, [esp+0Ch+FileName]
0x44E979: push    eax
0x44E97A: call    edx
0x44E97C: cmp     eax, ebx
0x44E97E: jnz     loc_44EAB2
0x44E984: cmp     ds:0B05594h, bl
0x44E98A: jz      loc_44ED7B
0x44E990: lea     eax, [esp+Ext]
0x44E997: push    eax; Ext
0x44E998: lea     ecx, [esp+4+Filename]
0x44E99F: push    ecx; Filename
0x44E9A0: lea     edx, [esp+8+Dir]
0x44E9A7: push    edx; Dir
0x44E9A8: mov     edx, [edi]
0x44E9AA: lea     eax, [esp+0Ch+Drive]
0x44E9AE: push    eax; Drive
0x44E9AF: mov     eax, [edx+14h]
0x44E9B2: mov     ecx, edi
0x44E9B4: call    eax
0x44E9B6: push    eax; FullPath
0x44E9B7: call    __splitpath
0x44E9BC: lea     ecx, [esp+14h+Filename]
0x44E9C3: push    ecx
0x44E9C4: lea     edx, [esp+18h+FileName]
0x44E9C8: push    offset off_A386A8
0x44E9CD: push    edx
0x44E9CE: call    __sprintf
0x44E9D3: add     esp, 20h
0x44E9D6: xor     eax, eax
0x44E9D8: jmp     short loc_44E9E0
0x44E9DA: align 10h
0x44E9E0: mov     cl, [esp+eax+FileName]
0x44E9E4: mov     [esp+eax+Filename], cl
0x44E9EB: add     eax, 1
0x44E9EE: cmp     cl, bl
0x44E9F0: jnz     short loc_44E9E0
0x44E9F2: lea     eax, [esp+Dir]
0x44E9F9: push    eax
0x44E9FA: lea     ecx, [esp+4+FileName]
0x44E9FE: push    offset aMeshesS; "Meshes\\%s"
0x44EA03: push    ecx
0x44EA04: call    __sprintf
0x44EA09: add     esp, 0Ch
0x44EA0C: xor     eax, eax
0x44EA0E: mov     edi, edi
0x44EA10: mov     cl, [esp+eax+FileName]
0x44EA14: mov     [esp+eax+Dir], cl
0x44EA1B: add     eax, 1
0x44EA1E: cmp     cl, bl
0x44EA20: jnz     short loc_44EA10
0x44EA22: lea     edx, [esp+Ext]
0x44EA29: push    edx
0x44EA2A: lea     eax, [esp+4+Filename]
0x44EA31: push    eax
0x44EA32: lea     ecx, [esp+8+Dir]
0x44EA39: push    ecx
0x44EA3A: lea     edx, [esp+0Ch+Drive]
0x44EA3E: push    edx
0x44EA3F: lea     eax, [esp+10h+FileName]
0x44EA43: push    eax
0x44EA44: call    sub_9853B2
0x44EA49: mov     ecx, ds:0B33A04h
0x44EA4F: add     esp, 14h
0x44EA52: cmp     ecx, ebx
0x44EA54: jz      short loc_44EA6A
0x44EA56: mov     edx, [ecx]
0x44EA58: mov     edx, [edx+4]
0x44EA5B: push    0FFFFFFFFh
0x44EA5D: push    ebx
0x44EA5E: push    ebx
0x44EA5F: lea     eax, [esp+0Ch+FileName]
0x44EA63: push    eax
0x44EA64: call    edx
0x44EA66: cmp     eax, ebx
0x44EA68: jnz     short loc_44EA9F
0x44EA6A: mov     eax, [esi]
0x44EA6C: mov     edx, [eax+0D4h]
0x44EA72: mov     ecx, esi
0x44EA74: call    edx
0x44EA76: mov     edx, [edi]
0x44EA78: push    eax
0x44EA79: mov     eax, [esp+4+arg_28]
0x44EA7D: mov     ecx, ds:0B081D0h[eax*4]
0x44EA84: mov     eax, [edx+14h]
0x44EA87: push    ecx
0x44EA88: mov     ecx, edi
0x44EA8A: call    eax
0x44EA8C: push    eax; ArgList
0x44EA8D: push    offset aModelSNotFound; "Model \"%s\" not found for %s \"%s\"."
0x44EA92: call    PrintError
0x44EA97: add     esp, 10h
0x44EA9A: jmp     loc_44ED7B
0x44EA9F: lea     ecx, [esp+FileName]
0x44EAA3: push    ecx; lpFileName
0x44EAA4: mov     ecx, [esp+4+arg_44]
0x44EAA8: call    sub_448E20
0x44EAAD: jmp     loc_44ED7B
0x44EAB2: cmp     [esp+a2], ebx
0x44EAB6: jz      loc_44ED7B
0x44EABC: cmp     ds:0B055A4h, bl
0x44EAC2: jnz     short loc_44EAD5
0x44EAC4: cmp     [ebp+8], bl
0x44EAC7: jnz     short loc_44EAD5
0x44EAC9: cmp     ds:0B0558Ch, bl
0x44EACF: jz      loc_44ED7B
0x44EAD5: mov     esi, [esp+a2]
0x44EAD9: mov     edx, [esi]
0x44EADB: mov     eax, [edx+0D4h]
0x44EAE1: mov     ecx, esi
0x44EAE3: call    eax
0x44EAE5: mov     ecx, [esp+arg_28]
0x44EAE9: mov     edx, ds:0B081D0h[ecx*4]
0x44EAF0: push    eax
0x44EAF1: mov     eax, [edi]
0x44EAF3: push    edx
0x44EAF4: mov     edx, [eax+14h]
0x44EAF7: mov     ecx, edi
0x44EAF9: call    edx
0x44EAFB: push    eax
0x44EAFC: lea     eax, [esp+0Ch+Format]
0x44EB03: push    offset aLoadingSForSS_; "Loading \"%s\" for %s \"%s\"."
0x44EB08: push    eax
0x44EB09: call    __sprintf
0x44EB0E: lea     ecx, [esp+14h+Format]
0x44EB15: push    ecx; Format
0x44EB16: call    Interface_ConsolePrint
0x44EB1B: mov     ecx, ds:0B33398h
0x44EB21: add     esp, 18h
0x44EB24: call    sub_40D4D0
0x44EB29: mov     al, [esi+4]
0x44EB2C: cmp     al, 23h ; '#'
0x44EB2E: jnz     short loc_44EB55
0x44EB30: push    10Ch; Size
0x44EB35: call    FormHeapAlloc
0x44EB3A: add     esp, 4
0x44EB3D: mov     [esp+arg_34], eax
0x44EB41: cmp     eax, ebx
0x44EB43: mov     [esp+arg_6BC], ebx
0x44EB4A: jz      short loc_44EBA8
0x44EB4C: mov     ecx, eax
0x44EB4E: call    Character_constr
0x44EB53: jmp     short loc_44EBAA
0x44EB55: cmp     al, 24h ; '$'
0x44EB57: jnz     short loc_44EB82
0x44EB59: push    108h; Size
0x44EB5E: call    FormHeapAlloc
0x44EB63: add     esp, 4
0x44EB66: mov     [esp+arg_34], eax
0x44EB6A: cmp     eax, ebx
0x44EB6C: mov     [esp+arg_6BC], 1
0x44EB77: jz      short loc_44EBA8
0x44EB79: mov     ecx, eax
0x44EB7B: call    Creature_constr
0x44EB80: jmp     short loc_44EBAA
0x44EB82: push    58h ; 'X'; Size
0x44EB84: call    FormHeapAlloc
0x44EB89: add     esp, 4
0x44EB8C: mov     [esp+arg_34], eax
0x44EB90: cmp     eax, ebx
0x44EB92: mov     [esp+arg_6BC], 2
0x44EB9D: jz      short loc_44EBA8
0x44EB9F: mov     ecx, eax
0x44EBA1: call    TESObjectREFR_constr
0x44EBA6: jmp     short loc_44EBAA
0x44EBA8: xor     eax, eax
0x44EBAA: mov     edx, [esp+a2]
0x44EBAE: mov     esi, eax
0x44EBB0: push    edx; a2
0x44EBB1: mov     ecx, esi; this
0x44EBB3: mov     [esp+4+arg_6BC], 0FFFFFFFFh
0x44EBBE: call    TESObjectREFR_SetBaseForm
0x44EBC3: mov     eax, [esp+a2]
0x44EBC7: movzx   eax, byte ptr [eax+4]
0x44EBCB: add     eax, 0FFFFFFDDh
0x44EBCE: cmp     eax, 1
0x44EBD1: ja      short loc_44EC04
0x44EBD3: cmp     ds:0B0558Ch, bl
0x44EBD9: jz      short loc_44EBE8
0x44EBDB: cmp     ds:0B055A4h, bl
0x44EBE1: jnz     short loc_44EBE8
0x44EBE3: cmp     [ebp+8], bl
0x44EBE6: jz      short loc_44EC10
0x44EBE8: mov     ecx, ds:0B33A1Ch
0x44EBEE: push    ebx
0x44EBEF: push    esi
0x44EBF0: call    sub_438060
0x44EBF5: mov     ecx, ds:0B33A10h
0x44EBFB: push    5
0x44EBFD: call    sub_434020
0x44EC02: jmp     short loc_44EC10
0x44EC04: mov     edx, [esi]
0x44EC06: mov     eax, [edx+14Ch]
0x44EC0C: mov     ecx, esi
0x44EC0E: call    eax
0x44EC10: mov     edx, [esi]
0x44EC12: mov     eax, [edx+154h]
0x44EC18: mov     ecx, esi
0x44EC1A: call    eax
0x44EC1C: test    eax, eax
0x44EC1E: jz      short loc_44EC40
0x44EC20: mov     edx, [edi]
0x44EC22: mov     eax, [edx+14h]
0x44EC25: mov     ecx, edi
0x44EC27: call    eax
0x44EC29: mov     edx, [esi]
0x44EC2B: push    eax
0x44EC2C: mov     eax, [edx+154h]
0x44EC32: mov     ecx, esi
0x44EC34: call    eax
0x44EC36: mov     ecx, [esp+4+arg_44]
0x44EC3A: push    eax
0x44EC3B: call    sub_44CDF0
0x44EC40: cmp     ds:0B0558Ch, bl
0x44EC46: jz      loc_44ED4A
0x44EC4C: mov     ecx, [esp+a2]
0x44EC50: mov     al, [ecx+4]
0x44EC53: cmp     al, 23h ; '#'
0x44EC55: jz      loc_44ED4A
0x44EC5B: cmp     al, 24h ; '$'
0x44EC5D: jz      loc_44ED4A
0x44EC63: lea     edx, [esp+arg_4C]
0x44EC67: push    edx
0x44EC68: mov     edx, [esi]
0x44EC6A: lea     eax, [esp+4+arg_48]
0x44EC6E: push    eax
0x44EC6F: mov     eax, [edx+154h]
0x44EC75: mov     ecx, esi
0x44EC77: mov     [esp+8+arg_48], ebx
0x44EC7B: mov     [esp+8+arg_4C], ebx
0x44EC7F: call    eax
0x44EC81: push    eax
0x44EC82: call    sub_5367B0
0x44EC87: fld     dword ptr [edi+0Ch]
0x44EC8A: xor     eax, eax
0x44EC8C: fstp    [esp+0Ch+arg_58]
0x44EC90: add     esp, 0Ch
0x44EC93: cmp     ds:0B333A0h, ebx
0x44EC99: mov     [esp+arg_3C], eax
0x44EC9D: jz      short loc_44ECCB
0x44EC9F: mov     edx, [esi]
0x44ECA1: mov     eax, [edx+154h]
0x44ECA7: push    1
0x44ECA9: mov     ecx, esi
0x44ECAB: call    eax
0x44ECAD: push    eax
0x44ECAE: push    offset dword_B3FAB0
0x44ECB3: call    NiRTTI_Cast
0x44ECB8: mov     ecx, ds:0B333A0h
0x44ECBE: add     esp, 8
0x44ECC1: push    eax
0x44ECC2: call    sub_442770
0x44ECC7: mov     [esp+arg_3C], eax
0x44ECCB: fild    [esp+arg_4C]
0x44ECCF: sub     esp, 10h
0x44ECD2: mov     ecx, [esp+10h+arg_4C]
0x44ECD6: mov     edx, [esp+10h+arg_48]
0x44ECDA: fstp    [esp+10h+arg_5C]
0x44ECDE: fild    [esp+10h+arg_3C]
0x44ECE2: fstp    [esp+10h+arg_3C]
0x44ECE6: fild    [esp+10h+arg_48]
0x44ECEA: fstp    [esp+10h+arg_34]
0x44ECEE: fld     [esp+10h+arg_5C]
0x44ECF2: fld     st
0x44ECF4: fld     [esp+10h+arg_3C]
0x44ECF8: fld     st
0x44ECFA: fdivp   st(2), st
0x44ECFC: fxch    st(1)
0x44ECFE: fstp    [esp+10h+var_8]
0x44ED02: fld     [esp+10h+arg_58]
0x44ED06: fld     st
0x44ED08: fdivp   st(3), st
0x44ED0A: fxch    st(2)
0x44ED0C: fstp    [esp+10h+var_10]
0x44ED0F: fld     [esp+10h+arg_34]
0x44ED13: fld     st
0x44ED15: push    ecx
0x44ED16: fdivrp  st(2), st
0x44ED18: sub     esp, 10h
0x44ED1B: mov     ecx, edi
0x44ED1D: fxch    st(1)
0x44ED1F: fstp    [esp+24h+var_20+4]
0x44ED23: fdiv    st, st(1)
0x44ED25: fstp    qword ptr [esp]
0x44ED28: push    edx
0x44ED29: push    eax
0x44ED2A: mov     eax, [edi]
0x44ED2C: mov     edx, [eax+14h]
0x44ED2F: sub     esp, 8
0x44ED32: fstp    [esp+34h+var_34]
0x44ED35: call    edx
0x44ED37: push    eax
0x44ED38: push    offset aS_2fII_2f_2fI_; "%s\t%.2f\t%i\t%i\t%.2f\t%.2f\t%i\t%.2f"...
0x44ED3D: push    offset aTestmodelsColl; "TestModels - Collision Info.xls"
0x44ED42: call    nullsub_return0_0arg
0x44ED47: add     esp, 40h
0x44ED4A: mov     eax, [esi]
0x44ED4C: mov     edx, [eax+10h]
0x44ED4F: push    1
0x44ED51: mov     ecx, esi
0x44ED53: call    edx
0x44ED55: mov     eax, [esp+arg_50]
0x44ED59: mov     ecx, eax
0x44ED5B: add     eax, 1
0x44ED5E: cmp     ecx, 14h
0x44ED61: mov     [esp+arg_50], eax
0x44ED65: jle     short loc_44ED77
0x44ED67: mov     ecx, ds:0B333A0h; this
0x44ED6D: push    ebx; a2
0x44ED6E: call    sub_43FC20
0x44ED73: mov     [esp+arg_50], ebx
0x44ED77: mov     esi, dword ptr [esp+arg_40]
0x44ED7B: sub     [esp+arg_38], 1
0x44ED80: jnz     loc_44E8C3
0x44ED86: jmp     loc_44E7FA
0x44ED8B: cmp     [esp+arg_28], 0Eh
0x44ED90: jz      short loc_44ED7B
0x44ED92: cmp     [esp+arg_28], 8
0x44ED97: jz      short loc_44ED7B
0x44ED99: cmp     ds:0B0559Ch, bl
0x44ED9F: jz      short loc_44ED7B
0x44EDA1: mov     edx, [esi]
0x44EDA3: mov     eax, [edx+0D4h]
0x44EDA9: mov     ecx, esi
0x44EDAB: call    eax
0x44EDAD: mov     ecx, [esp+arg_28]
0x44EDB1: mov     edx, ds:0B081D0h[ecx*4]
0x44EDB8: push    eax
0x44EDB9: push    edx; ArgList
0x44EDBA: push    offset aNoModelSelecte; "No model selected for %s \"%s\"."
0x44EDBF: call    PrintError
0x44EDC4: add     esp, 0Ch
0x44EDC7: jmp     short loc_44ED7B
