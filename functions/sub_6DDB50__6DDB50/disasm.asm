0x6DDB50: sub     esp, 38h
0x6DDB53: push    ebx
0x6DDB54: mov     ebx, ecx
0x6DDB56: mov     eax, [ebx+4Ch]
0x6DDB59: test    eax, eax
0x6DDB5B: jz      loc_6DDC56
0x6DDB61: push    ebp
0x6DDB62: mov     ebp, [eax+10h]
0x6DDB65: push    esi
0x6DDB66: mov     esi, [eax+0Ch]
0x6DDB69: test    esi, esi
0x6DDB6B: push    edi
0x6DDB6C: mov     edi, [eax+8]
0x6DDB6F: jz      loc_6DDC53
0x6DDB75: mov     eax, [ebx+48h]
0x6DDB78: test    eax, eax
0x6DDB7A: jz      loc_6DDC53
0x6DDB80: cmp     dword ptr [eax+0Ch], 0
0x6DDB84: mov     cl, [eax+14h]
0x6DDB87: mov     [esp+48h+var_38], cl
0x6DDB8B: jz      loc_6DDC53
0x6DDB91: fld     [esp+48h+arg_0]
0x6DDB95: push    ecx
0x6DDB96: mov     ecx, ebx
0x6DDB98: fstp    [esp+4Ch+var_4C]; float
0x6DDB9B: call    sub_6C36B0
0x6DDBA0: test    al, al
0x6DDBA2: jnz     loc_6DDC53
0x6DDBA8: mov     edx, dword ptr [esp+48h+var_38]
0x6DDBAC: fld     dword ptr [ebx+28h]
0x6DDBAF: push    edx; char
0x6DDBB0: lea     eax, [ebx+44h]
0x6DDBB3: push    eax; int
0x6DDBB4: push    edi; int
0x6DDBB5: push    ebp; int
0x6DDBB6: push    esi; int
0x6DDBB7: push    ecx
0x6DDBB8: fstp    [esp+60h+var_60]; float
0x6DDBBB: call    sub_6BB270
0x6DDBC0: add     esp, 18h
0x6DDBC3: fstp    [esp+48h+arg_0]
0x6DDBC7: fld     [esp+48h+arg_0]
0x6DDBCB: lea     ecx, [esp+48h+arg_0]
0x6DDBCF: push    ecx; int
0x6DDBD0: lea     edx, [esp+4Ch+var_34]
0x6DDBD4: push    edx; int
0x6DDBD5: lea     eax, [esp+50h+var_38]
0x6DDBD9: push    eax; int
0x6DDBDA: push    ecx
0x6DDBDB: mov     ecx, ebx
0x6DDBDD: fstp    [esp+58h+var_58]; float
0x6DDBE0: call    sub_6DD710
0x6DDBE5: mov     cl, [ebx+3Ch]
0x6DDBE8: mov     ebp, [esp+48h+var_34]
0x6DDBEC: shr     cl, 5
0x6DDBEF: test    cl, 1
0x6DDBF2: jz      short loc_6DDC1F
0x6DDBF4: fld     [esp+48h+arg_0]
0x6DDBF8: mov     eax, dword ptr [esp+48h+var_38]
0x6DDBFC: lea     edx, [esp+48h+var_24]
0x6DDC00: push    edx; int
0x6DDC01: push    ecx
0x6DDC02: fstp    [esp+50h+var_50]; float
0x6DDC05: push    ebp; int
0x6DDC06: push    eax; int
0x6DDC07: mov     ecx, ebx
0x6DDC09: call    sub_6DC940
0x6DDC0E: mov     edi, [ebx+30h]
0x6DDC11: add     edi, 30h ; '0'
0x6DDC14: mov     ecx, 9
0x6DDC19: lea     esi, [esp+48h+var_24]
0x6DDC1D: rep movsd
0x6DDC1F: fld     [esp+48h+arg_0]
0x6DDC23: push    ecx
0x6DDC24: mov     ecx, dword ptr [esp+4Ch+var_38]
0x6DDC28: fstp    [esp+4Ch+var_4C]; float
0x6DDC2B: push    ebp; int
0x6DDC2C: push    ecx; int
0x6DDC2D: lea     edx, [esp+54h+var_30]
0x6DDC31: push    edx; int
0x6DDC32: mov     ecx, ebx
0x6DDC34: call    sub_6DC8E0
0x6DDC39: mov     ebx, [ebx+30h]
0x6DDC3C: mov     eax, [esp+48h+var_30]
0x6DDC40: add     ebx, 54h ; 'T'
0x6DDC43: mov     [ebx], eax
0x6DDC45: mov     ecx, [esp+48h+var_2C]
0x6DDC49: mov     [ebx+4], ecx
0x6DDC4C: mov     edx, [esp+48h+var_28]
0x6DDC50: mov     [ebx+8], edx
0x6DDC53: pop     edi
0x6DDC54: pop     esi
0x6DDC55: pop     ebp
0x6DDC56: pop     ebx
0x6DDC57: add     esp, 38h
0x6DDC5A: retn    4
