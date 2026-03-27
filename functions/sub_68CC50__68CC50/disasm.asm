0x68CC50: sub     esp, 44h
0x68CC53: push    ebx
0x68CC54: mov     ebx, ecx
0x68CC56: mov     ecx, [ebx+40h]
0x68CC59: test    ecx, ecx
0x68CC5B: jz      loc_68CD7C
0x68CC61: cmp     dword ptr [ebx+44h], 0
0x68CC65: jz      loc_68CD7C
0x68CC6B: mov     eax, [ebx+3Ch]
0x68CC6E: test    eax, eax
0x68CC70: jz      loc_68CD7C
0x68CC76: cmp     dword ptr [ebx+48h], 0
0x68CC7A: jz      loc_68CD7C
0x68CC80: cmp     byte ptr ds:0B3C0A4h, 0
0x68CC87: jnz     loc_68CD7C
0x68CC8D: mov     edx, [ecx+88h]
0x68CC93: push    esi
0x68CC94: mov     esi, [ecx+8Ch]
0x68CC9A: mov     ecx, [ecx+90h]
0x68CCA0: mov     [eax+54h], edx
0x68CCA3: mov     [eax+58h], esi
0x68CCA6: mov     [eax+5Ch], ecx
0x68CCA9: mov     [esp+4Ch+var_38], esi
0x68CCAD: mov     esi, [ebx+44h]
0x68CCB0: fld     dword ptr [esi+88h]
0x68CCB6: add     esi, 88h ; 'ˆ'
0x68CCBC: mov     [esp+4Ch+var_3C], edx
0x68CCC0: fsub    [esp+4Ch+var_3C]
0x68CCC4: mov     [esp+4Ch+var_34], ecx
0x68CCC8: push    edi
0x68CCC9: fstp    [esp+50h+var_30]
0x68CCCD: lea     ecx, [esp+50h+var_30]
0x68CCD1: fld     dword ptr [esi+4]
0x68CCD4: fsub    [esp+50h+var_38]
0x68CCD8: fstp    [esp+50h+var_2C]
0x68CCDC: fldz
0x68CCDE: fstp    [esp+50h+var_28]
0x68CCE2: call    sub_404C90
0x68CCE7: fstp    [esp+50h+var_44]
0x68CCEB: fld     dword ptr [esi+8]
0x68CCEE: fsub    [esp+50h+var_34]
0x68CCF2: fstp    [esp+50h+var_40]
0x68CCF6: fld     [esp+50h+var_40]
0x68CCFA: fld     [esp+50h+var_44]
0x68CCFE: call    sub_98598A
0x68CD03: fstp    [esp+50h+var_40]
0x68CD07: fld     [esp+50h+var_40]
0x68CD0B: sub     esp, 8
0x68CD0E: fchs
0x68CD10: fstp    [esp+58h+var_54]; float
0x68CD14: fldz
0x68CD16: fstp    [esp+58h+var_58]; float
0x68CD19: fld     [esp+58h+var_30]
0x68CD1D: fld     [esp+58h+var_2C]
0x68CD21: call    sub_98598A
0x68CD26: fstp    [esp+58h+var_40]
0x68CD2A: fld     [esp+58h+var_40]
0x68CD2E: push    ecx
0x68CD2F: lea     ecx, [esp+5Ch+var_24]
0x68CD33: fstp    [esp+5Ch+var_5C]; float
0x68CD36: call    sub_7118E0
0x68CD3B: mov     edi, [ebx+3Ch]
0x68CD3E: add     edi, 30h ; '0'
0x68CD41: mov     ecx, 9
0x68CD46: lea     esi, [esp+50h+var_24]
0x68CD4A: rep movsd
0x68CD4C: mov     ebx, [ebx+48h]
0x68CD4F: mov     ecx, offset fAbsorbMoveSpeed
0x68CD54: call    GameSetting_GetSafeFloatPointer
0x68CD59: push    0; int
0x68CD5B: fld     dword ptr [eax]
0x68CD5D: sub     esp, 0Ch
0x68CD60: mov     ecx, ebx
0x68CD62: fstp    [esp+60h+var_58]; float
0x68CD66: fld     [esp+60h+var_44]
0x68CD6A: fstp    [esp+60h+var_5C]; float
0x68CD6E: fld     [esp+60h+arg_0]
0x68CD72: fstp    [esp+60h+var_60]; float
0x68CD75: call    sub_7F3300
0x68CD7A: pop     edi
0x68CD7B: pop     esi
0x68CD7C: pop     ebx
0x68CD7D: add     esp, 44h
0x68CD80: retn    4
