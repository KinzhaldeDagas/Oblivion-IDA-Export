0x766880: sub     esp, 74h
0x766883: push    ebx
0x766884: mov     ebx, ecx
0x766886: cmp     byte ptr [ebx+6F0h], 0
0x76688D: jnz     loc_766F1B
0x766893: mov     eax, [esp+78h+arg_0]
0x766897: push    ebp
0x766898: mov     ebp, [eax+0B4h]
0x76689E: movzx   ecx, word ptr [ebp+8]
0x7668A2: test    cx, cx
0x7668A5: mov     [esp+7Ch+var_5C], ebp
0x7668A9: mov     [esp+7Ch+var_58], ecx
0x7668AD: jz      loc_766F1A
0x7668B3: mov     edx, [eax+24h]
0x7668B6: push    esi
0x7668B7: push    edi
0x7668B8: push    0; int
0x7668BA: push    0; int
0x7668BC: lea     esi, [eax+64h]
0x7668BF: mov     ecx, 0Dh
0x7668C4: lea     edi, [esp+8Ch+var_34]
0x7668C8: rep movsd
0x7668CA: mov     ecx, [eax+20h]
0x7668CD: push    0; char
0x7668CF: mov     [esp+90h+var_44], ecx
0x7668D3: mov     ecx, [eax+28h]
0x7668D6: push    0; NiSkinInstance *
0x7668D8: mov     [esp+94h+var_40], edx
0x7668DC: mov     edx, [eax+2Ch]
0x7668DF: mov     eax, [ebx+8A8h]
0x7668E5: push    ebp; NiGeometryData *
0x7668E6: mov     [esp+98h+var_3C], ecx
0x7668EA: mov     ecx, [ebx+8A0h]
0x7668F0: push    eax; NiGeometryGroup *
0x7668F1: mov     [esp+9Ch+var_38], edx
0x7668F5: call    NiGeometryGroup__AddGeometryDataToGroup
0x7668FA: mov     ecx, [esp+84h+var_44]
0x7668FE: mov     edx, [esp+84h+var_40]
0x766902: mov     eax, [esp+84h+var_3C]
0x766906: mov     [ebx+658h], ecx
0x76690C: mov     ecx, [esp+84h+var_38]
0x766910: mov     [ebx+65Ch], edx
0x766916: push    1
0x766918: mov     [ebx+660h], eax
0x76691E: mov     [ebx+664h], ecx
0x766924: mov     eax, [ebp+40h]
0x766927: movzx   ecx, word ptr [esp+88h+var_58]
0x76692C: mov     esi, [ebp+1Ch]
0x76692F: mov     edi, [ebp+28h]
0x766932: mov     ebp, [ebp+24h]
0x766935: push    0
0x766937: lea     edx, [esp+8Ch+var_74]
0x76693B: push    edx
0x76693C: push    eax
0x76693D: mov     [esp+94h+var_6C], ecx
0x766941: push    ecx
0x766942: mov     ecx, [ebx+8B4h]
0x766948: mov     [esp+98h+var_74], 0
0x766950: call    sub_778500
0x766955: test    eax, eax
0x766957: mov     [esp+84h+var_48], eax
0x76695B: jz      loc_766F18
0x766961: cmp     [esp+84h+var_74], 0
0x766966: jz      loc_766F18
0x76696C: test    edi, edi
0x76696E: mov     [esp+84h+var_70], 2
0x766976: mov     [esp+84h+var_68], 0Ch
0x76697E: jz      short loc_766990
0x766980: mov     [esp+84h+var_70], 102h
0x766988: mov     [esp+84h+var_68], 14h
0x766990: test    ebp, ebp
0x766992: jz      short loc_76699E
0x766994: or      [esp+84h+var_70], 40h
0x766999: add     [esp+84h+var_68], 4
0x76699E: mov     eax, [esp+84h+var_5C]
0x7669A2: mov     ecx, [eax+38h]; this
0x7669A5: push    1; streamCount
0x7669A7: mov     [esp+88h+var_64], ecx
0x7669AB: call    sub_777F70
0x7669B0: mov     eax, [esp+84h+var_6C]
0x7669B4: mov     ecx, [esp+84h+var_64]
0x7669B8: mov     edx, [esp+84h+var_70]
0x7669BC: push    edx
0x7669BD: mov     [ecx+14h], eax
0x7669C0: mov     [ecx+18h], eax
0x7669C3: call    sub_7780A0
0x7669C8: mov     eax, [esp+84h+var_64]
0x7669CC: cmp     dword ptr [eax+1Ch], 0
0x7669D0: jbe     short loc_7669DB
0x7669D2: mov     ecx, [eax+20h]
0x7669D5: mov     edx, [esp+84h+var_68]
0x7669D9: mov     [ecx], edx
0x7669DB: mov     ecx, [ebx+8B0h]
0x7669E1: push    0
0x7669E3: push    eax
0x7669E4: call    NiGeometryBufferData__RefreshVBChips
0x7669E9: mov     eax, [esp+84h+var_64]
0x7669ED: cmp     dword ptr [eax+1Ch], 0
0x7669F1: jbe     short loc_7669FE
0x7669F3: mov     eax, [eax+24h]
0x7669F6: mov     eax, [eax]
0x7669F8: mov     [esp+84h+var_60], eax
0x7669FC: jmp     short loc_766A0A
0x7669FE: mov     [esp+84h+var_60], 0
0x766A06: mov     eax, [esp+84h+var_60]
0x766A0A: mov     ecx, [eax+8]
0x766A0D: test    ecx, ecx
0x766A0F: jz      loc_766F18
0x766A15: mov     edx, [eax+10h]
0x766A18: push    edx; int
0x766A19: mov     edx, [eax+14h]
0x766A1C: mov     eax, [eax+0Ch]
0x766A1F: push    edx; Size
0x766A20: push    eax; int
0x766A21: push    ecx; int
0x766A22: mov     ecx, [ebx+8B0h]
0x766A28: call    sub_776C90
0x766A2D: test    edi, edi
0x766A2F: jz      loc_766BF3
0x766A35: test    ebp, ebp
0x766A37: jz      loc_766B06
0x766A3D: test    eax, eax
0x766A3F: jz      loc_766F18
0x766A45: mov     ecx, [esp+84h+var_6C]
0x766A49: test    ecx, ecx
0x766A4B: jbe     loc_766D4B
0x766A51: mov     [esp+84h+var_58], ecx
0x766A55: fld     dword ptr [esi]
0x766A57: fstp    dword ptr [eax]
0x766A59: fld     dword ptr [esi+4]
0x766A5C: fstp    dword ptr [eax+4]
0x766A5F: fld     dword ptr [esi+8]
0x766A62: fstp    dword ptr [eax+8]
0x766A65: fld     dword ptr [ebp+0Ch]
0x766A68: fmul    qword ptr ds:0A3DDD8h
0x766A6E: fstp    [esp+84h+var_54]
0x766A72: fld     [esp+84h+var_54]
0x766A76: fistp   [esp+84h+var_70]
0x766A7A: fld     dword ptr [ebp+0]
0x766A7D: mov     ecx, [esp+84h+var_70]
0x766A81: fmul    qword ptr ds:0A3DDD8h
0x766A87: fstp    [esp+84h+var_54]
0x766A8B: fld     [esp+84h+var_54]
0x766A8F: fistp   [esp+84h+var_6C]
0x766A93: fld     dword ptr [ebp+4]
0x766A96: mov     edx, [esp+84h+var_6C]
0x766A9A: fmul    qword ptr ds:0A3DDD8h
0x766AA0: mov     [esp+84h+var_50], edx
0x766AA4: fstp    [esp+84h+var_54]
0x766AA8: fld     [esp+84h+var_54]
0x766AAC: fistp   [esp+84h+var_68]
0x766AB0: fld     dword ptr [ebp+8]
0x766AB3: mov     edx, [esp+84h+var_68]
0x766AB7: fmul    qword ptr ds:0A3DDD8h
0x766ABD: fstp    [esp+84h+var_54]
0x766AC1: fld     [esp+84h+var_54]
0x766AC5: fistp   [esp+84h+var_5C]
0x766AC9: shl     ecx, 8
0x766ACC: or      ecx, [esp+84h+var_50]
0x766AD0: add     eax, 18h
0x766AD3: shl     ecx, 8
0x766AD6: or      ecx, edx
0x766AD8: shl     ecx, 8
0x766ADB: or      ecx, [esp+84h+var_5C]
0x766ADF: add     esi, 0Ch
0x766AE2: mov     [eax-0Ch], ecx
0x766AE5: fld     dword ptr [edi]
0x766AE7: fstp    dword ptr [eax-8]
0x766AEA: add     ebp, 10h
0x766AED: fld     dword ptr [edi+4]
0x766AF0: add     edi, 8
0x766AF3: sub     [esp+84h+var_58], 1
0x766AF8: fstp    dword ptr [eax-4]
0x766AFB: jnz     loc_766A55
0x766B01: jmp     loc_766D4B
0x766B06: test    eax, eax
0x766B08: jz      loc_766F18
0x766B0E: mov     edx, [esp+84h+var_6C]
0x766B12: xor     ebp, ebp
0x766B14: cmp     edx, 4
0x766B17: jl      loc_766BB8
0x766B1D: lea     ecx, [edx-4]
0x766B20: shr     ecx, 2
0x766B23: add     ecx, 1
0x766B26: lea     ebp, ds:0[ecx*4]
0x766B2D: lea     ecx, [ecx+0]
0x766B30: fld     dword ptr [esi]
0x766B32: add     esi, 30h ; '0'
0x766B35: fstp    dword ptr [eax]
0x766B37: add     edi, 20h ; ' '
0x766B3A: fld     dword ptr [esi-2Ch]
0x766B3D: add     eax, 50h ; 'P'
0x766B40: sub     ecx, 1
0x766B43: fstp    dword ptr [eax-4Ch]
0x766B46: fld     dword ptr [esi-28h]
0x766B49: fstp    dword ptr [eax-48h]
0x766B4C: fld     dword ptr [edi-20h]
0x766B4F: fstp    dword ptr [eax-44h]
0x766B52: fld     dword ptr [edi-1Ch]
0x766B55: fstp    dword ptr [eax-40h]
0x766B58: fld     dword ptr [esi-24h]
0x766B5B: fstp    dword ptr [eax-3Ch]
0x766B5E: fld     dword ptr [esi-20h]
0x766B61: fstp    dword ptr [eax-38h]
0x766B64: fld     dword ptr [esi-1Ch]
0x766B67: fstp    dword ptr [eax-34h]
0x766B6A: fld     dword ptr [edi-18h]
0x766B6D: fstp    dword ptr [eax-30h]
0x766B70: fld     dword ptr [edi-14h]
0x766B73: fstp    dword ptr [eax-2Ch]
0x766B76: fld     dword ptr [esi-18h]
0x766B79: fstp    dword ptr [eax-28h]
0x766B7C: fld     dword ptr [esi-14h]
0x766B7F: fstp    dword ptr [eax-24h]
0x766B82: fld     dword ptr [esi-10h]
0x766B85: fstp    dword ptr [eax-20h]
0x766B88: fld     dword ptr [edi-10h]
0x766B8B: fstp    dword ptr [eax-1Ch]
0x766B8E: fld     dword ptr [edi-0Ch]
0x766B91: fstp    dword ptr [eax-18h]
0x766B94: fld     dword ptr [esi-0Ch]
0x766B97: fstp    dword ptr [eax-14h]
0x766B9A: fld     dword ptr [esi-8]
0x766B9D: fstp    dword ptr [eax-10h]
0x766BA0: fld     dword ptr [esi-4]
0x766BA3: fstp    dword ptr [eax-0Ch]
0x766BA6: fld     dword ptr [edi-8]
0x766BA9: fstp    dword ptr [eax-8]
0x766BAC: fld     dword ptr [edi-4]
0x766BAF: fstp    dword ptr [eax-4]
0x766BB2: jnz     loc_766B30
0x766BB8: cmp     ebp, edx
0x766BBA: jnb     loc_766D4B
0x766BC0: sub     edx, ebp
0x766BC2: mov     ecx, edx
0x766BC4: fld     dword ptr [esi]
0x766BC6: add     esi, 0Ch
0x766BC9: fstp    dword ptr [eax]
0x766BCB: add     edi, 8
0x766BCE: fld     dword ptr [esi-8]
0x766BD1: add     eax, 14h
0x766BD4: sub     ecx, 1
0x766BD7: fstp    dword ptr [eax-10h]
0x766BDA: fld     dword ptr [esi-4]
0x766BDD: fstp    dword ptr [eax-0Ch]
0x766BE0: fld     dword ptr [edi-8]
0x766BE3: fstp    dword ptr [eax-8]
0x766BE6: fld     dword ptr [edi-4]
0x766BE9: fstp    dword ptr [eax-4]
0x766BEC: jnz     short loc_766BC4
0x766BEE: jmp     loc_766D4B
0x766BF3: test    ebp, ebp
0x766BF5: jz      loc_766CB0
0x766BFB: test    eax, eax
0x766BFD: jz      loc_766F18
0x766C03: mov     ecx, [esp+84h+var_6C]
0x766C07: test    ecx, ecx
0x766C09: jbe     loc_766D4B
0x766C0F: mov     [esp+84h+var_5C], ecx
0x766C13: fld     dword ptr [esi]
0x766C15: fstp    dword ptr [eax]
0x766C17: fld     dword ptr [esi+4]
0x766C1A: fstp    dword ptr [eax+4]
0x766C1D: fld     dword ptr [esi+8]
0x766C20: fstp    dword ptr [eax+8]
0x766C23: fld     dword ptr [ebp+0Ch]
0x766C26: fmul    qword ptr ds:0A3DDD8h
0x766C2C: fstp    [esp+84h+var_4C]
0x766C30: fld     [esp+84h+var_4C]
0x766C34: fistp   [esp+84h+var_70]
0x766C38: fld     dword ptr [ebp+0]
0x766C3B: mov     ecx, [esp+84h+var_70]
0x766C3F: fmul    qword ptr ds:0A3DDD8h
0x766C45: fstp    [esp+84h+var_4C]
0x766C49: fld     [esp+84h+var_4C]
0x766C4D: fistp   [esp+84h+var_6C]
0x766C51: fld     dword ptr [ebp+4]
0x766C54: mov     edx, [esp+84h+var_6C]
0x766C58: fmul    qword ptr ds:0A3DDD8h
0x766C5E: fstp    [esp+84h+var_4C]
0x766C62: fld     [esp+84h+var_4C]
0x766C66: fistp   [esp+84h+var_68]
0x766C6A: fld     dword ptr [ebp+8]
0x766C6D: mov     edi, [esp+84h+var_68]
0x766C71: fmul    qword ptr ds:0A3DDD8h
0x766C77: fstp    [esp+84h+var_4C]
0x766C7B: fld     [esp+84h+var_4C]
0x766C7F: fistp   [esp+84h+var_58]
0x766C83: shl     ecx, 8
0x766C86: or      ecx, edx
0x766C88: shl     ecx, 8
0x766C8B: or      ecx, edi
0x766C8D: shl     ecx, 8
0x766C90: or      ecx, [esp+84h+var_58]
0x766C94: add     eax, 10h
0x766C97: mov     [eax-4], ecx
0x766C9A: add     esi, 0Ch
0x766C9D: add     ebp, 10h
0x766CA0: sub     [esp+84h+var_5C], 1
0x766CA5: jnz     loc_766C13
0x766CAB: jmp     loc_766D4B
0x766CB0: test    eax, eax
0x766CB2: jz      loc_766F18
0x766CB8: mov     edx, [esp+84h+var_6C]
0x766CBC: xor     edi, edi
0x766CBE: cmp     edx, 4
0x766CC1: jl      short loc_766D24
0x766CC3: lea     ecx, [edx-4]
0x766CC6: shr     ecx, 2
0x766CC9: add     ecx, 1
0x766CCC: lea     edi, ds:0[ecx*4]
0x766CD3: fld     dword ptr [esi]
0x766CD5: add     esi, 30h ; '0'
0x766CD8: fstp    dword ptr [eax]
0x766CDA: add     eax, 30h ; '0'
0x766CDD: sub     ecx, 1
0x766CE0: fld     dword ptr [esi-2Ch]
0x766CE3: fstp    dword ptr [eax-2Ch]
0x766CE6: fld     dword ptr [esi-28h]
0x766CE9: fstp    dword ptr [eax-28h]
0x766CEC: fld     dword ptr [esi-24h]
0x766CEF: fstp    dword ptr [eax-24h]
0x766CF2: fld     dword ptr [esi-20h]
0x766CF5: fstp    dword ptr [eax-20h]
0x766CF8: fld     dword ptr [esi-1Ch]
0x766CFB: fstp    dword ptr [eax-1Ch]
0x766CFE: fld     dword ptr [esi-18h]
0x766D01: fstp    dword ptr [eax-18h]
0x766D04: fld     dword ptr [esi-14h]
0x766D07: fstp    dword ptr [eax-14h]
0x766D0A: fld     dword ptr [esi-10h]
0x766D0D: fstp    dword ptr [eax-10h]
0x766D10: fld     dword ptr [esi-0Ch]
0x766D13: fstp    dword ptr [eax-0Ch]
0x766D16: fld     dword ptr [esi-8]
0x766D19: fstp    dword ptr [eax-8]
0x766D1C: fld     dword ptr [esi-4]
0x766D1F: fstp    dword ptr [eax-4]
0x766D22: jnz     short loc_766CD3
0x766D24: cmp     edi, edx
0x766D26: jnb     short loc_766D4B
0x766D28: sub     edx, edi
0x766D2A: mov     ecx, edx
0x766D2C: lea     esp, [esp+0]
0x766D30: fld     dword ptr [esi]
0x766D32: add     esi, 0Ch
0x766D35: fstp    dword ptr [eax]
0x766D37: add     eax, 0Ch
0x766D3A: sub     ecx, 1
0x766D3D: fld     dword ptr [esi-8]
0x766D40: fstp    dword ptr [eax-8]
0x766D43: fld     dword ptr [esi-4]
0x766D46: fstp    dword ptr [eax-4]
0x766D49: jnz     short loc_766D30
0x766D4B: mov     ebp, [esp+84h+var_60]
0x766D4F: mov     ecx, [ebp+8]
0x766D52: push    ecx
0x766D53: mov     ecx, [ebx+8B0h]
0x766D59: call    sub_776D80
0x766D5E: mov     esi, [esp+84h+var_64]
0x766D62: mov     ecx, [ebx+0A94h]
0x766D68: mov     edx, [ecx]
0x766D6A: mov     edx, [edx+28h]
0x766D6D: lea     eax, [esp+84h+var_44]
0x766D71: push    eax
0x766D72: lea     eax, [esp+88h+var_34]
0x766D76: push    eax
0x766D77: mov     eax, [ebx+10h]
0x766D7A: push    eax
0x766D7B: mov     eax, [ebx+0Ch]
0x766D7E: push    eax
0x766D7F: push    esi
0x766D80: push    0
0x766D82: push    0
0x766D84: call    edx
0x766D86: test    eax, eax
0x766D88: jnz     loc_766F18
0x766D8E: mov     ecx, [ebx+0A94h]
0x766D94: mov     eax, [ecx]
0x766D96: mov     eax, [eax+2Ch]
0x766D99: lea     edx, [esp+84h+var_44]
0x766D9D: push    edx
0x766D9E: lea     edx, [esp+88h+var_34]
0x766DA2: push    edx
0x766DA3: mov     edx, [ebx+10h]
0x766DA6: push    edx
0x766DA7: mov     edx, [ebx+0Ch]
0x766DAA: push    edx
0x766DAB: push    esi
0x766DAC: push    0
0x766DAE: push    0
0x766DB0: call    eax
0x766DB2: mov     ecx, [ebx+0A94h]
0x766DB8: mov     edx, [ecx]
0x766DBA: mov     eax, [edx+48h]
0x766DBD: call    eax
0x766DBF: cmp     dword ptr [esi+1Ch], 0
0x766DC3: mov     edi, eax
0x766DC5: jbe     short loc_766DCE
0x766DC7: mov     ecx, [esi+20h]
0x766DCA: mov     ecx, [ecx]
0x766DCC: jmp     short loc_766DD0
0x766DCE: xor     ecx, ecx
0x766DD0: mov     eax, [ebx+280h]
0x766DD6: mov     edx, [eax]
0x766DD8: mov     edx, [edx+190h]
0x766DDE: push    ecx
0x766DDF: mov     ecx, [ebp+8]
0x766DE2: push    0
0x766DE4: push    ecx
0x766DE5: push    0
0x766DE7: push    eax
0x766DE8: call    edx
0x766DEA: mov     eax, [ebx+280h]
0x766DF0: mov     edx, [esp+78h+var_3C]
0x766DF4: mov     ecx, [eax]
0x766DF6: push    edx
0x766DF7: push    eax
0x766DF8: mov     eax, [ecx+1A0h]
0x766DFE: call    eax
0x766E00: test    edi, edi
0x766E02: jz      loc_766EF4
0x766E08: jmp     short loc_766E10
0x766E0A: align 10h
0x766E10: mov     ecx, [ebx+0A94h]
0x766E16: mov     edx, [ecx]
0x766E18: mov     edx, [edx+30h]
0x766E1B: lea     eax, [esp+78h+var_38]
0x766E1F: push    eax
0x766E20: lea     eax, [esp+7Ch+var_28]
0x766E24: push    eax
0x766E25: mov     eax, [ebx+10h]
0x766E28: push    eax
0x766E29: mov     eax, [ebx+0Ch]
0x766E2C: push    eax
0x766E2D: push    esi
0x766E2E: push    0
0x766E30: push    0
0x766E32: call    edx
0x766E34: mov     ecx, [ebx+0A94h]
0x766E3A: mov     eax, [ecx]
0x766E3C: mov     eax, [eax+34h]
0x766E3F: lea     edx, [esp+78h+var_38]
0x766E43: push    edx
0x766E44: lea     edx, [esp+7Ch+var_28]
0x766E48: push    edx
0x766E49: mov     edx, [ebx+10h]
0x766E4C: push    edx
0x766E4D: mov     edx, [ebx+0Ch]
0x766E50: push    edx
0x766E51: push    esi
0x766E52: push    0
0x766E54: push    0
0x766E56: push    0
0x766E58: call    eax
0x766E5A: mov     ecx, [ebx+0A94h]
0x766E60: mov     edx, [ecx]
0x766E62: mov     edx, [edx+38h]
0x766E65: lea     eax, [esp+78h+var_38]
0x766E69: push    eax
0x766E6A: lea     eax, [esp+7Ch+var_28]
0x766E6E: push    eax
0x766E6F: mov     eax, [ebx+10h]
0x766E72: push    eax
0x766E73: mov     eax, [ebx+0Ch]
0x766E76: push    eax
0x766E77: push    esi
0x766E78: push    0
0x766E7A: push    0
0x766E7C: push    0
0x766E7E: call    edx
0x766E80: mov     eax, [ebx+8ACh]
0x766E86: mov     ecx, [eax+0FF0h]
0x766E8C: mov     edx, [ecx]
0x766E8E: mov     eax, [edx+4]
0x766E91: call    eax
0x766E93: mov     edx, [esp+78h+var_68]
0x766E97: mov     eax, [ebx+280h]
0x766E9D: mov     ecx, [eax]
0x766E9F: shr     edx, 1
0x766EA1: push    edx
0x766EA2: mov     edx, [esi+14h]
0x766EA5: push    0
0x766EA7: push    edx
0x766EA8: mov     edx, [esi+34h]
0x766EAB: push    0
0x766EAD: push    edx
0x766EAE: push    2
0x766EB0: push    eax
0x766EB1: mov     eax, [ecx+148h]
0x766EB7: call    eax
0x766EB9: mov     ecx, [ebx+0A94h]
0x766EBF: mov     edx, [ecx]
0x766EC1: lea     eax, [esp+78h+var_38]
0x766EC5: push    eax
0x766EC6: lea     eax, [esp+7Ch+var_28]
0x766ECA: push    eax
0x766ECB: mov     eax, [ebx+10h]
0x766ECE: push    eax
0x766ECF: mov     eax, [ebx+0Ch]
0x766ED2: push    eax
0x766ED3: push    esi
0x766ED4: push    0
0x766ED6: push    0
0x766ED8: push    0
0x766EDA: mov     edx, [edx+40h]
0x766EDD: call    edx
0x766EDF: mov     ecx, [ebx+0A94h]
0x766EE5: mov     eax, [ecx]
0x766EE7: mov     edx, [eax+4Ch]
0x766EEA: call    edx
0x766EEC: test    eax, eax
0x766EEE: jnz     loc_766E10
0x766EF4: mov     ecx, [ebx+0A94h]
0x766EFA: mov     eax, [ecx]
0x766EFC: mov     eax, [eax+44h]
0x766EFF: lea     edx, [esp+78h+var_38]
0x766F03: push    edx
0x766F04: lea     edx, [esp+7Ch+var_28]
0x766F08: push    edx
0x766F09: mov     edx, [ebx+10h]
0x766F0C: push    edx
0x766F0D: mov     edx, [ebx+0Ch]
0x766F10: push    edx
0x766F11: push    esi
0x766F12: push    0
0x766F14: push    0
0x766F16: call    eax
0x766F18: pop     edi
0x766F19: pop     esi
0x766F1A: pop     ebp
0x766F1B: pop     ebx
0x766F1C: add     esp, 74h
0x766F1F: retn    4
