0x97AFC0: sub     esp, 6Ch
0x97AFC3: push    ebx
0x97AFC4: push    esi
0x97AFC5: mov     esi, [esp+74h+arg_0]
0x97AFC9: fld     dword ptr [esi+3Ch]
0x97AFCC: mov     eax, [esi+78h]
0x97AFCF: push    edi
0x97AFD0: mov     edi, ecx
0x97AFD2: fsub    dword ptr [edi+3Ch]
0x97AFD5: mov     ecx, [edi+78h]
0x97AFD8: add     eax, 10h
0x97AFDB: lea     ebx, [edi+48h]
0x97AFDE: fstp    [esp+78h+var_30]
0x97AFE2: lea     edx, [esi+60h]
0x97AFE5: fld     dword ptr [esi+40h]
0x97AFE8: mov     [esp+78h+var_60], edx
0x97AFEC: fsub    dword ptr [edi+40h]
0x97AFEF: fstp    [esp+78h+var_2C]
0x97AFF3: fld     dword ptr [esi+44h]
0x97AFF6: fsub    dword ptr [edi+44h]
0x97AFF9: fstp    [esp+78h+var_28]
0x97AFFD: fld     dword ptr [eax]
0x97AFFF: fsub    dword ptr [ecx+10h]
0x97B002: fstp    [esp+78h+var_3C]
0x97B006: fld     dword ptr [eax+4]
0x97B009: fsub    dword ptr [ecx+14h]
0x97B00C: fstp    [esp+78h+var_38]
0x97B010: fld     dword ptr [eax+8]
0x97B013: fsub    dword ptr [ecx+18h]
0x97B016: fstp    [esp+78h+var_34]
0x97B01A: fld     dword ptr [ecx+4]
0x97B01D: lea     ecx, [esi+54h]
0x97B020: fstp    [esp+78h+var_68]
0x97B024: mov     [esp+78h+var_58], ecx
0x97B028: fld     dword ptr [esi+4Ch]
0x97B02B: fmul    dword ptr [ebx+4]
0x97B02E: fld     dword ptr [esi+48h]
0x97B031: fmul    dword ptr [ebx]
0x97B033: faddp   st(1), st
0x97B035: fld     dword ptr [esi+50h]
0x97B038: fmul    dword ptr [ebx+8]
0x97B03B: faddp   st(1), st
0x97B03D: fstp    [esp+78h+var_24]
0x97B041: fld     dword ptr [ecx+4]
0x97B044: fmul    dword ptr [ebx+4]
0x97B047: fld     dword ptr [ecx]
0x97B049: fmul    dword ptr [ebx]
0x97B04B: faddp   st(1), st
0x97B04D: fld     dword ptr [ecx+8]
0x97B050: fmul    dword ptr [ebx+8]
0x97B053: faddp   st(1), st
0x97B055: fstp    [esp+78h+var_20]
0x97B059: fld     dword ptr [edx+4]
0x97B05C: fmul    dword ptr [ebx+4]
0x97B05F: fld     dword ptr [edx]
0x97B061: fmul    dword ptr [ebx]
0x97B063: faddp   st(1), st
0x97B065: fld     dword ptr [edx+8]
0x97B068: fmul    dword ptr [ebx+8]
0x97B06B: faddp   st(1), st
0x97B06D: fstp    [esp+78h+var_1C]
0x97B071: fld     [esp+78h+var_2C]
0x97B075: fld     st
0x97B077: fmul    dword ptr [ebx+4]
0x97B07A: fld     dword ptr [ebx]
0x97B07C: fld     [esp+78h+var_30]
0x97B080: fld     st
0x97B082: fmulp   st(2), st
0x97B084: fxch    st(2)
0x97B086: faddp   st(1), st
0x97B088: fld     dword ptr [ebx+8]
0x97B08B: fld     [esp+78h+var_28]
0x97B08F: fld     st
0x97B091: fmulp   st(2), st
0x97B093: fxch    st(2)
0x97B095: faddp   st(1), st
0x97B097: fstp    [esp+78h+var_54]
0x97B09B: fld     [esp+78h+var_38]
0x97B09F: fld     st
0x97B0A1: fmul    dword ptr [ebx+4]
0x97B0A4: fld     dword ptr [ebx]
0x97B0A6: fld     [esp+78h+var_3C]
0x97B0AA: fld     st
0x97B0AC: fmulp   st(2), st
0x97B0AE: fxch    st(2)
0x97B0B0: faddp   st(1), st
0x97B0B2: fld     dword ptr [ebx+8]
0x97B0B5: fmul    [esp+78h+var_34]
0x97B0B9: faddp   st(1), st
0x97B0BB: fstp    [esp+78h+arg_0]
0x97B0BF: fld     [esp+78h+arg_0]
0x97B0C3: fmul    [esp+78h+var_68]
0x97B0C7: fadd    [esp+78h+var_54]
0x97B0CB: fstp    [esp+78h+var_48]
0x97B0CF: fld     dword ptr [esi+6Ch]
0x97B0D2: fmul    [esp+78h+var_24]
0x97B0D6: fstp    [esp+78h+arg_0]
0x97B0DA: fld     [esp+78h+arg_0]
0x97B0DE: fabs
0x97B0E0: fstp    [esp+78h+arg_0]
0x97B0E4: fld     [esp+78h+arg_0]
0x97B0E8: fld     dword ptr [esi+70h]
0x97B0EB: fmul    [esp+78h+var_20]
0x97B0EF: fstp    [esp+78h+arg_0]
0x97B0F3: fld     [esp+78h+arg_0]
0x97B0F7: fabs
0x97B0F9: fstp    [esp+78h+arg_0]
0x97B0FD: fadd    [esp+78h+arg_0]
0x97B101: fld     [esp+78h+var_1C]
0x97B105: fmul    dword ptr [esi+74h]
0x97B108: fstp    [esp+78h+arg_0]
0x97B10C: fld     [esp+78h+arg_0]
0x97B110: fabs
0x97B112: fstp    [esp+78h+arg_0]
0x97B116: fadd    [esp+78h+arg_0]
0x97B11A: fstp    [esp+78h+arg_0]
0x97B11E: fld     [esp+78h+arg_0]
0x97B122: fld     dword ptr [edi+6Ch]
0x97B125: fabs
0x97B127: fstp    [esp+78h+arg_0]
0x97B12B: fadd    [esp+78h+arg_0]
0x97B12F: fstp    [esp+78h+arg_0]
0x97B133: fld     [esp+78h+var_54]
0x97B137: fld     [esp+78h+arg_0]
0x97B13B: fcom    st(1)
0x97B13D: fnstsw  ax
0x97B13F: fstp    st(1)
0x97B141: test    ah, 5
0x97B144: jp      short loc_97B153
0x97B146: fld     [esp+78h+var_48]
0x97B14A: fcomp   st(1)
0x97B14C: fnstsw  ax
0x97B14E: test    ah, 41h
0x97B151: jz      short loc_97B18E
0x97B153: fchs
0x97B155: fstp    [esp+78h+arg_0]
0x97B159: fld     [esp+78h+var_54]
0x97B15D: fld     [esp+78h+arg_0]
0x97B161: fcom    st(1)
0x97B163: fnstsw  ax
0x97B165: fstp    st(1)
0x97B167: test    ah, 41h
0x97B16A: jnz     short loc_97B1A5
0x97B16C: fld     [esp+78h+var_48]
0x97B170: fcompp
0x97B172: fnstsw  ax
0x97B174: test    ah, 5
0x97B177: jp      short loc_97B1A7
0x97B179: fstp    st(4)
0x97B17B: pop     edi
0x97B17C: fstp    st(2)
0x97B17E: pop     esi
0x97B17F: fstp    st
0x97B181: xor     eax, eax
0x97B183: fstp    st
0x97B185: pop     ebx
0x97B186: fstp    st
0x97B188: add     esp, 6Ch
0x97B18B: retn    4
0x97B18E: fstp    st
0x97B190: fstp    st(4)
0x97B192: pop     edi
0x97B193: fstp    st(2)
0x97B195: pop     esi
0x97B196: fstp    st
0x97B198: xor     eax, eax
0x97B19A: fstp    st
0x97B19C: pop     ebx
0x97B19D: fstp    st
0x97B19F: add     esp, 6Ch
0x97B1A2: retn    4
0x97B1A5: fstp    st
0x97B1A7: fld     dword ptr [ebx+10h]
0x97B1AA: lea     eax, [ebx+0Ch]
0x97B1AD: fmul    dword ptr [esi+4Ch]
0x97B1B0: mov     [esp+78h+var_64], eax
0x97B1B4: fld     dword ptr [esi+48h]
0x97B1B7: fmul    dword ptr [eax]
0x97B1B9: faddp   st(1), st
0x97B1BB: fld     dword ptr [eax+8]
0x97B1BE: fmul    dword ptr [esi+50h]
0x97B1C1: faddp   st(1), st
0x97B1C3: fstp    [esp+78h+var_18]
0x97B1C7: fld     dword ptr [ecx+4]
0x97B1CA: fmul    dword ptr [eax+4]
0x97B1CD: fld     dword ptr [ecx]
0x97B1CF: fmul    dword ptr [eax]
0x97B1D1: faddp   st(1), st
0x97B1D3: fld     dword ptr [ecx+8]
0x97B1D6: fmul    dword ptr [eax+8]
0x97B1D9: faddp   st(1), st
0x97B1DB: fstp    [esp+78h+var_14]
0x97B1DF: fld     dword ptr [edx+4]
0x97B1E2: fmul    dword ptr [eax+4]
0x97B1E5: fld     dword ptr [edx]
0x97B1E7: fmul    dword ptr [eax]
0x97B1E9: faddp   st(1), st
0x97B1EB: fld     dword ptr [edx+8]
0x97B1EE: fmul    dword ptr [eax+8]
0x97B1F1: faddp   st(1), st
0x97B1F3: fstp    [esp+78h+var_10]
0x97B1F7: fld     dword ptr [eax+4]
0x97B1FA: fmul    st, st(5)
0x97B1FC: fld     dword ptr [eax]
0x97B1FE: fmul    st, st(5)
0x97B200: faddp   st(1), st
0x97B202: fld     dword ptr [eax+8]
0x97B205: fmul    st, st(4)
0x97B207: faddp   st(1), st
0x97B209: fstp    [esp+78h+var_50]
0x97B20D: fld     dword ptr [eax+4]
0x97B210: fmul    st, st(2)
0x97B212: fld     st(1)
0x97B214: fmul    dword ptr [eax]
0x97B216: faddp   st(1), st
0x97B218: fld     dword ptr [eax+8]
0x97B21B: fmul    [esp+78h+var_34]
0x97B21F: faddp   st(1), st
0x97B221: fstp    [esp+78h+arg_0]
0x97B225: fld     [esp+78h+arg_0]
0x97B229: fmul    [esp+78h+var_68]
0x97B22D: fadd    [esp+78h+var_50]
0x97B231: fstp    [esp+78h+var_44]
0x97B235: fld     dword ptr [esi+6Ch]
0x97B238: fmul    [esp+78h+var_18]
0x97B23C: fstp    [esp+78h+arg_0]
0x97B240: fld     [esp+78h+arg_0]
0x97B244: fabs
0x97B246: fstp    [esp+78h+arg_0]
0x97B24A: fld     [esp+78h+arg_0]
0x97B24E: fld     dword ptr [esi+70h]
0x97B251: fmul    [esp+78h+var_14]
0x97B255: fstp    [esp+78h+arg_0]
0x97B259: fld     [esp+78h+arg_0]
0x97B25D: fabs
0x97B25F: fstp    [esp+78h+arg_0]
0x97B263: fadd    [esp+78h+arg_0]
0x97B267: fld     [esp+78h+var_10]
0x97B26B: fmul    dword ptr [esi+74h]
0x97B26E: fstp    [esp+78h+arg_0]
0x97B272: fld     [esp+78h+arg_0]
0x97B276: fabs
0x97B278: fstp    [esp+78h+arg_0]
0x97B27C: fadd    [esp+78h+arg_0]
0x97B280: fstp    [esp+78h+arg_0]
0x97B284: fld     [esp+78h+arg_0]
0x97B288: fld     dword ptr [edi+70h]
0x97B28B: fabs
0x97B28D: fstp    [esp+78h+arg_0]
0x97B291: fadd    [esp+78h+arg_0]
0x97B295: fstp    [esp+78h+arg_0]
0x97B299: fld     [esp+78h+var_50]
0x97B29D: fld     [esp+78h+arg_0]
0x97B2A1: fcom    st(1)
0x97B2A3: fnstsw  ax
0x97B2A5: fstp    st(1)
0x97B2A7: test    ah, 5
0x97B2AA: jp      short loc_97B2BD
0x97B2AC: fld     [esp+78h+var_44]
0x97B2B0: fcomp   st(1)
0x97B2B2: fnstsw  ax
0x97B2B4: test    ah, 41h
0x97B2B7: jz      loc_97B18E
0x97B2BD: fchs
0x97B2BF: fstp    [esp+78h+arg_0]
0x97B2C3: fld     [esp+78h+var_50]
0x97B2C7: fld     [esp+78h+arg_0]
0x97B2CB: fcom    st(1)
0x97B2CD: fnstsw  ax
0x97B2CF: fstp    st(1)
0x97B2D1: test    ah, 41h
0x97B2D4: jnz     short loc_97B2E8
0x97B2D6: fld     [esp+78h+var_44]
0x97B2DA: fcompp
0x97B2DC: fnstsw  ax
0x97B2DE: test    ah, 5
0x97B2E1: jp      short loc_97B2EA
0x97B2E3: jmp     loc_97B190
0x97B2E8: fstp    st
0x97B2EA: fld     dword ptr [ebx+1Ch]
0x97B2ED: push    ebp
0x97B2EE: fmul    dword ptr [esi+4Ch]
0x97B2F1: lea     ebp, [ebx+18h]
0x97B2F4: fld     dword ptr [ebp+0]
0x97B2F7: fmul    dword ptr [esi+48h]
0x97B2FA: faddp   st(1), st
0x97B2FC: fld     dword ptr [ebp+8]
0x97B2FF: fmul    dword ptr [esi+50h]
0x97B302: faddp   st(1), st
0x97B304: fstp    [esp+7Ch+var_C]
0x97B308: fld     dword ptr [ecx+4]
0x97B30B: fmul    dword ptr [ebp+4]
0x97B30E: fld     dword ptr [ecx]
0x97B310: fmul    dword ptr [ebp+0]
0x97B313: faddp   st(1), st
0x97B315: fld     dword ptr [ecx+8]
0x97B318: fmul    dword ptr [ebp+8]
0x97B31B: faddp   st(1), st
0x97B31D: fstp    [esp+7Ch+var_8]
0x97B321: fld     dword ptr [edx+4]
0x97B324: fmul    dword ptr [ebp+4]
0x97B327: fld     dword ptr [edx]
0x97B329: fmul    dword ptr [ebp+0]
0x97B32C: faddp   st(1), st
0x97B32E: fld     dword ptr [edx+8]
0x97B331: fmul    dword ptr [ebp+8]
0x97B334: faddp   st(1), st
0x97B336: fstp    [esp+7Ch+var_4]
0x97B33A: fld     dword ptr [ebp+4]
0x97B33D: fmul    st, st(5)
0x97B33F: fld     dword ptr [ebp+0]
0x97B342: fmul    st, st(5)
0x97B344: faddp   st(1), st
0x97B346: fld     dword ptr [ebp+8]
0x97B349: fmul    st, st(4)
0x97B34B: faddp   st(1), st
0x97B34D: fstp    [esp+7Ch+var_4C]
0x97B351: fld     dword ptr [ebp+4]
0x97B354: fmul    st, st(2)
0x97B356: fld     dword ptr [ebp+0]
0x97B359: fmul    st, st(2)
0x97B35B: faddp   st(1), st
0x97B35D: fld     dword ptr [ebp+8]
0x97B360: fmul    [esp+7Ch+var_34]
0x97B364: faddp   st(1), st
0x97B366: fstp    [esp+7Ch+arg_0]
0x97B36D: fld     [esp+7Ch+arg_0]
0x97B374: fmul    [esp+7Ch+var_68]
0x97B378: fadd    [esp+7Ch+var_4C]
0x97B37C: fstp    [esp+7Ch+var_40]
0x97B380: fld     dword ptr [esi+6Ch]
0x97B383: fmul    [esp+7Ch+var_C]
0x97B387: fstp    [esp+7Ch+arg_0]
0x97B38E: fld     [esp+7Ch+arg_0]
0x97B395: fabs
0x97B397: fstp    [esp+7Ch+arg_0]
0x97B39E: fld     [esp+7Ch+arg_0]
0x97B3A5: fld     dword ptr [esi+70h]
0x97B3A8: fmul    [esp+7Ch+var_8]
0x97B3AC: fstp    [esp+7Ch+arg_0]
0x97B3B3: fld     [esp+7Ch+arg_0]
0x97B3BA: fabs
0x97B3BC: fstp    [esp+7Ch+arg_0]
0x97B3C3: fadd    [esp+7Ch+arg_0]
0x97B3CA: fld     [esp+7Ch+var_4]
0x97B3CE: fmul    dword ptr [esi+74h]
0x97B3D1: fstp    [esp+7Ch+arg_0]
0x97B3D8: fld     [esp+7Ch+arg_0]
0x97B3DF: fabs
0x97B3E1: fstp    [esp+7Ch+arg_0]
0x97B3E8: fadd    [esp+7Ch+arg_0]
0x97B3EF: fstp    [esp+7Ch+arg_0]
0x97B3F6: fld     [esp+7Ch+arg_0]
0x97B3FD: fld     dword ptr [edi+74h]
0x97B400: fabs
0x97B402: fstp    [esp+7Ch+arg_0]
0x97B409: fadd    [esp+7Ch+arg_0]
0x97B410: fstp    [esp+7Ch+arg_0]
0x97B417: fld     [esp+7Ch+var_4C]
0x97B41B: fld     [esp+7Ch+arg_0]
0x97B422: fcom    st(1)
0x97B424: fnstsw  ax
0x97B426: fstp    st(1)
0x97B428: test    ah, 5
0x97B42B: jp      short loc_97B43E
0x97B42D: fld     [esp+7Ch+var_40]
0x97B431: fcomp   st(1)
0x97B433: fnstsw  ax
0x97B435: test    ah, 41h
0x97B438: jz      loc_97B712
0x97B43E: fchs
0x97B440: fstp    [esp+7Ch+arg_0]
0x97B447: fld     [esp+7Ch+var_4C]
0x97B44B: fld     [esp+7Ch+arg_0]
0x97B452: fcom    st(1)
0x97B454: fnstsw  ax
0x97B456: fstp    st(1)
0x97B458: test    ah, 41h
0x97B45B: jnz     short loc_97B480
0x97B45D: fld     [esp+7Ch+var_40]
0x97B461: fcompp
0x97B463: fnstsw  ax
0x97B465: test    ah, 5
0x97B468: jp      short loc_97B482
0x97B46A: fstp    st(4)
0x97B46C: pop     ebp
0x97B46D: fstp    st(2)
0x97B46F: pop     edi
0x97B470: fstp    st
0x97B472: pop     esi
0x97B473: fstp    st
0x97B475: xor     eax, eax
0x97B477: fstp    st
0x97B479: pop     ebx
0x97B47A: add     esp, 6Ch
0x97B47D: retn    4
0x97B480: fstp    st
0x97B482: fld     dword ptr [edi+6Ch]
0x97B485: fmul    [esp+7Ch+var_24]
0x97B489: fstp    [esp+7Ch+arg_0]
0x97B490: fld     [esp+7Ch+arg_0]
0x97B497: fabs
0x97B499: fstp    [esp+7Ch+arg_0]
0x97B4A0: fld     [esp+7Ch+arg_0]
0x97B4A7: fld     dword ptr [edi+70h]
0x97B4AA: fmul    [esp+7Ch+var_18]
0x97B4AE: fstp    [esp+7Ch+arg_0]
0x97B4B5: fld     [esp+7Ch+arg_0]
0x97B4BC: fabs
0x97B4BE: fstp    [esp+7Ch+arg_0]
0x97B4C5: fadd    [esp+7Ch+arg_0]
0x97B4CC: fld     dword ptr [edi+74h]
0x97B4CF: fmul    [esp+7Ch+var_C]
0x97B4D3: fstp    [esp+7Ch+arg_0]
0x97B4DA: fld     [esp+7Ch+arg_0]
0x97B4E1: fabs
0x97B4E3: fstp    [esp+7Ch+arg_0]
0x97B4EA: fadd    [esp+7Ch+arg_0]
0x97B4F1: fstp    [esp+7Ch+arg_0]
0x97B4F8: fld     [esp+7Ch+arg_0]
0x97B4FF: fld     dword ptr [esi+6Ch]
0x97B502: fabs
0x97B504: fstp    [esp+7Ch+arg_0]
0x97B50B: fadd    [esp+7Ch+arg_0]
0x97B512: fstp    [esp+7Ch+arg_0]
0x97B519: fld     st(4)
0x97B51B: fmul    dword ptr [esi+4Ch]
0x97B51E: fld     dword ptr [esi+48h]
0x97B521: fmul    st, st(5)
0x97B523: faddp   st(1), st
0x97B525: fld     dword ptr [esi+50h]
0x97B528: fmul    st, st(4)
0x97B52A: faddp   st(1), st
0x97B52C: fstp    [esp+7Ch+var_6C]
0x97B530: fld     st(1)
0x97B532: fmul    dword ptr [esi+4Ch]
0x97B535: fld     dword ptr [esi+48h]
0x97B538: fmul    st, st(2)
0x97B53A: faddp   st(1), st
0x97B53C: fld     dword ptr [esi+50h]
0x97B53F: fmul    [esp+7Ch+var_34]
0x97B543: faddp   st(1), st
0x97B545: fstp    [esp+7Ch+var_5C]
0x97B549: fld     [esp+7Ch+var_5C]
0x97B54D: fmul    [esp+7Ch+var_68]
0x97B551: fld     [esp+7Ch+var_6C]
0x97B555: fld     st
0x97B557: faddp   st(2), st
0x97B559: fxch    st(1)
0x97B55B: fstp    [esp+7Ch+var_6C]
0x97B55F: fld     [esp+7Ch+arg_0]
0x97B566: fcomp   st(1)
0x97B568: fnstsw  ax
0x97B56A: test    ah, 5
0x97B56D: jp      short loc_97B587
0x97B56F: fld     [esp+7Ch+var_6C]
0x97B573: fld     [esp+7Ch+arg_0]
0x97B57A: fcompp
0x97B57C: fnstsw  ax
0x97B57E: test    ah, 5
0x97B581: jnp     loc_97B712
0x97B587: fld     [esp+7Ch+arg_0]
0x97B58E: fchs
0x97B590: fstp    [esp+7Ch+arg_0]
0x97B597: fld     [esp+7Ch+arg_0]
0x97B59E: fcom    st(1)
0x97B5A0: fnstsw  ax
0x97B5A2: fstp    st(1)
0x97B5A4: test    ah, 41h
0x97B5A7: jnz     short loc_97B5CC
0x97B5A9: fld     [esp+7Ch+var_6C]
0x97B5AD: fcompp
0x97B5AF: fnstsw  ax
0x97B5B1: test    ah, 5
0x97B5B4: jp      short loc_97B5CE
0x97B5B6: fstp    st(4)
0x97B5B8: pop     ebp
0x97B5B9: fstp    st(2)
0x97B5BB: pop     edi
0x97B5BC: fstp    st
0x97B5BE: pop     esi
0x97B5BF: fstp    st
0x97B5C1: xor     eax, eax
0x97B5C3: fstp    st
0x97B5C5: pop     ebx
0x97B5C6: add     esp, 6Ch
0x97B5C9: retn    4
0x97B5CC: fstp    st
0x97B5CE: fld     dword ptr [edi+6Ch]
0x97B5D1: fmul    [esp+7Ch+var_20]
0x97B5D5: fstp    [esp+7Ch+arg_0]
0x97B5DC: fld     [esp+7Ch+arg_0]
0x97B5E3: fabs
0x97B5E5: fstp    [esp+7Ch+arg_0]
0x97B5EC: fld     [esp+7Ch+arg_0]
0x97B5F3: fld     dword ptr [edi+70h]
0x97B5F6: fmul    [esp+7Ch+var_14]
0x97B5FA: fstp    [esp+7Ch+arg_0]
0x97B601: fld     [esp+7Ch+arg_0]
0x97B608: fabs
0x97B60A: fstp    [esp+7Ch+arg_0]
0x97B611: fadd    [esp+7Ch+arg_0]
0x97B618: fld     dword ptr [edi+74h]
0x97B61B: fmul    [esp+7Ch+var_8]
0x97B61F: fstp    [esp+7Ch+arg_0]
0x97B626: fld     [esp+7Ch+arg_0]
0x97B62D: fabs
0x97B62F: fstp    [esp+7Ch+arg_0]
0x97B636: fadd    [esp+7Ch+arg_0]
0x97B63D: fstp    [esp+7Ch+arg_0]
0x97B644: fld     [esp+7Ch+arg_0]
0x97B64B: fld     dword ptr [esi+70h]
0x97B64E: fabs
0x97B650: fstp    [esp+7Ch+arg_0]
0x97B657: fadd    [esp+7Ch+arg_0]
0x97B65E: fstp    [esp+7Ch+arg_0]
0x97B665: fld     dword ptr [ecx+4]
0x97B668: fmul    st, st(5)
0x97B66A: fld     st(4)
0x97B66C: fmul    dword ptr [ecx]
0x97B66E: faddp   st(1), st
0x97B670: fld     dword ptr [ecx+8]
0x97B673: fmul    st, st(4)
0x97B675: faddp   st(1), st
0x97B677: fstp    [esp+7Ch+var_6C]
0x97B67B: fld     dword ptr [ecx+4]
0x97B67E: fmul    st, st(2)
0x97B680: fld     st(1)
0x97B682: fmul    dword ptr [ecx]
0x97B684: faddp   st(1), st
0x97B686: fld     dword ptr [ecx+8]
0x97B689: fmul    [esp+7Ch+var_34]
0x97B68D: faddp   st(1), st
0x97B68F: fstp    [esp+7Ch+var_5C]
0x97B693: fld     [esp+7Ch+var_5C]
0x97B697: fmul    [esp+7Ch+var_68]
0x97B69B: fld     [esp+7Ch+var_6C]
0x97B69F: fld     st
0x97B6A1: faddp   st(2), st
0x97B6A3: fxch    st(1)
0x97B6A5: fstp    [esp+7Ch+var_6C]
0x97B6A9: fld     [esp+7Ch+arg_0]
0x97B6B0: fcomp   st(1)
0x97B6B2: fnstsw  ax
0x97B6B4: test    ah, 5
0x97B6B7: jp      short loc_97B6CD
0x97B6B9: fld     [esp+7Ch+var_6C]
0x97B6BD: fld     [esp+7Ch+arg_0]
0x97B6C4: fcompp
0x97B6C6: fnstsw  ax
0x97B6C8: test    ah, 5
0x97B6CB: jnp     short loc_97B712
0x97B6CD: fld     [esp+7Ch+arg_0]
0x97B6D4: fchs
0x97B6D6: fstp    [esp+7Ch+arg_0]
0x97B6DD: fld     [esp+7Ch+arg_0]
0x97B6E4: fcom    st(1)
0x97B6E6: fnstsw  ax
0x97B6E8: fstp    st(1)
0x97B6EA: test    ah, 41h
0x97B6ED: jnz     short loc_97B72A
0x97B6EF: fld     [esp+7Ch+var_6C]
0x97B6F3: fcompp
0x97B6F5: fnstsw  ax
0x97B6F7: test    ah, 5
0x97B6FA: jp      short loc_97B72C
0x97B6FC: fstp    st(4)
0x97B6FE: pop     ebp
0x97B6FF: fstp    st(2)
0x97B701: pop     edi
0x97B702: fstp    st
0x97B704: pop     esi
0x97B705: fstp    st
0x97B707: xor     eax, eax
0x97B709: fstp    st
0x97B70B: pop     ebx
0x97B70C: add     esp, 6Ch
0x97B70F: retn    4
0x97B712: fstp    st
0x97B714: pop     ebp
0x97B715: fstp    st(4)
0x97B717: pop     edi
0x97B718: fstp    st(2)
0x97B71A: pop     esi
0x97B71B: fstp    st
0x97B71D: xor     eax, eax
0x97B71F: fstp    st
0x97B721: pop     ebx
0x97B722: fstp    st
0x97B724: add     esp, 6Ch
0x97B727: retn    4
0x97B72A: fstp    st
0x97B72C: fld     dword ptr [edi+6Ch]
0x97B72F: fmul    [esp+7Ch+var_1C]
0x97B733: fstp    [esp+7Ch+arg_0]
0x97B73A: fld     [esp+7Ch+arg_0]
0x97B741: fabs
0x97B743: fstp    [esp+7Ch+arg_0]
0x97B74A: fld     [esp+7Ch+arg_0]
0x97B751: fld     dword ptr [edi+70h]
0x97B754: fmul    [esp+7Ch+var_10]
0x97B758: fstp    [esp+7Ch+arg_0]
0x97B75F: fld     [esp+7Ch+arg_0]
0x97B766: fabs
0x97B768: fstp    [esp+7Ch+arg_0]
0x97B76F: fadd    [esp+7Ch+arg_0]
0x97B776: fld     dword ptr [edi+74h]
0x97B779: fmul    [esp+7Ch+var_4]
0x97B77D: fstp    [esp+7Ch+arg_0]
0x97B784: fld     [esp+7Ch+arg_0]
0x97B78B: fabs
0x97B78D: fstp    [esp+7Ch+arg_0]
0x97B794: fadd    [esp+7Ch+arg_0]
0x97B79B: fstp    [esp+7Ch+arg_0]
0x97B7A2: fld     [esp+7Ch+arg_0]
0x97B7A9: fld     dword ptr [esi+74h]
0x97B7AC: fabs
0x97B7AE: fstp    [esp+7Ch+arg_0]
0x97B7B5: fadd    [esp+7Ch+arg_0]
0x97B7BC: fstp    [esp+7Ch+arg_0]
0x97B7C3: fld     dword ptr [edx+4]
0x97B7C6: fmulp   st(5), st
0x97B7C8: fld     dword ptr [edx]
0x97B7CA: fmulp   st(4), st
0x97B7CC: fxch    st(4)
0x97B7CE: faddp   st(3), st
0x97B7D0: fld     dword ptr [edx+8]
0x97B7D3: fmulp   st(2), st
0x97B7D5: fxch    st(2)
0x97B7D7: faddp   st(1), st
0x97B7D9: fstp    [esp+7Ch+var_6C]
0x97B7DD: fmul    dword ptr [edx+4]
0x97B7E0: fld     dword ptr [edx]
0x97B7E2: fmulp   st(2), st
0x97B7E4: faddp   st(1), st
0x97B7E6: fld     dword ptr [edx+8]
0x97B7E9: fmul    [esp+7Ch+var_34]
0x97B7ED: faddp   st(1), st
0x97B7EF: fstp    [esp+7Ch+var_5C]
0x97B7F3: fld     [esp+7Ch+var_5C]
0x97B7F7: fmul    [esp+7Ch+var_68]
0x97B7FB: fld     [esp+7Ch+var_6C]
0x97B7FF: fld     st
0x97B801: faddp   st(2), st
0x97B803: fxch    st(1)
0x97B805: fstp    [esp+7Ch+var_6C]
0x97B809: fld     [esp+7Ch+arg_0]
0x97B810: fcom    st(1)
0x97B812: fnstsw  ax
0x97B814: fld     [esp+7Ch+var_6C]
0x97B818: test    ah, 5
0x97B81B: jp      short loc_97B82A
0x97B81D: fcom    st(1)
0x97B81F: fnstsw  ax
0x97B821: test    ah, 41h
0x97B824: jz      loc_97BE5D
0x97B82A: fxch    st(1)
0x97B82C: fchs
0x97B82E: fstp    [esp+7Ch+arg_0]
0x97B835: fld     [esp+7Ch+arg_0]
0x97B83C: fcom    st(2)
0x97B83E: fnstsw  ax
0x97B840: fstp    st(2)
0x97B842: test    ah, 41h
0x97B845: jnz     short loc_97B85C
0x97B847: fcompp
0x97B849: fnstsw  ax
0x97B84B: test    ah, 5
0x97B84E: jp      short loc_97B860
0x97B850: pop     ebp
0x97B851: pop     edi
0x97B852: pop     esi
0x97B853: xor     eax, eax
0x97B855: pop     ebx
0x97B856: add     esp, 6Ch
0x97B859: retn    4
0x97B85C: fstp    st(1)
0x97B85E: fstp    st
0x97B860: fld     dword ptr [esi+70h]
0x97B863: fld     [esp+7Ch+var_1C]
0x97B867: fld     st
0x97B869: fmulp   st(2), st
0x97B86B: fxch    st(1)
0x97B86D: fstp    [esp+7Ch+arg_0]
0x97B874: fld     [esp+7Ch+arg_0]
0x97B87B: fabs
0x97B87D: fstp    [esp+7Ch+arg_0]
0x97B884: fld     [esp+7Ch+arg_0]
0x97B88B: fld     [esp+7Ch+var_20]
0x97B88F: fmul    dword ptr [esi+74h]
0x97B892: fstp    [esp+7Ch+arg_0]
0x97B899: fld     [esp+7Ch+arg_0]
0x97B8A0: fabs
0x97B8A2: fstp    [esp+7Ch+arg_0]
0x97B8A9: fadd    [esp+7Ch+arg_0]
0x97B8B0: fstp    [esp+7Ch+arg_0]
0x97B8B7: fld     [esp+7Ch+arg_0]
0x97B8BE: fld     dword ptr [edi+70h]
0x97B8C1: fld     [esp+7Ch+var_C]
0x97B8C5: fld     st
0x97B8C7: fmulp   st(2), st
0x97B8C9: fxch    st(1)
0x97B8CB: fstp    [esp+7Ch+arg_0]
0x97B8D2: fld     [esp+7Ch+arg_0]
0x97B8D9: fabs
0x97B8DB: fstp    [esp+7Ch+arg_0]
0x97B8E2: fld     [esp+7Ch+arg_0]
0x97B8E9: fld     dword ptr [edi+74h]
0x97B8EC: fld     [esp+7Ch+var_18]
0x97B8F0: fld     st
0x97B8F2: fmulp   st(2), st
0x97B8F4: fxch    st(1)
0x97B8F6: fstp    [esp+7Ch+arg_0]
0x97B8FD: fld     [esp+7Ch+arg_0]
0x97B904: fabs
0x97B906: fstp    [esp+7Ch+arg_0]
0x97B90D: fld     [esp+7Ch+arg_0]
0x97B914: faddp   st(2), st
0x97B916: fxch    st(1)
0x97B918: fstp    [esp+7Ch+arg_0]
0x97B91F: fld     [esp+7Ch+arg_0]
0x97B926: faddp   st(3), st
0x97B928: fxch    st(2)
0x97B92A: fstp    [esp+7Ch+arg_0]
0x97B931: fld     [esp+7Ch+var_4C]
0x97B935: fmul    st, st(2)
0x97B937: fld     st(1)
0x97B939: fmul    [esp+7Ch+var_50]
0x97B93D: fsubp   st(1), st
0x97B93F: fstp    [esp+7Ch+var_6C]
0x97B943: fld     [esp+7Ch+var_6C]
0x97B947: fld     [esp+7Ch+arg_0]
0x97B94E: fcom    st(1)
0x97B950: fnstsw  ax
0x97B952: test    ah, 5
0x97B955: jp      short loc_97B994
0x97B957: fstp    st(1)
0x97B959: fld     [esp+7Ch+var_40]
0x97B95D: fld     st
0x97B95F: fmulp   st(4), st
0x97B961: fld     [esp+7Ch+var_44]
0x97B965: fmulp   st(3), st
0x97B967: fxch    st(3)
0x97B969: fsubrp  st(2), st
0x97B96B: fxch    st(1)
0x97B96D: fstp    [esp+7Ch+arg_0]
0x97B974: fld     [esp+7Ch+arg_0]
0x97B97B: fcompp
0x97B97D: fnstsw  ax
0x97B97F: test    ah, 41h
0x97B982: jnz     short loc_97B9F4
0x97B984: pop     ebp
0x97B985: fstp    st
0x97B987: pop     edi
0x97B988: fstp    st
0x97B98A: pop     esi
0x97B98B: xor     eax, eax
0x97B98D: pop     ebx
0x97B98E: add     esp, 6Ch
0x97B991: retn    4
0x97B994: fchs
0x97B996: fstp    [esp+7Ch+arg_0]
0x97B99D: fld     [esp+7Ch+arg_0]
0x97B9A4: fcom    st(1)
0x97B9A6: fnstsw  ax
0x97B9A8: fstp    st(1)
0x97B9AA: test    ah, 41h
0x97B9AD: jnz     short loc_97B9EA
0x97B9AF: fld     [esp+7Ch+var_40]
0x97B9B3: fld     st
0x97B9B5: fmulp   st(4), st
0x97B9B7: fld     [esp+7Ch+var_44]
0x97B9BB: fmulp   st(3), st
0x97B9BD: fxch    st(3)
0x97B9BF: fsubrp  st(2), st
0x97B9C1: fxch    st(1)
0x97B9C3: fstp    [esp+7Ch+arg_0]
0x97B9CA: fld     [esp+7Ch+arg_0]
0x97B9D1: fcompp
0x97B9D3: fnstsw  ax
0x97B9D5: test    ah, 5
0x97B9D8: jp      short loc_97B9F4
0x97B9DA: pop     ebp
0x97B9DB: fstp    st
0x97B9DD: pop     edi
0x97B9DE: fstp    st
0x97B9E0: pop     esi
0x97B9E1: xor     eax, eax
0x97B9E3: pop     ebx
0x97B9E4: add     esp, 6Ch
0x97B9E7: retn    4
0x97B9EA: fstp    st
0x97B9EC: fstp    st
0x97B9EE: fstp    st
0x97B9F0: fld     [esp+7Ch+var_40]
0x97B9F4: fld     dword ptr [esi+6Ch]
0x97B9F7: fmulp   st(2), st
0x97B9F9: fxch    st(1)
0x97B9FB: fstp    [esp+7Ch+arg_0]
0x97BA02: fld     [esp+7Ch+arg_0]
0x97BA09: fabs
0x97BA0B: fstp    [esp+7Ch+arg_0]
0x97BA12: fld     [esp+7Ch+arg_0]
0x97BA19: fld     [esp+7Ch+var_24]
0x97BA1D: fld     st
0x97BA1F: fmul    dword ptr [esi+74h]
0x97BA22: fstp    [esp+7Ch+arg_0]
0x97BA29: fld     [esp+7Ch+arg_0]
0x97BA30: fabs
0x97BA32: fstp    [esp+7Ch+arg_0]
0x97BA39: fld     [esp+7Ch+arg_0]
0x97BA40: faddp   st(2), st
0x97BA42: fxch    st(1)
0x97BA44: fstp    [esp+7Ch+arg_0]
0x97BA4B: fld     [esp+7Ch+arg_0]
0x97BA52: fld     dword ptr [edi+70h]
0x97BA55: fld     [esp+7Ch+var_8]
0x97BA59: fld     st
0x97BA5B: fmulp   st(2), st
0x97BA5D: fxch    st(1)
0x97BA5F: fstp    [esp+7Ch+arg_0]
0x97BA66: fld     [esp+7Ch+arg_0]
0x97BA6D: fabs
0x97BA6F: fstp    [esp+7Ch+arg_0]
0x97BA76: fld     [esp+7Ch+arg_0]
0x97BA7D: fld     dword ptr [edi+74h]
0x97BA80: fld     [esp+7Ch+var_14]
0x97BA84: fld     st
0x97BA86: fmulp   st(2), st
0x97BA88: fxch    st(1)
0x97BA8A: fstp    [esp+7Ch+arg_0]
0x97BA91: fld     [esp+7Ch+arg_0]
0x97BA98: fabs
0x97BA9A: fstp    [esp+7Ch+arg_0]
0x97BAA1: fld     [esp+7Ch+arg_0]
0x97BAA8: faddp   st(2), st
0x97BAAA: fxch    st(1)
0x97BAAC: fstp    [esp+7Ch+arg_0]
0x97BAB3: fld     [esp+7Ch+arg_0]
0x97BABA: faddp   st(3), st
0x97BABC: fxch    st(2)
0x97BABE: fstp    [esp+7Ch+arg_0]
0x97BAC5: fld     [esp+7Ch+var_4C]
0x97BAC9: fmul    st, st(2)
0x97BACB: fld     st(1)
0x97BACD: fmul    [esp+7Ch+var_50]
0x97BAD1: fsubp   st(1), st
0x97BAD3: fstp    [esp+7Ch+var_6C]
0x97BAD7: fld     [esp+7Ch+var_6C]
0x97BADB: fld     [esp+7Ch+arg_0]
0x97BAE2: fcom    st(1)
0x97BAE4: fnstsw  ax
0x97BAE6: test    ah, 5
0x97BAE9: jp      short loc_97BB22
0x97BAEB: fstp    st(1)
0x97BAED: fld     st(4)
0x97BAEF: fmulp   st(3), st
0x97BAF1: fld     [esp+7Ch+var_44]
0x97BAF5: fmulp   st(2), st
0x97BAF7: fxch    st(2)
0x97BAF9: fsubrp  st(1), st
0x97BAFB: fstp    [esp+7Ch+arg_0]
0x97BB02: fld     [esp+7Ch+arg_0]
0x97BB09: fcompp
0x97BB0B: fnstsw  ax
0x97BB0D: test    ah, 41h
0x97BB10: jnz     short loc_97BB78
0x97BB12: pop     ebp
0x97BB13: fstp    st(1)
0x97BB15: pop     edi
0x97BB16: fstp    st
0x97BB18: pop     esi
0x97BB19: xor     eax, eax
0x97BB1B: pop     ebx
0x97BB1C: add     esp, 6Ch
0x97BB1F: retn    4
0x97BB22: fchs
0x97BB24: fstp    [esp+7Ch+arg_0]
0x97BB2B: fld     [esp+7Ch+arg_0]
0x97BB32: fcom    st(1)
0x97BB34: fnstsw  ax
0x97BB36: fstp    st(1)
0x97BB38: test    ah, 41h
0x97BB3B: jnz     short loc_97BB72
0x97BB3D: fld     st(4)
0x97BB3F: fmulp   st(3), st
0x97BB41: fld     [esp+7Ch+var_44]
0x97BB45: fmulp   st(2), st
0x97BB47: fxch    st(2)
0x97BB49: fsubrp  st(1), st
0x97BB4B: fstp    [esp+7Ch+arg_0]
0x97BB52: fld     [esp+7Ch+arg_0]
0x97BB59: fcompp
0x97BB5B: fnstsw  ax
0x97BB5D: test    ah, 5
0x97BB60: jp      short loc_97BB78
0x97BB62: pop     ebp
0x97BB63: fstp    st(1)
0x97BB65: pop     edi
0x97BB66: fstp    st
0x97BB68: pop     esi
0x97BB69: xor     eax, eax
0x97BB6B: pop     ebx
0x97BB6C: add     esp, 6Ch
0x97BB6F: retn    4
0x97BB72: fstp    st
0x97BB74: fstp    st
0x97BB76: fstp    st
0x97BB78: fld     dword ptr [esi+6Ch]
0x97BB7B: fmul    [esp+7Ch+var_20]
0x97BB7F: fstp    [esp+7Ch+arg_0]
0x97BB86: fld     [esp+7Ch+arg_0]
0x97BB8D: fabs
0x97BB8F: fstp    [esp+7Ch+arg_0]
0x97BB96: fld     [esp+7Ch+arg_0]
0x97BB9D: fld     dword ptr [esi+70h]
0x97BBA0: fmul    st, st(2)
0x97BBA2: fstp    [esp+7Ch+arg_0]
0x97BBA9: fld     [esp+7Ch+arg_0]
0x97BBB0: fabs
0x97BBB2: fstp    [esp+7Ch+arg_0]
0x97BBB9: fadd    [esp+7Ch+arg_0]
0x97BBC0: fstp    [esp+7Ch+arg_0]
0x97BBC7: fld     [esp+7Ch+arg_0]
0x97BBCE: fld     dword ptr [edi+70h]
0x97BBD1: fld     [esp+7Ch+var_4]
0x97BBD5: fld     st
0x97BBD7: fmulp   st(2), st
0x97BBD9: fxch    st(1)
0x97BBDB: fstp    [esp+7Ch+arg_0]
0x97BBE2: fld     [esp+7Ch+arg_0]
0x97BBE9: fabs
0x97BBEB: fstp    [esp+7Ch+arg_0]
0x97BBF2: fld     [esp+7Ch+arg_0]
0x97BBF9: fld     dword ptr [edi+74h]
0x97BBFC: fld     [esp+7Ch+var_10]
0x97BC00: fld     st
0x97BC02: fmulp   st(2), st
0x97BC04: fxch    st(1)
0x97BC06: fstp    [esp+7Ch+arg_0]
0x97BC0D: fld     [esp+7Ch+arg_0]
0x97BC14: fabs
0x97BC16: fstp    [esp+7Ch+arg_0]
0x97BC1D: fld     [esp+7Ch+arg_0]
0x97BC24: faddp   st(2), st
0x97BC26: fxch    st(1)
0x97BC28: fstp    [esp+7Ch+arg_0]
0x97BC2F: fld     [esp+7Ch+arg_0]
0x97BC36: faddp   st(3), st
0x97BC38: fxch    st(2)
0x97BC3A: fstp    [esp+7Ch+arg_0]
0x97BC41: fld     [esp+7Ch+var_4C]
0x97BC45: fmul    st, st(2)
0x97BC47: fld     st(1)
0x97BC49: fmul    [esp+7Ch+var_50]
0x97BC4D: fsubp   st(1), st
0x97BC4F: fstp    [esp+7Ch+var_6C]
0x97BC53: fld     [esp+7Ch+var_6C]
0x97BC57: fld     [esp+7Ch+arg_0]
0x97BC5E: fcom    st(1)
0x97BC60: fnstsw  ax
0x97BC62: test    ah, 5
0x97BC65: jp      short loc_97BCA0
0x97BC67: fstp    st(1)
0x97BC69: fld     st(4)
0x97BC6B: fmul    st, st(3)
0x97BC6D: fld     st(2)
0x97BC6F: fmul    [esp+7Ch+var_44]
0x97BC73: fsubp   st(1), st
0x97BC75: fstp    [esp+7Ch+arg_0]
0x97BC7C: fld     [esp+7Ch+arg_0]
0x97BC83: fcompp
0x97BC85: fnstsw  ax
0x97BC87: test    ah, 41h
0x97BC8A: jnz     short loc_97BCF4
0x97BC8C: fstp    st
0x97BC8E: pop     ebp
0x97BC8F: fstp    st(2)
0x97BC91: pop     edi
0x97BC92: fstp    st
0x97BC94: pop     esi
0x97BC95: fstp    st
0x97BC97: xor     eax, eax
0x97BC99: pop     ebx
0x97BC9A: add     esp, 6Ch
0x97BC9D: retn    4
0x97BCA0: fchs
0x97BCA2: fstp    [esp+7Ch+arg_0]
0x97BCA9: fld     [esp+7Ch+arg_0]
0x97BCB0: fcom    st(1)
0x97BCB2: fnstsw  ax
0x97BCB4: fstp    st(1)
0x97BCB6: test    ah, 41h
0x97BCB9: jnz     short loc_97BCF2
0x97BCBB: fld     st(4)
0x97BCBD: fmul    st, st(3)
0x97BCBF: fld     st(2)
0x97BCC1: fmul    [esp+7Ch+var_44]
0x97BCC5: fsubp   st(1), st
0x97BCC7: fstp    [esp+7Ch+arg_0]
0x97BCCE: fld     [esp+7Ch+arg_0]
0x97BCD5: fcompp
0x97BCD7: fnstsw  ax
0x97BCD9: test    ah, 5
0x97BCDC: jp      short loc_97BCF4
0x97BCDE: fstp    st
0x97BCE0: pop     ebp
0x97BCE1: fstp    st(2)
0x97BCE3: pop     edi
0x97BCE4: fstp    st
0x97BCE6: pop     esi
0x97BCE7: fstp    st
0x97BCE9: xor     eax, eax
0x97BCEB: pop     ebx
0x97BCEC: add     esp, 6Ch
0x97BCEF: retn    4
0x97BCF2: fstp    st
0x97BCF4: fld     dword ptr [edi+6Ch]
0x97BCF7: fmul    [esp+7Ch+var_C]
0x97BCFB: fstp    [esp+7Ch+arg_0]
0x97BD02: fld     [esp+7Ch+arg_0]
0x97BD09: fabs
0x97BD0B: fstp    [esp+7Ch+arg_0]
0x97BD12: fld     [esp+7Ch+arg_0]
0x97BD19: fld     dword ptr [edi+74h]
0x97BD1C: fmul    st, st(4)
0x97BD1E: fstp    [esp+7Ch+arg_0]
0x97BD25: fld     [esp+7Ch+arg_0]
0x97BD2C: fabs
0x97BD2E: fstp    [esp+7Ch+arg_0]
0x97BD35: fadd    [esp+7Ch+arg_0]
0x97BD3C: fstp    [esp+7Ch+arg_0]
0x97BD43: fld     [esp+7Ch+arg_0]
0x97BD4A: fld     dword ptr [esi+70h]
0x97BD4D: fmul    st, st(3)
0x97BD4F: fstp    [esp+7Ch+arg_0]
0x97BD56: fld     [esp+7Ch+arg_0]
0x97BD5D: fabs
0x97BD5F: fstp    [esp+7Ch+arg_0]
0x97BD66: fld     [esp+7Ch+arg_0]
0x97BD6D: fld     [esp+7Ch+var_14]
0x97BD71: fmul    dword ptr [esi+74h]
0x97BD74: fstp    [esp+7Ch+arg_0]
0x97BD7B: fld     [esp+7Ch+arg_0]
0x97BD82: fabs
0x97BD84: fstp    [esp+7Ch+arg_0]
0x97BD8B: fadd    [esp+7Ch+arg_0]
0x97BD92: fstp    [esp+7Ch+arg_0]
0x97BD99: fadd    [esp+7Ch+arg_0]
0x97BDA0: fstp    [esp+7Ch+arg_0]
0x97BDA7: fld     [esp+7Ch+var_C]
0x97BDAB: fld     st
0x97BDAD: fmul    [esp+7Ch+var_54]
0x97BDB1: fld     [esp+7Ch+var_4C]
0x97BDB5: fmul    st, st(5)
0x97BDB7: fsubp   st(1), st
0x97BDB9: fstp    [esp+7Ch+var_6C]
0x97BDBD: fld     [esp+7Ch+var_6C]
0x97BDC1: fld     [esp+7Ch+arg_0]
0x97BDC8: fcomp   st(1)
0x97BDCA: fnstsw  ax
0x97BDCC: test    ah, 5
0x97BDCF: jp      short loc_97BE11
0x97BDD1: fstp    st
0x97BDD3: fld     [esp+7Ch+var_48]
0x97BDD7: fld     st
0x97BDD9: fmulp   st(2), st
0x97BDDB: fld     st(5)
0x97BDDD: fmul    st, st(5)
0x97BDDF: fsubp   st(2), st
0x97BDE1: fxch    st(1)
0x97BDE3: fstp    [esp+7Ch+var_5C]
0x97BDE7: fld     [esp+7Ch+var_5C]
0x97BDEB: fld     [esp+7Ch+arg_0]
0x97BDF2: fcompp
0x97BDF4: fnstsw  ax
0x97BDF6: test    ah, 5
0x97BDF9: jp      short loc_97BE75
0x97BDFB: fstp    st(1)
0x97BDFD: pop     ebp
0x97BDFE: fstp    st
0x97BE00: pop     edi
0x97BE01: fstp    st(2)
0x97BE03: pop     esi
0x97BE04: fstp    st
0x97BE06: xor     eax, eax
0x97BE08: fstp    st
0x97BE0A: pop     ebx
0x97BE0B: add     esp, 6Ch
0x97BE0E: retn    4
0x97BE11: fld     [esp+7Ch+arg_0]
0x97BE18: fchs
0x97BE1A: fstp    [esp+7Ch+arg_0]
0x97BE21: fld     [esp+7Ch+arg_0]
0x97BE28: fcompp
0x97BE2A: fnstsw  ax
0x97BE2C: test    ah, 41h
0x97BE2F: jnz     short loc_97BE6F
0x97BE31: fld     [esp+7Ch+var_48]
0x97BE35: fld     st
0x97BE37: fmulp   st(2), st
0x97BE39: fld     st(5)
0x97BE3B: fmul    st, st(5)
0x97BE3D: fsubp   st(2), st
0x97BE3F: fxch    st(1)
0x97BE41: fstp    [esp+7Ch+var_5C]
0x97BE45: fld     [esp+7Ch+var_5C]
0x97BE49: fld     [esp+7Ch+arg_0]
0x97BE50: fcompp
0x97BE52: fnstsw  ax
0x97BE54: test    ah, 41h
0x97BE57: jnz     short loc_97BE75
0x97BE59: fstp    st(1)
0x97BE5B: fstp    st
0x97BE5D: pop     ebp
0x97BE5E: fstp    st(2)
0x97BE60: pop     edi
0x97BE61: fstp    st
0x97BE63: pop     esi
0x97BE64: fstp    st
0x97BE66: xor     eax, eax
0x97BE68: pop     ebx
0x97BE69: add     esp, 6Ch
0x97BE6C: retn    4
0x97BE6F: fstp    st
0x97BE71: fld     [esp+7Ch+var_48]
0x97BE75: fld     dword ptr [esi+6Ch]
0x97BE78: fmulp   st(3), st
0x97BE7A: fxch    st(2)
0x97BE7C: fstp    [esp+7Ch+arg_0]
0x97BE83: fld     [esp+7Ch+arg_0]
0x97BE8A: fabs
0x97BE8C: fstp    [esp+7Ch+arg_0]
0x97BE93: fld     [esp+7Ch+arg_0]
0x97BE9A: fld     [esp+7Ch+var_18]
0x97BE9E: fmul    dword ptr [esi+74h]
0x97BEA1: fstp    [esp+7Ch+arg_0]
0x97BEA8: fld     [esp+7Ch+arg_0]
0x97BEAF: fabs
0x97BEB1: fstp    [esp+7Ch+arg_0]
0x97BEB8: fadd    [esp+7Ch+arg_0]
0x97BEBF: fstp    [esp+7Ch+arg_0]
0x97BEC6: fld     [esp+7Ch+arg_0]
0x97BECD: fld     dword ptr [edi+6Ch]
0x97BED0: fmul    [esp+7Ch+var_8]
0x97BED4: fstp    [esp+7Ch+arg_0]
0x97BEDB: fld     [esp+7Ch+arg_0]
0x97BEE2: fabs
0x97BEE4: fstp    [esp+7Ch+arg_0]
0x97BEEB: fld     [esp+7Ch+arg_0]
0x97BEF2: fld     dword ptr [edi+74h]
0x97BEF5: fmul    [esp+7Ch+var_20]
0x97BEF9: fstp    [esp+7Ch+arg_0]
0x97BF00: fld     [esp+7Ch+arg_0]
0x97BF07: fabs
0x97BF09: fstp    [esp+7Ch+arg_0]
0x97BF10: fadd    [esp+7Ch+arg_0]
0x97BF17: fstp    [esp+7Ch+arg_0]
0x97BF1E: fadd    [esp+7Ch+arg_0]
0x97BF25: fstp    [esp+7Ch+arg_0]
0x97BF2C: fld     [esp+7Ch+var_8]
0x97BF30: fld     st
0x97BF32: fmul    [esp+7Ch+var_54]
0x97BF36: fld     [esp+7Ch+var_4C]
0x97BF3A: fmul    [esp+7Ch+var_20]
0x97BF3E: fsubp   st(1), st
0x97BF40: fstp    [esp+7Ch+var_6C]
0x97BF44: fld     [esp+7Ch+var_6C]
0x97BF48: fld     [esp+7Ch+arg_0]
0x97BF4F: fcom    st(1)
0x97BF51: fnstsw  ax
0x97BF53: fstp    st(1)
0x97BF55: test    ah, 5
0x97BF58: jp      short loc_97BF93
0x97BF5A: fld     st(3)
0x97BF5C: fmulp   st(2), st
0x97BF5E: fld     st(5)
0x97BF60: fmul    [esp+7Ch+var_20]
0x97BF64: fsubp   st(2), st
0x97BF66: fxch    st(1)
0x97BF68: fstp    [esp+7Ch+arg_0]
0x97BF6F: fld     [esp+7Ch+arg_0]
0x97BF76: fcompp
0x97BF78: fnstsw  ax
0x97BF7A: test    ah, 41h
0x97BF7D: jnz     short loc_97BFEF
0x97BF7F: fstp    st
0x97BF81: pop     ebp
0x97BF82: fstp    st
0x97BF84: pop     edi
0x97BF85: fstp    st(1)
0x97BF87: pop     esi
0x97BF88: fstp    st
0x97BF8A: xor     eax, eax
0x97BF8C: pop     ebx
0x97BF8D: add     esp, 6Ch
0x97BF90: retn    4
0x97BF93: fchs
0x97BF95: fstp    [esp+7Ch+arg_0]
0x97BF9C: fld     [esp+7Ch+var_6C]
0x97BFA0: fld     [esp+7Ch+arg_0]
0x97BFA7: fcom    st(1)
0x97BFA9: fnstsw  ax
0x97BFAB: fstp    st(1)
0x97BFAD: test    ah, 41h
0x97BFB0: jnz     short loc_97BFEB
0x97BFB2: fld     st(3)
0x97BFB4: fmulp   st(2), st
0x97BFB6: fld     st(5)
0x97BFB8: fmul    [esp+7Ch+var_20]
0x97BFBC: fsubp   st(2), st
0x97BFBE: fxch    st(1)
0x97BFC0: fstp    [esp+7Ch+arg_0]
0x97BFC7: fld     [esp+7Ch+arg_0]
0x97BFCE: fcompp
0x97BFD0: fnstsw  ax
0x97BFD2: test    ah, 5
0x97BFD5: jp      short loc_97BFEF
0x97BFD7: fstp    st
0x97BFD9: pop     ebp
0x97BFDA: fstp    st
0x97BFDC: pop     edi
0x97BFDD: fstp    st(1)
0x97BFDF: pop     esi
0x97BFE0: fstp    st
0x97BFE2: xor     eax, eax
0x97BFE4: pop     ebx
0x97BFE5: add     esp, 6Ch
0x97BFE8: retn    4
0x97BFEB: fstp    st(1)
0x97BFED: fstp    st
0x97BFEF: fld     dword ptr [esi+6Ch]
0x97BFF2: fmul    [esp+7Ch+var_14]
0x97BFF6: fstp    [esp+7Ch+arg_0]
0x97BFFD: fld     [esp+7Ch+arg_0]
0x97C004: fabs
0x97C006: fstp    [esp+7Ch+arg_0]
0x97C00D: fld     [esp+7Ch+arg_0]
0x97C014: fld     dword ptr [esi+70h]
0x97C017: fmul    [esp+7Ch+var_18]
0x97C01B: fstp    [esp+7Ch+arg_0]
0x97C022: fld     [esp+7Ch+arg_0]
0x97C029: fabs
0x97C02B: fstp    [esp+7Ch+arg_0]
0x97C032: fadd    [esp+7Ch+arg_0]
0x97C039: fstp    [esp+7Ch+arg_0]
0x97C040: fld     [esp+7Ch+arg_0]
0x97C047: fld     dword ptr [edi+6Ch]
0x97C04A: fmul    st, st(2)
0x97C04C: fstp    [esp+7Ch+arg_0]
0x97C053: fld     [esp+7Ch+arg_0]
0x97C05A: fabs
0x97C05C: fstp    [esp+7Ch+arg_0]
0x97C063: fld     [esp+7Ch+arg_0]
0x97C06A: fld     dword ptr [edi+74h]
0x97C06D: fmul    [esp+7Ch+var_1C]
0x97C071: fstp    [esp+7Ch+arg_0]
0x97C078: fld     [esp+7Ch+arg_0]
0x97C07F: fabs
0x97C081: fstp    [esp+7Ch+arg_0]
0x97C088: fadd    [esp+7Ch+arg_0]
0x97C08F: fstp    [esp+7Ch+arg_0]
0x97C096: fadd    [esp+7Ch+arg_0]
0x97C09D: fstp    [esp+7Ch+arg_0]
0x97C0A4: fld     st
0x97C0A6: fmul    [esp+7Ch+var_54]
0x97C0AA: fld     [esp+7Ch+var_4C]
0x97C0AE: fld     [esp+7Ch+var_1C]
0x97C0B2: fld     st
0x97C0B4: fmulp   st(2), st
0x97C0B6: fxch    st(2)
0x97C0B8: fsubrp  st(1), st
0x97C0BA: fstp    [esp+7Ch+var_6C]
0x97C0BE: fld     [esp+7Ch+var_6C]
0x97C0C2: fld     [esp+7Ch+arg_0]
0x97C0C9: fcom    st(1)
0x97C0CB: fnstsw  ax
0x97C0CD: fstp    st(1)
0x97C0CF: test    ah, 5
0x97C0D2: jp      short loc_97C10B
0x97C0D4: fld     st(2)
0x97C0D6: fmul    st, st(4)
0x97C0D8: fxch    st(6)
0x97C0DA: fmulp   st(2), st
0x97C0DC: fxch    st(5)
0x97C0DE: fsubrp  st(1), st
0x97C0E0: fstp    [esp+7Ch+arg_0]
0x97C0E7: fld     [esp+7Ch+arg_0]
0x97C0EE: fcomp   st(4)
0x97C0F0: fnstsw  ax
0x97C0F2: fstp    st(3)
0x97C0F4: test    ah, 41h
0x97C0F7: jnz     short loc_97C167
0x97C0F9: pop     ebp
0x97C0FA: fstp    st(2)
0x97C0FC: pop     edi
0x97C0FD: fstp    st(1)
0x97C0FF: pop     esi
0x97C100: fstp    st
0x97C102: xor     eax, eax
0x97C104: pop     ebx
0x97C105: add     esp, 6Ch
0x97C108: retn    4
0x97C10B: fchs
0x97C10D: fstp    [esp+7Ch+arg_0]
0x97C114: fld     [esp+7Ch+var_6C]
0x97C118: fld     [esp+7Ch+arg_0]
0x97C11F: fcom    st(1)
0x97C121: fnstsw  ax
0x97C123: fstp    st(1)
0x97C125: test    ah, 41h
0x97C128: jnz     short loc_97C161
0x97C12A: fld     st(2)
0x97C12C: fmul    st, st(4)
0x97C12E: fxch    st(6)
0x97C130: fmulp   st(2), st
0x97C132: fxch    st(5)
0x97C134: fsubrp  st(1), st
0x97C136: fstp    [esp+7Ch+arg_0]
0x97C13D: fld     [esp+7Ch+arg_0]
0x97C144: fcomp   st(4)
0x97C146: fnstsw  ax
0x97C148: fstp    st(3)
0x97C14A: test    ah, 5
0x97C14D: jp      short loc_97C167
0x97C14F: pop     ebp
0x97C150: fstp    st(2)
0x97C152: pop     edi
0x97C153: fstp    st(1)
0x97C155: pop     esi
0x97C156: fstp    st
0x97C158: xor     eax, eax
0x97C15A: pop     ebx
0x97C15B: add     esp, 6Ch
0x97C15E: retn    4
0x97C161: fstp    st
0x97C163: fstp    st(4)
0x97C165: fstp    st(3)
0x97C167: fld     dword ptr [esi+70h]
0x97C16A: fmul    st, st(3)
0x97C16C: fstp    [esp+7Ch+arg_0]
0x97C173: fld     [esp+7Ch+arg_0]
0x97C17A: fabs
0x97C17C: fstp    [esp+7Ch+arg_0]
0x97C183: fld     [esp+7Ch+arg_0]
0x97C18A: fld     [esp+7Ch+var_8]
0x97C18E: fmul    dword ptr [esi+74h]
0x97C191: fstp    [esp+7Ch+arg_0]
0x97C198: fld     [esp+7Ch+arg_0]
0x97C19F: fabs
0x97C1A1: fstp    [esp+7Ch+arg_0]
0x97C1A8: fadd    [esp+7Ch+arg_0]
0x97C1AF: fstp    [esp+7Ch+arg_0]
0x97C1B6: fld     [esp+7Ch+arg_0]
0x97C1BD: fld     dword ptr [edi+6Ch]
0x97C1C0: fld     [esp+7Ch+var_18]
0x97C1C4: fld     st
0x97C1C6: fmulp   st(2), st
0x97C1C8: fxch    st(1)
0x97C1CA: fstp    [esp+7Ch+arg_0]
0x97C1D1: fld     [esp+7Ch+arg_0]
0x97C1D8: fabs
0x97C1DA: fstp    [esp+7Ch+arg_0]
0x97C1E1: fld     [esp+7Ch+arg_0]
0x97C1E8: fld     dword ptr [edi+70h]
0x97C1EB: fmul    st, st(5)
0x97C1ED: fstp    [esp+7Ch+arg_0]
0x97C1F4: fld     [esp+7Ch+arg_0]
0x97C1FB: fabs
0x97C1FD: fstp    [esp+7Ch+arg_0]
0x97C204: fadd    [esp+7Ch+arg_0]
0x97C20B: fstp    [esp+7Ch+arg_0]
0x97C212: fld     [esp+7Ch+arg_0]
0x97C219: faddp   st(2), st
0x97C21B: fxch    st(1)
0x97C21D: fstp    [esp+7Ch+arg_0]
0x97C224: fld     [esp+7Ch+var_50]
0x97C228: fmul    st, st(3)
0x97C22A: fld     st(1)
0x97C22C: fmul    [esp+7Ch+var_54]
0x97C230: fsubp   st(1), st
0x97C232: fstp    [esp+7Ch+var_6C]
0x97C236: fld     [esp+7Ch+var_6C]
0x97C23A: fld     [esp+7Ch+arg_0]
0x97C241: fcom    st(1)
0x97C243: fnstsw  ax
0x97C245: test    ah, 5
0x97C248: jp      short loc_97C287
0x97C24A: fstp    st(1)
0x97C24C: fld     [esp+7Ch+var_44]
0x97C250: fld     st
0x97C252: fmulp   st(5), st
0x97C254: fld     st(3)
0x97C256: fmulp   st(3), st
0x97C258: fxch    st(4)
0x97C25A: fsubrp  st(2), st
0x97C25C: fxch    st(1)
0x97C25E: fstp    [esp+7Ch+arg_0]
0x97C265: fld     [esp+7Ch+arg_0]
0x97C26C: fcompp
0x97C26E: fnstsw  ax
0x97C270: test    ah, 41h
0x97C273: jnz     short loc_97C2E9
0x97C275: pop     ebp
0x97C276: fstp    st(2)
0x97C278: pop     edi
0x97C279: fstp    st(1)
0x97C27B: pop     esi
0x97C27C: fstp    st
0x97C27E: xor     eax, eax
0x97C280: pop     ebx
0x97C281: add     esp, 6Ch
0x97C284: retn    4
0x97C287: fchs
0x97C289: fstp    [esp+7Ch+arg_0]
0x97C290: fld     [esp+7Ch+arg_0]
0x97C297: fcom    st(1)
0x97C299: fnstsw  ax
0x97C29B: fstp    st(1)
0x97C29D: test    ah, 41h
0x97C2A0: jnz     short loc_97C2DD
0x97C2A2: fld     [esp+7Ch+var_44]
0x97C2A6: fld     st
0x97C2A8: fmulp   st(5), st
0x97C2AA: fld     st(3)
0x97C2AC: fmulp   st(3), st
0x97C2AE: fxch    st(4)
0x97C2B0: fsubrp  st(2), st
0x97C2B2: fxch    st(1)
0x97C2B4: fstp    [esp+7Ch+arg_0]
0x97C2BB: fld     [esp+7Ch+arg_0]
0x97C2C2: fcompp
0x97C2C4: fnstsw  ax
0x97C2C6: test    ah, 5
0x97C2C9: jp      short loc_97C2E9
0x97C2CB: pop     ebp
0x97C2CC: fstp    st(2)
0x97C2CE: pop     edi
0x97C2CF: fstp    st(1)
0x97C2D1: pop     esi
0x97C2D2: fstp    st
0x97C2D4: xor     eax, eax
0x97C2D6: pop     ebx
0x97C2D7: add     esp, 6Ch
0x97C2DA: retn    4
0x97C2DD: fstp    st
0x97C2DF: fstp    st
0x97C2E1: fstp    st(1)
0x97C2E3: fld     [esp+7Ch+var_44]
0x97C2E7: fxch    st(1)
0x97C2E9: fld     dword ptr [esi+6Ch]
0x97C2EC: fmulp   st(3), st
0x97C2EE: fxch    st(2)
0x97C2F0: fstp    [esp+7Ch+arg_0]
0x97C2F7: fld     [esp+7Ch+arg_0]
0x97C2FE: fabs
0x97C300: fstp    [esp+7Ch+arg_0]
0x97C307: fld     [esp+7Ch+arg_0]
0x97C30E: fld     [esp+7Ch+var_C]
0x97C312: fmul    dword ptr [esi+74h]
0x97C315: fstp    [esp+7Ch+arg_0]
0x97C31C: fld     [esp+7Ch+arg_0]
0x97C323: fabs
0x97C325: fstp    [esp+7Ch+arg_0]
0x97C32C: fadd    [esp+7Ch+arg_0]
0x97C333: fstp    [esp+7Ch+arg_0]
0x97C33A: fld     [esp+7Ch+arg_0]
0x97C341: fld     dword ptr [edi+6Ch]
0x97C344: fld     [esp+7Ch+var_14]
0x97C348: fld     st
0x97C34A: fmulp   st(2), st
0x97C34C: fxch    st(1)
0x97C34E: fstp    [esp+7Ch+arg_0]
0x97C355: fld     [esp+7Ch+arg_0]
0x97C35C: fabs
0x97C35E: fstp    [esp+7Ch+arg_0]
0x97C365: fld     [esp+7Ch+arg_0]
0x97C36C: fld     dword ptr [edi+70h]
0x97C36F: fld     [esp+7Ch+var_20]
0x97C373: fld     st
0x97C375: fmulp   st(2), st
0x97C377: fxch    st(1)
0x97C379: fstp    [esp+7Ch+arg_0]
0x97C380: fld     [esp+7Ch+arg_0]
0x97C387: fabs
0x97C389: fstp    [esp+7Ch+arg_0]
0x97C390: fld     [esp+7Ch+arg_0]
0x97C397: faddp   st(2), st
0x97C399: fxch    st(1)
0x97C39B: fstp    [esp+7Ch+arg_0]
0x97C3A2: fld     [esp+7Ch+arg_0]
0x97C3A9: faddp   st(3), st
0x97C3AB: fxch    st(2)
0x97C3AD: fstp    [esp+7Ch+arg_0]
0x97C3B4: fld     [esp+7Ch+var_50]
0x97C3B8: fmul    st, st(2)
0x97C3BA: fld     st(1)
0x97C3BC: fmul    [esp+7Ch+var_54]
0x97C3C0: fsubp   st(1), st
0x97C3C2: fstp    [esp+7Ch+var_6C]
0x97C3C6: fld     [esp+7Ch+var_6C]
0x97C3CA: fld     [esp+7Ch+arg_0]
0x97C3D1: fcom    st(1)
0x97C3D3: fnstsw  ax
0x97C3D5: test    ah, 5
0x97C3D8: jp      short loc_97C40F
0x97C3DA: fstp    st(1)
0x97C3DC: fld     st(3)
0x97C3DE: fmulp   st(3), st
0x97C3E0: fld     st(4)
0x97C3E2: fmulp   st(2), st
0x97C3E4: fxch    st(2)
0x97C3E6: fsubrp  st(1), st
0x97C3E8: fstp    [esp+7Ch+arg_0]
0x97C3EF: fld     [esp+7Ch+arg_0]
0x97C3F6: fcompp
0x97C3F8: fnstsw  ax
0x97C3FA: test    ah, 41h
0x97C3FD: jnz     short loc_97C463
0x97C3FF: pop     ebp
0x97C400: fstp    st(1)
0x97C402: pop     edi
0x97C403: fstp    st
0x97C405: pop     esi
0x97C406: xor     eax, eax
0x97C408: pop     ebx
0x97C409: add     esp, 6Ch
0x97C40C: retn    4
0x97C40F: fchs
0x97C411: fstp    [esp+7Ch+arg_0]
0x97C418: fld     [esp+7Ch+arg_0]
0x97C41F: fcom    st(1)
0x97C421: fnstsw  ax
0x97C423: fstp    st(1)
0x97C425: test    ah, 41h
0x97C428: jnz     short loc_97C45D
0x97C42A: fld     st(3)
0x97C42C: fmulp   st(3), st
0x97C42E: fld     st(4)
0x97C430: fmulp   st(2), st
0x97C432: fxch    st(2)
0x97C434: fsubrp  st(1), st
0x97C436: fstp    [esp+7Ch+arg_0]
0x97C43D: fld     [esp+7Ch+arg_0]
0x97C444: fcompp
0x97C446: fnstsw  ax
0x97C448: test    ah, 5
0x97C44B: jp      short loc_97C463
0x97C44D: pop     ebp
0x97C44E: fstp    st(1)
0x97C450: pop     edi
0x97C451: fstp    st
0x97C453: pop     esi
0x97C454: xor     eax, eax
0x97C456: pop     ebx
0x97C457: add     esp, 6Ch
0x97C45A: retn    4
0x97C45D: fstp    st
0x97C45F: fstp    st
0x97C461: fstp    st
0x97C463: fld     dword ptr [esi+6Ch]
0x97C466: fmul    [esp+7Ch+var_8]
0x97C46A: fstp    [esp+7Ch+arg_0]
0x97C471: fld     [esp+7Ch+arg_0]
0x97C478: fabs
0x97C47A: fstp    [esp+7Ch+arg_0]
0x97C481: fld     [esp+7Ch+arg_0]
0x97C488: fld     dword ptr [esi+70h]
0x97C48B: fmul    [esp+7Ch+var_C]
0x97C48F: fstp    [esp+7Ch+arg_0]
0x97C496: fld     [esp+7Ch+arg_0]
0x97C49D: fabs
0x97C49F: fstp    [esp+7Ch+arg_0]
0x97C4A6: fadd    [esp+7Ch+arg_0]
0x97C4AD: fstp    [esp+7Ch+arg_0]
0x97C4B4: fld     [esp+7Ch+arg_0]
0x97C4BB: fld     dword ptr [edi+6Ch]
0x97C4BE: fld     [esp+7Ch+var_10]
0x97C4C2: fld     st
0x97C4C4: fmulp   st(2), st
0x97C4C6: fxch    st(1)
0x97C4C8: fstp    [esp+7Ch+arg_0]
0x97C4CF: fld     [esp+7Ch+arg_0]
0x97C4D6: fabs
0x97C4D8: fstp    [esp+7Ch+arg_0]
0x97C4DF: fld     [esp+7Ch+arg_0]
0x97C4E6: fld     dword ptr [edi+70h]
0x97C4E9: fld     [esp+7Ch+var_1C]
0x97C4ED: fld     st
0x97C4EF: fmulp   st(2), st
0x97C4F1: fxch    st(1)
0x97C4F3: fstp    [esp+7Ch+arg_0]
0x97C4FA: fld     [esp+7Ch+arg_0]
0x97C501: fabs
0x97C503: fstp    [esp+7Ch+arg_0]
0x97C50A: fld     [esp+7Ch+arg_0]
0x97C511: faddp   st(2), st
0x97C513: fxch    st(1)
0x97C515: fstp    [esp+7Ch+arg_0]
0x97C51C: fld     [esp+7Ch+arg_0]
0x97C523: faddp   st(3), st
0x97C525: fxch    st(2)
0x97C527: fstp    [esp+7Ch+arg_0]
0x97C52E: fld     [esp+7Ch+var_50]
0x97C532: fmul    st, st(2)
0x97C534: fld     st(1)
0x97C536: fmul    [esp+7Ch+var_54]
0x97C53A: fsubp   st(1), st
0x97C53C: fstp    [esp+7Ch+var_6C]
0x97C540: fld     [esp+7Ch+var_6C]
0x97C544: fld     [esp+7Ch+arg_0]
0x97C54B: fcom    st(1)
0x97C54D: fnstsw  ax
0x97C54F: test    ah, 5
0x97C552: jp      short loc_97C583
0x97C554: fstp    st(1)
0x97C556: fxch    st(3)
0x97C558: fmulp   st(2), st
0x97C55A: fmulp   st(3), st
0x97C55C: fsubrp  st(2), st
0x97C55E: fxch    st(1)
0x97C560: fstp    [esp+7Ch+arg_0]
0x97C567: fld     [esp+7Ch+arg_0]
0x97C56E: fcompp
0x97C570: fnstsw  ax
0x97C572: test    ah, 41h
0x97C575: jnz     short loc_97C5D5
0x97C577: pop     ebp
0x97C578: pop     edi
0x97C579: pop     esi
0x97C57A: xor     eax, eax
0x97C57C: pop     ebx
0x97C57D: add     esp, 6Ch
0x97C580: retn    4
0x97C583: fchs
0x97C585: fstp    [esp+7Ch+arg_0]
0x97C58C: fld     [esp+7Ch+arg_0]
0x97C593: fcom    st(1)
0x97C595: fnstsw  ax
0x97C597: fstp    st(1)
0x97C599: test    ah, 41h
0x97C59C: jnz     short loc_97C5CB
0x97C59E: fxch    st(3)
0x97C5A0: fmulp   st(2), st
0x97C5A2: fmulp   st(3), st
0x97C5A4: fsubrp  st(2), st
0x97C5A6: fxch    st(1)
0x97C5A8: fstp    [esp+7Ch+arg_0]
0x97C5AF: fld     [esp+7Ch+arg_0]
0x97C5B6: fcompp
0x97C5B8: fnstsw  ax
0x97C5BA: test    ah, 5
0x97C5BD: jp      short loc_97C5D5
0x97C5BF: pop     ebp
0x97C5C0: pop     edi
0x97C5C1: pop     esi
0x97C5C2: xor     eax, eax
0x97C5C4: pop     ebx
0x97C5C5: add     esp, 6Ch
0x97C5C8: retn    4
0x97C5CB: fstp    st
0x97C5CD: fstp    st
0x97C5CF: fstp    st(2)
0x97C5D1: fstp    st(1)
0x97C5D3: fstp    st
0x97C5D5: lea     eax, [esp+7Ch+var_30]
0x97C5D9: push    eax
0x97C5DA: lea     ecx, [esp+80h+var_54]
0x97C5DE: push    ecx
0x97C5DF: lea     ecx, [esp+84h+var_3C]
0x97C5E3: call    sub_498FE0
0x97C5E8: mov     edx, [esp+7Ch+var_64]
0x97C5EC: push    edx
0x97C5ED: lea     ecx, [esp+80h+var_3C]
0x97C5F1: call    sub_47D9E0
0x97C5F6: fstp    [esp+7Ch+var_44]
0x97C5FA: push    ebp
0x97C5FB: lea     ecx, [esp+80h+var_3C]
0x97C5FF: call    sub_47D9E0
0x97C604: fstp    [esp+7Ch+var_40]
0x97C608: fld     [esp+7Ch+var_40]
0x97C60C: lea     eax, [esp+7Ch+var_54]
0x97C610: fabs
0x97C612: push    eax
0x97C613: fstp    [esp+80h+arg_0]
0x97C61A: mov     ecx, ebx
0x97C61C: fld     [esp+80h+var_44]
0x97C620: fabs
0x97C622: fstp    [esp+80h+var_68]
0x97C626: call    sub_47D9E0
0x97C62B: fabs
0x97C62D: fstp    [esp+7Ch+var_5C]
0x97C631: fld     [esp+7Ch+var_5C]
0x97C635: fld     [esp+7Ch+var_40]
0x97C639: fld     st
0x97C63B: fmul    [esp+7Ch+var_14]
0x97C63F: fld     [esp+7Ch+var_44]
0x97C643: fld     st
0x97C645: fmul    [esp+7Ch+var_8]
0x97C649: fsubp   st(2), st
0x97C64B: fxch    st(1)
0x97C64D: fstp    [esp+7Ch+var_5C]
0x97C651: fld     [esp+7Ch+var_5C]
0x97C655: fabs
0x97C657: fstp    [esp+7Ch+var_5C]
0x97C65B: fld     [esp+7Ch+var_5C]
0x97C65F: fmul    dword ptr [esi+70h]
0x97C662: fld     st(2)
0x97C664: fmul    [esp+7Ch+var_18]
0x97C668: fld     st(2)
0x97C66A: fmul    [esp+7Ch+var_C]
0x97C66E: fsubp   st(1), st
0x97C670: fstp    [esp+7Ch+var_5C]
0x97C674: fld     [esp+7Ch+var_5C]
0x97C678: fabs
0x97C67A: fstp    [esp+7Ch+var_5C]
0x97C67E: fld     [esp+7Ch+var_5C]
0x97C682: fmul    dword ptr [esi+6Ch]
0x97C685: faddp   st(1), st
0x97C687: fld     [esp+7Ch+var_10]
0x97C68B: fmulp   st(3), st
0x97C68D: fld     [esp+7Ch+var_4]
0x97C691: fmulp   st(2), st
0x97C693: fxch    st(2)
0x97C695: fsubrp  st(1), st
0x97C697: fstp    [esp+7Ch+var_5C]
0x97C69B: fld     [esp+7Ch+var_5C]
0x97C69F: fabs
0x97C6A1: fstp    [esp+7Ch+var_5C]
0x97C6A5: fld     [esp+7Ch+var_5C]
0x97C6A9: fmul    dword ptr [esi+74h]
0x97C6AC: faddp   st(1), st
0x97C6AE: fstp    [esp+7Ch+var_5C]
0x97C6B2: fld     [esp+7Ch+var_5C]
0x97C6B6: fld     [esp+7Ch+arg_0]
0x97C6BD: fmul    dword ptr [edi+70h]
0x97C6C0: fld     dword ptr [edi+74h]
0x97C6C3: fmul    [esp+7Ch+var_68]
0x97C6C7: faddp   st(1), st
0x97C6C9: fstp    [esp+7Ch+var_5C]
0x97C6CD: fadd    [esp+7Ch+var_5C]
0x97C6D1: fstp    [esp+7Ch+var_5C]
0x97C6D5: fld     [esp+7Ch+var_5C]
0x97C6D9: fcompp
0x97C6DB: fnstsw  ax
0x97C6DD: test    ah, 5
0x97C6E0: jnp     loc_97C5BF
0x97C6E6: push    ebx
0x97C6E7: lea     ecx, [esp+80h+var_3C]
0x97C6EB: call    sub_47D9E0
0x97C6F0: fstp    [esp+7Ch+var_48]
0x97C6F4: fld     [esp+7Ch+var_48]
0x97C6F8: lea     ecx, [esp+7Ch+var_54]
0x97C6FC: fabs
0x97C6FE: push    ecx
0x97C6FF: mov     ecx, [esp+80h+var_64]
0x97C703: fstp    [esp+80h+var_6C]
0x97C707: call    sub_47D9E0
0x97C70C: fabs
0x97C70E: fstp    [esp+7Ch+var_5C]
0x97C712: fld     [esp+7Ch+var_5C]
0x97C716: fld     [esp+7Ch+var_48]
0x97C71A: fld     st
0x97C71C: fmul    [esp+7Ch+var_8]
0x97C720: fld     [esp+7Ch+var_40]
0x97C724: fld     st
0x97C726: fmul    [esp+7Ch+var_20]
0x97C72A: fsubp   st(2), st
0x97C72C: fxch    st(1)
0x97C72E: fstp    [esp+7Ch+var_5C]
0x97C732: fld     [esp+7Ch+var_5C]
0x97C736: fabs
0x97C738: fstp    [esp+7Ch+var_5C]
0x97C73C: fld     [esp+7Ch+var_5C]
0x97C740: fmul    dword ptr [esi+70h]
0x97C743: fld     st(2)
0x97C745: fmul    [esp+7Ch+var_C]
0x97C749: fld     st(2)
0x97C74B: fmul    [esp+7Ch+var_24]
0x97C74F: fsubp   st(1), st
0x97C751: fstp    [esp+7Ch+var_5C]
0x97C755: fld     [esp+7Ch+var_5C]
0x97C759: fabs
0x97C75B: fstp    [esp+7Ch+var_5C]
0x97C75F: fld     [esp+7Ch+var_5C]
0x97C763: fmul    dword ptr [esi+6Ch]
0x97C766: faddp   st(1), st
0x97C768: fld     [esp+7Ch+var_4]
0x97C76C: fmulp   st(3), st
0x97C76E: fld     [esp+7Ch+var_1C]
0x97C772: fmulp   st(2), st
0x97C774: fxch    st(2)
0x97C776: fsubrp  st(1), st
0x97C778: fstp    [esp+7Ch+var_5C]
0x97C77C: fld     [esp+7Ch+var_5C]
0x97C780: fabs
0x97C782: fstp    [esp+7Ch+var_5C]
0x97C786: fld     [esp+7Ch+var_5C]
0x97C78A: fmul    dword ptr [esi+74h]
0x97C78D: faddp   st(1), st
0x97C78F: fstp    [esp+7Ch+var_5C]
0x97C793: fld     [esp+7Ch+var_5C]
0x97C797: fld     dword ptr [edi+6Ch]
0x97C79A: fmul    [esp+7Ch+arg_0]
0x97C7A1: fld     [esp+7Ch+var_6C]
0x97C7A5: fmul    dword ptr [edi+74h]
0x97C7A8: faddp   st(1), st
0x97C7AA: fstp    [esp+7Ch+arg_0]
0x97C7B1: fadd    [esp+7Ch+arg_0]
0x97C7B8: fstp    [esp+7Ch+arg_0]
0x97C7BF: fld     [esp+7Ch+arg_0]
0x97C7C6: fcompp
0x97C7C8: fnstsw  ax
0x97C7CA: test    ah, 5
0x97C7CD: jnp     loc_97C5BF
0x97C7D3: lea     edx, [esp+7Ch+var_54]
0x97C7D7: push    edx
0x97C7D8: mov     ecx, ebp
0x97C7DA: call    sub_47D9E0
0x97C7DF: fabs
0x97C7E1: fstp    [esp+7Ch+arg_0]
0x97C7E8: fld     [esp+7Ch+arg_0]
0x97C7EF: fld     [esp+7Ch+var_44]
0x97C7F3: fld     st
0x97C7F5: fmul    [esp+7Ch+var_20]
0x97C7F9: fld     [esp+7Ch+var_48]
0x97C7FD: fld     st
0x97C7FF: fmul    [esp+7Ch+var_14]
0x97C803: fsubp   st(2), st
0x97C805: fxch    st(1)
0x97C807: fstp    [esp+7Ch+arg_0]
0x97C80E: fld     [esp+7Ch+arg_0]
0x97C815: fabs
0x97C817: fstp    [esp+7Ch+arg_0]
0x97C81E: fld     [esp+7Ch+arg_0]
0x97C825: fmul    dword ptr [esi+70h]
0x97C828: fld     st(2)
0x97C82A: fmul    [esp+7Ch+var_24]
0x97C82E: fld     st(2)
0x97C830: fmul    [esp+7Ch+var_18]
0x97C834: fsubp   st(1), st
0x97C836: fstp    [esp+7Ch+arg_0]
0x97C83D: fld     [esp+7Ch+arg_0]
0x97C844: fabs
0x97C846: fstp    [esp+7Ch+arg_0]
0x97C84D: fld     [esp+7Ch+arg_0]
0x97C854: fmul    dword ptr [esi+6Ch]
0x97C857: faddp   st(1), st
0x97C859: fld     [esp+7Ch+var_1C]
0x97C85D: fmulp   st(3), st
0x97C85F: fld     [esp+7Ch+var_10]
0x97C863: fmulp   st(2), st
0x97C865: fxch    st(2)
0x97C867: fsubrp  st(1), st
0x97C869: fstp    [esp+7Ch+arg_0]
0x97C870: fld     [esp+7Ch+arg_0]
0x97C877: fabs
0x97C879: fstp    [esp+7Ch+arg_0]
0x97C880: fld     [esp+7Ch+arg_0]
0x97C887: fmul    dword ptr [esi+74h]
0x97C88A: faddp   st(1), st
0x97C88C: fstp    [esp+7Ch+arg_0]
0x97C893: fld     [esp+7Ch+arg_0]
0x97C89A: fld     dword ptr [edi+6Ch]
0x97C89D: fmul    [esp+7Ch+var_68]
0x97C8A1: fld     [esp+7Ch+var_6C]
0x97C8A5: fmul    dword ptr [edi+70h]
0x97C8A8: faddp   st(1), st
0x97C8AA: fstp    [esp+7Ch+arg_0]
0x97C8B1: fadd    [esp+7Ch+arg_0]
0x97C8B8: fstp    [esp+7Ch+arg_0]
0x97C8BF: fld     [esp+7Ch+arg_0]
0x97C8C6: fcompp
0x97C8C8: fnstsw  ax
0x97C8CA: test    ah, 5
0x97C8CD: jnp     loc_97C5BF
0x97C8D3: mov     ebp, [esp+7Ch+var_58]
0x97C8D7: push    ebp
0x97C8D8: lea     ecx, [esp+80h+var_3C]
0x97C8DC: call    sub_47D9E0
0x97C8E1: fstp    [esp+7Ch+var_44]
0x97C8E5: mov     eax, [esp+7Ch+var_60]
0x97C8E9: push    eax
0x97C8EA: lea     ecx, [esp+80h+var_3C]
0x97C8EE: call    sub_47D9E0
0x97C8F3: fstp    [esp+7Ch+var_40]
0x97C8F7: fld     [esp+7Ch+var_40]
0x97C8FB: lea     ecx, [esp+7Ch+var_54]
0x97C8FF: fabs
0x97C901: push    ecx
0x97C902: fstp    [esp+80h+arg_0]
0x97C909: lea     ebx, [esi+48h]
0x97C90C: fld     [esp+80h+var_44]
0x97C910: mov     ecx, ebx
0x97C912: fabs
0x97C914: fstp    [esp+80h+var_68]
0x97C918: call    sub_47D9E0
0x97C91D: fabs
0x97C91F: fstp    [esp+7Ch+var_58]
0x97C923: fld     [esp+7Ch+var_58]
0x97C927: fld     [esp+7Ch+var_40]
0x97C92B: fld     st
0x97C92D: fmul    [esp+7Ch+var_20]
0x97C931: fld     [esp+7Ch+var_44]
0x97C935: fld     st
0x97C937: fmul    [esp+7Ch+var_1C]
0x97C93B: fsubp   st(2), st
0x97C93D: fxch    st(1)
0x97C93F: fstp    [esp+7Ch+var_58]
0x97C943: fld     [esp+7Ch+var_58]
0x97C947: fabs
0x97C949: fstp    [esp+7Ch+var_58]
0x97C94D: fld     [esp+7Ch+var_58]
0x97C951: fmul    dword ptr [edi+6Ch]
0x97C954: fld     st(2)
0x97C956: fmul    [esp+7Ch+var_14]
0x97C95A: fld     st(2)
0x97C95C: fmul    [esp+7Ch+var_10]
0x97C960: fsubp   st(1), st
0x97C962: fstp    [esp+7Ch+var_58]
0x97C966: fld     [esp+7Ch+var_58]
0x97C96A: fabs
0x97C96C: fstp    [esp+7Ch+var_58]
0x97C970: fld     [esp+7Ch+var_58]
0x97C974: fmul    dword ptr [edi+70h]
0x97C977: faddp   st(1), st
0x97C979: fld     [esp+7Ch+var_8]
0x97C97D: fmulp   st(3), st
0x97C97F: fld     [esp+7Ch+var_4]
0x97C983: fmulp   st(2), st
0x97C985: fxch    st(2)
0x97C987: fsubrp  st(1), st
0x97C989: fstp    [esp+7Ch+var_58]
0x97C98D: fld     [esp+7Ch+var_58]
0x97C991: fabs
0x97C993: fstp    [esp+7Ch+var_58]
0x97C997: fld     [esp+7Ch+var_58]
0x97C99B: fmul    dword ptr [edi+74h]
0x97C99E: faddp   st(1), st
0x97C9A0: fstp    [esp+7Ch+var_58]
0x97C9A4: fld     [esp+7Ch+var_58]
0x97C9A8: fld     [esp+7Ch+var_68]
0x97C9AC: fmul    dword ptr [esi+74h]
0x97C9AF: fld     [esp+7Ch+arg_0]
0x97C9B6: fmul    dword ptr [esi+70h]
0x97C9B9: faddp   st(1), st
0x97C9BB: fstp    [esp+7Ch+var_58]
0x97C9BF: fadd    [esp+7Ch+var_58]
0x97C9C3: fstp    [esp+7Ch+var_58]
0x97C9C7: fld     [esp+7Ch+var_58]
0x97C9CB: fcompp
0x97C9CD: fnstsw  ax
0x97C9CF: test    ah, 5
0x97C9D2: jnp     loc_97C5BF
0x97C9D8: push    ebx
0x97C9D9: lea     ecx, [esp+80h+var_3C]
0x97C9DD: call    sub_47D9E0
0x97C9E2: fstp    [esp+7Ch+var_48]
0x97C9E6: fld     [esp+7Ch+var_48]
0x97C9EA: lea     edx, [esp+7Ch+var_54]
0x97C9EE: fabs
0x97C9F0: push    edx
0x97C9F1: mov     ecx, ebp
0x97C9F3: fstp    [esp+80h+var_64]
0x97C9F7: call    sub_47D9E0
0x97C9FC: fabs
0x97C9FE: fstp    [esp+7Ch+var_58]
0x97CA02: fld     [esp+7Ch+var_58]
0x97CA06: fld     [esp+7Ch+var_48]
0x97CA0A: fld     st
0x97CA0C: fmul    [esp+7Ch+var_1C]
0x97CA10: fld     [esp+7Ch+var_40]
0x97CA14: fld     st
0x97CA16: fmul    [esp+7Ch+var_24]
0x97CA1A: fsubp   st(2), st
0x97CA1C: fxch    st(1)
0x97CA1E: fstp    [esp+7Ch+var_58]
0x97CA22: fld     [esp+7Ch+var_58]
0x97CA26: fabs
0x97CA28: fstp    [esp+7Ch+var_58]
0x97CA2C: fld     [esp+7Ch+var_58]
0x97CA30: fmul    dword ptr [edi+6Ch]
0x97CA33: fld     st(2)
0x97CA35: fmul    [esp+7Ch+var_10]
0x97CA39: fld     st(2)
0x97CA3B: fmul    [esp+7Ch+var_18]
0x97CA3F: fsubp   st(1), st
0x97CA41: fstp    [esp+7Ch+var_58]
0x97CA45: fld     [esp+7Ch+var_58]
0x97CA49: fabs
0x97CA4B: fstp    [esp+7Ch+var_58]
0x97CA4F: fld     [esp+7Ch+var_58]
0x97CA53: fmul    dword ptr [edi+70h]
0x97CA56: faddp   st(1), st
0x97CA58: fld     [esp+7Ch+var_4]
0x97CA5C: fmulp   st(3), st
0x97CA5E: fld     [esp+7Ch+var_C]
0x97CA62: fmulp   st(2), st
0x97CA64: fxch    st(2)
0x97CA66: fsubrp  st(1), st
0x97CA68: fstp    [esp+7Ch+var_58]
0x97CA6C: fld     [esp+7Ch+var_58]
0x97CA70: fabs
0x97CA72: fstp    [esp+7Ch+var_58]
0x97CA76: fld     [esp+7Ch+var_58]
0x97CA7A: fmul    dword ptr [edi+74h]
0x97CA7D: faddp   st(1), st
0x97CA7F: fstp    [esp+7Ch+var_58]
0x97CA83: fld     [esp+7Ch+var_58]
0x97CA87: fld     [esp+7Ch+var_64]
0x97CA8B: fmul    dword ptr [esi+74h]
0x97CA8E: fld     dword ptr [esi+6Ch]
0x97CA91: fmul    [esp+7Ch+arg_0]
0x97CA98: faddp   st(1), st
0x97CA9A: fstp    [esp+7Ch+arg_0]
0x97CAA1: fadd    [esp+7Ch+arg_0]
0x97CAA8: fstp    [esp+7Ch+arg_0]
0x97CAAF: fld     [esp+7Ch+arg_0]
0x97CAB6: fcompp
0x97CAB8: fnstsw  ax
0x97CABA: test    ah, 5
0x97CABD: jnp     loc_97C5BF
0x97CAC3: mov     ecx, [esp+7Ch+var_60]
0x97CAC7: lea     eax, [esp+7Ch+var_54]
0x97CACB: push    eax
0x97CACC: call    sub_47D9E0
0x97CAD1: fabs
0x97CAD3: fstp    [esp+7Ch+arg_0]
0x97CADA: fld     [esp+7Ch+arg_0]
0x97CAE1: fld     [esp+7Ch+var_44]
0x97CAE5: fld     st
0x97CAE7: fmul    [esp+7Ch+var_24]
0x97CAEB: fld     [esp+7Ch+var_48]
0x97CAEF: fld     st
0x97CAF1: fmul    [esp+7Ch+var_20]
0x97CAF5: fsubp   st(2), st
0x97CAF7: fxch    st(1)
0x97CAF9: fstp    [esp+7Ch+arg_0]
0x97CB00: fld     [esp+7Ch+arg_0]
0x97CB07: fabs
0x97CB09: fstp    [esp+7Ch+arg_0]
0x97CB10: fld     [esp+7Ch+arg_0]
0x97CB17: fmul    dword ptr [edi+6Ch]
0x97CB1A: fld     st(2)
0x97CB1C: fmul    [esp+7Ch+var_18]
0x97CB20: fld     st(2)
0x97CB22: fmul    [esp+7Ch+var_14]
0x97CB26: fsubp   st(1), st
0x97CB28: fstp    [esp+7Ch+arg_0]
0x97CB2F: fld     [esp+7Ch+arg_0]
0x97CB36: fabs
0x97CB38: fstp    [esp+7Ch+arg_0]
0x97CB3F: fld     [esp+7Ch+arg_0]
0x97CB46: fmul    dword ptr [edi+70h]
0x97CB49: faddp   st(1), st
0x97CB4B: fld     [esp+7Ch+var_C]
0x97CB4F: fmulp   st(3), st
0x97CB51: fld     [esp+7Ch+var_8]
0x97CB55: fmulp   st(2), st
0x97CB57: fxch    st(2)
0x97CB59: fsubrp  st(1), st
0x97CB5B: fstp    [esp+7Ch+arg_0]
0x97CB62: fld     [esp+7Ch+arg_0]
0x97CB69: fabs
0x97CB6B: fstp    [esp+7Ch+arg_0]
0x97CB72: fld     [esp+7Ch+arg_0]
0x97CB79: fmul    dword ptr [edi+74h]
0x97CB7C: faddp   st(1), st
0x97CB7E: fstp    [esp+7Ch+arg_0]
0x97CB85: fld     [esp+7Ch+arg_0]
0x97CB8C: fld     [esp+7Ch+var_64]
0x97CB90: fmul    dword ptr [esi+70h]
0x97CB93: fld     dword ptr [esi+6Ch]
0x97CB96: fmul    [esp+7Ch+var_68]
0x97CB9A: faddp   st(1), st
0x97CB9C: fstp    [esp+7Ch+arg_0]
0x97CBA3: fadd    [esp+7Ch+arg_0]
0x97CBAA: fstp    [esp+7Ch+arg_0]
0x97CBB1: fld     [esp+7Ch+arg_0]
0x97CBB8: fcompp
0x97CBBA: fnstsw  ax
0x97CBBC: test    ah, 5
0x97CBBF: jnp     loc_97C5BF
0x97CBC5: pop     ebp
0x97CBC6: pop     edi
0x97CBC7: pop     esi
0x97CBC8: mov     eax, 1
0x97CBCD: pop     ebx
0x97CBCE: add     esp, 6Ch
0x97CBD1: retn    4
