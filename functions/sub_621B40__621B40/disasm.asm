0x621B40: sub     esp, 1Ch
0x621B43: fld     dword ptr ds:0A30634h
0x621B49: push    ebx
0x621B4A: push    ebp
0x621B4B: fstp    [esp+24h+var_18]
0x621B4F: push    esi
0x621B50: mov     esi, [esp+28h+arg_0]
0x621B54: push    edi
0x621B55: mov     ecx, esi
0x621B57: mov     dword ptr [esp+2Ch+var_14], 0Dh
0x621B5F: call    sub_5E0F50
0x621B64: mov     edx, [eax]
0x621B66: mov     ecx, eax
0x621B68: mov     eax, [edx+16Ch]
0x621B6E: push    40h ; '@'
0x621B70: call    eax
0x621B72: mov     ecx, esi
0x621B74: mov     byte ptr [esp+2Ch+var_1C+2], al
0x621B78: call    Actor_IsSwimming
0x621B7D: mov     edx, [esi]
0x621B7F: mov     byte ptr [esp+2Ch+var_1C+1], al
0x621B83: mov     eax, [edx+330h]
0x621B89: mov     ecx, esi
0x621B8B: call    eax
0x621B8D: test    eax, eax
0x621B8F: mov     edi, [esp+2Ch+arg_8]
0x621B93: jz      short loc_621BEA
0x621B95: mov     edx, [esi]
0x621B97: mov     eax, [edx+330h]
0x621B9D: mov     ecx, esi
0x621B9F: call    eax
0x621BA1: mov     edi, eax
0x621BA3: mov     ecx, edi
0x621BA5: call    sub_6135F0
0x621BAA: test    eax, eax
0x621BAC: jz      short loc_621BDE
0x621BAE: mov     ecx, edi
0x621BB0: call    sub_6135F0
0x621BB5: mov     ecx, eax
0x621BB7: call    Actor_IsSwimming
0x621BBC: test    al, al
0x621BBE: jz      short loc_621BDE
0x621BC0: mov     ecx, [edi+3Ch]
0x621BC3: call    Actor_IsSwimming
0x621BC8: test    al, al
0x621BCA: jnz     short loc_621BDE
0x621BCC: mov     ecx, [edi+3Ch]
0x621BCF: call    Actor_CanFightInWater
0x621BD4: test    al, al
0x621BD6: jnz     short loc_621BDE
0x621BD8: mov     byte ptr [esp+2Ch+arg_0], al
0x621BDC: jmp     short loc_621C1E
0x621BDE: mov     cl, [edi+174h]
0x621BE4: mov     byte ptr [esp+2Ch+arg_0], cl
0x621BE8: jmp     short loc_621C1E
0x621BEA: mov     ecx, [esi+58h]
0x621BED: test    ecx, ecx
0x621BEF: jz      short loc_621BFF
0x621BF1: mov     edx, [ecx]
0x621BF3: mov     eax, [edx+1C4h]
0x621BF9: push    edi
0x621BFA: push    esi
0x621BFB: call    eax
0x621BFD: jmp     short loc_621C0F
0x621BFF: push    0; char
0x621C01: push    0; int
0x621C03: push    1; char
0x621C05: push    edi; int
0x621C06: push    0; int
0x621C08: mov     ecx, esi; int
0x621C0A: call    sub_5F2820
0x621C0F: push    eax
0x621C10: push    edi
0x621C11: push    esi
0x621C12: call    sub_617590
0x621C17: add     esp, 0Ch
0x621C1A: mov     byte ptr [esp+2Ch+arg_0], al
0x621C1E: mov     ebx, [esp+2Ch+arg_4]
0x621C22: test    ebx, ebx
0x621C24: jz      short loc_621C2C
0x621C26: mov     dword ptr [esp+2Ch+var_14+4], ebx
0x621C2A: jmp     short loc_621C41
0x621C2C: mov     ecx, [esi+58h]
0x621C2F: mov     edx, [ecx]
0x621C31: mov     eax, [edx+0ECh]
0x621C37: push    1
0x621C39: call    eax
0x621C3B: mov     ebx, eax
0x621C3D: mov     dword ptr [esp+2Ch+var_14+4], eax
0x621C41: test    ebx, ebx
0x621C43: jz      loc_621D00
0x621C49: mov     eax, [ebx+8]
0x621C4C: push    0; int
0x621C4E: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x621C53: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x621C58: push    0; int
0x621C5A: push    eax; void *
0x621C5B: call    OblivionDynamicCast
0x621C60: mov     ebp, eax
0x621C62: add     esp, 14h
0x621C65: test    ebp, ebp
0x621C67: jnz     short loc_621C95
0x621C69: mov     edx, [esi]
0x621C6B: mov     eax, [edx+330h]
0x621C71: mov     ecx, esi
0x621C73: call    eax
0x621C75: test    eax, eax
0x621C77: jz      short loc_621CD0
0x621C79: mov     edx, [esi]
0x621C7B: mov     eax, [edx+330h]
0x621C81: xor     ebx, ebx
0x621C83: mov     ecx, esi
0x621C85: mov     dword ptr [esp+2Ch+var_14+4], ebx
0x621C89: call    eax
0x621C8B: mov     ebp, [eax+0A8h]
0x621C91: test    ebp, ebp
0x621C93: jz      short loc_621CD0
0x621C95: cmp     byte ptr [ebp+90h], 4
0x621C9C: jnz     short loc_621CD0
0x621C9E: mov     eax, [ebp+64h]
0x621CA1: test    eax, eax
0x621CA3: jz      short loc_621CD0
0x621CA5: mov     ecx, ebx
0x621CA7: lea     edi, [eax+24h]
0x621CAA: call    sub_4849C0
0x621CAF: fstp    [esp+2Ch+var_8]
0x621CB3: mov     edx, [edi]
0x621CB5: mov     eax, [edx]
0x621CB7: push    0
0x621CB9: mov     ecx, edi
0x621CBB: call    eax
0x621CBD: fcomp   [esp+2Ch+var_8]
0x621CC1: fnstsw  ax
0x621CC3: test    ah, 41h
0x621CC6: jnz     short loc_621CD0
0x621CC8: xor     ebx, ebx
0x621CCA: mov     dword ptr [esp+2Ch+var_14+4], ebx
0x621CCE: xor     ebp, ebp
0x621CD0: mov     edx, [esi]
0x621CD2: mov     eax, [edx+330h]
0x621CD8: mov     ecx, esi
0x621CDA: call    eax
0x621CDC: mov     edi, eax
0x621CDE: push    ebx
0x621CDF: push    esi
0x621CE0: mov     [esp+34h+var_C], edi
0x621CE4: call    sub_612A30
0x621CE9: add     esp, 8
0x621CEC: test    edi, edi
0x621CEE: mov     byte ptr [esp+2Ch+var_1C+3], al
0x621CF2: jz      short loc_621D07
0x621CF4: mov     cl, [edi+1BCh]
0x621CFA: mov     byte ptr [esp+2Ch+var_1C], cl
0x621CFE: jmp     short loc_621D4F
0x621D00: xor     ebp, ebp
0x621D02: jmp     loc_621C69
0x621D07: push    1
0x621D09: push    0
0x621D0B: push    11h
0x621D0D: mov     ecx, esi
0x621D0F: xor     bl, bl
0x621D11: call    Actor_LoadAnimGroup?
0x621D16: movzx   edi, ax
0x621D19: test    di, di
0x621D1C: jz      short loc_621D47
0x621D1E: mov     edx, [esi]
0x621D20: mov     eax, [edx+164h]
0x621D26: mov     ecx, esi
0x621D28: call    eax
0x621D2A: test    eax, eax
0x621D2C: jz      short loc_621D47
0x621D2E: mov     eax, [eax+9Ch]
0x621D34: lea     ecx, [esp+2Ch+var_8]
0x621D38: push    ecx
0x621D39: push    edi
0x621D3A: mov     ecx, eax
0x621D3C: call    sub_470960
0x621D41: test    al, al
0x621D43: jz      short loc_621D47
0x621D45: mov     bl, 1
0x621D47: mov     edi, [esp+2Ch+var_C]
0x621D4B: mov     byte ptr [esp+2Ch+var_1C], bl
0x621D4F: mov     ecx, esi
0x621D51: or      ebx, 0FFFFFFFFh
0x621D54: call    sub_5E1CF0
0x621D59: test    al, al
0x621D5B: jz      loc_621E33
0x621D61: test    ebp, ebp
0x621D63: jz      loc_621E33
0x621D69: cmp     byte ptr [esp+2Ch+var_1C+3], 0
0x621D6E: jz      loc_621E33
0x621D74: cmp     [esp+2Ch+arg_4], 0
0x621D79: jz      short loc_621D8B
0x621D7B: mov     edx, [esp+2Ch+arg_4]
0x621D7F: push    edx
0x621D80: push    esi
0x621D81: call    sub_612A90
0x621D86: add     esp, 8
0x621D89: jmp     short loc_621DF1
0x621D8B: cmp     dword ptr [esp+2Ch+var_14+4], 0
0x621D90: jnz     short loc_621DA6
0x621D92: fld1
0x621D94: push    0; int
0x621D96: push    ecx
0x621D97: fstp    [esp+34h+var_34]; float
0x621D9A: push    ebp; int
0x621D9B: push    esi; int
0x621D9C: call    sub_612560
0x621DA1: add     esp, 10h
0x621DA4: jmp     short loc_621DF1
0x621DA6: mov     eax, [esi]
0x621DA8: mov     edx, [eax+330h]
0x621DAE: mov     ecx, esi
0x621DB0: call    edx
0x621DB2: test    eax, eax
0x621DB4: jz      short loc_621DE4
0x621DB6: mov     ecx, [esi+58h]
0x621DB9: mov     eax, [ecx]
0x621DBB: mov     edx, [eax+0ECh]
0x621DC1: push    1
0x621DC3: call    edx
0x621DC5: test    eax, eax
0x621DC7: jz      short loc_621DE4
0x621DC9: mov     ecx, [esi+58h]
0x621DCC: mov     eax, [ecx]
0x621DCE: mov     edx, [eax+0ECh]
0x621DD4: push    1
0x621DD6: call    edx
0x621DD8: push    eax
0x621DD9: push    esi
0x621DDA: call    sub_612A90
0x621DDF: add     esp, 8
0x621DE2: jmp     short loc_621DF1
0x621DE4: mov     ecx, [esi+58h]
0x621DE7: mov     eax, [ecx]
0x621DE9: mov     edx, [eax+324h]
0x621DEF: call    edx
0x621DF1: mov     al, [ebp+90h]
0x621DF7: fstp    [esp+2Ch+var_18]
0x621DFB: cmp     al, 5
0x621DFD: jz      short loc_621E0D
0x621DFF: cmp     al, 4
0x621E01: jz      short loc_621E0D
0x621E03: mov     dword ptr [esp+2Ch+var_14], 1
0x621E0B: jmp     short loc_621E2A
0x621E0D: cmp     byte ptr [esp+2Ch+var_1C+1], 0
0x621E12: mov     dword ptr [esp+2Ch+var_14], 2
0x621E1A: jz      short loc_621E2A
0x621E1C: fldz
0x621E1E: mov     dword ptr [esp+2Ch+var_14], 0Dh
0x621E26: fstp    [esp+2Ch+var_18]
0x621E2A: mov     ecx, ebp
0x621E2C: call    TESObjectWEAP_GetWeaponSkillAV
0x621E31: mov     ebx, eax
0x621E33: test    edi, edi
0x621E35: jz      short loc_621E6F
0x621E37: mov     ecx, edi
0x621E39: call    sub_621270
0x621E3E: cmp     dword ptr [edi+70h], 0Ch
0x621E42: jnz     short loc_621E51
0x621E44: pop     edi
0x621E45: pop     esi
0x621E46: pop     ebp
0x621E47: mov     eax, 0Ch
0x621E4C: pop     ebx
0x621E4D: add     esp, 1Ch
0x621E50: retn
0x621E51: cmp     dword ptr [edi+6Ch], 0Bh
0x621E55: jz      short loc_621E6F
0x621E57: cmp     byte ptr [esp+2Ch+arg_0], 0
0x621E5C: mov     ebp, dword ptr [esp+2Ch+var_14]
0x621E60: jnz     short loc_621E89
0x621E62: cmp     ebp, 1
0x621E65: jnz     short loc_621E7A
0x621E67: fldz
0x621E69: fstp    [esp+2Ch+var_18]
0x621E6D: jmp     short loc_621E7A
0x621E6F: cmp     byte ptr [esp+2Ch+arg_0], 0
0x621E74: mov     ebp, dword ptr [esp+2Ch+var_14]
0x621E78: jnz     short loc_621E89
0x621E7A: mov     ecx, esi; this
0x621E7C: call    Actor_IsCreature
0x621E81: test    al, al
0x621E83: jz      loc_621F5E
0x621E89: test    edi, edi
0x621E8B: fldz
0x621E8D: fstp    [esp+2Ch+arg_4]
0x621E91: jz      short loc_621EEE
0x621E93: movzx   eax, byte ptr [edi+17Ch]
0x621E9A: push    eax
0x621E9B: push    3
0x621E9D: lea     ecx, [esp+34h+arg_4]
0x621EA1: push    ecx
0x621EA2: mov     ecx, edi
0x621EA4: call    sub_616980
0x621EA9: mov     ecx, eax
0x621EAB: fld     [esp+2Ch+arg_4]
0x621EAF: mov     [edi+7Ch], ecx
0x621EB2: fld     [esp+2Ch+var_18]
0x621EB6: fcomp   st(1)
0x621EB8: fnstsw  ax
0x621EBA: test    ah, 5
0x621EBD: jp      short loc_621EEC
0x621EBF: fldz
0x621EC1: fcomp   st(1)
0x621EC3: fnstsw  ax
0x621EC5: test    ah, 5
0x621EC8: jp      short loc_621EEC
0x621ECA: test    ecx, ecx
0x621ECC: jz      short loc_621EEC
0x621ECE: cmp     dword ptr [esp+2Ch+var_14+4], 0
0x621ED3: jnz     short loc_621EEC
0x621ED5: mov     ecx, [ecx]
0x621ED7: fstp    [esp+2Ch+var_18]
0x621EDB: add     ecx, 0Ch
0x621EDE: mov     ebp, 3
0x621EE3: call    EffectItemList_GetSchoolAV
0x621EE8: mov     ebx, eax
0x621EEA: jmp     short loc_621EEE
0x621EEC: fstp    st
0x621EEE: mov     edx, [esi]
0x621EF0: mov     eax, [edx+34Ch]
0x621EF6: push    1; float
0x621EF8: push    0; int
0x621EFA: mov     ecx, esi
0x621EFC: call    eax
0x621EFE: mov     [esp+34h+arg_4], eax
0x621F02: fild    [esp+34h+arg_4]
0x621F06: push    ecx
0x621F07: fstp    [esp+38h+var_38]; float
0x621F0A: call    sub_546C60
0x621F0F: fstp    [esp+38h+arg_4]
0x621F13: add     esp, 0Ch
0x621F16: fld     [esp+2Ch+arg_4]
0x621F1A: fld     [esp+2Ch+var_18]
0x621F1E: fcompp
0x621F20: fnstsw  ax
0x621F22: test    ah, 5
0x621F25: jp      short loc_621F5E
0x621F27: cmp     byte ptr [esp+2Ch+var_1C], 0
0x621F2C: jz      short loc_621F5E
0x621F2E: cmp     ebx, 0FFFFFFFFh
0x621F31: jz      short loc_621F54
0x621F33: mov     edx, [esi]
0x621F35: mov     eax, [edx+284h]
0x621F3B: push    ebx
0x621F3C: mov     ecx, esi
0x621F3E: call    eax
0x621F40: mov     edx, [esi]
0x621F42: mov     ebx, eax
0x621F44: mov     eax, [edx+284h]
0x621F4A: push    11h
0x621F4C: mov     ecx, esi
0x621F4E: call    eax
0x621F50: cmp     eax, ebx
0x621F52: jle     short loc_621F5E
0x621F54: fld     [esp+2Ch+arg_4]
0x621F58: xor     ebp, ebp
0x621F5A: fstp    [esp+2Ch+var_18]
0x621F5E: test    edi, edi
0x621F60: jz      short loc_621FD0
0x621F62: cmp     byte ptr [esp+2Ch+var_1C+1], 0
0x621F67: jnz     short loc_621FD0
0x621F69: movzx   ecx, byte ptr [edi+17Ch]
0x621F70: fldz
0x621F72: push    ecx
0x621F73: fstp    [esp+30h+arg_4]
0x621F77: push    4
0x621F79: lea     edx, [esp+34h+arg_4]
0x621F7D: push    edx
0x621F7E: mov     ecx, edi
0x621F80: call    sub_616980
0x621F85: cmp     byte ptr [esp+2Ch+var_1C+2], 0
0x621F8A: mov     ecx, eax
0x621F8C: mov     [edi+80h], ecx
0x621F92: jz      short loc_621F98
0x621F94: mov     dl, 1
0x621F96: jmp     short loc_621FA0
0x621F98: cmp     dword ptr [esp+2Ch+var_14+4], 0
0x621F9D: setz    dl
0x621FA0: fld     [esp+2Ch+arg_4]
0x621FA4: fld     [esp+2Ch+var_18]
0x621FA8: fcomp   st(1)
0x621FAA: fnstsw  ax
0x621FAC: test    ah, 5
0x621FAF: jp      short loc_621FCE
0x621FB1: test    ecx, ecx
0x621FB3: jz      short loc_621FCE
0x621FB5: test    dl, dl
0x621FB7: jz      short loc_621FCE
0x621FB9: mov     ecx, [ecx]
0x621FBB: fstp    [esp+2Ch+var_18]
0x621FBF: add     ecx, 0Ch
0x621FC2: mov     ebp, 4
0x621FC7: call    EffectItemList_GetSchoolAV
0x621FCC: jmp     short loc_621FD0
0x621FCE: fstp    st
0x621FD0: cmp     byte ptr [esp+2Ch+var_1C+2], 0
0x621FD5: jz      short loc_62201F
0x621FD7: cmp     ebp, 2
0x621FDA: jz      short loc_622001
0x621FDC: mov     eax, [esi]
0x621FDE: mov     edx, [eax+330h]
0x621FE4: mov     ecx, esi
0x621FE6: call    edx
0x621FE8: test    eax, eax
0x621FEA: jz      short loc_622001
0x621FEC: mov     eax, [esi]
0x621FEE: mov     edx, [eax+330h]
0x621FF4: mov     ecx, esi
0x621FF6: call    edx
0x621FF8: cmp     dword ptr [eax+80h], 0
0x621FFF: jz      short loc_62201F
0x622001: cmp     ebp, 3
0x622004: jnz     short loc_62201F
0x622006: test    edi, edi
0x622008: mov     ebp, 4
0x62200D: jz      short loc_62201F
0x62200F: mov     eax, [edi+80h]
0x622015: mov     ecx, [eax]
0x622017: add     ecx, 0Ch
0x62201A: call    EffectItemList_GetSchoolAV
0x62201F: cmp     [esp+2Ch+arg_10], 0
0x622024: jnz     loc_62215C
0x62202A: mov     edx, [esi]
0x62202C: mov     eax, [edx+284h]
0x622032: push    22h ; '"'
0x622034: mov     ecx, esi
0x622036: call    eax
0x622038: push    eax
0x622039: push    8
0x62203B: mov     ecx, esi
0x62203D: call    Actor_GetBaseCalcAVi
0x622042: mov     edx, [esi]
0x622044: mov     [esp+30h+arg_4], eax
0x622048: fild    [esp+30h+arg_4]
0x62204C: mov     eax, [edx+288h]
0x622052: push    ecx
0x622053: fstp    [esp+34h+var_34]; int
0x622056: push    8; float
0x622058: mov     ecx, esi
0x62205A: call    eax
0x62205C: push    ecx
0x62205D: fstp    [esp+3Ch+var_3C]; float
0x622060: call    sub_546CC0
0x622065: mov     edx, [esi]
0x622067: fstp    [esp+3Ch+arg_0]
0x62206B: mov     eax, [edx+25Ch]
0x622071: add     esp, 0Ch
0x622074: mov     ecx, esi
0x622076: call    eax
0x622078: test    al, al
0x62207A: jz      short loc_622082
0x62207C: fldz
0x62207E: fstp    [esp+2Ch+arg_4]
0x622082: fld     [esp+2Ch+arg_4]
0x622086: fld     [esp+2Ch+var_18]
0x62208A: fcomp   st(1)
0x62208C: fnstsw  ax
0x62208E: test    ah, 5
0x622091: jp      short loc_6220CA
0x622093: fld     dword ptr ds:0B37038h
0x622099: fcompp
0x62209B: fnstsw  ax
0x62209D: test    ah, 5
0x6220A0: jp      short loc_6220CC
0x6220A2: mov     ecx, esi
0x6220A4: call    sub_5E0F50
0x6220A9: mov     edx, [eax]
0x6220AB: mov     ecx, eax
0x6220AD: mov     eax, [edx+16Ch]
0x6220B3: push    20h ; ' '
0x6220B5: call    eax
0x6220B7: test    al, al
0x6220B9: jnz     short loc_6220CC
0x6220BB: fld     [esp+2Ch+arg_4]
0x6220BF: mov     ebp, 7
0x6220C4: fstp    [esp+2Ch+var_18]
0x6220C8: jmp     short loc_6220CC
0x6220CA: fstp    st
0x6220CC: cmp     [esp+2Ch+arg_14], 0
0x6220D1: jz      loc_62215C
0x6220D7: mov     edi, [esp+2Ch+arg_8]
0x6220DB: cmp     edi, ds:0B333C4h
0x6220E1: jnz     short loc_62215C
0x6220E3: mov     ecx, esi
0x6220E5: call    sub_5E0F50
0x6220EA: mov     edx, [eax]
0x6220EC: mov     ecx, eax
0x6220EE: mov     eax, [edx+16Ch]
0x6220F4: push    8
0x6220F6: call    eax
0x6220F8: test    al, al
0x6220FA: jz      short loc_62215C
0x6220FC: mov     edx, [esi]
0x6220FE: mov     eax, [edx+224h]
0x622104: push    edi
0x622105: mov     ecx, esi
0x622107: call    eax
0x622109: mov     edx, [esi]
0x62210B: push    eax
0x62210C: mov     eax, [edx+284h]
0x622112: push    21h ; '!'; int
0x622114: mov     ecx, esi
0x622116: call    eax
0x622118: fld     [esp+30h+arg_4]
0x62211C: push    eax; int
0x62211D: push    ecx
0x62211E: fstp    [esp+38h+var_38]; float
0x622121: call    sub_546D10
0x622126: fstp    [esp+38h+arg_4]
0x62212A: add     esp, 0Ch
0x62212D: fld     [esp+2Ch+arg_4]
0x622131: fld     [esp+2Ch+var_18]
0x622135: fcompp
0x622137: fnstsw  ax
0x622139: test    ah, 5
0x62213C: jp      short loc_62215C
0x62213E: mov     edx, [edi]
0x622140: mov     eax, [edx+370h]
0x622146: push    esi
0x622147: mov     ecx, edi
0x622149: call    eax
0x62214B: test    al, al
0x62214D: jz      short loc_62215C
0x62214F: fld     [esp+2Ch+arg_4]
0x622153: mov     ebp, 5
0x622158: fstp    [esp+2Ch+var_18]
0x62215C: mov     eax, [esp+2Ch+arg_C]
0x622160: test    eax, eax
0x622162: jz      short loc_62216A
0x622164: fld     [esp+2Ch+var_18]
0x622168: fstp    dword ptr [eax]
0x62216A: pop     edi
0x62216B: pop     esi
0x62216C: mov     eax, ebp
0x62216E: pop     ebp
0x62216F: pop     ebx
0x622170: add     esp, 1Ch
0x622173: retn
