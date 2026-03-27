0x558840: push    0FFFFFFFFh
0x558842: push    offset SEH_558840
0x558847: mov     eax, large fs:0
0x55884D: push    eax
0x55884E: sub     esp, 68h
0x558851: push    ebx
0x558852: push    ebp
0x558853: push    esi
0x558854: push    edi
0x558855: mov     eax, ds:0B30AACh
0x55885A: xor     eax, esp
0x55885C: push    eax
0x55885D: lea     eax, [esp+88h+var_C]
0x558861: mov     large fs:0, eax
0x558867: mov     edi, ecx
0x558869: mov     [esp+88h+var_68], edi
0x55886D: mov     ebx, [esp+88h+arg_4]
0x558874: push    ebx
0x558875: call    sub_5508A0
0x55887A: xor     ebp, ebp
0x55887C: add     esp, 4
0x55887F: cmp     [edi+8], ebp
0x558882: mov     esi, eax
0x558884: jz      loc_558AFB
0x55888A: cmp     [esp+88h+arg_0], ebp
0x558891: jnz     short loc_5588A7
0x558893: call    sub_5538D0
0x558898: cmp     eax, ebp
0x55889A: mov     [esp+88h+arg_0], eax
0x5588A1: jz      loc_558AFB
0x5588A7: cmp     ebx, ebp
0x5588A9: mov     [esp+88h+var_30], ebp
0x5588AD: mov     [esp+88h+var_2C], ebp
0x5588B1: mov     [esp+88h+var_28], 0
0x5588B6: jz      short loc_5588DD
0x5588B8: mov     ecx, [ebx+0B4h]
0x5588BE: cmp     ecx, ebp
0x5588C0: jz      short loc_5588DD
0x5588C2: push    1
0x5588C4: call    sub_728AB0
0x5588C9: test    al, al
0x5588CB: jz      short loc_5588DD
0x5588CD: mov     ecx, [ebx+0B4h]
0x5588D3: lea     eax, [esp+88h+var_30]
0x5588D7: push    eax
0x5588D8: call    sub_728B60
0x5588DD: cmp     esi, ebp
0x5588DF: jz      short loc_55890B
0x5588E1: mov     edx, [esi]
0x5588E3: mov     eax, [edx+54h]
0x5588E6: mov     ecx, esi
0x5588E8: call    eax
0x5588EA: test    eax, eax
0x5588EC: jz      short loc_55890B
0x5588EE: mov     edx, [esi]
0x5588F0: mov     eax, [edx+54h]
0x5588F3: mov     ecx, esi
0x5588F5: call    eax
0x5588F7: mov     edx, [esi]
0x5588F9: mov     [esp+88h+var_64], eax
0x5588FD: mov     eax, [edx+58h]
0x558900: push    ebp
0x558901: mov     ecx, esi
0x558903: call    eax
0x558905: mov     [esp+88h+var_6C], eax
0x558909: jmp     short loc_558931
0x55890B: cmp     [esp+88h+var_30], ebp
0x55890F: jz      loc_558AFB
0x558915: mov     eax, [ebx+0B4h]
0x55891B: movzx   eax, word ptr [eax+8]
0x55891F: movzx   ecx, ax
0x558922: mov     [esp+88h+var_6C], ecx
0x558926: mov     [esp+88h+var_64], ebp
0x55892A: mov     byte ptr ds:0B39D84h, 1
0x558931: push    edi
0x558932: call    sub_551930
0x558937: add     esp, 4
0x55893A: test    al, al
0x55893C: jnz     short loc_55899A
0x55893E: mov     ecx, [edi+8]
0x558941: cmp     [ecx+8], ebp
0x558944: jnz     short loc_55898E
0x558946: call    BSStringT_GetLen
0x55894B: test    eax, eax
0x55894D: jz      loc_558AFB
0x558953: push    24h ; '$'; Size
0x558955: call    FormHeapAlloc
0x55895A: add     esp, 4
0x55895D: mov     [esp+88h+var_44], eax
0x558961: cmp     eax, ebp
0x558963: mov     [esp+88h+var_4], ebp
0x55896A: jz      short loc_55897B
0x55896C: mov     edx, [edi+8]
0x55896F: mov     edx, [edx]
0x558971: push    edx; Src
0x558972: mov     ecx, eax
0x558974: call    sub_558770
0x558979: jmp     short loc_55897D
0x55897B: xor     eax, eax
0x55897D: mov     edx, [edi+8]
0x558980: mov     [esp+88h+var_4], 0FFFFFFFFh
0x55898B: mov     [edx+8], eax
0x55898E: mov     eax, [edi+8]
0x558991: cmp     [eax+8], ebp
0x558994: jz      loc_558AFB
0x55899A: push    0; Comperand
0x55899C: lea     ebp, [edi+14h]
0x55899F: push    1; Exchange
0x5589A1: push    ebp; Destination
0x5589A2: mov     [esp+94h+Destination], ebp
0x5589A6: mov     [esp+94h+var_38], ebp
0x5589AA: call    dword ptr ds:0A2813Ch
0x5589B0: test    eax, eax
0x5589B2: setz    al
0x5589B5: mov     [esp+88h+var_34], al
0x5589B9: test    al, al
0x5589BB: mov     [esp+88h+var_4], 1
0x5589C6: jz      loc_558AFB
0x5589CC: mov     ecx, [esp+88h+arg_0]
0x5589D3: xor     esi, esi
0x5589D5: mov     [esp+88h+var_74], esi
0x5589D9: mov     [esp+88h+var_70], ecx
0x5589DD: jmp     short loc_5589E4
0x5589DF: align 10h
0x5589E0: mov     ebp, [esp+88h+Destination]
0x5589E4: mov     edx, [edi+8]
0x5589E7: mov     eax, [edx+8]
0x5589EA: mov     edx, [eax+esi+8]
0x5589EE: test    edx, edx
0x5589F0: lea     eax, [eax+esi+4]
0x5589F4: jnz     short loc_5589FA
0x5589F6: xor     ebx, ebx
0x5589F8: jmp     short loc_558A1C
0x5589FA: mov     ecx, [eax+8]
0x5589FD: sub     ecx, edx
0x5589FF: mov     eax, 66666667h
0x558A04: imul    ecx
0x558A06: mov     ecx, [esp+88h+var_70]
0x558A0A: sar     edx, 3
0x558A0D: mov     ebx, edx
0x558A0F: shr     ebx, 1Fh
0x558A12: add     ebx, edx
0x558A14: cmp     [ecx], ebx
0x558A16: jb      loc_558AE3
0x558A1C: xor     ebp, ebp
0x558A1E: test    ebx, ebx
0x558A20: jbe     loc_558AA3
0x558A26: xor     edi, edi
0x558A28: mov     edx, [esp+88h+var_68]
0x558A2C: mov     eax, [edx+8]
0x558A2F: mov     ecx, [eax+8]
0x558A32: mov     edx, [esp+88h+var_74]
0x558A36: mov     eax, [ecx+edx+8]
0x558A3A: test    eax, eax
0x558A3C: lea     esi, [ecx+edx+4]
0x558A40: jz      short loc_558A5C
0x558A42: mov     ecx, [esi+8]
0x558A45: sub     ecx, eax
0x558A47: mov     eax, 66666667h
0x558A4C: imul    ecx
0x558A4E: sar     edx, 3
0x558A51: mov     eax, edx
0x558A53: shr     eax, 1Fh
0x558A56: add     eax, edx
0x558A58: cmp     ebp, eax
0x558A5A: jb      short loc_558A61
0x558A5C: call    __invalid_parameter_noinfo
0x558A61: mov     eax, [esi+4]
0x558A64: mov     edx, [edi+eax+8]
0x558A68: test    edx, edx
0x558A6A: lea     eax, [edi+eax+4]
0x558A6E: jnz     short loc_558A74
0x558A70: xor     eax, eax
0x558A72: jmp     short loc_558A87
0x558A74: mov     ecx, [eax+8]
0x558A77: sub     ecx, edx
0x558A79: mov     eax, 2AAAAAABh
0x558A7E: imul    ecx
0x558A80: mov     eax, edx
0x558A82: shr     eax, 1Fh
0x558A85: add     eax, edx
0x558A87: cmp     eax, [esp+88h+var_6C]
0x558A8B: jb      loc_558B13
0x558A91: add     ebp, 1
0x558A94: add     edi, 14h
0x558A97: cmp     ebp, ebx
0x558A99: jb      short loc_558A28
0x558A9B: mov     edi, [esp+88h+var_68]
0x558A9F: mov     esi, [esp+88h+var_74]
0x558AA3: add     [esp+88h+var_70], 18h
0x558AA8: add     esi, 10h
0x558AAB: cmp     esi, 20h ; ' '
0x558AAE: mov     [esp+88h+var_74], esi
0x558AB2: jb      loc_5589E0
0x558AB8: xor     esi, esi
0x558ABA: mov     [esp+88h+var_50], esi
0x558ABE: mov     edi, edi
0x558AC0: mov     edx, [esp+88h+var_68]
0x558AC4: mov     eax, [edx+8]
0x558AC7: mov     ecx, [eax+8]
0x558ACA: mov     ebx, esi
0x558ACC: shl     ebx, 4
0x558ACF: mov     edx, [ecx+ebx+8]
0x558AD3: test    edx, edx
0x558AD5: lea     eax, [ecx+ebx+4]
0x558AD9: mov     [esp+88h+var_48], ebx
0x558ADD: jnz     short loc_558B2B
0x558ADF: xor     eax, eax
0x558AE1: jmp     short loc_558B41
0x558AE3: push    offset aFacegenTried_0; "FaceGen - Tried to apply a coordinate t"...
0x558AE8: call    PrintError
0x558AED: add     esp, 4
0x558AF0: push    1; Comperand
0x558AF2: push    0; Exchange
0x558AF4: push    ebp; Destination
0x558AF5: call    dword ptr ds:0A2813Ch
0x558AFB: xor     al, al
0x558AFD: mov     ecx, [esp+88h+var_C]
0x558B01: mov     large fs:0, ecx
0x558B08: pop     ecx
0x558B09: pop     edi
0x558B0A: pop     esi
0x558B0B: pop     ebp
0x558B0C: pop     ebx
0x558B0D: add     esp, 74h
0x558B10: retn    10h
0x558B13: push    offset aFacegenEgmBasi; "FaceGen - EGM basis did not match the p"...
0x558B18: call    PrintError
0x558B1D: mov     ecx, [esp+8Ch+Destination]
0x558B21: add     esp, 4
0x558B24: push    1
0x558B26: push    0
0x558B28: push    ecx
0x558B29: jmp     short loc_558AF5
0x558B2B: mov     ecx, [eax+8]
0x558B2E: sub     ecx, edx
0x558B30: mov     eax, 66666667h
0x558B35: imul    ecx
0x558B37: sar     edx, 3
0x558B3A: mov     eax, edx
0x558B3C: shr     eax, 1Fh
0x558B3F: add     eax, edx
0x558B41: xor     ebp, ebp
0x558B43: test    eax, eax
0x558B45: mov     [esp+88h+var_54], eax
0x558B49: mov     [esp+88h+var_58], ebp
0x558B4D: jbe     loc_55913B
0x558B53: mov     eax, [esp+88h+arg_0]
0x558B5A: lea     edx, [esi+esi*2]
0x558B5D: lea     esi, [eax+edx*8]
0x558B60: mov     [esp+88h+var_4C], esi
0x558B64: jmp     short loc_558B78
0x558B66: jmp     short loc_558B70
0x558B68: align 10h
0x558B70: mov     esi, [esp+88h+var_4C]
0x558B74: mov     ebx, [esp+88h+var_48]
0x558B78: mov     eax, [esi+0Ch]
0x558B7B: test    eax, eax
0x558B7D: jz      short loc_558B89
0x558B7F: mov     ecx, [esi+10h]
0x558B82: sub     ecx, eax
0x558B84: sar     ecx, 2
0x558B87: jnz     short loc_558B8E
0x558B89: call    __invalid_parameter_noinfo
0x558B8E: mov     edx, [esi+4]
0x558B91: mov     eax, [esi+0Ch]
0x558B94: imul    edx, ebp
0x558B97: mov     ecx, [esp+88h+var_68]
0x558B9B: lea     edi, [eax+edx*4]
0x558B9E: mov     edx, [ecx+8]
0x558BA1: mov     eax, [edx+8]
0x558BA4: lea     esi, [eax+ebx+4]
0x558BA8: mov     eax, [esi+4]
0x558BAB: test    eax, eax
0x558BAD: jz      short loc_558BC9
0x558BAF: mov     ecx, [esi+8]
0x558BB2: sub     ecx, eax
0x558BB4: mov     eax, 66666667h
0x558BB9: imul    ecx
0x558BBB: sar     edx, 3
0x558BBE: mov     eax, edx
0x558BC0: shr     eax, 1Fh
0x558BC3: add     eax, edx
0x558BC5: cmp     ebp, eax
0x558BC7: jb      short loc_558BCE
0x558BC9: call    __invalid_parameter_noinfo
0x558BCE: fld     dword ptr [edi]
0x558BD0: mov     ecx, [esi+4]
0x558BD3: fmul    [esp+88h+arg_8]
0x558BDA: lea     eax, [ebp+ebp*4+0]
0x558BDE: add     eax, eax
0x558BE0: add     eax, eax
0x558BE2: fmul    dword ptr [ecx+eax]
0x558BE5: mov     [esp+88h+var_5C], eax
0x558BE9: fstp    [esp+88h+var_74]
0x558BED: fldz
0x558BEF: fcomp   [esp+88h+var_74]
0x558BF3: fnstsw  ax
0x558BF5: test    ah, 44h
0x558BF8: jnp     loc_559122
0x558BFE: mov     edx, [esp+88h+var_68]
0x558C02: mov     eax, [edx+8]
0x558C05: mov     ecx, [eax+8]
0x558C08: mov     eax, [ecx+ebx+8]
0x558C0C: test    eax, eax
0x558C0E: mov     edi, [esp+88h+var_64]
0x558C12: lea     esi, [ecx+ebx+4]
0x558C16: jz      short loc_558C32
0x558C18: mov     ecx, [esi+8]
0x558C1B: sub     ecx, eax
0x558C1D: mov     eax, 66666667h
0x558C22: imul    ecx
0x558C24: sar     edx, 3
0x558C27: mov     eax, edx
0x558C29: shr     eax, 1Fh
0x558C2C: add     eax, edx
0x558C2E: cmp     ebp, eax
0x558C30: jb      short loc_558C37
0x558C32: call    __invalid_parameter_noinfo
0x558C37: mov     edx, [esi+4]
0x558C3A: mov     eax, [esp+88h+var_5C]
0x558C3E: mov     esi, [edx+eax+8]
0x558C42: cmp     esi, [edx+eax+0Ch]
0x558C46: lea     ebp, [edx+eax+4]
0x558C4A: jbe     short loc_558C51
0x558C4C: call    __invalid_parameter_noinfo
0x558C51: mov     ecx, [esp+88h+arg_4]
0x558C58: mov     edx, [ecx+0B4h]
0x558C5E: movzx   eax, word ptr [edx+8]
0x558C62: xor     ecx, ecx
0x558C64: cmp     [esp+88h+arg_C], ecx
0x558C6B: mov     [esp+88h+var_40], ebp
0x558C6F: mov     [esp+88h+var_5C], eax
0x558C73: jz      loc_558EDA
0x558C79: cmp     [esp+88h+var_64], ecx
0x558C7D: jz      loc_558E16
0x558C83: cmp     eax, ecx
0x558C85: mov     [esp+88h+var_70], ecx
0x558C89: jbe     loc_558D56
0x558C8F: mov     ebx, [esp+88h+var_64]
0x558C93: cmp     [esp+88h+var_40], 0
0x558C98: jnz     short loc_558C9F
0x558C9A: call    __invalid_parameter_noinfo
0x558C9F: cmp     esi, [ebp+8]
0x558CA2: jb      short loc_558CA9
0x558CA4: call    __invalid_parameter_noinfo
0x558CA9: movsx   eax, word ptr [esi]
0x558CAC: mov     ecx, [esp+88h+arg_C]
0x558CB3: mov     [esp+88h+var_44], eax
0x558CB7: fild    [esp+88h+var_44]
0x558CBB: fmul    [esp+88h+var_74]
0x558CBF: fadd    dword ptr [ecx]
0x558CC1: fstp    dword ptr [edi]
0x558CC3: cmp     esi, [ebp+8]
0x558CC6: jb      short loc_558CCD
0x558CC8: call    __invalid_parameter_noinfo
0x558CCD: movsx   edx, word ptr [esi+2]
0x558CD1: mov     eax, [esp+88h+arg_C]
0x558CD8: mov     [esp+88h+var_44], edx
0x558CDC: fild    [esp+88h+var_44]
0x558CE0: fmul    [esp+88h+var_74]
0x558CE4: fadd    dword ptr [eax+4]
0x558CE7: fstp    dword ptr [edi+4]
0x558CEA: cmp     esi, [ebp+8]
0x558CED: jb      short loc_558CF4
0x558CEF: call    __invalid_parameter_noinfo
0x558CF4: movsx   ecx, word ptr [esi+4]
0x558CF8: mov     edx, [esp+88h+arg_C]
0x558CFF: mov     [esp+88h+var_44], ecx
0x558D03: add     edi, 0Ch
0x558D06: fild    [esp+88h+var_44]
0x558D0A: fmul    [esp+88h+var_74]
0x558D0E: fadd    dword ptr [edx+8]
0x558D11: fstp    dword ptr [edi-4]
0x558D14: mov     eax, [esp+88h+var_2C]
0x558D18: imul    eax, [esp+88h+var_70]
0x558D1D: add     eax, [esp+88h+var_30]
0x558D21: mov     ecx, [ebx]
0x558D23: mov     [eax], ecx
0x558D25: mov     edx, [ebx+4]
0x558D28: mov     [eax+4], edx
0x558D2B: mov     ecx, [ebx+8]
0x558D2E: mov     [eax+8], ecx
0x558D31: cmp     esi, [ebp+8]
0x558D34: jb      short loc_558D3B
0x558D36: call    __invalid_parameter_noinfo
0x558D3B: mov     eax, [esp+88h+var_70]
0x558D3F: add     eax, 1
0x558D42: add     esi, 6
0x558D45: add     ebx, 0Ch
0x558D48: cmp     eax, [esp+88h+var_5C]
0x558D4C: mov     [esp+88h+var_70], eax
0x558D50: jb      loc_558C93
0x558D56: mov     edx, [esp+88h+var_70]
0x558D5A: cmp     edx, [esp+88h+var_6C]
0x558D5E: jnb     loc_559122
0x558D64: mov     ebx, [esp+88h+var_6C]
0x558D68: sub     ebx, edx
0x558D6A: cmp     [esp+88h+var_40], 0
0x558D6F: jnz     short loc_558D76
0x558D71: call    __invalid_parameter_noinfo
0x558D76: mov     eax, [esp+88h+var_40]
0x558D7A: cmp     esi, [eax+8]
0x558D7D: jb      short loc_558D84
0x558D7F: call    __invalid_parameter_noinfo
0x558D84: movsx   ecx, word ptr [esi]
0x558D87: mov     edx, [esp+88h+arg_C]
0x558D8E: mov     eax, [esp+88h+var_40]
0x558D92: mov     [esp+88h+var_44], ecx
0x558D96: fild    [esp+88h+var_44]
0x558D9A: fmul    [esp+88h+var_74]
0x558D9E: fadd    dword ptr [edx]
0x558DA0: fstp    dword ptr [edi]
0x558DA2: cmp     esi, [eax+8]
0x558DA5: jb      short loc_558DAC
0x558DA7: call    __invalid_parameter_noinfo
0x558DAC: movsx   ecx, word ptr [esi+2]
0x558DB0: mov     edx, [esp+88h+arg_C]
0x558DB7: mov     eax, [esp+88h+var_40]
0x558DBB: mov     [esp+88h+var_44], ecx
0x558DBF: fild    [esp+88h+var_44]
0x558DC3: fmul    [esp+88h+var_74]
0x558DC7: fadd    dword ptr [edx+4]
0x558DCA: fstp    dword ptr [edi+4]
0x558DCD: cmp     esi, [eax+8]
0x558DD0: jb      short loc_558DD7
0x558DD2: call    __invalid_parameter_noinfo
0x558DD7: movsx   ecx, word ptr [esi+4]
0x558DDB: mov     edx, [esp+88h+arg_C]
0x558DE2: mov     eax, [esp+88h+var_40]
0x558DE6: mov     [esp+88h+var_44], ecx
0x558DEA: add     edi, 0Ch
0x558DED: fild    [esp+88h+var_44]
0x558DF1: fmul    [esp+88h+var_74]
0x558DF5: fadd    dword ptr [edx+8]
0x558DF8: fstp    dword ptr [edi-4]
0x558DFB: cmp     esi, [eax+8]
0x558DFE: jb      short loc_558E05
0x558E00: call    __invalid_parameter_noinfo
0x558E05: add     esi, 6
0x558E08: sub     ebx, 1
0x558E0B: jnz     loc_558D6A
0x558E11: jmp     loc_559122
0x558E16: xor     ebx, ebx
0x558E18: cmp     [esp+88h+var_6C], ecx
0x558E1C: jbe     loc_559122
0x558E22: mov     edi, [esp+88h+arg_C]
0x558E29: add     edi, 8
0x558E2C: cmp     [esp+88h+var_40], 0
0x558E31: jnz     short loc_558E38
0x558E33: call    __invalid_parameter_noinfo
0x558E38: cmp     esi, [ebp+8]
0x558E3B: jb      short loc_558E42
0x558E3D: call    __invalid_parameter_noinfo
0x558E42: cmp     esi, [ebp+8]
0x558E45: movsx   ecx, word ptr [esi]
0x558E48: mov     [esp+88h+var_44], ecx
0x558E4C: fild    [esp+88h+var_44]
0x558E50: fmul    [esp+88h+var_74]
0x558E54: fadd    dword ptr [edi-8]
0x558E57: fstp    [esp+88h+var_18]
0x558E5B: jb      short loc_558E62
0x558E5D: call    __invalid_parameter_noinfo
0x558E62: cmp     esi, [ebp+8]
0x558E65: movsx   edx, word ptr [esi+2]
0x558E69: mov     [esp+88h+var_44], edx
0x558E6D: fild    [esp+88h+var_44]
0x558E71: fmul    [esp+88h+var_74]
0x558E75: fadd    dword ptr [edi-4]
0x558E78: fstp    [esp+88h+var_14]
0x558E7C: jb      short loc_558E83
0x558E7E: call    __invalid_parameter_noinfo
0x558E83: movsx   eax, word ptr [esi+4]
0x558E87: mov     ecx, [esp+88h+var_18]
0x558E8B: mov     edx, [esp+88h+var_14]
0x558E8F: mov     [esp+88h+var_44], eax
0x558E93: mov     eax, [esp+88h+var_2C]
0x558E97: fild    [esp+88h+var_44]
0x558E9B: imul    eax, ebx
0x558E9E: fmul    [esp+88h+var_74]
0x558EA2: fadd    dword ptr [edi]
0x558EA4: fstp    [esp+88h+var_10]
0x558EA8: add     eax, [esp+88h+var_30]
0x558EAC: mov     [eax], ecx
0x558EAE: mov     ecx, [esp+88h+var_10]
0x558EB2: mov     [eax+4], edx
0x558EB5: mov     [eax+8], ecx
0x558EB8: cmp     esi, [ebp+8]
0x558EBB: jb      short loc_558EC2
0x558EBD: call    __invalid_parameter_noinfo
0x558EC2: add     ebx, 1
0x558EC5: add     esi, 6
0x558EC8: add     edi, 0Ch
0x558ECB: cmp     ebx, [esp+88h+var_6C]
0x558ECF: jb      loc_558E2C
0x558ED5: jmp     loc_559122
0x558EDA: mov     ebx, [esp+88h+var_64]
0x558EDE: cmp     ebx, ecx
0x558EE0: jz      loc_55904B
0x558EE6: cmp     eax, ecx
0x558EE8: mov     [esp+88h+var_70], ecx
0x558EEC: jbe     loc_558FA0
0x558EF2: cmp     [esp+88h+var_40], 0
0x558EF7: jnz     short loc_558EFE
0x558EF9: call    __invalid_parameter_noinfo
0x558EFE: cmp     esi, [ebp+8]
0x558F01: jb      short loc_558F08
0x558F03: call    __invalid_parameter_noinfo
0x558F08: movsx   edx, word ptr [esi]
0x558F0B: mov     [esp+88h+var_44], edx
0x558F0F: fild    [esp+88h+var_44]
0x558F13: fmul    [esp+88h+var_74]
0x558F17: fadd    dword ptr [edi]
0x558F19: fstp    dword ptr [edi]
0x558F1B: cmp     esi, [ebp+8]
0x558F1E: jb      short loc_558F25
0x558F20: call    __invalid_parameter_noinfo
0x558F25: movsx   eax, word ptr [esi+2]
0x558F29: mov     [esp+88h+var_44], eax
0x558F2D: fild    [esp+88h+var_44]
0x558F31: fmul    [esp+88h+var_74]
0x558F35: fadd    dword ptr [edi+4]
0x558F38: fstp    dword ptr [edi+4]
0x558F3B: cmp     esi, [ebp+8]
0x558F3E: jb      short loc_558F45
0x558F40: call    __invalid_parameter_noinfo
0x558F45: movsx   ecx, word ptr [esi+4]
0x558F49: mov     [esp+88h+var_44], ecx
0x558F4D: add     edi, 0Ch
0x558F50: fild    [esp+88h+var_44]
0x558F54: fmul    [esp+88h+var_74]
0x558F58: fadd    dword ptr [edi-4]
0x558F5B: fstp    dword ptr [edi-4]
0x558F5E: mov     eax, [esp+88h+var_2C]
0x558F62: imul    eax, [esp+88h+var_70]
0x558F67: add     eax, [esp+88h+var_30]
0x558F6B: mov     edx, [ebx]
0x558F6D: mov     [eax], edx
0x558F6F: mov     ecx, [ebx+4]
0x558F72: mov     [eax+4], ecx
0x558F75: mov     edx, [ebx+8]
0x558F78: mov     [eax+8], edx
0x558F7B: cmp     esi, [ebp+8]
0x558F7E: jb      short loc_558F85
0x558F80: call    __invalid_parameter_noinfo
0x558F85: mov     eax, [esp+88h+var_70]
0x558F89: add     eax, 1
0x558F8C: add     esi, 6
0x558F8F: add     ebx, 0Ch
0x558F92: cmp     eax, [esp+88h+var_5C]
0x558F96: mov     [esp+88h+var_70], eax
0x558F9A: jb      loc_558EF2
0x558FA0: mov     eax, [esp+88h+var_70]
0x558FA4: cmp     eax, [esp+88h+var_6C]
0x558FA8: jnb     loc_559122
0x558FAE: mov     ebx, [esp+88h+var_6C]
0x558FB2: sub     ebx, eax
0x558FB4: cmp     [esp+88h+var_40], 0
0x558FB9: jnz     short loc_558FC0
0x558FBB: call    __invalid_parameter_noinfo
0x558FC0: mov     ecx, [esp+88h+var_40]
0x558FC4: cmp     esi, [ecx+8]
0x558FC7: jb      short loc_558FCE
0x558FC9: call    __invalid_parameter_noinfo
0x558FCE: movsx   edx, word ptr [esi]
0x558FD1: mov     eax, [esp+88h+var_40]
0x558FD5: mov     [esp+88h+var_44], edx
0x558FD9: fild    [esp+88h+var_44]
0x558FDD: fmul    [esp+88h+var_74]
0x558FE1: fadd    dword ptr [edi]
0x558FE3: fstp    dword ptr [edi]
0x558FE5: cmp     esi, [eax+8]
0x558FE8: jb      short loc_558FEF
0x558FEA: call    __invalid_parameter_noinfo
0x558FEF: movsx   ecx, word ptr [esi+2]
0x558FF3: mov     edx, [esp+88h+var_40]
0x558FF7: mov     [esp+88h+var_44], ecx
0x558FFB: fild    [esp+88h+var_44]
0x558FFF: fmul    [esp+88h+var_74]
0x559003: fadd    dword ptr [edi+4]
0x559006: fstp    dword ptr [edi+4]
0x559009: cmp     esi, [edx+8]
0x55900C: jb      short loc_559013
0x55900E: call    __invalid_parameter_noinfo
0x559013: movsx   eax, word ptr [esi+4]
0x559017: mov     ecx, [esp+88h+var_40]
0x55901B: mov     [esp+88h+var_44], eax
0x55901F: add     edi, 0Ch
0x559022: fild    [esp+88h+var_44]
0x559026: fmul    [esp+88h+var_74]
0x55902A: fadd    dword ptr [edi-4]
0x55902D: fstp    dword ptr [edi-4]
0x559030: cmp     esi, [ecx+8]
0x559033: jb      short loc_55903A
0x559035: call    __invalid_parameter_noinfo
0x55903A: add     esi, 6
0x55903D: sub     ebx, 1
0x559040: jnz     loc_558FB4
0x559046: jmp     loc_559122
0x55904B: xor     edi, edi
0x55904D: cmp     [esp+88h+var_6C], ecx
0x559051: jbe     loc_559122
0x559057: mov     ebx, [esp+88h+var_6C]
0x55905B: mov     eax, [esp+88h+var_2C]
0x55905F: imul    eax, edi
0x559062: add     eax, [esp+88h+var_30]
0x559066: cmp     [esp+88h+var_40], 0
0x55906B: mov     edx, [eax]
0x55906D: mov     ecx, [eax+4]
0x559070: mov     [esp+88h+var_24], edx
0x559074: mov     edx, [eax+8]
0x559077: mov     [esp+88h+var_20], ecx
0x55907B: mov     [esp+88h+var_1C], edx
0x55907F: jnz     short loc_559086
0x559081: call    __invalid_parameter_noinfo
0x559086: cmp     esi, [ebp+8]
0x559089: jb      short loc_559090
0x55908B: call    __invalid_parameter_noinfo
0x559090: cmp     esi, [ebp+8]
0x559093: movsx   eax, word ptr [esi]
0x559096: mov     [esp+88h+var_44], eax
0x55909A: fild    [esp+88h+var_44]
0x55909E: fmul    [esp+88h+var_74]
0x5590A2: fadd    [esp+88h+var_24]
0x5590A6: fstp    [esp+88h+var_24]
0x5590AA: jb      short loc_5590B1
0x5590AC: call    __invalid_parameter_noinfo
0x5590B1: cmp     esi, [ebp+8]
0x5590B4: movsx   ecx, word ptr [esi+2]
0x5590B8: mov     [esp+88h+var_44], ecx
0x5590BC: fild    [esp+88h+var_44]
0x5590C0: fmul    [esp+88h+var_74]
0x5590C4: fadd    [esp+88h+var_20]
0x5590C8: fstp    [esp+88h+var_20]
0x5590CC: jb      short loc_5590D3
0x5590CE: call    __invalid_parameter_noinfo
0x5590D3: movsx   edx, word ptr [esi+4]
0x5590D7: mov     eax, [esp+88h+var_2C]
0x5590DB: mov     ecx, [esp+88h+var_24]
0x5590DF: imul    eax, edi
0x5590E2: add     eax, [esp+88h+var_30]
0x5590E6: mov     [esp+88h+var_44], edx
0x5590EA: mov     edx, [esp+88h+var_20]
0x5590EE: fild    [esp+88h+var_44]
0x5590F2: mov     [eax], ecx
0x5590F4: mov     [eax+4], edx
0x5590F7: fmul    [esp+88h+var_74]
0x5590FB: fadd    [esp+88h+var_1C]
0x5590FF: fstp    [esp+88h+var_1C]
0x559103: mov     ecx, [esp+88h+var_1C]
0x559107: mov     [eax+8], ecx
0x55910A: cmp     esi, [ebp+8]
0x55910D: jb      short loc_559114
0x55910F: call    __invalid_parameter_noinfo
0x559114: add     edi, 1
0x559117: add     esi, 6
0x55911A: cmp     edi, ebx
0x55911C: jb      loc_55905B
0x559122: mov     ebp, [esp+88h+var_58]
0x559126: add     ebp, 1
0x559129: cmp     ebp, [esp+88h+var_54]
0x55912D: mov     [esp+88h+var_58], ebp
0x559131: jb      loc_558B70
0x559137: mov     esi, [esp+88h+var_50]
0x55913B: add     esi, 1
0x55913E: cmp     esi, 2
0x559141: mov     [esp+88h+var_50], esi
0x559145: jb      loc_558AC0
0x55914B: mov     ecx, [esp+88h+arg_4]
0x559152: mov     eax, [ecx+0B4h]
0x559158: cmp     dword ptr [eax+1Ch], 0
0x55915C: jz      short loc_559163
0x55915E: or      word ptr [eax+2Eh], 1
0x559163: mov     ecx, [ecx+0B4h]
0x559169: call    sub_728B20
0x55916E: mov     edx, [esp+88h+Destination]
0x559172: push    1; Comperand
0x559174: push    0; Exchange
0x559176: push    edx; Destination
0x559177: call    dword ptr ds:0A2813Ch
0x55917D: mov     al, 1
0x55917F: jmp     loc_558AFD
