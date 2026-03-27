0x620E80: push    ecx
0x620E81: push    ebx
0x620E82: push    esi
0x620E83: mov     esi, ecx
0x620E85: cmp     dword ptr [esi+6Ch], 8
0x620E89: mov     ecx, [esi+3Ch]
0x620E8C: mov     eax, [ecx+58h]
0x620E8F: push    edi
0x620E90: mov     [esp+10h+var_4], eax
0x620E94: jz      loc_620FBB
0x620E9A: mov     edx, [ecx]
0x620E9C: mov     eax, [edx+25Ch]
0x620EA2: call    eax
0x620EA4: test    al, al
0x620EA6: jz      short loc_620EF3
0x620EA8: mov     edi, 0Dh
0x620EAD: cmp     [esi+70h], edi
0x620EB0: mov     byte ptr [esi+4Dh], 1
0x620EB4: jz      short loc_620EC2
0x620EB6: fld     dword ptr ds:0A30634h
0x620EBC: fstp    dword ptr [esi+188h]
0x620EC2: mov     ecx, esi
0x620EC4: mov     [esi+70h], edi
0x620EC7: call    sub_6160B0
0x620ECC: mov     eax, [esi+70h]
0x620ECF: cmp     eax, 2
0x620ED2: jz      short loc_620ED9
0x620ED4: cmp     eax, 4
0x620ED7: jnz     short loc_620EE6
0x620ED9: pop     edi
0x620EDA: mov     ecx, esi
0x620EDC: pop     esi
0x620EDD: pop     ebx
0x620EDE: add     esp, 4
0x620EE1: jmp     sub_61FE90
0x620EE6: pop     edi
0x620EE7: mov     ecx, esi
0x620EE9: pop     esi
0x620EEA: pop     ebx
0x620EEB: add     esp, 4
0x620EEE: jmp     sub_61FEF0
0x620EF3: mov     ebx, [esi+3Ch]
0x620EF6: push    ebp
0x620EF7: push    8
0x620EF9: mov     ecx, esi
0x620EFB: mov     byte ptr [esi+4Fh], 0
0x620EFF: call    sub_619920
0x620F04: mov     ebp, [esi+3Ch]
0x620F07: mov     edi, [ebp+0]
0x620F0A: push    0
0x620F0C: push    2
0x620F0E: mov     ecx, esi
0x620F10: add     edi, 308h
0x620F16: call    sub_6135F0
0x620F1B: mov     edx, [edi]
0x620F1D: push    eax
0x620F1E: mov     ecx, ebp
0x620F20: call    edx
0x620F22: mov     ebp, [esi+3Ch]
0x620F25: mov     edi, [ebp+0]
0x620F28: push    0
0x620F2A: push    0
0x620F2C: push    1
0x620F2E: push    1
0x620F30: mov     ecx, esi
0x620F32: add     edi, 318h
0x620F38: call    sub_6135F0
0x620F3D: push    eax
0x620F3E: mov     eax, [edi]
0x620F40: mov     ecx, ebp
0x620F42: call    eax
0x620F44: mov     edx, [ebx]
0x620F46: mov     eax, [edx+334h]
0x620F4C: push    1
0x620F4E: mov     ecx, ebx
0x620F50: call    eax
0x620F52: test    al, al
0x620F54: pop     ebp
0x620F55: jz      loc_6210C9
0x620F5B: mov     ecx, [esi+3Ch]
0x620F5E: push    0; int
0x620F60: push    offset ??_R0?AVFleePackage@@@8; struct TypeDescriptor *
0x620F65: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x620F6A: push    0; int
0x620F6C: call    sub_5E0380
0x620F71: push    eax; void *
0x620F72: call    OblivionDynamicCast
0x620F77: mov     ebx, eax
0x620F79: add     esp, 14h
0x620F7C: test    ebx, ebx
0x620F7E: jz      short loc_620FA5
0x620F80: mov     edi, [esi+40h]
0x620F83: test    edi, edi
0x620F85: jz      short loc_620FA5
0x620F87: cmp     dword ptr [edi+4], 0
0x620F8B: jnz     short loc_620F92
0x620F8D: cmp     dword ptr [edi], 0
0x620F90: jz      short loc_620FA5
0x620F92: mov     ecx, [edi]
0x620F94: mov     edx, [ecx]
0x620F96: push    edx
0x620F97: mov     ecx, ebx
0x620F99: call    sub_626C90
0x620F9E: mov     edi, [edi+4]
0x620FA1: test    edi, edi
0x620FA3: jnz     short loc_620F87
0x620FA5: mov     ecx, [esi+3Ch]; this
0x620FA8: call    Actor_IsCreature
0x620FAD: test    al, al
0x620FAF: jnz     short loc_620FBB
0x620FB1: mov     ecx, [esi+3Ch]
0x620FB4: push    0
0x620FB6: call    sub_5E6D70
0x620FBB: mov     ecx, [esi+3Ch]
0x620FBE: call    Actor_IsBlocking
0x620FC3: test    al, al
0x620FC5: jz      short loc_620FD1
0x620FC7: mov     ecx, [esi+3Ch]
0x620FCA: push    0; float
0x620FCC: call    sub_5F4AE0
0x620FD1: cmp     dword ptr [esi+70h], 0Ch
0x620FD5: mov     edi, 0Dh
0x620FDA: jnz     short loc_62103A
0x620FDC: mov     ecx, [esi+3Ch]
0x620FDF: call    Actor_IsSwimming
0x620FE4: test    al, al
0x620FE6: jnz     short loc_62103A
0x620FE8: mov     ecx, [esi+3Ch]
0x620FEB: push    0; int
0x620FED: push    offset ??_R0?AVFleePackage@@@8; struct TypeDescriptor *
0x620FF2: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x620FF7: push    0; int
0x620FF9: call    sub_5E0380
0x620FFE: push    eax; void *
0x620FFF: call    OblivionDynamicCast
0x621004: add     esp, 14h
0x621007: test    eax, eax
0x621009: jz      short loc_62101D
0x62100B: mov     eax, [esi+3Ch]
0x62100E: mov     ecx, [eax+58h]
0x621011: mov     edx, [ecx]
0x621013: mov     eax, [edx+178h]
0x621019: push    0
0x62101B: call    eax
0x62101D: cmp     [esi+70h], edi
0x621020: jz      short loc_62102E
0x621022: fld     dword ptr ds:0A30634h
0x621028: fstp    dword ptr [esi+188h]
0x62102E: push    0
0x621030: mov     ecx, esi
0x621032: mov     [esi+70h], edi
0x621035: call    sub_619920
0x62103A: mov     ecx, [esp+10h+var_4]
0x62103E: mov     edx, [ecx]
0x621040: mov     eax, [edx+184h]
0x621046: call    eax
0x621048: cmp     eax, esi
0x62104A: jnz     short loc_621071
0x62104C: cmp     [esi+70h], edi
0x62104F: mov     byte ptr [esi+4Dh], 1
0x621053: jz      short loc_621061
0x621055: fld     dword ptr ds:0A30634h
0x62105B: fstp    dword ptr [esi+188h]
0x621061: mov     [esi+70h], edi
0x621064: pop     edi
0x621065: mov     ecx, esi
0x621067: pop     esi
0x621068: pop     ebx
0x621069: add     esp, 4
0x62106C: jmp     sub_61D320
0x621071: mov     ecx, [esi+3Ch]
0x621074: push    0; int
0x621076: push    offset ??_R0?AVFleePackage@@@8; struct TypeDescriptor *
0x62107B: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x621080: push    0; int
0x621082: call    sub_5E0380
0x621087: push    eax; void *
0x621088: call    OblivionDynamicCast
0x62108D: add     esp, 14h
0x621090: test    eax, eax
0x621092: jz      short loc_6210C9
0x621094: fld     dword ptr [eax+4Ch]
0x621097: fld     dword ptr ds:0B36D50h
0x62109D: fcompp
0x62109F: fnstsw  ax
0x6210A1: test    ah, 41h
0x6210A4: jp      short loc_6210C9
0x6210A6: mov     ecx, [esi+3Ch]
0x6210A9: mov     ecx, [ecx+58h]
0x6210AC: mov     edx, [ecx]
0x6210AE: mov     eax, [edx+178h]
0x6210B4: push    0
0x6210B6: call    eax
0x6210B8: mov     esi, [esi+3Ch]
0x6210BB: mov     edx, [esi]
0x6210BD: mov     eax, [edx+340h]
0x6210C3: push    0
0x6210C5: mov     ecx, esi
0x6210C7: call    eax
0x6210C9: pop     edi
0x6210CA: pop     esi
0x6210CB: pop     ebx
0x6210CC: pop     ecx
0x6210CD: retn
