0x96CF80: sub     esp, 0F8h
0x96CF86: push    ebx
0x96CF87: mov     ebx, [esp+0FCh+arg_10]
0x96CF8E: push    ebp
0x96CF8F: push    esi
0x96CF90: mov     esi, [esp+104h+arg_C]
0x96CF97: mov     ebp, [esp+104h+arg_14]
0x96CF9E: push    edi
0x96CF9F: mov     edi, [esp+108h+arg_4]
0x96CFA6: fld     dword ptr [edi+10h]
0x96CFA9: mov     eax, [edi+4]
0x96CFAC: fmul    st, st
0x96CFAE: mov     ecx, [edi+8]
0x96CFB1: mov     edx, [edi+0Ch]
0x96CFB4: mov     [esp+108h+var_CC], eax
0x96CFB8: fstp    [esp+108h+var_90]
0x96CFBC: mov     eax, [esi]
0x96CFBE: fld     dword ptr [ebx]
0x96CFC0: mov     [esp+108h+var_B4], eax
0x96CFC4: fsub    dword ptr [esi]
0x96CFC6: mov     [esp+108h+var_C8], ecx
0x96CFCA: mov     ecx, [esi+4]
0x96CFCD: mov     [esp+108h+var_B0], ecx
0x96CFD1: fstp    dword ptr [esp+108h+var_F8]
0x96CFD5: mov     eax, dword ptr [esp+108h+var_F8]
0x96CFD9: fld     dword ptr [ebx+4]
0x96CFDC: mov     [esp+108h+var_C4], edx
0x96CFE0: fsub    dword ptr [esi+4]
0x96CFE3: mov     edx, [esi+8]
0x96CFE6: mov     [esp+108h+var_A8], eax
0x96CFEA: mov     [esp+108h+var_AC], edx
0x96CFEE: fstp    dword ptr [esp+108h+var_F8+4]
0x96CFF2: mov     ecx, dword ptr [esp+108h+var_F8+4]
0x96CFF6: fld     dword ptr [ebx+8]
0x96CFF9: mov     [esp+108h+var_A4], ecx
0x96CFFD: fsub    dword ptr [esi+8]
0x96D000: fstp    [esp+108h+var_F0]
0x96D004: mov     edx, [esp+108h+var_F0]
0x96D008: fld     dword ptr [ebp+0]
0x96D00B: mov     [esp+108h+var_A0], edx
0x96D00F: fsub    dword ptr [esi]
0x96D011: fstp    dword ptr [esp+108h+var_F8]
0x96D015: mov     eax, dword ptr [esp+108h+var_F8]
0x96D019: fld     dword ptr [ebp+4]
0x96D01C: mov     [esp+108h+var_9C], eax
0x96D020: fsub    dword ptr [esi+4]
0x96D023: lea     eax, [esp+108h+var_88]
0x96D02A: push    eax
0x96D02B: lea     eax, [esp+10Ch+var_CC]
0x96D02F: fstp    dword ptr [esp+10Ch+var_F8+4]
0x96D033: mov     ecx, dword ptr [esp+10Ch+var_F8+4]
0x96D037: fld     dword ptr [ebp+8]
0x96D03A: mov     [esp+10Ch+var_98], ecx
0x96D03E: fsub    dword ptr [esi+8]
0x96D041: lea     ecx, [esp+10Ch+var_8C]
0x96D048: push    ecx
0x96D049: fstp    [esp+110h+var_F0]
0x96D04D: mov     edx, [esp+110h+var_F0]
0x96D051: mov     [esp+110h+var_94], edx
0x96D055: lea     edx, [esp+110h+var_B4]
0x96D059: push    edx
0x96D05A: push    eax
0x96D05B: call    sub_975DF0
0x96D060: fld     [esp+118h+var_90]
0x96D067: fld     st
0x96D069: add     esp, 10h
0x96D06C: fsubp   st(2), st
0x96D06E: fxch    st(1)
0x96D070: fstp    dword ptr [esp+108h+var_E8]
0x96D074: fld     dword ptr [esp+108h+var_E8]
0x96D078: fldz
0x96D07A: fcom    st(1)
0x96D07C: fnstsw  ax
0x96D07E: fstp    st(1)
0x96D080: test    ah, 1
0x96D083: jnz     loc_96D184
0x96D089: cmp     [esp+108h+arg_24], 0
0x96D091: fstp    st(1)
0x96D093: mov     ecx, [esp+108h+arg_1C]
0x96D09A: fstp    dword ptr [ecx]
0x96D09C: mov     eax, [esp+108h+arg_20]
0x96D0A3: fld     [esp+108h+var_9C]
0x96D0A7: fld     [esp+108h+var_88]
0x96D0AE: fld     st
0x96D0B0: fmulp   st(2), st
0x96D0B2: fxch    st(1)
0x96D0B4: fstp    dword ptr [esp+108h+var_E8]
0x96D0B8: fld     [esp+108h+var_98]
0x96D0BC: fmul    st, st(1)
0x96D0BE: fstp    dword ptr [esp+108h+var_E8+4]
0x96D0C2: fmul    [esp+108h+var_94]
0x96D0C6: fstp    [esp+108h+var_E0]
0x96D0CA: fld     [esp+108h+var_A8]
0x96D0CE: fld     [esp+108h+var_8C]
0x96D0D2: fld     st
0x96D0D4: fmulp   st(2), st
0x96D0D6: fxch    st(1)
0x96D0D8: fstp    dword ptr [esp+108h+var_F8]
0x96D0DC: fld     [esp+108h+var_A4]
0x96D0E0: fmul    st, st(1)
0x96D0E2: fstp    dword ptr [esp+108h+var_F8+4]
0x96D0E6: fmul    [esp+108h+var_A0]
0x96D0EA: fstp    [esp+108h+var_F0]
0x96D0EE: fld     [esp+108h+var_B4]
0x96D0F2: fadd    dword ptr [esp+108h+var_F8]
0x96D0F6: fstp    [esp+108h+var_DC]
0x96D0FA: fld     [esp+108h+var_B0]
0x96D0FE: fadd    dword ptr [esp+108h+var_F8+4]
0x96D102: fstp    [esp+108h+var_D8]
0x96D106: fld     [esp+108h+var_AC]
0x96D10A: fadd    [esp+108h+var_F0]
0x96D10E: fstp    [esp+108h+var_D4]
0x96D112: fld     [esp+108h+var_DC]
0x96D116: fadd    dword ptr [esp+108h+var_E8]
0x96D11A: fstp    dword ptr [esp+108h+var_F8]
0x96D11E: mov     edx, dword ptr [esp+108h+var_F8]
0x96D122: fld     [esp+108h+var_D8]
0x96D126: mov     [eax], edx
0x96D128: fadd    dword ptr [esp+108h+var_E8+4]
0x96D12C: fstp    dword ptr [esp+108h+var_F8+4]
0x96D130: mov     ecx, dword ptr [esp+108h+var_F8+4]
0x96D134: fld     [esp+108h+var_D4]
0x96D138: mov     [eax+4], ecx
0x96D13B: fadd    [esp+108h+var_E0]
0x96D13F: fstp    [esp+108h+var_F0]
0x96D143: mov     edx, [esp+108h+var_F0]
0x96D147: mov     [eax+8], edx
0x96D14A: jz      loc_96D5E4
0x96D150: lea     eax, [esp+108h+var_84]
0x96D157: push    eax
0x96D158: lea     ecx, [esp+10Ch+var_B4]
0x96D15C: call    sub_9741F0
0x96D161: mov     edx, [eax]
0x96D163: mov     ecx, [esp+108h+arg_2C]
0x96D16A: mov     [ecx], edx
0x96D16C: mov     edx, [eax+4]
0x96D16F: mov     [ecx+4], edx
0x96D172: mov     eax, [eax+8]
0x96D175: mov     [ecx+8], eax
0x96D178: mov     eax, [esp+108h+arg_28]
0x96D17F: jmp     loc_96D5B6
0x96D184: mov     eax, [esp+108h+arg_8]
0x96D18B: fstp    st
0x96D18D: mov     ecx, [esp+108h+arg_18]
0x96D194: fld     dword ptr [eax]
0x96D196: fsub    dword ptr [ecx]
0x96D198: fstp    dword ptr [esp+108h+var_F8]
0x96D19C: mov     edx, dword ptr [esp+108h+var_F8]
0x96D1A0: fld     dword ptr [eax+4]
0x96D1A3: mov     [esp+108h+var_C0], edx
0x96D1A7: fsub    dword ptr [ecx+4]
0x96D1AA: fstp    dword ptr [esp+108h+var_F8+4]
0x96D1AE: fld     dword ptr [eax+8]
0x96D1B1: mov     eax, dword ptr [esp+108h+var_F8+4]
0x96D1B5: fsub    dword ptr [ecx+8]
0x96D1B8: mov     [esp+108h+var_BC], eax
0x96D1BC: fstp    [esp+108h+var_F0]
0x96D1C0: mov     ecx, [esp+108h+var_F0]
0x96D1C4: fld     dword ptr [esp+108h+var_F8]
0x96D1C8: mov     [esp+108h+var_B8], ecx
0x96D1CC: fld     dword ptr [esp+108h+var_F8+4]
0x96D1D0: fld     [esp+108h+var_F0]
0x96D1D4: fld     st(1)
0x96D1D6: fmulp   st(2), st
0x96D1D8: fld     st(2)
0x96D1DA: fmulp   st(3), st
0x96D1DC: fxch    st(1)
0x96D1DE: faddp   st(2), st
0x96D1E0: fmul    st, st
0x96D1E2: faddp   st(1), st
0x96D1E4: fstp    dword ptr [esp+108h+var_E8]
0x96D1E8: fld     dword ptr [esp+108h+var_E8]
0x96D1EC: fmul    [esp+108h+arg_0]
0x96D1F3: fcomp   qword ptr ds:0AA3AF8h
0x96D1F9: fnstsw  ax
0x96D1FB: test    ah, 41h
0x96D1FE: jp      short loc_96D20F
0x96D200: fstp    st
0x96D202: pop     edi
0x96D203: pop     esi
0x96D204: pop     ebp
0x96D205: xor     al, al
0x96D207: pop     ebx
0x96D208: add     esp, 0F8h
0x96D20E: retn
0x96D20F: fld     [esp+108h+var_A4]
0x96D213: fld     st
0x96D215: fld     [esp+108h+var_94]
0x96D219: fld     st
0x96D21B: fmulp   st(2), st
0x96D21D: fld     [esp+108h+var_A0]
0x96D221: fld     st
0x96D223: fld     [esp+108h+var_98]
0x96D227: fld     st
0x96D229: fmulp   st(2), st
0x96D22B: fxch    st(4)
0x96D22D: fsubrp  st(1), st
0x96D22F: fstp    dword ptr [esp+108h+var_E8]
0x96D233: fld     [esp+108h+var_9C]
0x96D237: fld     st
0x96D239: fmulp   st(2), st
0x96D23B: fld     [esp+108h+var_A8]
0x96D23F: fld     st
0x96D241: fmulp   st(4), st
0x96D243: fxch    st(2)
0x96D245: fsubrp  st(3), st
0x96D247: fxch    st(2)
0x96D249: fstp    dword ptr [esp+108h+var_E8+4]
0x96D24D: fmulp   st(2), st
0x96D24F: fmulp   st(2), st
0x96D251: fsubrp  st(1), st
0x96D253: fstp    [esp+108h+var_E0]
0x96D257: fld     dword ptr [esp+108h+var_E8]
0x96D25B: fchs
0x96D25D: fstp    [esp+108h+var_DC]
0x96D261: fld     dword ptr [esp+108h+var_E8+4]
0x96D265: fchs
0x96D267: fstp    [esp+108h+var_D8]
0x96D26B: fld     [esp+108h+var_E0]
0x96D26F: fchs
0x96D271: fstp    [esp+108h+var_D4]
0x96D275: fld     [esp+108h+var_DC]
0x96D279: fld     st
0x96D27B: fmul    [esp+108h+var_CC]
0x96D27F: fld     [esp+108h+var_C8]
0x96D283: fld     [esp+108h+var_D8]
0x96D287: fld     st
0x96D289: fmulp   st(2), st
0x96D28B: fxch    st(2)
0x96D28D: faddp   st(1), st
0x96D28F: fld     [esp+108h+var_C4]
0x96D293: fld     [esp+108h+var_D4]
0x96D297: fld     st
0x96D299: fmulp   st(2), st
0x96D29B: fxch    st(2)
0x96D29D: faddp   st(1), st
0x96D29F: fstp    dword ptr [esp+108h+var_E8]
0x96D2A3: fld     st(2)
0x96D2A5: fmul    dword ptr [esi]
0x96D2A7: fld     dword ptr [esi+4]
0x96D2AA: fmul    st, st(3)
0x96D2AC: faddp   st(1), st
0x96D2AE: fld     st(1)
0x96D2B0: fmul    dword ptr [esi+8]
0x96D2B3: faddp   st(1), st
0x96D2B5: fstp    [esp+108h+var_D0]
0x96D2B9: fld     dword ptr [esp+108h+var_E8]
0x96D2BD: fsub    [esp+108h+var_D0]
0x96D2C1: fstp    [esp+108h+var_EC]
0x96D2C5: fld     [esp+108h+var_EC]
0x96D2C9: fmul    st, st
0x96D2CB: fld     st(2)
0x96D2CD: fmulp   st(3), st
0x96D2CF: fld     st(3)
0x96D2D1: fmulp   st(4), st
0x96D2D3: fxch    st(2)
0x96D2D5: faddp   st(3), st
0x96D2D7: fmul    st, st
0x96D2D9: faddp   st(2), st
0x96D2DB: fxch    st(1)
0x96D2DD: fstp    [esp+108h+var_EC]
0x96D2E1: fld     [esp+108h+var_EC]
0x96D2E5: fmulp   st(2), st
0x96D2E7: fxch    st(1)
0x96D2E9: fstp    [esp+108h+var_EC]
0x96D2ED: fld     [esp+108h+var_EC]
0x96D2F1: fcompp
0x96D2F3: fnstsw  ax
0x96D2F5: test    ah, 5
0x96D2F8: jp      loc_96D4D5
0x96D2FE: lea     ecx, [esp+108h+var_DC]
0x96D302: call    sub_43F350
0x96D307: fstp    st
0x96D309: fld     dword ptr [esp+108h+var_E8]
0x96D30D: fld     [esp+108h+var_D0]
0x96D311: fcompp
0x96D313: fnstsw  ax
0x96D315: fld     [esp+108h+var_DC]
0x96D319: test    ah, 5
0x96D31C: fmul    dword ptr [esp+108h+var_F8]
0x96D320: fld     [esp+108h+var_D8]
0x96D324: fmul    dword ptr [esp+108h+var_F8+4]
0x96D328: faddp   st(1), st
0x96D32A: fld     [esp+108h+var_D4]
0x96D32E: fmul    [esp+108h+var_F0]
0x96D332: faddp   st(1), st
0x96D334: jp      short loc_96D3A2
0x96D336: fstp    [esp+108h+var_EC]
0x96D33A: fld     [esp+108h+var_EC]
0x96D33E: fcomp   dword ptr ds:0A2FAA8h
0x96D344: fnstsw  ax
0x96D346: test    ah, 1
0x96D349: jz      loc_96D202
0x96D34F: fld     dword ptr [edi+10h]
0x96D352: lea     edx, [esp+108h+var_DC]
0x96D356: push    edx; int
0x96D357: push    ecx
0x96D358: lea     eax, [esp+110h+var_84]
0x96D35F: fstp    [esp+110h+var_110]; float
0x96D362: push    eax; int
0x96D363: call    sub_47DA10
0x96D368: fld     [esp+114h+var_CC]
0x96D36C: fsub    dword ptr [eax]
0x96D36E: fstp    dword ptr [esp+114h+var_E8]
0x96D372: mov     ecx, dword ptr [esp+114h+var_E8]
0x96D376: fld     [esp+114h+var_C8]
0x96D37A: mov     dword ptr [esp+114h+var_F8], ecx
0x96D37E: fsub    dword ptr [eax+4]
0x96D381: fstp    dword ptr [esp+114h+var_E8+4]
0x96D385: mov     edx, dword ptr [esp+114h+var_E8+4]
0x96D389: fld     [esp+114h+var_C4]
0x96D38D: mov     dword ptr [esp+114h+var_F8+4], edx
0x96D391: fsub    dword ptr [eax+8]
0x96D394: fstp    [esp+114h+var_E0]
0x96D398: mov     eax, [esp+114h+var_E0]
0x96D39C: mov     [esp+114h+var_F0], eax
0x96D3A0: jmp     short loc_96D40C
0x96D3A2: fstp    [esp+108h+var_EC]
0x96D3A6: fld     [esp+108h+var_EC]
0x96D3AA: fcomp   dword ptr ds:0A2FAA8h
0x96D3B0: fnstsw  ax
0x96D3B2: test    ah, 41h
0x96D3B5: jnp     loc_96D202
0x96D3BB: fld     dword ptr [edi+10h]
0x96D3BE: lea     ecx, [esp+108h+var_DC]
0x96D3C2: push    ecx; int
0x96D3C3: push    ecx
0x96D3C4: lea     edx, [esp+110h+var_84]
0x96D3CB: fstp    [esp+110h+var_110]; float
0x96D3CE: push    edx; int
0x96D3CF: call    sub_47DA10
0x96D3D4: fld     dword ptr [eax]
0x96D3D6: fadd    [esp+114h+var_CC]
0x96D3DA: fstp    dword ptr [esp+114h+var_E8]
0x96D3DE: fld     dword ptr [eax+4]
0x96D3E1: fadd    [esp+114h+var_C8]
0x96D3E5: fstp    dword ptr [esp+114h+var_E8+4]
0x96D3E9: mov     ecx, dword ptr [esp+114h+var_E8+4]
0x96D3ED: fld     dword ptr [eax+8]
0x96D3F0: mov     eax, dword ptr [esp+114h+var_E8]
0x96D3F4: fadd    [esp+114h+var_C4]
0x96D3F8: mov     dword ptr [esp+114h+var_F8], eax
0x96D3FC: mov     dword ptr [esp+114h+var_F8+4], ecx
0x96D400: fstp    [esp+114h+var_E0]
0x96D404: mov     edx, [esp+114h+var_E0]
0x96D408: mov     [esp+114h+var_F0], edx
0x96D40C: fld     [esp+114h+var_DC]
0x96D410: add     esp, 0Ch
0x96D413: fld     st
0x96D415: fmul    dword ptr [esi]
0x96D417: fld     dword ptr [esi+4]
0x96D41A: fld     [esp+108h+var_D8]
0x96D41E: fld     st
0x96D420: fmulp   st(2), st
0x96D422: fxch    st(2)
0x96D424: faddp   st(1), st
0x96D426: fld     [esp+108h+var_D4]
0x96D42A: fld     st
0x96D42C: fmul    dword ptr [esi+8]
0x96D42F: faddp   st(2), st
0x96D431: fxch    st(1)
0x96D433: fstp    [esp+108h+var_D0]
0x96D437: fld     [esp+108h+var_D0]
0x96D43B: fadd    qword ptr ds:0A30E40h
0x96D441: fst     [esp+108h+var_E8]
0x96D445: fld     dword ptr [esp+108h+var_F8]
0x96D449: fmulp   st(4), st
0x96D44B: fld     dword ptr [esp+108h+var_F8+4]
0x96D44F: fmulp   st(3), st
0x96D451: fxch    st(3)
0x96D453: faddp   st(2), st
0x96D455: fmul    [esp+108h+var_F0]
0x96D459: faddp   st(1), st
0x96D45B: fstp    [esp+108h+var_EC]
0x96D45F: fld     [esp+108h+var_EC]
0x96D463: fcompp
0x96D465: fnstsw  ax
0x96D467: test    ah, 41h
0x96D46A: jnz     short loc_96D4D5
0x96D46C: fld     [esp+108h+arg_0]
0x96D473: lea     eax, [esp+108h+var_C0]
0x96D477: push    eax; int
0x96D478: push    ecx
0x96D479: lea     ecx, [esp+110h+var_78]
0x96D480: fstp    [esp+110h+var_110]; float
0x96D483: push    ecx; int
0x96D484: call    sub_47DA10
0x96D489: fld     dword ptr [eax]
0x96D48B: fadd    dword ptr [esp+114h+var_F8]
0x96D48F: add     esp, 0Ch
0x96D492: lea     edx, [esp+108h+var_84]
0x96D499: push    edx
0x96D49A: fstp    [esp+10Ch+var_84]
0x96D4A1: lea     ecx, [esp+10Ch+var_DC]
0x96D4A5: fld     dword ptr [eax+4]
0x96D4A8: fadd    dword ptr [esp+10Ch+var_F8+4]
0x96D4AC: fstp    [esp+10Ch+var_80]
0x96D4B3: fld     dword ptr [eax+8]
0x96D4B6: fadd    [esp+10Ch+var_F0]
0x96D4BA: fstp    [esp+10Ch+var_7C]
0x96D4C1: call    sub_47D9E0
0x96D4C6: fcomp   [esp+108h+var_E8]
0x96D4CA: fnstsw  ax
0x96D4CC: test    ah, 41h
0x96D4CF: jz      loc_96D202
0x96D4D5: fld     dword ptr ds:0A79DB4h
0x96D4DB: push    20h ; ' '; int
0x96D4DD: sub     esp, 0Ch
0x96D4E0: fstp    [esp+118h+var_110]; float
0x96D4E4: lea     ecx, [esp+118h+var_6C]
0x96D4EB: fld     dword ptr ds:0A37080h
0x96D4F1: fstp    [esp+118h+var_114]; float
0x96D4F5: fld     [esp+118h+arg_0]
0x96D4FC: fstp    [esp+118h+var_118]; float
0x96D4FF: push    ebp; int
0x96D500: push    ebx; int
0x96D501: push    esi; int
0x96D502: push    edi; int
0x96D503: call    sub_9767D0
0x96D508: mov     eax, [esp+108h+arg_18]
0x96D50F: mov     ecx, [esp+108h+arg_8]
0x96D516: push    eax
0x96D517: push    ecx
0x96D518: lea     ecx, [esp+110h+var_6C]
0x96D51F: call    sub_96F170
0x96D524: lea     ecx, [esp+108h+var_6C]
0x96D52B: call    sub_680CC0
0x96D530: mov     edx, [esp+108h+arg_1C]
0x96D537: lea     ecx, [esp+108h+var_6C]
0x96D53E: fstp    dword ptr [edx]
0x96D540: call    NiRenderTargetGroup__GetRenderTargetsNum
0x96D545: cmp     eax, 3
0x96D548: jz      short loc_96D55F
0x96D54A: lea     ecx, [esp+108h+var_6C]
0x96D551: call    NiRenderTargetGroup__GetRenderTargetsNum
0x96D556: cmp     eax, 2
0x96D559: jnz     loc_96D202
0x96D55F: lea     ecx, [esp+108h+var_6C]
0x96D566: call    sub_4E7DE0
0x96D56B: cmp     [esp+108h+arg_24], 0
0x96D573: mov     edx, [eax]
0x96D575: mov     ecx, [esp+108h+arg_20]
0x96D57C: mov     [ecx], edx
0x96D57E: mov     edx, [eax+4]
0x96D581: mov     [ecx+4], edx
0x96D584: mov     eax, [eax+8]
0x96D587: mov     [ecx+8], eax
0x96D58A: jz      short loc_96D5E4
0x96D58C: lea     ecx, [esp+108h+var_6C]; this
0x96D593: call    TESObjectREFR_GetPosition
0x96D598: mov     edx, [eax]
0x96D59A: mov     ecx, [esp+108h+arg_28]
0x96D5A1: mov     [ecx], edx
0x96D5A3: mov     edx, [eax+4]
0x96D5A6: mov     [ecx+4], edx
0x96D5A9: mov     eax, [eax+8]
0x96D5AC: mov     [ecx+8], eax
0x96D5AF: mov     eax, [esp+108h+arg_2C]
0x96D5B6: fld     dword ptr [ecx]
0x96D5B8: fchs
0x96D5BA: fstp    dword ptr [esp+108h+var_F8]
0x96D5BE: fld     dword ptr [ecx+4]
0x96D5C1: fchs
0x96D5C3: fstp    dword ptr [esp+108h+var_F8+4]
0x96D5C7: mov     edx, dword ptr [esp+108h+var_F8+4]
0x96D5CB: fld     dword ptr [ecx+8]
0x96D5CE: mov     ecx, dword ptr [esp+108h+var_F8]
0x96D5D2: fchs
0x96D5D4: mov     [eax], ecx
0x96D5D6: fstp    [esp+108h+var_F0]
0x96D5DA: mov     ecx, [esp+108h+var_F0]
0x96D5DE: mov     [eax+4], edx
0x96D5E1: mov     [eax+8], ecx
0x96D5E4: pop     edi
0x96D5E5: pop     esi
0x96D5E6: pop     ebp
0x96D5E7: mov     al, 1
0x96D5E9: pop     ebx
0x96D5EA: add     esp, 0F8h
0x96D5F0: retn
