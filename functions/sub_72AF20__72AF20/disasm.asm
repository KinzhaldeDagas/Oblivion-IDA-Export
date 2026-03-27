0x72AF20: sub     esp, 1B4h
0x72AF26: push    ebx
0x72AF27: push    ebp
0x72AF28: mov     ebx, ecx
0x72AF2A: mov     ecx, [ebx+10h]
0x72AF2D: push    esi
0x72AF2E: push    edi
0x72AF2F: lea     eax, [esp+1C4h+var_9C]
0x72AF36: push    eax
0x72AF37: add     ecx, 64h ; 'd'
0x72AF3A: mov     [esp+1C8h+var_17C], ebx
0x72AF3E: call    sub_718A80
0x72AF43: mov     eax, [ebx+8]
0x72AF46: lea     ecx, [esp+1C4h+var_9C]
0x72AF4D: push    ecx
0x72AF4E: lea     edx, [esp+1C8h+var_160]
0x72AF52: push    edx
0x72AF53: lea     ecx, [eax+0Ch]
0x72AF56: call    sub_53D7A0
0x72AF5B: mov     ebx, [ebx+8]
0x72AF5E: mov     ecx, 0Dh
0x72AF63: mov     esi, eax
0x72AF65: lea     edi, [esp+1C4h+var_D0]
0x72AF6C: rep movsd
0x72AF6E: mov     edi, [ebx+44h]
0x72AF71: mov     esi, [ebx+40h]
0x72AF74: mov     ebx, [esp+1C4h+arg_4]
0x72AF7B: test    ebx, ebx
0x72AF7D: mov     [esp+1C4h+var_1A8], edi
0x72AF81: mov     [esp+1C4h+var_19C], esi
0x72AF85: jz      loc_72B88F
0x72AF8B: mov     ebp, [esp+1C4h+arg_10]
0x72AF92: test    ebp, ebp
0x72AF94: jz      loc_72B88F
0x72AF9A: mov     edx, [esp+1C4h+arg_14]
0x72AFA1: test    edx, edx
0x72AFA3: jz      loc_72B561
0x72AFA9: cmp     [esp+1C4h+arg_18], 0
0x72AFB1: jz      loc_72B561
0x72AFB7: mov     edi, [esp+1C4h+arg_8]
0x72AFBE: lea     esi, [edi+edi*2]
0x72AFC1: add     esi, esi
0x72AFC3: add     esi, esi
0x72AFC5: lea     eax, [esi+ebx]
0x72AFC8: mov     [esp+1C4h+var_18C], eax
0x72AFCC: add     eax, esi
0x72AFCE: cmp     [esp+1C4h+arg_1C], 0Ch
0x72AFD6: mov     [esp+1C4h+var_1A4], eax
0x72AFDA: mov     eax, [esp+1C4h+arg_C]
0x72AFE1: jnz     short loc_72B01D
0x72AFE3: push    esi
0x72AFE4: push    0
0x72AFE6: push    eax
0x72AFE7: call    __memset
0x72AFEC: push    esi
0x72AFED: push    0
0x72AFEF: push    ebp
0x72AFF0: call    __memset
0x72AFF5: mov     ecx, [esp+1DCh+arg_14]
0x72AFFC: push    esi
0x72AFFD: push    0
0x72AFFF: push    ecx
0x72B000: call    __memset
0x72B005: mov     edx, [esp+1E8h+arg_18]
0x72B00C: push    esi
0x72B00D: push    0
0x72B00F: push    edx
0x72B010: call    __memset
0x72B015: add     esp, 30h
0x72B018: jmp     loc_72B0C8
0x72B01D: test    edi, edi
0x72B01F: mov     esi, [esp+1C4h+arg_18]
0x72B026: mov     ecx, ebp
0x72B028: jbe     loc_72B0C8
0x72B02E: mov     [esp+1C4h+var_1B4], edi
0x72B032: mov     edi, ds:0B3F9A8h
0x72B038: mov     [eax], edi
0x72B03A: mov     edi, ds:0B3F9ACh
0x72B040: mov     [eax+4], edi
0x72B043: mov     edi, ds:0B3F9B0h
0x72B049: mov     [eax+8], edi
0x72B04C: mov     edi, ds:0B3F9A8h
0x72B052: mov     [ecx], edi
0x72B054: mov     edi, ds:0B3F9ACh
0x72B05A: mov     [ecx+4], edi
0x72B05D: mov     edi, ds:0B3F9B0h
0x72B063: add     eax, [esp+1C4h+arg_1C]
0x72B06A: mov     [ecx+8], edi
0x72B06D: mov     edi, ds:0B3F9A8h
0x72B073: add     ecx, [esp+1C4h+arg_1C]
0x72B07A: mov     [edx], edi
0x72B07C: mov     edi, ds:0B3F9ACh
0x72B082: mov     [edx+4], edi
0x72B085: mov     edi, ds:0B3F9B0h
0x72B08B: mov     [edx+8], edi
0x72B08E: mov     edi, ds:0B3F9A8h
0x72B094: add     edx, [esp+1C4h+arg_1C]
0x72B09B: mov     [esi], edi
0x72B09D: mov     edi, ds:0B3F9ACh
0x72B0A3: mov     [esi+4], edi
0x72B0A6: mov     edi, ds:0B3F9B0h
0x72B0AC: mov     [esi+8], edi
0x72B0AF: add     esi, [esp+1C4h+arg_1C]
0x72B0B6: sub     [esp+1C4h+var_1B4], 1
0x72B0BB: jnz     loc_72B032
0x72B0C1: mov     edi, [esp+1C4h+arg_8]
0x72B0C8: cmp     [esp+1C4h+var_19C], 0
0x72B0CD: mov     [esp+1C4h+var_1B0], 0
0x72B0D5: jbe     loc_72B524
0x72B0DB: mov     ecx, [esp+1C4h+var_1A8]
0x72B0DF: add     ecx, 44h ; 'D'
0x72B0E2: mov     [esp+1C4h+var_1AC], ecx
0x72B0E6: jmp     short loc_72B0F4
0x72B0E8: jmp     short loc_72B0F0
0x72B0EA: align 10h
0x72B0F0: mov     ecx, [esp+1C4h+var_1AC]
0x72B0F4: movzx   eax, word ptr [ecx+4]
0x72B0F8: mov     edx, [esp+1C4h+var_17C]
0x72B0FC: mov     [esp+1C4h+var_1A8], eax
0x72B100: mov     eax, [edx+14h]
0x72B103: mov     edx, [esp+1C4h+var_1B0]
0x72B107: mov     eax, [eax+edx*4]
0x72B10A: add     ecx, 0FFFFFFBCh
0x72B10D: push    ecx
0x72B10E: lea     ecx, [esp+1C8h+var_68]
0x72B115: push    ecx
0x72B116: add     eax, 64h ; 'd'
0x72B119: push    eax
0x72B11A: lea     edx, [esp+1D0h+var_34]
0x72B121: push    edx
0x72B122: lea     ecx, [esp+1D4h+var_D0]
0x72B129: call    sub_53D7A0
0x72B12E: mov     ecx, eax
0x72B130: call    sub_53D7A0
0x72B135: mov     esi, eax
0x72B137: mov     eax, [esp+1C4h+var_1AC]
0x72B13B: mov     ecx, 0Dh
0x72B140: lea     edi, [esp+1C4h+var_160]
0x72B144: rep movsd
0x72B146: fld     [esp+1C4h+var_130]
0x72B14D: mov     esi, [eax]
0x72B14F: push    ecx
0x72B150: lea     ecx, [esp+1C8h+var_12C]
0x72B157: mov     [esp+1C8h+var_F8], esi
0x72B15E: fstp    [esp+1C8h+var_1C8]; float
0x72B161: push    ecx; int
0x72B162: lea     ecx, [esp+1CCh+var_160]
0x72B166: call    sub_710190
0x72B16B: xor     edx, edx
0x72B16D: cmp     [esp+1C4h+var_1A8], edx
0x72B171: jbe     loc_72B503
0x72B177: jmp     short loc_72B187
0x72B179: align 10h
0x72B180: mov     esi, [esp+1C4h+var_F8]
0x72B187: movzx   eax, word ptr [esi+edx*8]
0x72B18B: fld     dword ptr [esi+edx*8+4]
0x72B18F: fstp    [esp+1C4h+var_1A0]
0x72B193: mov     esi, [esp+1C4h+arg_0]
0x72B19A: fld     [esp+1C4h+var_128]
0x72B1A1: movzx   eax, ax
0x72B1A4: mov     ecx, eax
0x72B1A6: imul    ecx, [esp+1C4h+arg_1C]
0x72B1AE: lea     eax, [eax+eax*2]
0x72B1B1: add     eax, eax
0x72B1B3: add     eax, eax
0x72B1B5: lea     edi, [eax+esi+8]
0x72B1B9: mov     [esp+1C4h+var_1B4], edi
0x72B1BD: fmul    dword ptr [eax+esi+4]
0x72B1C1: fld     [esp+1C4h+var_12C]
0x72B1C8: fmul    dword ptr [eax+esi]
0x72B1CB: faddp   st(1), st
0x72B1CD: fld     [esp+1C4h+var_124]
0x72B1D4: fmul    dword ptr [edi]
0x72B1D6: faddp   st(1), st
0x72B1D8: fadd    [esp+1C4h+var_13C]
0x72B1DF: fstp    [esp+1C4h+var_F4]
0x72B1E6: fld     [esp+1C4h+var_11C]
0x72B1ED: fmul    dword ptr [eax+esi+4]
0x72B1F1: fld     [esp+1C4h+var_120]
0x72B1F8: fmul    dword ptr [eax+esi]
0x72B1FB: faddp   st(1), st
0x72B1FD: fld     [esp+1C4h+var_118]
0x72B204: fmul    dword ptr [edi]
0x72B206: faddp   st(1), st
0x72B208: fadd    [esp+1C4h+var_138]
0x72B20F: fstp    [esp+1C4h+var_F0]
0x72B216: fld     [esp+1C4h+var_110]
0x72B21D: fmul    dword ptr [eax+esi+4]
0x72B221: fld     [esp+1C4h+var_114]
0x72B228: fmul    dword ptr [eax+esi]
0x72B22B: mov     esi, edi
0x72B22D: faddp   st(1), st
0x72B22F: fld     [esp+1C4h+var_10C]
0x72B236: fmul    dword ptr [esi]
0x72B238: mov     esi, [esp+1C4h+var_18C]
0x72B23C: lea     edi, [esi+eax+8]
0x72B240: mov     [esp+1C4h+var_1B4], edi
0x72B244: faddp   st(1), st
0x72B246: fadd    [esp+1C4h+var_134]
0x72B24D: fstp    [esp+1C4h+var_EC]
0x72B254: fld     [esp+1C4h+var_160]
0x72B258: fld     st
0x72B25A: fmul    dword ptr [eax+ebx]
0x72B25D: fld     [esp+1C4h+var_15C]
0x72B261: fld     st
0x72B263: fmul    dword ptr [eax+ebx+4]
0x72B267: faddp   st(2), st
0x72B269: fld     [esp+1C4h+var_158]
0x72B26D: fld     st
0x72B26F: fmul    dword ptr [eax+ebx+8]
0x72B273: faddp   st(3), st
0x72B275: fxch    st(2)
0x72B277: fstp    [esp+1C4h+var_DC]
0x72B27E: fld     [esp+1C4h+var_154]
0x72B282: fld     st
0x72B284: fmul    dword ptr [eax+ebx]
0x72B287: fld     [esp+1C4h+var_150]
0x72B28B: fld     st
0x72B28D: fmul    dword ptr [eax+ebx+4]
0x72B291: faddp   st(2), st
0x72B293: fld     [esp+1C4h+var_14C]
0x72B297: fmul    dword ptr [eax+ebx+8]
0x72B29B: faddp   st(2), st
0x72B29D: fxch    st(1)
0x72B29F: fstp    [esp+1C4h+var_D8]
0x72B2A6: fld     [esp+1C4h+var_148]
0x72B2AA: fmul    dword ptr [eax+ebx]
0x72B2AD: fld     [esp+1C4h+var_144]
0x72B2B4: fmul    dword ptr [eax+ebx+4]
0x72B2B8: faddp   st(1), st
0x72B2BA: fld     [esp+1C4h+var_140]
0x72B2C1: fmul    dword ptr [eax+ebx+8]
0x72B2C5: faddp   st(1), st
0x72B2C7: fstp    [esp+1C4h+var_D4]
0x72B2CE: fld     st(2)
0x72B2D0: fmul    dword ptr [esi+eax+4]
0x72B2D4: fld     st(5)
0x72B2D6: fmul    dword ptr [esi+eax]
0x72B2D9: faddp   st(1), st
0x72B2DB: fld     st(4)
0x72B2DD: fmul    dword ptr [edi]
0x72B2DF: faddp   st(1), st
0x72B2E1: fstp    [esp+1C4h+var_16C]
0x72B2E5: fld     st
0x72B2E7: fmul    dword ptr [esi+eax+4]
0x72B2EB: fld     st(2)
0x72B2ED: fmul    dword ptr [esi+eax]
0x72B2F0: faddp   st(1), st
0x72B2F2: fld     [esp+1C4h+var_14C]
0x72B2F6: fmul    dword ptr [edi]
0x72B2F8: faddp   st(1), st
0x72B2FA: fstp    [esp+1C4h+var_168]
0x72B2FE: fld     [esp+1C4h+var_144]
0x72B305: fmul    dword ptr [esi+eax+4]
0x72B309: fld     [esp+1C4h+var_148]
0x72B30D: fmul    dword ptr [esi+eax]
0x72B310: mov     esi, edi
0x72B312: faddp   st(1), st
0x72B314: fld     [esp+1C4h+var_140]
0x72B31B: fmul    dword ptr [esi]
0x72B31D: mov     esi, [esp+1C4h+var_1A4]
0x72B321: lea     edi, [esi+eax+4]
0x72B325: mov     [esp+1C4h+var_1B4], edi
0x72B329: faddp   st(1), st
0x72B32B: lea     edi, [esi+eax+8]
0x72B32F: mov     [esp+1C4h+var_108], edi
0x72B336: mov     edi, [esp+1C4h+var_1B4]
0x72B33A: fstp    [esp+1C4h+var_164]
0x72B33E: fld     dword ptr [esi+eax]
0x72B341: fmulp   st(5), st
0x72B343: fld     dword ptr [edi]
0x72B345: mov     edi, [esp+1C4h+var_108]
0x72B34C: fmulp   st(3), st
0x72B34E: fxch    st(4)
0x72B350: faddp   st(2), st
0x72B352: fld     dword ptr [edi]
0x72B354: mov     edi, [esp+1C4h+var_1B4]
0x72B358: fmulp   st(3), st
0x72B35A: fxch    st(1)
0x72B35C: faddp   st(2), st
0x72B35E: fxch    st(1)
0x72B360: fstp    [esp+1C4h+var_178]
0x72B364: fmul    dword ptr [esi+eax]
0x72B367: fld     dword ptr [edi]
0x72B369: mov     edi, [esp+1C4h+var_108]
0x72B370: fmulp   st(2), st
0x72B372: faddp   st(1), st
0x72B374: fld     [esp+1C4h+var_14C]
0x72B378: fmul    dword ptr [edi]
0x72B37A: faddp   st(1), st
0x72B37C: fstp    [esp+1C4h+var_174]
0x72B380: fld     [esp+1C4h+var_148]
0x72B384: fmul    dword ptr [esi+eax]
0x72B387: mov     eax, [esp+1C4h+var_1B4]
0x72B38B: fld     [esp+1C4h+var_144]
0x72B392: fmul    dword ptr [eax]
0x72B394: mov     eax, [esp+1C4h+arg_C]
0x72B39B: faddp   st(1), st
0x72B39D: fld     [esp+1C4h+var_140]
0x72B3A4: fmul    dword ptr [edi]
0x72B3A6: faddp   st(1), st
0x72B3A8: fstp    [esp+1C4h+var_170]
0x72B3AC: fld     [esp+1C4h+var_F4]
0x72B3B3: fld     [esp+1C4h+var_1A0]
0x72B3B7: fld     st
0x72B3B9: fmulp   st(2), st
0x72B3BB: fxch    st(1)
0x72B3BD: fstp    [esp+1C4h+var_104]
0x72B3C4: fld     [esp+1C4h+var_F0]
0x72B3CB: fmul    st, st(1)
0x72B3CD: fstp    [esp+1C4h+var_100]
0x72B3D4: fld     [esp+1C4h+var_EC]
0x72B3DB: fmul    st, st(1)
0x72B3DD: fstp    [esp+1C4h+var_FC]
0x72B3E4: fld     [esp+1C4h+var_104]
0x72B3EB: fadd    dword ptr [ecx+eax]
0x72B3EE: fstp    dword ptr [ecx+eax]
0x72B3F1: add     edx, 1
0x72B3F4: cmp     edx, [esp+1C4h+var_1A8]
0x72B3F8: fld     [esp+1C4h+var_100]
0x72B3FF: fadd    dword ptr [ecx+eax+4]
0x72B403: fstp    dword ptr [ecx+eax+4]
0x72B407: lea     eax, [ecx+eax+8]
0x72B40B: fld     dword ptr [eax]
0x72B40D: fadd    [esp+1C4h+var_FC]
0x72B414: fstp    dword ptr [eax]
0x72B416: mov     eax, [esp+1C4h+arg_14]
0x72B41D: fld     [esp+1C4h+var_DC]
0x72B424: fmul    st, st(1)
0x72B426: fstp    [esp+1C4h+var_E8]
0x72B42D: fld     [esp+1C4h+var_D8]
0x72B434: fmul    st, st(1)
0x72B436: fstp    [esp+1C4h+var_E4]
0x72B43D: fld     [esp+1C4h+var_D4]
0x72B444: fmul    st, st(1)
0x72B446: fstp    [esp+1C4h+var_E0]
0x72B44D: fld     [esp+1C4h+var_E8]
0x72B454: fadd    dword ptr [ecx+ebp]
0x72B457: fstp    dword ptr [ecx+ebp]
0x72B45A: fld     [esp+1C4h+var_E4]
0x72B461: fadd    dword ptr [ecx+ebp+4]
0x72B465: fstp    dword ptr [ecx+ebp+4]
0x72B469: fld     [esp+1C4h+var_E0]
0x72B470: fadd    dword ptr [ecx+ebp+8]
0x72B474: fstp    dword ptr [ecx+ebp+8]
0x72B478: fld     [esp+1C4h+var_16C]
0x72B47C: fmul    st, st(1)
0x72B47E: fstp    [esp+1C4h+var_188]
0x72B482: fld     [esp+1C4h+var_168]
0x72B486: fmul    st, st(1)
0x72B488: fstp    [esp+1C4h+var_184]
0x72B48C: fld     [esp+1C4h+var_164]
0x72B490: fmul    st, st(1)
0x72B492: fstp    [esp+1C4h+var_180]
0x72B496: fld     dword ptr [ecx+eax]
0x72B499: fadd    [esp+1C4h+var_188]
0x72B49D: fstp    dword ptr [ecx+eax]
0x72B4A0: fld     [esp+1C4h+var_184]
0x72B4A4: fadd    dword ptr [ecx+eax+4]
0x72B4A8: fstp    dword ptr [ecx+eax+4]
0x72B4AC: lea     eax, [ecx+eax+8]
0x72B4B0: fld     [esp+1C4h+var_180]
0x72B4B4: fadd    dword ptr [eax]
0x72B4B6: fstp    dword ptr [eax]
0x72B4B8: mov     eax, [esp+1C4h+arg_18]
0x72B4BF: fld     [esp+1C4h+var_178]
0x72B4C3: fmul    st, st(1)
0x72B4C5: fstp    [esp+1C4h+var_198]
0x72B4C9: fld     [esp+1C4h+var_174]
0x72B4CD: fmul    st, st(1)
0x72B4CF: fstp    [esp+1C4h+var_194]
0x72B4D3: fmul    [esp+1C4h+var_170]
0x72B4D7: fstp    [esp+1C4h+var_190]
0x72B4DB: fld     dword ptr [ecx+eax]
0x72B4DE: fadd    [esp+1C4h+var_198]
0x72B4E2: fstp    dword ptr [ecx+eax]
0x72B4E5: fld     [esp+1C4h+var_194]
0x72B4E9: fadd    dword ptr [ecx+eax+4]
0x72B4ED: fstp    dword ptr [ecx+eax+4]
0x72B4F1: lea     ecx, [ecx+eax+8]
0x72B4F5: fld     [esp+1C4h+var_190]
0x72B4F9: fadd    dword ptr [ecx]
0x72B4FB: fstp    dword ptr [ecx]
0x72B4FD: jb      loc_72B180
0x72B503: mov     eax, [esp+1C4h+var_1B0]
0x72B507: add     [esp+1C4h+var_1AC], 4Ch ; 'L'
0x72B50C: add     eax, 1
0x72B50F: cmp     eax, [esp+1C4h+var_19C]
0x72B513: mov     [esp+1C4h+var_1B0], eax
0x72B517: jb      loc_72B0F0
0x72B51D: mov     edi, [esp+1C4h+arg_8]
0x72B524: mov     esi, [esp+1C4h+arg_1C]
0x72B52B: push    esi
0x72B52C: push    edi
0x72B52D: push    ebp
0x72B52E: call    sub_725890
0x72B533: mov     ecx, [esp+1D0h+arg_14]
0x72B53A: push    esi
0x72B53B: push    edi
0x72B53C: push    ecx
0x72B53D: call    sub_725890
0x72B542: mov     edx, [esp+1DCh+arg_18]
0x72B549: push    esi
0x72B54A: push    edi
0x72B54B: push    edx
0x72B54C: call    sub_725890
0x72B551: add     esp, 24h
0x72B554: pop     edi
0x72B555: pop     esi
0x72B556: pop     ebp
0x72B557: pop     ebx
0x72B558: add     esp, 1B4h
0x72B55E: retn    20h ; ' '
0x72B561: mov     edi, [esp+1C4h+arg_1C]
0x72B568: cmp     edi, 0Ch
0x72B56B: mov     eax, [esp+1C4h+arg_C]
0x72B572: jnz     short loc_72B599
0x72B574: mov     esi, [esp+1C4h+arg_8]
0x72B57B: lea     esi, [esi+esi*2]
0x72B57E: add     esi, esi
0x72B580: add     esi, esi
0x72B582: push    esi
0x72B583: push    0
0x72B585: push    eax
0x72B586: call    __memset
0x72B58B: push    esi
0x72B58C: push    0
0x72B58E: push    ebp
0x72B58F: call    __memset
0x72B594: add     esp, 18h
0x72B597: jmp     short loc_72B5ED
0x72B599: cmp     [esp+1C4h+arg_8], 0
0x72B5A1: mov     ecx, ebp
0x72B5A3: jbe     short loc_72B5ED
0x72B5A5: mov     edx, [esp+1C4h+arg_8]
0x72B5AC: lea     esp, [esp+0]
0x72B5B0: mov     esi, ds:0B3F9A8h
0x72B5B6: mov     [eax], esi
0x72B5B8: mov     esi, ds:0B3F9ACh
0x72B5BE: mov     [eax+4], esi
0x72B5C1: mov     esi, ds:0B3F9B0h
0x72B5C7: mov     [eax+8], esi
0x72B5CA: mov     esi, ds:0B3F9A8h
0x72B5D0: mov     [ecx], esi
0x72B5D2: mov     esi, ds:0B3F9ACh
0x72B5D8: mov     [ecx+4], esi
0x72B5DB: mov     esi, ds:0B3F9B0h
0x72B5E1: mov     [ecx+8], esi
0x72B5E4: add     eax, edi
0x72B5E6: add     ecx, edi
0x72B5E8: sub     edx, 1
0x72B5EB: jnz     short loc_72B5B0
0x72B5ED: cmp     [esp+1C4h+var_19C], 0
0x72B5F2: mov     [esp+1C4h+var_1B0], 0
0x72B5FA: jbe     loc_72B870
0x72B600: mov     ecx, [esp+1C4h+var_1A8]
0x72B604: add     ecx, 44h ; 'D'
0x72B607: mov     [esp+1C4h+var_1AC], ecx
0x72B60B: jmp     short loc_72B614
0x72B60D: align 10h
0x72B610: mov     ecx, [esp+1C4h+var_1AC]
0x72B614: movzx   edx, word ptr [ecx+4]
0x72B618: mov     eax, [esp+1C4h+var_17C]
0x72B61C: mov     [esp+1C4h+var_1A8], edx
0x72B620: mov     edx, [eax+14h]
0x72B623: mov     eax, [esp+1C4h+var_1B0]
0x72B627: mov     eax, [edx+eax*4]
0x72B62A: add     ecx, 0FFFFFFBCh
0x72B62D: push    ecx
0x72B62E: lea     ecx, [esp+1C8h+var_34]
0x72B635: push    ecx
0x72B636: add     eax, 64h ; 'd'
0x72B639: push    eax
0x72B63A: lea     edx, [esp+1D0h+var_68]
0x72B641: push    edx
0x72B642: lea     ecx, [esp+1D4h+var_D0]
0x72B649: call    sub_53D7A0
0x72B64E: mov     ecx, eax
0x72B650: call    sub_53D7A0
0x72B655: mov     esi, eax
0x72B657: mov     eax, [esp+1C4h+var_1AC]
0x72B65B: mov     ecx, 0Dh
0x72B660: lea     edi, [esp+1C4h+var_160]
0x72B664: rep movsd
0x72B666: fld     [esp+1C4h+var_130]
0x72B66D: mov     edi, [eax]
0x72B66F: push    ecx
0x72B670: lea     ecx, [esp+1C8h+var_12C]
0x72B677: mov     [esp+1C8h+var_1A0], edi
0x72B67B: fstp    [esp+1C8h+var_1C8]; float
0x72B67E: push    ecx; int
0x72B67F: lea     ecx, [esp+1CCh+var_160]
0x72B683: call    sub_710190
0x72B688: xor     esi, esi
0x72B68A: cmp     [esp+1C4h+var_1A8], esi
0x72B68E: jbe     loc_72B84F
0x72B694: jmp     short loc_72B6A4
0x72B696: jmp     short loc_72B6A0
0x72B698: align 10h
0x72B6A0: mov     edi, [esp+1C4h+var_1A0]
0x72B6A4: movzx   eax, word ptr [edi+esi*8]
0x72B6A8: fld     dword ptr [edi+esi*8+4]
0x72B6AC: fstp    [esp+1C4h+var_1A4]
0x72B6B0: mov     edx, [esp+1C4h+arg_0]
0x72B6B7: fld     [esp+1C4h+var_128]
0x72B6BE: movzx   eax, ax
0x72B6C1: mov     ecx, eax
0x72B6C3: imul    ecx, [esp+1C4h+arg_1C]
0x72B6CB: lea     eax, [eax+eax*2]
0x72B6CE: add     eax, eax
0x72B6D0: add     eax, eax
0x72B6D2: lea     edi, [eax+edx+8]
0x72B6D6: fmul    dword ptr [eax+edx+4]
0x72B6DA: fld     [esp+1C4h+var_12C]
0x72B6E1: fmul    dword ptr [eax+edx]
0x72B6E4: faddp   st(1), st
0x72B6E6: fld     [esp+1C4h+var_124]
0x72B6ED: fmul    dword ptr [edi]
0x72B6EF: faddp   st(1), st
0x72B6F1: fadd    [esp+1C4h+var_13C]
0x72B6F8: fstp    [esp+1C4h+var_198]
0x72B6FC: fld     [esp+1C4h+var_11C]
0x72B703: fmul    dword ptr [eax+edx+4]
0x72B707: fld     [esp+1C4h+var_120]
0x72B70E: fmul    dword ptr [eax+edx]
0x72B711: faddp   st(1), st
0x72B713: fld     [esp+1C4h+var_118]
0x72B71A: fmul    dword ptr [edi]
0x72B71C: faddp   st(1), st
0x72B71E: fadd    [esp+1C4h+var_138]
0x72B725: fstp    [esp+1C4h+var_194]
0x72B729: fld     [esp+1C4h+var_110]
0x72B730: fmul    dword ptr [eax+edx+4]
0x72B734: fld     [esp+1C4h+var_114]
0x72B73B: fmul    dword ptr [eax+edx]
0x72B73E: lea     edx, [eax+ebx+4]
0x72B742: faddp   st(1), st
0x72B744: fld     [esp+1C4h+var_10C]
0x72B74B: fmul    dword ptr [edi]
0x72B74D: lea     edi, [eax+ebx+8]
0x72B751: faddp   st(1), st
0x72B753: fadd    [esp+1C4h+var_134]
0x72B75A: fstp    [esp+1C4h+var_190]
0x72B75E: fld     [esp+1C4h+var_160]
0x72B762: fmul    dword ptr [eax+ebx]
0x72B765: fld     [esp+1C4h+var_15C]
0x72B769: fmul    dword ptr [edx]
0x72B76B: faddp   st(1), st
0x72B76D: fld     [esp+1C4h+var_158]
0x72B771: fmul    dword ptr [edi]
0x72B773: faddp   st(1), st
0x72B775: fstp    [esp+1C4h+var_188]
0x72B779: fld     [esp+1C4h+var_154]
0x72B77D: fmul    dword ptr [eax+ebx]
0x72B780: fld     [esp+1C4h+var_150]
0x72B784: fmul    dword ptr [edx]
0x72B786: faddp   st(1), st
0x72B788: fld     [esp+1C4h+var_14C]
0x72B78C: fmul    dword ptr [edi]
0x72B78E: faddp   st(1), st
0x72B790: fstp    [esp+1C4h+var_184]
0x72B794: fld     [esp+1C4h+var_148]
0x72B798: fmul    dword ptr [eax+ebx]
0x72B79B: fld     [esp+1C4h+var_144]
0x72B7A2: fmul    dword ptr [edx]
0x72B7A4: faddp   st(1), st
0x72B7A6: fld     [esp+1C4h+var_140]
0x72B7AD: fmul    dword ptr [edi]
0x72B7AF: faddp   st(1), st
0x72B7B1: fstp    [esp+1C4h+var_180]
0x72B7B5: fld     [esp+1C4h+var_198]
0x72B7B9: fld     [esp+1C4h+var_1A4]
0x72B7BD: fld     st
0x72B7BF: fmulp   st(2), st
0x72B7C1: fxch    st(1)
0x72B7C3: fstp    [esp+1C4h+var_178]
0x72B7C7: fld     [esp+1C4h+var_194]
0x72B7CB: fmul    st, st(1)
0x72B7CD: fstp    [esp+1C4h+var_174]
0x72B7D1: fld     [esp+1C4h+var_190]
0x72B7D5: fmul    st, st(1)
0x72B7D7: mov     eax, [esp+1C4h+arg_C]
0x72B7DE: fstp    [esp+1C4h+var_170]
0x72B7E2: fld     [esp+1C4h+var_178]
0x72B7E6: add     esi, 1
0x72B7E9: cmp     esi, [esp+1C4h+var_1A8]
0x72B7ED: fadd    dword ptr [ecx+eax]
0x72B7F0: fstp    dword ptr [ecx+eax]
0x72B7F3: fld     [esp+1C4h+var_174]
0x72B7F7: fadd    dword ptr [ecx+eax+4]
0x72B7FB: fstp    dword ptr [ecx+eax+4]
0x72B7FF: lea     eax, [ecx+eax+8]
0x72B803: fld     [esp+1C4h+var_170]
0x72B807: fadd    dword ptr [eax]
0x72B809: fstp    dword ptr [eax]
0x72B80B: fld     [esp+1C4h+var_188]
0x72B80F: fmul    st, st(1)
0x72B811: fstp    [esp+1C4h+var_16C]
0x72B815: fld     [esp+1C4h+var_184]
0x72B819: fmul    st, st(1)
0x72B81B: fstp    [esp+1C4h+var_168]
0x72B81F: fmul    [esp+1C4h+var_180]
0x72B823: fstp    [esp+1C4h+var_164]
0x72B827: fld     [esp+1C4h+var_16C]
0x72B82B: fadd    dword ptr [ecx+ebp]
0x72B82E: fstp    dword ptr [ecx+ebp]
0x72B831: fld     dword ptr [ecx+ebp+4]
0x72B835: fadd    [esp+1C4h+var_168]
0x72B839: fstp    dword ptr [ecx+ebp+4]
0x72B83D: lea     ecx, [ecx+ebp+8]
0x72B841: fld     [esp+1C4h+var_164]
0x72B845: fadd    dword ptr [ecx]
0x72B847: fstp    dword ptr [ecx]
0x72B849: jb      loc_72B6A0
0x72B84F: mov     eax, [esp+1C4h+var_1B0]
0x72B853: add     [esp+1C4h+var_1AC], 4Ch ; 'L'
0x72B858: add     eax, 1
0x72B85B: cmp     eax, [esp+1C4h+var_19C]
0x72B85F: mov     [esp+1C4h+var_1B0], eax
0x72B863: jb      loc_72B610
0x72B869: mov     edi, [esp+1C4h+arg_1C]
0x72B870: mov     edx, [esp+1C4h+arg_8]
0x72B877: push    edi
0x72B878: push    edx
0x72B879: push    ebp
0x72B87A: call    sub_725890
0x72B87F: add     esp, 0Ch
0x72B882: pop     edi
0x72B883: pop     esi
0x72B884: pop     ebp
0x72B885: pop     ebx
0x72B886: add     esp, 1B4h
0x72B88C: retn    20h ; ' '
0x72B88F: mov     edx, [esp+1C4h+arg_1C]
0x72B896: cmp     edx, 0Ch
0x72B899: jnz     short loc_72B8BE
0x72B89B: mov     eax, [esp+1C4h+arg_8]
0x72B8A2: mov     ecx, [esp+1C4h+arg_C]
0x72B8A9: lea     eax, [eax+eax*2]
0x72B8AC: add     eax, eax
0x72B8AE: add     eax, eax
0x72B8B0: push    eax
0x72B8B1: push    0
0x72B8B3: push    ecx
0x72B8B4: call    __memset
0x72B8B9: add     esp, 0Ch
0x72B8BC: jmp     short loc_72B8F1
0x72B8BE: mov     ecx, [esp+1C4h+arg_8]
0x72B8C5: test    ecx, ecx
0x72B8C7: mov     eax, [esp+1C4h+arg_C]
0x72B8CE: jbe     short loc_72B8F1
0x72B8D0: mov     ebx, ds:0B3F9A8h
0x72B8D6: mov     [eax], ebx
0x72B8D8: mov     ebx, ds:0B3F9ACh
0x72B8DE: mov     [eax+4], ebx
0x72B8E1: mov     ebx, ds:0B3F9B0h
0x72B8E7: mov     [eax+8], ebx
0x72B8EA: add     eax, edx
0x72B8EC: sub     ecx, 1
0x72B8EF: jnz     short loc_72B8D0
0x72B8F1: test    esi, esi
0x72B8F3: mov     [esp+1C4h+var_1B0], 0
0x72B8FB: jbe     loc_72BA8E
0x72B901: lea     ebp, [edi+44h]
0x72B904: mov     edx, [esp+1C4h+var_17C]
0x72B908: mov     eax, [edx+14h]
0x72B90B: mov     ecx, [esp+1C4h+var_1B0]
0x72B90F: mov     eax, [eax+ecx*4]
0x72B912: movzx   ebx, word ptr [ebp+4]
0x72B916: lea     edx, [ebp-44h]
0x72B919: push    edx
0x72B91A: lea     ecx, [esp+1C8h+var_34]
0x72B921: push    ecx
0x72B922: add     eax, 64h ; 'd'
0x72B925: push    eax
0x72B926: lea     edx, [esp+1D0h+var_68]
0x72B92D: push    edx
0x72B92E: lea     ecx, [esp+1D4h+var_D0]
0x72B935: call    sub_53D7A0
0x72B93A: mov     ecx, eax
0x72B93C: call    sub_53D7A0
0x72B941: mov     esi, eax
0x72B943: mov     ecx, 0Dh
0x72B948: lea     edi, [esp+1C4h+var_160]
0x72B94C: rep movsd
0x72B94E: fld     [esp+1C4h+var_130]
0x72B955: push    ecx
0x72B956: lea     eax, [esp+1C8h+var_12C]
0x72B95D: lea     ecx, [esp+1C8h+var_160]
0x72B961: fstp    [esp+1C8h+var_1C8]; float
0x72B964: push    eax; int
0x72B965: call    sub_710190
0x72B96A: mov     esi, [ebp+0]
0x72B96D: xor     edx, edx
0x72B96F: test    ebx, ebx
0x72B971: jbe     loc_72BA76
0x72B977: lea     ecx, [esp+1C4h+var_198]
0x72B97B: mov     [esp+1C4h+var_1A4], ecx
0x72B97F: nop
0x72B980: movzx   eax, word ptr [esi+edx*8]
0x72B984: fld     dword ptr [esi+edx*8+4]
0x72B988: fstp    [esp+1C4h+var_1A0]
0x72B98C: movzx   eax, ax
0x72B98F: fld     [esp+1C4h+var_128]
0x72B996: mov     ecx, eax
0x72B998: imul    ecx, [esp+1C4h+arg_1C]
0x72B9A0: add     ecx, [esp+1C4h+arg_C]
0x72B9A7: lea     eax, [eax+eax*2]
0x72B9AA: mov     [esp+1C4h+var_18C], ecx
0x72B9AE: mov     ecx, [esp+1C4h+arg_0]
0x72B9B5: lea     eax, [ecx+eax*4]
0x72B9B8: fmul    dword ptr [eax+4]
0x72B9BB: fld     [esp+1C4h+var_12C]
0x72B9C2: fmul    dword ptr [eax]
0x72B9C4: faddp   st(1), st
0x72B9C6: fld     [esp+1C4h+var_124]
0x72B9CD: fmul    dword ptr [eax+8]
0x72B9D0: faddp   st(1), st
0x72B9D2: fadd    [esp+1C4h+var_13C]
0x72B9D9: fstp    [esp+1C4h+var_198]
0x72B9DD: fld     [esp+1C4h+var_11C]
0x72B9E4: fmul    dword ptr [eax+4]
0x72B9E7: fld     [esp+1C4h+var_120]
0x72B9EE: fmul    dword ptr [eax]
0x72B9F0: faddp   st(1), st
0x72B9F2: fld     [esp+1C4h+var_118]
0x72B9F9: fmul    dword ptr [eax+8]
0x72B9FC: faddp   st(1), st
0x72B9FE: fadd    [esp+1C4h+var_138]
0x72BA05: fstp    [esp+1C4h+var_194]
0x72BA09: fld     [esp+1C4h+var_110]
0x72BA10: fmul    dword ptr [eax+4]
0x72BA13: fld     [esp+1C4h+var_114]
0x72BA1A: fmul    dword ptr [eax]
0x72BA1C: faddp   st(1), st
0x72BA1E: fld     [esp+1C4h+var_10C]
0x72BA25: fmul    dword ptr [eax+8]
0x72BA28: faddp   st(1), st
0x72BA2A: fadd    [esp+1C4h+var_134]
0x72BA31: fstp    [esp+1C4h+var_190]
0x72BA35: mov     eax, [esp+1C4h+var_18C]
0x72BA39: mov     ecx, [esp+1C4h+var_1A4]
0x72BA3D: fld     dword ptr [ecx]
0x72BA3F: fmul    [esp+1C4h+var_1A0]
0x72BA43: fld     dword ptr [ecx+4]
0x72BA46: fmul    [esp+1C4h+var_1A0]
0x72BA4A: fxch    st(1)
0x72BA4C: fadd    dword ptr [eax]
0x72BA4E: fld     dword ptr [ecx+8]
0x72BA51: fmul    [esp+1C4h+var_1A0]
0x72BA55: fxch    st(2)
0x72BA57: fadd    dword ptr [eax+4]
0x72BA5A: fxch    st(1)
0x72BA5C: fstp    dword ptr [eax]
0x72BA5E: fxch    st(1)
0x72BA60: fadd    dword ptr [eax+8]
0x72BA63: fxch    st(1)
0x72BA65: fstp    dword ptr [eax+4]
0x72BA68: fstp    dword ptr [eax+8]
0x72BA6B: add     edx, 1
0x72BA6E: cmp     edx, ebx
0x72BA70: jb      loc_72B980
0x72BA76: mov     eax, [esp+1C4h+var_1B0]
0x72BA7A: add     eax, 1
0x72BA7D: add     ebp, 4Ch ; 'L'
0x72BA80: cmp     eax, [esp+1C4h+var_19C]
0x72BA84: mov     [esp+1C4h+var_1B0], eax
0x72BA88: jb      loc_72B904
0x72BA8E: pop     edi
0x72BA8F: pop     esi
0x72BA90: pop     ebp
0x72BA91: pop     ebx
0x72BA92: add     esp, 1B4h
0x72BA98: retn    20h ; ' '
