0x6E5990: sub     esp, 24h
0x6E5993: push    ebx
0x6E5994: mov     ebx, ecx
0x6E5996: fld     dword ptr [ebx+8]
0x6E5999: push    esi
0x6E599A: fld     [esp+2Ch+arg_0]
0x6E599E: push    edi
0x6E599F: fld     st
0x6E59A1: fucomp  st(2)
0x6E59A3: fnstsw  ax
0x6E59A5: fstp    st(1)
0x6E59A7: test    ah, 44h
0x6E59AA: jp      short loc_6E59D3
0x6E59AC: mov     edi, [esp+30h+arg_8]
0x6E59B0: fstp    st
0x6E59B2: lea     eax, [ebx+1Ch]
0x6E59B5: mov     esi, eax
0x6E59B7: mov     ecx, 8
0x6E59BC: rep movsd
0x6E59BE: mov     ecx, eax
0x6E59C0: call    sub_6CBC10
0x6E59C5: pop     edi
0x6E59C6: test    al, al
0x6E59C8: pop     esi
0x6E59C9: setz    al
0x6E59CC: pop     ebx
0x6E59CD: add     esp, 24h
0x6E59D0: retn    0Ch
0x6E59D3: fsub    dword ptr [ebx+0Ch]
0x6E59D6: mov     eax, [ebx+3Ch]
0x6E59D9: cmp     eax, 0FFFFh
0x6E59DE: fld     dword ptr [ebx+10h]
0x6E59E1: fsub    dword ptr [ebx+0Ch]
0x6E59E4: fdivp   st(1), st
0x6E59E6: fstp    [esp+30h+var_24]
0x6E59EA: jz      short loc_6E5A3D
0x6E59EC: fld     dword ptr [ebx+4Ch]
0x6E59EF: sub     esp, 8
0x6E59F2: fstp    [esp+38h+var_34]; float
0x6E59F6: lea     ecx, [esp+38h+var_10]
0x6E59FA: fld     dword ptr [ebx+48h]
0x6E59FD: fstp    [esp+38h+var_38]; float
0x6E5A00: push    eax; int
0x6E5A01: mov     eax, [ebx+18h]
0x6E5A04: fld     [esp+3Ch+var_24]
0x6E5A08: push    eax; int
0x6E5A09: push    3; int
0x6E5A0B: push    ecx; int
0x6E5A0C: push    ecx
0x6E5A0D: mov     ecx, [ebx+14h]
0x6E5A10: fstp    [esp+4Ch+var_4C]; float
0x6E5A13: call    sub_6E7470
0x6E5A18: fld     [esp+30h+var_10]
0x6E5A1C: fstp    [esp+30h+var_20]
0x6E5A20: lea     edx, [esp+30h+var_20]
0x6E5A24: fld     [esp+30h+var_C]
0x6E5A28: push    edx
0x6E5A29: fstp    [esp+34h+var_1C]
0x6E5A2D: lea     ecx, [ebx+1Ch]
0x6E5A30: fld     [esp+34h+var_8]
0x6E5A34: fstp    [esp+34h+var_18]
0x6E5A38: call    sub_471390
0x6E5A3D: mov     eax, [ebx+40h]
0x6E5A40: cmp     eax, 0FFFFh
0x6E5A45: jz      short loc_6E5AB4
0x6E5A47: fld     dword ptr [ebx+54h]
0x6E5A4A: sub     esp, 8
0x6E5A4D: fstp    [esp+38h+var_34]; float
0x6E5A51: lea     ecx, [esp+38h+var_10]
0x6E5A55: fld     dword ptr [ebx+50h]
0x6E5A58: fstp    [esp+38h+var_38]; float
0x6E5A5B: push    eax; int
0x6E5A5C: mov     eax, [ebx+18h]
0x6E5A5F: fld     [esp+3Ch+var_24]
0x6E5A63: push    eax; int
0x6E5A64: push    4; int
0x6E5A66: push    ecx; int
0x6E5A67: push    ecx
0x6E5A68: mov     ecx, [ebx+14h]
0x6E5A6B: fstp    [esp+4Ch+var_4C]; float
0x6E5A6E: call    sub_6E7470
0x6E5A73: fld     [esp+30h+var_4]
0x6E5A77: sub     esp, 10h
0x6E5A7A: fstp    [esp+40h+var_34]; float
0x6E5A7E: lea     ecx, [esp+40h+var_20]
0x6E5A82: fld     [esp+40h+var_8]
0x6E5A86: fstp    [esp+40h+var_38]; float
0x6E5A8A: fld     [esp+40h+var_C]
0x6E5A8E: fstp    [esp+40h+var_3C]; float
0x6E5A92: fld     [esp+40h+var_10]
0x6E5A96: fstp    [esp+40h+var_40]; float
0x6E5A99: call    sub_714C40
0x6E5A9E: lea     ecx, [esp+30h+var_20]
0x6E5AA2: call    sub_72FAC0
0x6E5AA7: lea     edx, [esp+30h+var_20]
0x6E5AAB: push    edx
0x6E5AAC: lea     ecx, [ebx+1Ch]
0x6E5AAF: call    sub_471430
0x6E5AB4: mov     eax, [ebx+44h]
0x6E5AB7: cmp     eax, 0FFFFh
0x6E5ABC: jz      short loc_6E5AFA
0x6E5ABE: fld     dword ptr [ebx+5Ch]
0x6E5AC1: sub     esp, 8
0x6E5AC4: fstp    [esp+38h+var_34]; float
0x6E5AC8: lea     ecx, [esp+38h+var_10]
0x6E5ACC: fld     dword ptr [ebx+58h]
0x6E5ACF: fstp    [esp+38h+var_38]; float
0x6E5AD2: push    eax; int
0x6E5AD3: mov     eax, [ebx+18h]
0x6E5AD6: fld     [esp+3Ch+var_24]
0x6E5ADA: push    eax; int
0x6E5ADB: push    1; int
0x6E5ADD: push    ecx; int
0x6E5ADE: push    ecx
0x6E5ADF: mov     ecx, [ebx+14h]
0x6E5AE2: fstp    [esp+4Ch+var_4C]; float
0x6E5AE5: call    sub_6E7470
0x6E5AEA: fld     [esp+30h+var_10]
0x6E5AEE: push    ecx
0x6E5AEF: lea     ecx, [ebx+1Ch]
0x6E5AF2: fstp    [esp+34h+var_34]; float
0x6E5AF5: call    sub_471560
0x6E5AFA: mov     edi, [esp+30h+arg_8]
0x6E5AFE: lea     eax, [ebx+1Ch]
0x6E5B01: mov     esi, eax
0x6E5B03: mov     ecx, 8
0x6E5B08: rep movsd
0x6E5B0A: mov     ecx, eax
0x6E5B0C: call    sub_6CBC10
0x6E5B11: test    al, al
0x6E5B13: jz      short loc_6E5B20
0x6E5B15: pop     edi
0x6E5B16: pop     esi
0x6E5B17: xor     al, al
0x6E5B19: pop     ebx
0x6E5B1A: add     esp, 24h
0x6E5B1D: retn    0Ch
0x6E5B20: fld     [esp+30h+arg_0]
0x6E5B24: pop     edi
0x6E5B25: pop     esi
0x6E5B26: fstp    dword ptr [ebx+8]
0x6E5B29: mov     al, 1
0x6E5B2B: pop     ebx
0x6E5B2C: add     esp, 24h
0x6E5B2F: retn    0Ch
