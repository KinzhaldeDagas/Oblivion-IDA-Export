0x73AC20: push    0FFFFFFFFh
0x73AC22: push    offset SEH_73AC20
0x73AC27: mov     eax, large fs:0
0x73AC2D: push    eax
0x73AC2E: sub     esp, 28h
0x73AC31: push    ebx
0x73AC32: push    ebp
0x73AC33: push    esi
0x73AC34: push    edi
0x73AC35: mov     eax, ds:0B30AACh
0x73AC3A: xor     eax, esp
0x73AC3C: push    eax
0x73AC3D: lea     eax, [esp+48h+var_C]
0x73AC41: mov     large fs:0, eax
0x73AC47: mov     esi, ecx
0x73AC49: mov     edi, [esp+48h+arg_0]
0x73AC4D: mov     eax, [edi+0D8h]
0x73AC53: cmp     eax, 0A00010Fh
0x73AC58: push    edi
0x73AC59: jnb     short loc_73AC62
0x73AC5B: call    sub_729450
0x73AC60: jmp     short loc_73AC67
0x73AC62: call    sub_71FEC0
0x73AC67: mov     eax, [edi+21Ch]
0x73AC6D: push    1
0x73AC6F: lea     ecx, [esp+4Ch+var_1C]
0x73AC73: push    ecx
0x73AC74: push    1
0x73AC76: lea     edx, [esp+54h+arg_0]
0x73AC7A: push    edx
0x73AC7B: push    eax
0x73AC7C: mov     eax, [eax+4]
0x73AC7F: mov     [esp+5Ch+var_1C], 1
0x73AC87: call    eax
0x73AC89: add     esp, 14h
0x73AC8C: cmp     byte ptr [esp+48h+arg_0], 0
0x73AC91: mov     ebx, 2
0x73AC96: setnz   cl
0x73AC99: mov     [esi+58h], cl
0x73AC9C: mov     eax, [edi+0D8h]
0x73ACA2: cmp     eax, 0A00010Fh
0x73ACA7: jnb     short loc_73ACEE
0x73ACA9: mov     eax, [edi+21Ch]
0x73ACAF: push    1
0x73ACB1: lea     edx, [esp+4Ch+var_1C]
0x73ACB5: push    edx
0x73ACB6: mov     edx, [eax+4]
0x73ACB9: push    ebx
0x73ACBA: lea     ecx, [esp+54h+var_30]
0x73ACBE: push    ecx
0x73ACBF: push    eax
0x73ACC0: mov     [esp+5Ch+var_1C], ebx
0x73ACC4: call    edx
0x73ACC6: mov     ax, word ptr [esp+5Ch+var_30]
0x73ACCB: push    1
0x73ACCD: lea     ecx, [esp+60h+var_1C]
0x73ACD1: push    ecx
0x73ACD2: mov     [esi+8], ax
0x73ACD6: mov     eax, [edi+21Ch]
0x73ACDC: push    ebx
0x73ACDD: lea     edx, [esi+40h]
0x73ACE0: push    edx
0x73ACE1: push    eax
0x73ACE2: mov     eax, [eax+4]
0x73ACE5: mov     [esp+70h+var_1C], ebx
0x73ACE9: call    eax
0x73ACEB: add     esp, 28h
0x73ACEE: cmp     dword ptr [edi+0D8h], 0A00010Fh
0x73ACF8: jnb     short loc_73AD6C
0x73ACFA: mov     eax, [edi+21Ch]
0x73AD00: push    1
0x73AD02: lea     ecx, [esp+4Ch+var_1C]
0x73AD06: push    ecx
0x73AD07: push    ebx
0x73AD08: lea     edx, [esp+54h+var_30]
0x73AD0C: push    edx
0x73AD0D: push    eax
0x73AD0E: mov     eax, [eax+4]
0x73AD11: mov     [esp+5Ch+var_1C], ebx
0x73AD15: call    eax
0x73AD17: mov     cx, word ptr [esp+5Ch+var_30]
0x73AD1C: movzx   eax, cx
0x73AD1F: xor     ebp, ebp
0x73AD21: add     esp, 14h
0x73AD24: cmp     cx, bp
0x73AD27: mov     [esi+44h], eax
0x73AD2A: jbe     short loc_73AD6E
0x73AD2C: xor     ecx, ecx
0x73AD2E: mov     edx, ebx
0x73AD30: mul     edx
0x73AD32: seto    cl
0x73AD35: neg     ecx
0x73AD37: or      ecx, eax
0x73AD39: push    ecx; Size
0x73AD3A: call    FormHeapAlloc
0x73AD3F: movzx   edx, word ptr [esp+4Ch+var_30]
0x73AD44: push    1
0x73AD46: mov     [esp+50h+var_1C], ebx
0x73AD4A: lea     ebx, [esp+50h+var_1C]
0x73AD4E: push    ebx
0x73AD4F: add     edx, edx
0x73AD51: push    edx
0x73AD52: mov     [esi+48h], eax
0x73AD55: mov     ecx, [edi+21Ch]
0x73AD5B: push    eax
0x73AD5C: mov     eax, [ecx+4]
0x73AD5F: push    ecx
0x73AD60: call    eax
0x73AD62: add     esp, 18h
0x73AD65: mov     ebx, 2
0x73AD6A: jmp     short loc_73AD6E
0x73AD6C: xor     ebp, ebp
0x73AD6E: mov     eax, [edi+21Ch]
0x73AD74: push    1
0x73AD76: lea     ecx, [esp+4Ch+var_1C]
0x73AD7A: push    ecx
0x73AD7B: push    4
0x73AD7D: lea     edx, [esp+54h+var_28]
0x73AD81: push    edx
0x73AD82: mov     [esp+58h+var_28], ebp
0x73AD86: push    eax
0x73AD87: mov     eax, [eax+4]
0x73AD8A: mov     [esp+5Ch+var_1C], 4
0x73AD92: call    eax
0x73AD94: mov     eax, [esp+5Ch+var_28]
0x73AD98: add     esp, 14h
0x73AD9B: cmp     eax, ebp
0x73AD9D: jz      loc_73B037
0x73ADA3: lea     ecx, [esi+60h]
0x73ADA6: push    eax
0x73ADA7: mov     [esp+4Ch+var_10], ecx
0x73ADAB: call    NiTArray_SetSize
0x73ADB0: cmp     [esp+48h+var_28], ebp
0x73ADB4: mov     [esp+48h+var_30], ebp
0x73ADB8: jbe     loc_73B037
0x73ADBE: mov     edi, edi
0x73ADC0: mov     eax, [edi+21Ch]
0x73ADC6: push    1
0x73ADC8: lea     ecx, [esp+4Ch+var_1C]
0x73ADCC: push    ecx
0x73ADCD: push    ebx
0x73ADCE: lea     edx, [esp+54h+var_2C]
0x73ADD2: push    edx
0x73ADD3: mov     [esp+58h+var_2C], ebp
0x73ADD7: push    eax
0x73ADD8: mov     eax, [eax+4]
0x73ADDB: mov     [esp+5Ch+var_1C], ebx
0x73ADDF: call    eax
0x73ADE1: add     esp, 14h
0x73ADE4: cmp     word ptr [esp+48h+var_2C], bp
0x73ADE9: jz      loc_73B022
0x73ADEF: mov     eax, [edi+21Ch]
0x73ADF5: mov     esi, 1
0x73ADFA: push    esi
0x73ADFB: lea     ecx, [esp+4Ch+var_18]
0x73ADFF: push    ecx
0x73AE00: push    esi
0x73AE01: lea     edx, [esp+54h+var_32]
0x73AE05: push    edx
0x73AE06: mov     [esp+58h+var_24], ebp
0x73AE0A: push    eax
0x73AE0B: mov     eax, [eax+4]
0x73AE0E: xor     ebx, ebx
0x73AE10: mov     [esp+5Ch+var_20], ebp
0x73AE14: mov     [esp+5Ch+var_1C], ebp
0x73AE18: mov     [esp+5Ch+var_18], esi
0x73AE1C: call    eax
0x73AE1E: add     esp, 14h
0x73AE21: cmp     [esp+48h+var_32], bl
0x73AE25: jz      short loc_73AE6E
0x73AE27: movzx   eax, word ptr [esp+48h+var_2C]
0x73AE2C: xor     ecx, ecx
0x73AE2E: mov     edx, 8
0x73AE33: mul     edx
0x73AE35: seto    cl
0x73AE38: neg     ecx
0x73AE3A: or      ecx, eax
0x73AE3C: push    ecx; Size
0x73AE3D: call    FormHeapAlloc
0x73AE42: movzx   ecx, word ptr [esp+4Ch+var_2C]
0x73AE47: add     ecx, ecx
0x73AE49: push    esi
0x73AE4A: add     ecx, ecx
0x73AE4C: lea     edx, [esp+50h+var_18]
0x73AE50: push    edx
0x73AE51: mov     ebx, eax
0x73AE53: mov     eax, [edi+21Ch]
0x73AE59: add     ecx, ecx
0x73AE5B: push    ecx
0x73AE5C: push    ebx
0x73AE5D: push    eax
0x73AE5E: mov     eax, [eax+4]
0x73AE61: mov     [esp+60h+var_18], 8
0x73AE69: call    eax
0x73AE6B: add     esp, 18h
0x73AE6E: mov     eax, [edi+21Ch]
0x73AE74: push    esi
0x73AE75: lea     ecx, [esp+4Ch+var_18]
0x73AE79: push    ecx
0x73AE7A: push    esi
0x73AE7B: lea     edx, [esp+54h+var_31]
0x73AE7F: push    edx
0x73AE80: push    eax
0x73AE81: mov     eax, [eax+4]
0x73AE84: mov     [esp+5Ch+var_18], esi
0x73AE88: call    eax
0x73AE8A: add     esp, 14h
0x73AE8D: cmp     [esp+48h+var_31], 0
0x73AE92: jz      short loc_73AF0A
0x73AE94: movzx   ebp, word ptr [esp+48h+var_2C]
0x73AE99: xor     ecx, ecx
0x73AE9B: mov     eax, ebp
0x73AE9D: mov     edx, 10h
0x73AEA2: mul     edx
0x73AEA4: seto    cl
0x73AEA7: neg     ecx
0x73AEA9: or      ecx, eax
0x73AEAB: push    ecx; Size
0x73AEAC: call    FormHeapAlloc
0x73AEB1: mov     esi, eax
0x73AEB3: add     esp, 4
0x73AEB6: mov     [esp+48h+var_18], esi
0x73AEBA: xor     ecx, ecx
0x73AEBC: cmp     esi, ecx
0x73AEBE: mov     [esp+48h+var_4], ecx
0x73AEC2: jz      short loc_73AED4
0x73AEC4: push    offset sub_47EA50
0x73AEC9: push    ebp
0x73AECA: push    10h
0x73AECC: push    esi
0x73AECD: call    sub_401080
0x73AED2: mov     ecx, esi
0x73AED4: mov     eax, [edi+21Ch]
0x73AEDA: push    1
0x73AEDC: lea     edx, [esp+4Ch+var_18]
0x73AEE0: push    edx
0x73AEE1: movzx   edx, word ptr [esp+50h+var_2C]
0x73AEE6: shl     edx, 4
0x73AEE9: push    edx
0x73AEEA: push    ecx
0x73AEEB: push    eax
0x73AEEC: mov     eax, [eax+4]
0x73AEEF: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x73AEF7: mov     [esp+5Ch+var_20], ecx
0x73AEFB: mov     [esp+5Ch+var_18], 10h
0x73AF03: call    eax
0x73AF05: add     esp, 14h
0x73AF08: xor     ebp, ebp
0x73AF0A: mov     eax, [edi+21Ch]
0x73AF10: push    1
0x73AF12: lea     ecx, [esp+4Ch+var_18]
0x73AF16: push    ecx
0x73AF17: push    2
0x73AF19: lea     edx, [esp+54h+var_24]
0x73AF1D: push    edx
0x73AF1E: push    eax
0x73AF1F: mov     eax, [eax+4]
0x73AF22: mov     [esp+5Ch+var_18], 2
0x73AF2A: call    eax
0x73AF2C: mov     eax, [esp+5Ch+var_24]
0x73AF30: add     esp, 14h
0x73AF33: cmp     ax, bp
0x73AF36: jz      short loc_73AF88
0x73AF38: movzx   ecx, word ptr [esp+48h+var_2C]
0x73AF3D: movzx   esi, ax
0x73AF40: imul    esi, ecx
0x73AF43: xor     ecx, ecx
0x73AF45: mov     eax, esi
0x73AF47: mov     edx, 8
0x73AF4C: mul     edx
0x73AF4E: seto    cl
0x73AF51: neg     ecx
0x73AF53: or      ecx, eax
0x73AF55: push    ecx; Size
0x73AF56: call    FormHeapAlloc
0x73AF5B: push    1
0x73AF5D: lea     edx, [esp+50h+var_14]
0x73AF61: push    edx
0x73AF62: mov     ecx, eax
0x73AF64: mov     eax, [edi+21Ch]
0x73AF6A: lea     edx, ds:0[esi*8]
0x73AF71: push    edx
0x73AF72: push    ecx
0x73AF73: push    eax
0x73AF74: mov     eax, [eax+4]
0x73AF77: mov     [esp+60h+var_1C], ecx
0x73AF7B: mov     [esp+60h+var_14], 8
0x73AF83: call    eax
0x73AF85: add     esp, 18h
0x73AF88: mov     ecx, ds:0B40134h
0x73AF8E: cmp     dword ptr [ecx+8], 0
0x73AF92: lea     ebp, [ecx+8]
0x73AF95: mov     esi, ecx
0x73AF97: jnz     short loc_73AFB3
0x73AF99: mov     edx, [ecx+0Ch]
0x73AF9C: lea     eax, [ecx+0Ch]
0x73AF9F: push    edx
0x73AFA0: mov     [esp+4Ch+var_18], eax
0x73AFA4: call    sub_73A510
0x73AFA9: mov     eax, [esp+48h+var_18]
0x73AFAD: mov     ecx, [eax]
0x73AFAF: add     ecx, ecx
0x73AFB1: mov     [eax], ecx
0x73AFB3: mov     eax, [esi]
0x73AFB5: mov     esi, [eax]
0x73AFB7: add     dword ptr [ebp+0], 0FFFFFFFFh
0x73AFBB: mov     ebp, [ebp+0]
0x73AFBE: mov     edx, [eax+ebp*4]
0x73AFC1: mov     [eax], edx
0x73AFC3: mov     eax, [esi+8]
0x73AFC6: push    eax
0x73AFC7: mov     [esp+4Ch+var_18], esi
0x73AFCB: call    FormHeapFree
0x73AFD0: mov     cx, word ptr [esp+4Ch+var_2C]
0x73AFD5: mov     [esi+4], cx
0x73AFD9: mov     [esi+8], ebx
0x73AFDC: mov     edx, [esi+0Ch]
0x73AFDF: push    edx
0x73AFE0: call    FormHeapFree
0x73AFE5: mov     eax, [esp+50h+var_20]
0x73AFE9: mov     [esi+0Ch], eax
0x73AFEC: mov     ecx, [esi+10h]
0x73AFEF: push    ecx
0x73AFF0: call    FormHeapFree
0x73AFF5: mov     edx, [esp+54h+var_1C]
0x73AFF9: add     esp, 0Ch
0x73AFFC: mov     [esi+10h], edx
0x73AFFF: mov     edx, [esp+48h+var_30]
0x73B003: mov     ax, word ptr [esp+48h+var_24]
0x73B008: lea     ecx, [esp+48h+var_18]
0x73B00C: push    ecx
0x73B00D: mov     ecx, [esp+4Ch+var_10]
0x73B011: push    edx
0x73B012: mov     [esi+6], ax
0x73B016: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73B01B: xor     ebp, ebp
0x73B01D: mov     ebx, 2
0x73B022: mov     eax, [esp+48h+var_30]
0x73B026: add     eax, 1
0x73B029: cmp     eax, [esp+48h+var_28]
0x73B02D: mov     [esp+48h+var_30], eax
0x73B031: jb      loc_73ADC0
0x73B037: mov     ecx, [esp+48h+var_C]
0x73B03B: mov     large fs:0, ecx
0x73B042: pop     ecx
0x73B043: pop     edi
0x73B044: pop     esi
0x73B045: pop     ebp
0x73B046: pop     ebx
0x73B047: add     esp, 34h
0x73B04A: retn    4
