0x520FA0: sub     esp, 10h
0x520FA3: push    esi
0x520FA4: push    edi
0x520FA5: mov     edi, ecx
0x520FA7: mov     edx, [edi+4]
0x520FAA: xor     eax, eax
0x520FAC: test    edx, edx
0x520FAE: mov     [esp+18h+var_4], edi
0x520FB2: jbe     short loc_520FCF
0x520FB4: mov     esi, [edi+8]
0x520FB7: mov     ecx, esi
0x520FB9: lea     esp, [esp+0]
0x520FC0: cmp     dword ptr [ecx], 0
0x520FC3: jnz     short loc_521019
0x520FC5: add     eax, 1
0x520FC8: add     ecx, 4
0x520FCB: cmp     eax, edx
0x520FCD: jb      short loc_520FC0
0x520FCF: xor     eax, eax
0x520FD1: test    eax, eax
0x520FD3: mov     [esp+18h+var_C], eax
0x520FD7: jz      loc_521092
0x520FDD: push    ebx
0x520FDE: push    ebp
0x520FDF: nop
0x520FE0: lea     eax, [esp+20h+var_10]
0x520FE4: push    eax
0x520FE5: lea     ecx, [esp+24h+var_8]
0x520FE9: push    ecx
0x520FEA: lea     edx, [esp+28h+var_C]
0x520FEE: push    edx
0x520FEF: mov     ecx, edi
0x520FF1: mov     [esp+2Ch+var_10], 0
0x520FF9: call    sub_452600
0x520FFE: mov     ecx, [esp+20h+var_10]
0x521002: test    ecx, ecx
0x521004: jz      loc_521085
0x52100A: mov     eax, [ecx+0Ch]
0x52100D: xor     ebp, ebp
0x52100F: test    eax, eax
0x521011: mov     [esp+20h+var_8], eax
0x521015: jbe     short loc_521085
0x521017: jmp     short loc_521024
0x521019: mov     eax, [esi+eax*4]
0x52101C: jmp     short loc_520FD1
0x52101E: align 10h
0x521020: mov     ecx, [esp+20h+var_10]
0x521024: push    0; int
0x521026: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x52102B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x521030: push    0; int
0x521032: push    ebp
0x521033: call    sub_494ED0
0x521038: push    eax; void *
0x521039: call    OblivionDynamicCast
0x52103E: mov     edi, eax
0x521040: add     esp, 14h
0x521043: test    edi, edi
0x521045: jz      short loc_521078
0x521047: mov     eax, [edi]
0x521049: mov     edx, [eax+6Ch]
0x52104C: mov     ecx, edi
0x52104E: call    edx
0x521050: mov     ecx, edi
0x521052: call    sub_5204C0
0x521057: mov     ebx, eax
0x521059: xor     esi, esi
0x52105B: test    ebx, ebx
0x52105D: jbe     short loc_521078
0x52105F: nop
0x521060: push    esi
0x521061: mov     ecx, edi
0x521063: call    sub_520260
0x521068: push    eax
0x521069: call    sub_520EB0
0x52106E: add     esi, 1
0x521071: add     esp, 4
0x521074: cmp     esi, ebx
0x521076: jb      short loc_521060
0x521078: add     ebp, 1
0x52107B: cmp     ebp, [esp+20h+var_8]
0x52107F: jb      short loc_521020
0x521081: mov     edi, [esp+20h+var_4]
0x521085: cmp     [esp+20h+var_C], 0
0x52108A: jnz     loc_520FE0
0x521090: pop     ebp
0x521091: pop     ebx
0x521092: pop     edi
0x521093: pop     esi
0x521094: add     esp, 10h
0x521097: retn
