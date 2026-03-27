0x503A50: sub     esp, 8
0x503A53: mov     edx, [esp+8+l]
0x503A57: push    esi
0x503A58: mov     esi, [esp+0Ch+a4]
0x503A5C: lea     eax, [esp+0Ch+var_4]
0x503A60: push    eax
0x503A61: mov     eax, [esp+10h+arg_10]
0x503A65: lea     ecx, [esp+10h+var_8]
0x503A69: push    ecx; UInt16
0x503A6A: mov     ecx, [esp+14h+arg_C]
0x503A6E: push    edx; l
0x503A6F: mov     edx, [esp+18h+a3]
0x503A73: push    eax; a6
0x503A74: mov     eax, [esp+1Ch+arg_4]
0x503A78: push    ecx; a5
0x503A79: mov     ecx, [esp+20h+a1]
0x503A7D: push    esi; a4
0x503A7E: push    edx; a3
0x503A7F: push    eax; a2
0x503A80: push    ecx; a1
0x503A81: mov     dword ptr [esp+30h+var_8], 0
0x503A89: mov     [esp+30h+var_4], 0
0x503A91: call    Script_ExtractArgs
0x503A96: add     esp, 24h
0x503A99: test    al, al
0x503A9B: jz      short loc_503AEF
0x503A9D: push    0; int
0x503A9F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x503AA4: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x503AA9: push    0; int
0x503AAB: push    esi; void *
0x503AAC: call    OblivionDynamicCast
0x503AB1: add     esp, 14h
0x503AB4: test    eax, eax
0x503AB6: jz      short loc_503AEF
0x503AB8: mov     ecx, dword ptr [esp+0Ch+var_8]
0x503ABC: test    ecx, ecx
0x503ABE: jz      short loc_503AEF
0x503AC0: fild    [esp+0Ch+var_4]
0x503AC4: mov     edx, [eax]
0x503AC6: push    ecx
0x503AC7: fstp    [esp+10h+var_10]
0x503ACA: push    ecx
0x503ACB: mov     ecx, eax
0x503ACD: mov     eax, [edx+374h]
0x503AD3: call    eax
0x503AD5: mov     ecx, [esp+0Ch+arg_18]
0x503AD9: mov     edx, dword ptr [esp+0Ch+var_8]
0x503ADD: push    ecx
0x503ADE: push    0
0x503AE0: push    edx
0x503AE1: push    esi
0x503AE2: call    sub_4F4E20
0x503AE7: add     esp, 10h
0x503AEA: pop     esi
0x503AEB: add     esp, 8
0x503AEE: retn
0x503AEF: xor     al, al
0x503AF1: pop     esi
0x503AF2: add     esp, 8
0x503AF5: retn
