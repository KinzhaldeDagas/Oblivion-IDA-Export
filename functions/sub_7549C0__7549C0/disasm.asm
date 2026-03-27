0x7549C0: sub     esp, 0D4h
0x7549C6: push    ebx
0x7549C7: mov     ebx, ecx
0x7549C9: mov     eax, [ebx+2Ch]
0x7549CC: push    ebp
0x7549CD: add     eax, 64h ; 'd'
0x7549D0: lea     ebp, [ebx+48h]
0x7549D3: push    eax
0x7549D4: mov     ecx, ebp
0x7549D6: call    sub_718B20
0x7549DB: test    al, al
0x7549DD: jnz     short loc_7549F9
0x7549DF: mov     eax, [ebx+24h]
0x7549E2: mov     eax, [eax+10h]
0x7549E5: add     eax, 64h ; 'd'
0x7549E8: push    eax
0x7549E9: lea     ecx, [ebx+7Ch]
0x7549EC: call    sub_718B20
0x7549F1: test    al, al
0x7549F3: jz      loc_754AA2
0x7549F9: mov     eax, [ebx+2Ch]
0x7549FC: test    eax, eax
0x7549FE: push    esi
0x7549FF: push    edi
0x754A00: jz      short loc_754A12
0x754A02: lea     esi, [eax+64h]
0x754A05: mov     ecx, 0Dh
0x754A0A: lea     edi, [esp+0E4h+var_9C]
0x754A0E: rep movsd
0x754A10: jmp     short loc_754A1B
0x754A12: lea     ecx, [esp+0E4h+var_9C]
0x754A16: call    sub_718A50
0x754A1B: mov     ecx, [ebx+24h]
0x754A1E: mov     eax, [ecx+10h]
0x754A21: lea     esi, [eax+64h]
0x754A24: mov     ecx, 0Dh
0x754A29: lea     edi, [esp+0E4h+var_68]
0x754A2D: lea     edx, [esp+0E4h+var_34]
0x754A34: rep movsd
0x754A36: push    edx
0x754A37: lea     ecx, [esp+0E8h+var_68]
0x754A3E: call    sub_718A80
0x754A43: lea     eax, [esp+0E4h+var_9C]
0x754A47: push    eax
0x754A48: lea     ecx, [esp+0E8h+var_D0]
0x754A4C: push    ecx
0x754A4D: lea     ecx, [esp+0ECh+var_34]
0x754A54: call    sub_53D7A0
0x754A59: fld     dword ptr [ebx+30h]
0x754A5C: mov     edx, [esp+0E4h+var_AC]
0x754A60: fmul    [esp+0E4h+var_A0]
0x754A64: mov     eax, [esp+0E4h+var_A8]
0x754A68: mov     ecx, [esp+0E4h+var_A4]
0x754A6C: mov     [ebx+3Ch], edx
0x754A6F: fstp    [esp+0E4h+var_D4]
0x754A73: mov     [ebx+40h], eax
0x754A76: fld     [esp+0E4h+var_D4]
0x754A7A: mov     [ebx+44h], ecx
0x754A7D: lea     edi, [ebx+7Ch]
0x754A80: fst     dword ptr [ebx+34h]
0x754A83: mov     ecx, 0Dh
0x754A88: fmul    st, st
0x754A8A: lea     esi, [esp+0E4h+var_68]
0x754A8E: rep movsd
0x754A90: fstp    dword ptr [ebx+38h]
0x754A93: mov     ecx, 0Dh
0x754A98: lea     esi, [esp+0E4h+var_9C]
0x754A9C: mov     edi, ebp
0x754A9E: rep movsd
0x754AA0: pop     edi
0x754AA1: pop     esi
0x754AA2: mov     ecx, [ebx+28h]
0x754AA5: test    ecx, ecx
0x754AA7: pop     ebp
0x754AA8: pop     ebx
0x754AA9: jz      short loc_754AB8
0x754AAB: mov     edx, [ecx]
0x754AAD: mov     eax, [edx+54h]
0x754AB0: add     esp, 0D4h
0x754AB6: jmp     eax
0x754AB8: add     esp, 0D4h
0x754ABE: retn
