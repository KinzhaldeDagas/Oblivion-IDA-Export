0x6CBEE0: sub     esp, 90h
0x6CBEE6: fld1
0x6CBEE8: mov     eax, ds:0B3F9A8h
0x6CBEED: mov     edx, ds:0B3F9B0h
0x6CBEF3: fst     [esp+90h+var_80]
0x6CBEF7: push    ebx
0x6CBEF8: fstp    [esp+94h+var_84]
0x6CBEFC: fldz
0x6CBEFE: push    esi
0x6CBEFF: push    edi
0x6CBF00: sub     esp, 10h
0x6CBF03: fst     dword ptr [esp+0ACh+X+4]; float
0x6CBF07: mov     edi, ecx
0x6CBF09: fst     dword ptr [esp+0ACh+X]; float
0x6CBF0D: mov     ecx, ds:0B3F9ACh
0x6CBF13: fst     [esp+0ACh+var_A8]; float
0x6CBF17: mov     dword ptr [esp+0ACh+var_78+4], ecx
0x6CBF1B: fstp    [esp+0ACh+var_AC]; float
0x6CBF1E: lea     ecx, [esp+0ACh+var_5C]
0x6CBF22: mov     dword ptr [esp+0ACh+var_78], eax
0x6CBF26: mov     [esp+0ACh+var_70], edx
0x6CBF2A: call    sub_714C40
0x6CBF2F: fldz
0x6CBF31: xor     bl, bl
0x6CBF33: fst     [esp+9Ch+var_7C]
0x6CBF37: cmp     [edi+0Dh], bl
0x6CBF3A: mov     [esp+9Ch+var_8E], 0
0x6CBF3F: mov     [esp+9Ch+var_8D], 0
0x6CBF44: mov     [esp+9Ch+var_8F], 0
0x6CBF49: mov     [esp+9Ch+var_85], 1
0x6CBF4E: jbe     loc_6CC239
0x6CBF54: push    ebp
0x6CBF55: mov     ebp, [esp+0A0h+arg_4]
0x6CBF5C: lea     esp, [esp+0]
0x6CBF60: mov     ecx, [edi+14h]
0x6CBF63: movzx   eax, bl
0x6CBF66: lea     eax, [eax+eax*2]
0x6CBF69: lea     esi, [ecx+eax*8]
0x6CBF6C: mov     ecx, [esi]
0x6CBF6E: test    ecx, ecx
0x6CBF70: jz      loc_6CC228
0x6CBF76: fcom    dword ptr [esi+8]
0x6CBF79: fnstsw  ax
0x6CBF7B: test    ah, 5
0x6CBF7E: jp      loc_6CC228
0x6CBF84: cmp     byte ptr ds:0B3CBD0h, 0
0x6CBF8B: fld     [esp+0A0h+arg_0]
0x6CBF92: fstp    [esp+0A0h+var_8C]
0x6CBF96: jz      short loc_6CBFAB
0x6CBF98: cmp     byte ptr [edi+0Eh], 1
0x6CBF9C: jnz     short loc_6CBFAB
0x6CBF9E: test    byte ptr [edi+0Ch], 1
0x6CBFA2: fstp    st
0x6CBFA4: jz      short loc_6CBFC2
0x6CBFA6: fld     dword ptr [edi+20h]
0x6CBFA9: jmp     short loc_6CBFBE
0x6CBFAB: fcomp   dword ptr [esi+8]
0x6CBFAE: fnstsw  ax
0x6CBFB0: test    ah, 44h
0x6CBFB3: jnp     short loc_6CBFD9
0x6CBFB5: test    byte ptr [edi+0Ch], 1
0x6CBFB9: jz      short loc_6CBFC2
0x6CBFBB: fld     dword ptr [esi+14h]
0x6CBFBE: fstp    [esp+0A0h+var_8C]
0x6CBFC2: fld     [esp+0A0h+var_8C]
0x6CBFC6: fld     st
0x6CBFC8: fld     dword ptr ds:0A79F00h
0x6CBFCE: fucompp
0x6CBFD0: fnstsw  ax
0x6CBFD2: test    ah, 44h
0x6CBFD5: jp      short loc_6CBFF4
0x6CBFD7: fstp    st
0x6CBFD9: fld     [esp+0A0h+var_80]
0x6CBFDD: fsub    dword ptr [esi+8]
0x6CBFE0: fstp    [esp+0A0h+var_80]
0x6CBFE4: fld     [esp+0A0h+var_84]
0x6CBFE8: fsub    dword ptr [esi+8]
0x6CBFEB: fstp    [esp+0A0h+var_84]
0x6CBFEF: jmp     loc_6CC22A
0x6CBFF4: mov     edx, ds:0B24260h
0x6CBFFA: fld     dword ptr ds:0A79E10h
0x6CC000: mov     eax, ds:0B24264h
0x6CC005: fstp    [esp+0A0h+var_30]
0x6CC009: mov     [esp+0A0h+var_4C], edx
0x6CC00D: mov     edx, ds:0B24268h
0x6CC013: mov     [esp+0A0h+var_44], edx
0x6CC017: mov     edx, ds:0B3CBA8h
0x6CC01D: mov     [esp+0A0h+var_3C], edx
0x6CC021: mov     edx, ds:0B3CBB0h
0x6CC027: mov     [esp+0A0h+var_48], eax
0x6CC02B: mov     eax, ds:0B3CBA4h
0x6CC030: mov     [esp+0A0h+var_34], edx
0x6CC034: mov     [esp+0A0h+var_40], eax
0x6CC038: mov     eax, ds:0B3CBACh
0x6CC03D: lea     edx, [esp+0A0h+var_4C]
0x6CC041: push    edx
0x6CC042: mov     [esp+0A4h+var_38], eax
0x6CC046: mov     eax, [ecx]
0x6CC048: mov     eax, [eax+4Ch]
0x6CC04B: push    ebp
0x6CC04C: push    ecx
0x6CC04D: fstp    [esp+0ACh+var_AC]
0x6CC050: call    eax
0x6CC052: test    al, al
0x6CC054: jz      short loc_6CBFD9
0x6CC056: fld     dword ptr ds:0A7DEB4h
0x6CC05C: fchs
0x6CC05E: fstp    [esp+0A0h+var_8C]
0x6CC062: fld     [esp+0A0h+var_4C]
0x6CC066: fld     st
0x6CC068: fld     [esp+0A0h+var_8C]
0x6CC06C: fld     st
0x6CC06E: fucomp  st(2)
0x6CC070: fnstsw  ax
0x6CC072: fstp    st(1)
0x6CC074: test    ah, 44h
0x6CC077: jnp     short loc_6CC0CF
0x6CC079: fld     dword ptr [esi+8]
0x6CC07C: mov     [esp+0A0h+var_8E], 1
0x6CC081: fstp    [esp+0A0h+var_8C]
0x6CC085: fld     [esp+0A0h+var_8C]
0x6CC089: fld     st
0x6CC08B: fmulp   st(3), st
0x6CC08D: fxch    st(2)
0x6CC08F: fstp    [esp+0A0h+var_2C]
0x6CC093: fld     [esp+0A0h+var_48]
0x6CC097: fmul    st, st(2)
0x6CC099: fstp    [esp+0A0h+var_28]
0x6CC09D: fld     [esp+0A0h+var_44]
0x6CC0A1: fmulp   st(2), st
0x6CC0A3: fxch    st(1)
0x6CC0A5: fstp    [esp+0A0h+var_24]
0x6CC0A9: fld     [esp+0A0h+var_2C]
0x6CC0AD: fadd    dword ptr [esp+0A0h+var_78]
0x6CC0B1: fstp    dword ptr [esp+0A0h+var_78]
0x6CC0B5: fld     dword ptr [esp+0A0h+var_78+4]
0x6CC0B9: fadd    [esp+0A0h+var_28]
0x6CC0BD: fstp    dword ptr [esp+0A0h+var_78+4]
0x6CC0C1: fld     [esp+0A0h+var_70]
0x6CC0C5: fadd    [esp+0A0h+var_24]
0x6CC0C9: fstp    [esp+0A0h+var_70]
0x6CC0CD: jmp     short loc_6CC0DC
0x6CC0CF: fstp    st(1)
0x6CC0D1: fld     [esp+0A0h+var_80]
0x6CC0D5: fsub    dword ptr [esi+8]
0x6CC0D8: fstp    [esp+0A0h+var_80]
0x6CC0DC: fld     [esp+0A0h+var_3C]
0x6CC0E0: fld     st
0x6CC0E2: fucomp  st(2)
0x6CC0E4: fnstsw  ax
0x6CC0E6: fstp    st(1)
0x6CC0E8: test    ah, 44h
0x6CC0EB: jnp     loc_6CC1EE
0x6CC0F1: cmp     [esp+0A0h+var_85], 0
0x6CC0F6: mov     ecx, [esp+0A0h+var_40]
0x6CC0FA: mov     edx, [esp+0A0h+var_3C]
0x6CC0FE: mov     eax, [esp+0A0h+var_38]
0x6CC102: mov     [esp+0A0h+var_6C], ecx
0x6CC106: mov     ecx, [esp+0A0h+var_34]
0x6CC10A: mov     [esp+0A0h+var_68], edx
0x6CC10E: mov     [esp+0A0h+var_64], eax
0x6CC112: mov     [esp+0A0h+var_60], ecx
0x6CC116: jnz     short loc_6CC17D
0x6CC118: fmul    [esp+0A0h+var_58]
0x6CC11C: fld     [esp+0A0h+var_40]
0x6CC120: fmul    [esp+0A0h+var_5C]
0x6CC124: faddp   st(1), st
0x6CC126: fld     [esp+0A0h+var_38]
0x6CC12A: fmul    [esp+0A0h+var_54]
0x6CC12E: faddp   st(1), st
0x6CC130: fld     [esp+0A0h+var_34]
0x6CC134: fmul    [esp+0A0h+var_50]
0x6CC138: faddp   st(1), st
0x6CC13A: fstp    [esp+0A0h+var_8C]
0x6CC13E: fld     [esp+0A0h+var_8C]
0x6CC142: fcomp   dword ptr ds:0A2FAA8h
0x6CC148: fnstsw  ax
0x6CC14A: test    ah, 5
0x6CC14D: jp      short loc_6CC184
0x6CC14F: lea     edx, [esp+0A0h+var_10]
0x6CC156: push    edx
0x6CC157: lea     ecx, [esp+0A4h+var_6C]
0x6CC15B: call    sub_714CC0
0x6CC160: mov     ecx, [eax]
0x6CC162: mov     [esp+0A0h+var_6C], ecx
0x6CC166: mov     edx, [eax+4]
0x6CC169: mov     [esp+0A0h+var_68], edx
0x6CC16D: mov     ecx, [eax+8]
0x6CC170: mov     [esp+0A0h+var_64], ecx
0x6CC174: mov     edx, [eax+0Ch]
0x6CC177: mov     [esp+0A0h+var_60], edx
0x6CC17B: jmp     short loc_6CC184
0x6CC17D: fstp    st
0x6CC17F: mov     [esp+0A0h+var_85], 0
0x6CC184: fld     dword ptr [esi+8]
0x6CC187: push    ecx
0x6CC188: lea     eax, [esp+0A4h+var_20]
0x6CC18F: fstp    dword ptr [esp+0A4h+X]; float
0x6CC192: push    eax; int
0x6CC193: lea     ecx, [esp+0A8h+var_6C]
0x6CC197: call    sub_72F930
0x6CC19C: mov     ecx, [eax]
0x6CC19E: mov     [esp+0A0h+var_6C], ecx
0x6CC1A2: fld     [esp+0A0h+var_6C]
0x6CC1A6: mov     edx, [eax+4]
0x6CC1A9: fadd    [esp+0A0h+var_5C]
0x6CC1AD: mov     [esp+0A0h+var_68], edx
0x6CC1B1: mov     ecx, [eax+8]
0x6CC1B4: mov     [esp+0A0h+var_64], ecx
0x6CC1B8: mov     edx, [eax+0Ch]
0x6CC1BB: fstp    [esp+0A0h+var_5C]
0x6CC1BF: fld     [esp+0A0h+var_58]
0x6CC1C3: mov     [esp+0A0h+var_60], edx
0x6CC1C7: fadd    [esp+0A0h+var_68]
0x6CC1CB: mov     [esp+0A0h+var_8D], 1
0x6CC1D0: fstp    [esp+0A0h+var_58]
0x6CC1D4: fld     [esp+0A0h+var_54]
0x6CC1D8: fadd    [esp+0A0h+var_64]
0x6CC1DC: fstp    [esp+0A0h+var_54]
0x6CC1E0: fld     [esp+0A0h+var_50]
0x6CC1E4: fadd    [esp+0A0h+var_60]
0x6CC1E8: fstp    [esp+0A0h+var_50]
0x6CC1EC: jmp     short loc_6CC1F0
0x6CC1EE: fstp    st
0x6CC1F0: fld     [esp+0A0h+var_30]
0x6CC1F4: fld     st
0x6CC1F6: fld     dword ptr ds:0A7DEB4h
0x6CC1FC: fchs
0x6CC1FE: fucompp
0x6CC200: fnstsw  ax
0x6CC202: test    ah, 44h
0x6CC205: jnp     short loc_6CC219
0x6CC207: fmul    dword ptr [esi+8]
0x6CC20A: mov     [esp+0A0h+var_8F], 1
0x6CC20F: fadd    [esp+0A0h+var_7C]
0x6CC213: fstp    [esp+0A0h+var_7C]
0x6CC217: jmp     short loc_6CC22A
0x6CC219: fstp    st
0x6CC21B: fld     [esp+0A0h+var_84]
0x6CC21F: fsub    dword ptr [esi+8]
0x6CC222: fstp    [esp+0A0h+var_84]
0x6CC226: jmp     short loc_6CC22A
0x6CC228: fstp    st
0x6CC22A: fldz
0x6CC22C: add     bl, 1
0x6CC22F: cmp     bl, [edi+0Dh]
0x6CC232: jb      loc_6CBF60
0x6CC238: pop     ebp
0x6CC239: cmp     [esp+9Ch+var_8E], 0
0x6CC23E: fld     dword ptr ds:0A7DEB4h
0x6CC244: mov     esi, [esp+9Ch+arg_8]
0x6CC24B: fchs
0x6CC24D: fstp    dword ptr [esi]
0x6CC24F: fld     dword ptr ds:0A7DEB4h
0x6CC255: fchs
0x6CC257: fstp    dword ptr [esi+10h]
0x6CC25A: fld     dword ptr ds:0A7DEB4h
0x6CC260: fchs
0x6CC262: fstp    dword ptr [esi+1Ch]
0x6CC265: jnz     short loc_6CC279
0x6CC267: cmp     [esp+9Ch+var_8D], 0
0x6CC26C: jnz     short loc_6CC279
0x6CC26E: cmp     [esp+9Ch+var_8F], 0
0x6CC273: jz      loc_6CC346
0x6CC279: fld     [esp+9Ch+var_80]
0x6CC27D: fucom   st(1)
0x6CC27F: fnstsw  ax
0x6CC281: fstp    st(1)
0x6CC283: test    ah, 44h
0x6CC286: jp      short loc_6CC28D
0x6CC288: mov     [esp+9Ch+var_8E], 0
0x6CC28D: fld     [esp+9Ch+var_84]
0x6CC291: fcomp   qword ptr ds:0A68618h
0x6CC297: fnstsw  ax
0x6CC299: test    ah, 5
0x6CC29C: jp      short loc_6CC2A3
0x6CC29E: mov     [esp+9Ch+var_8F], 0
0x6CC2A3: cmp     [esp+9Ch+var_8E], 0
0x6CC2A8: jz      short loc_6CC2E0
0x6CC2AA: fld1
0x6CC2AC: lea     eax, [esp+9Ch+var_78]
0x6CC2B0: fdivrp  st(1), st
0x6CC2B2: push    eax
0x6CC2B3: mov     ecx, esi
0x6CC2B5: fstp    [esp+0A0h+var_8C]
0x6CC2B9: fld     [esp+0A0h+var_8C]
0x6CC2BD: fld     st
0x6CC2BF: fmul    dword ptr [esp+0A0h+var_78]
0x6CC2C3: fstp    dword ptr [esp+0A0h+var_78]
0x6CC2C7: fld     dword ptr [esp+0A0h+var_78+4]
0x6CC2CB: fmul    st, st(1)
0x6CC2CD: fstp    dword ptr [esp+0A0h+var_78+4]
0x6CC2D1: fmul    [esp+0A0h+var_70]
0x6CC2D5: fstp    [esp+0A0h+var_70]
0x6CC2D9: call    sub_471390
0x6CC2DE: jmp     short loc_6CC2E2
0x6CC2E0: fstp    st
0x6CC2E2: cmp     [esp+9Ch+var_8D], 0
0x6CC2E7: jz      short loc_6CC2FE
0x6CC2E9: lea     ecx, [esp+9Ch+var_5C]
0x6CC2ED: call    sub_715340
0x6CC2F2: lea     ecx, [esp+9Ch+var_5C]
0x6CC2F6: push    ecx
0x6CC2F7: mov     ecx, esi
0x6CC2F9: call    sub_471430
0x6CC2FE: cmp     [esp+9Ch+var_8F], 0
0x6CC303: jz      short loc_6CC348
0x6CC305: fld     [esp+9Ch+var_7C]
0x6CC309: sub     esp, 8
0x6CC30C: fdiv    [esp+0A4h+var_84]
0x6CC310: fstp    [esp+0A4h+var_7C]
0x6CC314: fld     [esp+0A4h+var_7C]
0x6CC318: fstp    [esp+0A4h+X]; X
0x6CC31B: call    __isnan
0x6CC320: add     esp, 8
0x6CC323: test    eax, eax
0x6CC325: jnz     short loc_6CC348
0x6CC327: fld     [esp+9Ch+var_7C]
0x6CC32B: sub     esp, 8
0x6CC32E: fstp    [esp+0A4h+X]; X
0x6CC331: call    __finite
0x6CC336: add     esp, 8
0x6CC339: test    eax, eax
0x6CC33B: jz      short loc_6CC348
0x6CC33D: fld     [esp+9Ch+var_7C]
0x6CC341: fstp    dword ptr [esi+1Ch]
0x6CC344: jmp     short loc_6CC348
0x6CC346: fstp    st
0x6CC348: fld     dword ptr ds:0A7DEB4h
0x6CC34E: fchs
0x6CC350: fstp    [esp+9Ch+var_8C]
0x6CC354: fld     dword ptr [esi+1Ch]
0x6CC357: fld     [esp+9Ch+var_8C]
0x6CC35B: fld     st
0x6CC35D: fucomp  st(2)
0x6CC35F: fnstsw  ax
0x6CC361: fstp    st(1)
0x6CC363: test    ah, 44h
0x6CC366: jp      short loc_6CC38F
0x6CC368: fld     dword ptr [esi+10h]
0x6CC36B: fld     st(1)
0x6CC36D: fucompp
0x6CC36F: fnstsw  ax
0x6CC371: test    ah, 44h
0x6CC374: jp      short loc_6CC38F
0x6CC376: fld     dword ptr [esi]
0x6CC378: fucompp
0x6CC37A: fnstsw  ax
0x6CC37C: test    ah, 44h
0x6CC37F: jp      short loc_6CC391
0x6CC381: pop     edi
0x6CC382: pop     esi
0x6CC383: xor     al, al
0x6CC385: pop     ebx
0x6CC386: add     esp, 90h
0x6CC38C: retn    0Ch
0x6CC38F: fstp    st
0x6CC391: pop     edi
0x6CC392: pop     esi
0x6CC393: mov     al, 1
0x6CC395: pop     ebx
0x6CC396: add     esp, 90h
0x6CC39C: retn    0Ch
