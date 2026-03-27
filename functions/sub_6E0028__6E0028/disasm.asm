0x6E0028: and     al, 14h
0x6E002A: mov     [esp+arg_14], eax
0x6E002E: mov     ecx, 9
0x6E0033: lea     edi, [esp+arg_68]
0x6E0037: jz      short loc_6E00B2
0x6E0039: lea     esi, [ebx+64h]
0x6E003C: rep movsd
0x6E003E: fld     dword ptr [ebx+94h]
0x6E0044: fstp    [esp+arg_3C]
0x6E0048: lea     ecx, [ebp+54h]
0x6E004B: push    ecx
0x6E004C: lea     edx, [esp+4+arg_30]
0x6E0050: push    edx
0x6E0051: lea     ecx, [esp+8+arg_68]
0x6E0055: call    sub_7101F0
0x6E005A: fld     dword ptr [eax]
0x6E005C: fld     [esp+arg_3C]
0x6E0060: fld     st
0x6E0062: fmulp   st(2), st
0x6E0064: fxch    st(1)
0x6E0066: fstp    [esp+arg_18]
0x6E006A: fld     dword ptr [eax+4]
0x6E006D: fmul    st, st(1)
0x6E006F: fstp    [esp+arg_1C]
0x6E0073: fmul    dword ptr [eax+8]
0x6E0076: fstp    [esp+arg_20]
0x6E007A: fld     dword ptr [ebx+88h]
0x6E0080: fadd    [esp+arg_18]
0x6E0084: fstp    [esp+arg_30]
0x6E0088: mov     eax, [esp+arg_30]
0x6E008C: fld     dword ptr [ebx+8Ch]
0x6E0092: fadd    [esp+arg_1C]
0x6E0096: fstp    [esp+arg_34]
0x6E009A: mov     ecx, [esp+arg_34]
0x6E009E: fld     dword ptr [ebx+90h]
0x6E00A4: fadd    [esp+arg_20]
0x6E00A8: fstp    [esp+arg_38]
0x6E00AC: mov     edx, [esp+arg_38]
0x6E00B0: jmp     short loc_6E00C2
0x6E00B2: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6E00B7: rep movsd
0x6E00B9: mov     eax, [ebp+54h]
0x6E00BC: mov     ecx, [ebp+58h]
0x6E00BF: mov     edx, [ebp+5Ch]
0x6E00C2: fld     [esp+arg_C]
0x6E00C6: mov     [esp+arg_18], eax
0x6E00CA: fsub    [esp+arg_18]
0x6E00CE: mov     [esp+arg_1C], ecx
0x6E00D2: mov     [esp+arg_20], edx
0x6E00D6: fstp    [esp+arg_24]
0x6E00DA: fld     [esp+arg_10]
0x6E00DE: fsub    [esp+arg_1C]
0x6E00E2: fstp    [esp+arg_28]
0x6E00E6: fld     [esp+arg_14]
0x6E00EA: fsub    [esp+arg_20]
0x6E00EE: fstp    [esp+arg_2C]
0x6E00F2: fld     [esp+arg_24]
0x6E00F6: fld     [esp+arg_28]
0x6E00FA: fld     [esp+arg_2C]
0x6E00FE: fld     st(1)
0x6E0100: fmulp   st(2), st
0x6E0102: fld     st(2)
0x6E0104: fmulp   st(3), st
0x6E0106: fxch    st(1)
0x6E0108: faddp   st(2), st
0x6E010A: fmul    st, st
0x6E010C: faddp   st(1), st
0x6E010E: fstp    [esp+arg_3C]
0x6E0112: fld     [esp+arg_3C]
0x6E0116: fcomp   dword ptr ds:0A37080h
0x6E011C: fnstsw  ax
0x6E011E: test    ah, 5
0x6E0121: jp      short loc_6E0131
0x6E0123: lea     ecx, [esp+arg_40]
0x6E0127: call    sub_70FD10
0x6E012C: jmp     loc_6E0397
0x6E0131: lea     ecx, [esp+arg_24]
0x6E0135: call    sub_43F350
0x6E013A: fstp    st
0x6E013C: fld     dword ptr ds:0A7B17Ch
0x6E0142: fld     [esp+arg_2C]
0x6E0146: fcom    st(1)
0x6E0148: fnstsw  ax
0x6E014A: fstp    st(1)
0x6E014C: test    ah, 5
0x6E014F: fld     [esp+arg_28]
0x6E0153: jp      short loc_6E017D
0x6E0155: fxch    st(1)
0x6E0157: fcom    qword ptr ds:0A3F460h
0x6E015D: fnstsw  ax
0x6E015F: fxch    st(1)
0x6E0161: test    ah, 41h
0x6E0164: jnz     short loc_6E017D
0x6E0166: mov     eax, ds:0B258DCh
0x6E016B: fst     [esp+arg_3C]
0x6E016F: mov     ecx, ds:0B258E0h
0x6E0175: mov     edx, ds:0B258E4h
0x6E017B: jmp     short loc_6E0196
0x6E017D: mov     eax, ds:0B258E8h
0x6E0182: fxch    st(1)
0x6E0184: mov     ecx, ds:0B258ECh
0x6E018A: fst     [esp+arg_3C]
0x6E018E: mov     edx, ds:0B258F0h
0x6E0194: fxch    st(1)
0x6E0196: fld     [esp+arg_24]
0x6E019A: mov     [esp+arg_30], eax
0x6E019E: fld     [esp+arg_3C]
0x6E01A2: mov     [esp+arg_34], ecx
0x6E01A6: fld     st
0x6E01A8: mov     [esp+arg_38], edx
0x6E01AC: fmulp   st(2), st
0x6E01AE: lea     ecx, [esp+arg_30]
0x6E01B2: fxch    st(1)
0x6E01B4: fstp    [esp+arg_C]
0x6E01B8: fld     st
0x6E01BA: fmulp   st(2), st
0x6E01BC: fxch    st(1)
0x6E01BE: fstp    [esp+arg_10]
0x6E01C2: fmulp   st(1), st
0x6E01C4: fstp    [esp+arg_14]
0x6E01C8: fld     [esp+arg_30]
0x6E01CC: fsub    [esp+arg_C]
0x6E01D0: fstp    [esp+arg_30]
0x6E01D4: fld     [esp+arg_34]
0x6E01D8: fsub    [esp+arg_10]
0x6E01DC: fstp    [esp+arg_34]
0x6E01E0: fld     [esp+arg_38]
0x6E01E4: fsub    [esp+arg_14]
0x6E01E8: fstp    [esp+arg_38]
0x6E01EC: call    sub_43F350
0x6E01F1: mov     eax, [esp+arg_64]
0x6E01F5: fstp    st
0x6E01F7: test    byte ptr [eax+3Ch], 1
0x6E01FB: jnz     short loc_6E0233
0x6E01FD: fld     [esp+arg_24]
0x6E0201: fchs
0x6E0203: fstp    [esp+arg_C]
0x6E0207: mov     ecx, [esp+arg_C]
0x6E020B: fld     [esp+arg_28]
0x6E020F: mov     [esp+arg_24], ecx
0x6E0213: fchs
0x6E0215: fstp    [esp+arg_10]
0x6E0219: mov     edx, [esp+arg_10]
0x6E021D: fld     [esp+arg_2C]
0x6E0221: mov     [esp+arg_28], edx
0x6E0225: fchs
0x6E0227: fstp    [esp+arg_14]
0x6E022B: mov     ecx, [esp+arg_14]
0x6E022F: mov     [esp+arg_2C], ecx
0x6E0233: fld     [esp+arg_2C]
0x6E0237: movzx   eax, byte ptr [eax+3Ch]
0x6E023B: fld     [esp+arg_28]
0x6E023F: shr     eax, 1
0x6E0241: fld     [esp+arg_34]
0x6E0245: and     eax, 3
0x6E0248: sub     eax, 0
0x6E024B: fld     st
0x6E024D: fmul    st, st(3)
0x6E024F: fld     [esp+arg_38]
0x6E0253: fld     st
0x6E0255: fmul    st, st(4)
0x6E0257: fsubp   st(2), st
0x6E0259: fxch    st(1)
0x6E025B: fstp    [esp+arg_18]
0x6E025F: fld     st
0x6E0261: fmul    [esp+arg_24]
0x6E0265: fld     [esp+arg_30]
0x6E0269: fld     st
0x6E026B: fmul    st, st(6)
0x6E026D: fsubp   st(2), st
0x6E026F: fxch    st(1)
0x6E0271: fstp    [esp+arg_1C]
0x6E0275: fld     st
0x6E0277: fmul    st, st(4)
0x6E0279: fld     st(3)
0x6E027B: fmul    [esp+arg_24]
0x6E027F: fsubp   st(1), st
0x6E0281: fstp    [esp+arg_20]
0x6E0285: jz      loc_6E032E
0x6E028B: sub     eax, 1
0x6E028E: jz      short loc_6E02D4
0x6E0290: sub     eax, 1
0x6E0293: jnz     loc_6E036A
0x6E0299: fld     [esp+arg_18]
0x6E029D: fstp    [esp+arg_40]
0x6E02A1: fld     [esp+arg_1C]
0x6E02A5: fstp    [esp+arg_4C]
0x6E02A9: fld     [esp+arg_20]
0x6E02AD: fstp    [esp+arg_58]
0x6E02B1: fstp    [esp+arg_44]
0x6E02B5: fxch    st(1)
0x6E02B7: fstp    [esp+arg_50]
0x6E02BB: fstp    [esp+arg_5C]
0x6E02BF: fld     [esp+arg_24]
0x6E02C3: fstp    [esp+arg_48]
0x6E02C7: fstp    [esp+arg_54]
0x6E02CB: fstp    [esp+arg_60]
0x6E02CF: jmp     loc_6E0374
0x6E02D4: fld     [esp+arg_18]
0x6E02D8: fstp    [esp+arg_40]
0x6E02DC: fld     [esp+arg_1C]
0x6E02E0: fstp    [esp+arg_4C]
0x6E02E4: fld     [esp+arg_20]
0x6E02E8: fstp    [esp+arg_58]
0x6E02EC: fld     [esp+arg_24]
0x6E02F0: fstp    [esp+arg_44]
0x6E02F4: fxch    st(3)
0x6E02F6: fstp    [esp+arg_50]
0x6E02FA: fxch    st(3)
0x6E02FC: fstp    [esp+arg_5C]
0x6E0300: fxch    st(1)
0x6E0302: fchs
0x6E0304: fstp    [esp+arg_C]
0x6E0308: fchs
0x6E030A: fstp    [esp+arg_10]
0x6E030E: fchs
0x6E0310: fstp    [esp+arg_14]
0x6E0314: fld     [esp+arg_C]
0x6E0318: fstp    [esp+arg_48]
0x6E031C: fld     [esp+arg_10]
0x6E0320: fstp    [esp+arg_54]
0x6E0324: fld     [esp+arg_14]
0x6E0328: fstp    [esp+arg_60]
0x6E032C: jmp     short loc_6E0374
0x6E032E: fld     [esp+arg_24]
0x6E0332: fstp    [esp+arg_40]
0x6E0336: fxch    st(3)
0x6E0338: fstp    [esp+arg_4C]
0x6E033C: fxch    st(3)
0x6E033E: fstp    [esp+arg_58]
0x6E0342: fxch    st(1)
0x6E0344: fstp    [esp+arg_44]
0x6E0348: fstp    [esp+arg_50]
0x6E034C: fstp    [esp+arg_5C]
0x6E0350: fld     [esp+arg_18]
0x6E0354: fchs
0x6E0356: fstp    [esp+arg_C]
0x6E035A: fld     [esp+arg_1C]
0x6E035E: fchs
0x6E0360: fstp    [esp+arg_10]
0x6E0364: fld     [esp+arg_20]
0x6E0368: jmp     short loc_6E030E
0x6E036A: fstp    st(2)
0x6E036C: fstp    st
0x6E036E: fstp    st
0x6E0370: fstp    st(1)
0x6E0372: fstp    st
0x6E0374: lea     edx, [esp+arg_40]
0x6E0378: push    edx
0x6E0379: lea     eax, [esp+4+arg_8C]
0x6E0380: push    eax
0x6E0381: lea     ecx, [esp+8+arg_68]
0x6E0385: call    sub_710490
0x6E038A: mov     ecx, 9
0x6E038F: mov     esi, eax
0x6E0391: lea     edi, [esp+arg_40]
0x6E0395: rep movsd
0x6E0397: lea     edi, [ebp+30h]
0x6E039A: mov     ecx, 9
0x6E039F: lea     esi, [esp+arg_40]
0x6E03A3: rep movsd
0x6E03A5: pop     edi
0x6E03A6: pop     esi
0x6E03A7: pop     ebp
0x6E03A8: pop     ebx
0x6E03A9: add     esp, 0A4h
0x6E03AF: retn    4
