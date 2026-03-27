0x471640: sub     esp, 20h
0x471643: push    ebx
0x471644: push    ebp
0x471645: mov     ebp, ecx
0x471647: mov     bl, 1
0x471649: cmp     [ebp+0Eh], bl
0x47164C: push    esi
0x47164D: jnz     short loc_4716B6
0x47164F: mov     eax, ds:0B24260h
0x471654: fld     dword ptr ds:0A79E10h
0x47165A: mov     ecx, ds:0B24264h
0x471660: fstp    [esp+2Ch+var_4]
0x471664: mov     edx, ds:0B24268h
0x47166A: mov     [esp+2Ch+var_20], eax
0x47166E: mov     eax, ds:0B3CBA4h
0x471673: push    edi
0x471674: mov     [esp+30h+var_1C], ecx
0x471678: mov     ecx, ds:0B3CBA8h
0x47167E: mov     [esp+30h+var_18], edx
0x471682: mov     edx, ds:0B3CBACh
0x471688: mov     [esp+30h+var_14], eax
0x47168C: mov     eax, ds:0B3CBB0h
0x471691: mov     [esp+30h+var_10], ecx
0x471695: lea     edi, [ebp+30h]
0x471698: mov     ecx, 8
0x47169D: lea     esi, [esp+30h+var_20]
0x4716A1: mov     [esp+30h+var_C], edx
0x4716A5: mov     [esp+30h+var_8], eax
0x4716A9: rep movsd
0x4716AB: pop     edi
0x4716AC: pop     esi
0x4716AD: mov     [ebp+54h], bl
0x4716B0: pop     ebp
0x4716B1: pop     ebx
0x4716B2: add     esp, 20h
0x4716B5: retn
0x4716B6: lea     esi, [ebp+30h]
0x4716B9: push    offset Vector3_InitValue?
0x4716BE: mov     ecx, esi
0x4716C0: call    sub_471390
0x4716C5: push    offset dword_B27110
0x4716CA: mov     ecx, esi
0x4716CC: call    sub_471430
0x4716D1: fld1
0x4716D3: sub     esp, 8
0x4716D6: fstp    [esp+34h+X]; X
0x4716D9: call    __isnan
0x4716DE: add     esp, 8
0x4716E1: test    eax, eax
0x4716E3: jnz     short loc_4716FE
0x4716E5: fld1
0x4716E7: sub     esp, 8
0x4716EA: fstp    [esp+34h+X]; X
0x4716ED: call    __finite
0x4716F2: add     esp, 8
0x4716F5: test    eax, eax
0x4716F7: jz      short loc_4716FE
0x4716F9: fld1
0x4716FB: fstp    dword ptr [ebp+4Ch]
0x4716FE: pop     esi
0x4716FF: mov     [ebp+54h], bl
0x471702: pop     ebp
0x471703: pop     ebx
0x471704: add     esp, 20h
0x471707: retn
