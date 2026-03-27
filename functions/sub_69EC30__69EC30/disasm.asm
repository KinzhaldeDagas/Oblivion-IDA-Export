0x69EC30: mov     eax, ds:0B333C4h
0x69EC35: sub     esp, 0Ch
0x69EC38: push    esi
0x69EC39: push    edi
0x69EC3A: mov     edi, ecx
0x69EC3C: mov     ecx, [edi+1Ch]
0x69EC3F: cmp     ecx, eax
0x69EC41: jnz     short loc_69EC5B
0x69EC43: mov     al, [eax+588h]
0x69EC49: mov     [edi+29h], al
0x69EC4C: mov     ecx, ds:0B333C4h
0x69EC52: push    0
0x69EC54: call    PlayerCharacter_GetPlayerNode
0x69EC59: jmp     short loc_69EC65
0x69EC5B: mov     edx, [ecx]
0x69EC5D: mov     eax, [edx+154h]
0x69EC63: call    eax
0x69EC65: mov     ecx, [edi+30h]
0x69EC68: push    ecx
0x69EC69: mov     ecx, edi
0x69EC6B: mov     esi, eax
0x69EC6D: call    sub_69DC90
0x69EC72: test    esi, esi
0x69EC74: jz      loc_69EDBD
0x69EC7A: mov     ecx, [edi+1Ch]
0x69EC7D: mov     edx, [ecx]
0x69EC7F: mov     eax, [edx+190h]
0x69EC85: call    eax
0x69EC87: test    al, al
0x69EC89: jz      short loc_69EC9E
0x69EC8B: mov     ecx, [edi+1Ch]
0x69EC8E: mov     edx, [ecx]
0x69EC90: mov     eax, [edx+198h]
0x69EC96: push    0
0x69EC98: call    eax
0x69EC9A: test    al, al
0x69EC9C: jnz     short loc_69ECB3
0x69EC9E: mov     ecx, [edi+1Ch]
0x69ECA1: mov     edx, [ecx]
0x69ECA3: mov     eax, [edx+19Ch]
0x69ECA9: call    eax
0x69ECAB: test    al, al
0x69ECAD: jz      loc_69ED46
0x69ECB3: mov     edx, [esi]
0x69ECB5: mov     eax, [edx+8]
0x69ECB8: push    ebx
0x69ECB9: mov     ecx, esi
0x69ECBB: mov     bl, 1
0x69ECBD: call    eax
0x69ECBF: test    eax, eax
0x69ECC1: jz      short loc_69ED1B
0x69ECC3: cmp     word ptr [eax+0B6h], 0
0x69ECCB: jbe     short loc_69ED1B
0x69ECCD: mov     ecx, [eax+0B0h]
0x69ECD3: mov     ecx, [ecx]
0x69ECD5: test    ecx, ecx
0x69ECD7: jz      short loc_69ED1B
0x69ECD9: mov     edx, [ecx]
0x69ECDB: mov     eax, [edx+8]
0x69ECDE: call    eax
0x69ECE0: test    eax, eax
0x69ECE2: jz      short loc_69ED1B
0x69ECE4: cmp     word ptr [eax+0B6h], 0
0x69ECEC: jbe     short loc_69ED1B
0x69ECEE: push    0
0x69ECF0: mov     ecx, eax
0x69ECF2: call    sub_405790
0x69ECF7: test    eax, eax
0x69ECF9: jz      short loc_69ED1B
0x69ECFB: mov     edx, [eax]
0x69ECFD: mov     ecx, eax
0x69ECFF: mov     eax, [edx+8]
0x69ED02: call    eax
0x69ED04: test    eax, eax
0x69ED06: jz      short loc_69ED1B
0x69ED08: push    offset Vector3_InitValue?
0x69ED0D: lea     ecx, [eax+54h]
0x69ED10: call    sub_8AA390
0x69ED15: test    al, al
0x69ED17: jz      short loc_69ED1B
0x69ED19: xor     bl, bl
0x69ED1B: mov     eax, [esi+90h]
0x69ED21: mov     ecx, [esi+88h]
0x69ED27: mov     edx, [esi+8Ch]
0x69ED2D: test    bl, bl
0x69ED2F: mov     [esp+18h+var_4], eax
0x69ED33: pop     ebx
0x69ED34: jz      short loc_69ED99
0x69ED36: fld     [esp+14h+var_4]
0x69ED3A: fsub    qword ptr ds:0A4D910h
0x69ED40: fstp    [esp+14h+var_4]
0x69ED44: jmp     short loc_69ED99
0x69ED46: mov     ecx, [edi+1Ch]
0x69ED49: mov     edx, [ecx]
0x69ED4B: mov     eax, [edx+170h]
0x69ED51: call    eax
0x69ED53: test    eax, eax
0x69ED55: jz      short loc_69ED83
0x69ED57: mov     ecx, [edi+1Ch]
0x69ED5A: mov     edx, [ecx]
0x69ED5C: mov     eax, [edx+170h]
0x69ED62: call    eax
0x69ED64: cmp     byte ptr [eax+4], 18h
0x69ED68: jnz     short loc_69ED83
0x69ED6A: mov     eax, [esi+28h]
0x69ED6D: fld     dword ptr [esi+90h]
0x69ED73: mov     ecx, [esi+20h]
0x69ED76: mov     edx, [esi+24h]
0x69ED79: mov     [esp+14h+var_4], eax
0x69ED7D: fstp    [esp+14h+var_4]
0x69ED81: jmp     short loc_69ED99
0x69ED83: mov     eax, [esi+90h]
0x69ED89: mov     ecx, [esi+88h]
0x69ED8F: mov     edx, [esi+8Ch]
0x69ED95: mov     [esp+14h+var_4], eax
0x69ED99: mov     eax, [edi+30h]
0x69ED9C: test    eax, eax
0x69ED9E: jz      short loc_69EDBD
0x69EDA0: mov     [eax+54h], ecx
0x69EDA3: mov     ecx, [esp+14h+var_4]
0x69EDA7: mov     [eax+58h], edx
0x69EDAA: mov     [eax+5Ch], ecx
0x69EDAD: mov     edi, [edi+30h]
0x69EDB0: add     esi, 30h ; '0'
0x69EDB3: add     edi, 30h ; '0'
0x69EDB6: mov     ecx, 9
0x69EDBB: rep movsd
0x69EDBD: pop     edi
0x69EDBE: pop     esi
0x69EDBF: add     esp, 0Ch
0x69EDC2: retn
