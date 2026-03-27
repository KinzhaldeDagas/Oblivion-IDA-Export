0x499570: sub     esp, 10h
0x499573: cmp     byte ptr ds:0B07050h, 0
0x49957A: push    esi
0x49957B: mov     esi, ecx
0x49957D: jz      loc_499E0F
0x499583: cmp     byte ptr ds:0B42F3Eh, 0
0x49958A: jz      loc_499E0F
0x499590: push    edi
0x499591: call    sub_4994C0
0x499596: cmp     byte ptr ds:0B07060h, 0
0x49959D: mov     edi, eax
0x49959F: jnz     short loc_4995AA
0x4995A1: mov     byte ptr ds:0B45DC0h, 1
0x4995A8: jmp     short loc_4995BF
0x4995AA: mov     ecx, ds:0B35220h
0x4995B0: call    sub_4ED650
0x4995B5: test    al, al
0x4995B7: setz    al
0x4995BA: mov     ds:0B45DC0h, al
0x4995BF: cmp     byte ptr ds:0B3522Bh, 0
0x4995C6: jnz     loc_499E0E
0x4995CC: cmp     byte ptr [esp+18h+arg_8], 0
0x4995D1: push    ebp
0x4995D2: mov     ebp, [esp+1Ch+arg_0]
0x4995D6: jnz     short loc_4995E5
0x4995D8: test    ebp, ebp
0x4995DA: jnz     short loc_4995E5
0x4995DC: cmp     [esi+20h], edi
0x4995DF: jz      loc_499E0D
0x4995E5: cmp     byte ptr ds:0B3522Ch, 0
0x4995EC: jnz     short loc_4995F7
0x4995EE: test    ebp, ebp
0x4995F0: jnz     short loc_499601
0x4995F2: cmp     edi, [esi+20h]
0x4995F5: jz      short loc_499601
0x4995F7: mov     [esi+20h], edi
0x4995FA: mov     byte ptr ds:0B3522Ch, 0
0x499601: push    ebx
0x499602: mov     ebx, ds:0B45FE0h
0x499608: test    ebx, ebx
0x49960A: jnz     short loc_499624
0x49960C: push    13h; a1
0x49960E: call    GetShaderDefinition
0x499613: mov     ebx, ds:0B45FE0h
0x499619: add     esp, 4
0x49961C: test    ebx, ebx
0x49961E: jz      loc_4996B3
0x499624: mov     edx, ds:0B35220h
0x49962A: fld     dword ptr ds:0B45FC4h
0x499630: fld     dword ptr [edx+3Ch]
0x499633: xor     cl, cl
0x499635: fucompp
0x499637: fnstsw  ax
0x499639: test    ah, 44h
0x49963C: jnp     short loc_499649
0x49963E: fld     dword ptr [edx+3Ch]
0x499641: mov     cl, 1
0x499643: fstp    dword ptr ds:0B45FC4h
0x499649: fld     dword ptr ds:0B45FC0h
0x49964F: fld     dword ptr [edx+40h]
0x499652: fucompp
0x499654: fnstsw  ax
0x499656: test    ah, 44h
0x499659: jnp     short loc_499666
0x49965B: fld     dword ptr [edx+40h]
0x49965E: mov     cl, 1
0x499660: fstp    dword ptr ds:0B45FC0h
0x499666: fld     dword ptr ds:0B45FD8h
0x49966C: fld     dword ptr [edx+44h]
0x49966F: fucompp
0x499671: fnstsw  ax
0x499673: test    ah, 44h
0x499676: jnp     short loc_499683
0x499678: fld     dword ptr [edx+44h]
0x49967B: mov     cl, 1
0x49967D: fstp    dword ptr ds:0B45FD8h
0x499683: fld     dword ptr ds:0B45FD4h
0x499689: fld     dword ptr [edx+48h]
0x49968C: fucompp
0x49968E: fnstsw  ax
0x499690: test    ah, 44h
0x499693: jnp     short loc_4996A0
0x499695: fld     dword ptr [edx+48h]
0x499698: fstp    dword ptr ds:0B45FD4h
0x49969E: jmp     short loc_4996AC
0x4996A0: test    cl, cl
0x4996A2: jnz     short loc_4996AC
0x4996A4: cmp     [ebx+108h], cl
0x4996AA: jnz     short loc_4996B3
0x4996AC: mov     ecx, ebx; this
0x4996AE: call    sub_7E1710
0x4996B3: test    ebp, ebp
0x4996B5: jz      loc_499C00
0x4996BB: cmp     byte ptr [esp+20h+arg_8], 0
0x4996C0: jnz     loc_499C00
0x4996C6: mov     eax, [esi+20h]
0x4996C9: test    eax, eax
0x4996CB: jz      loc_499C00
0x4996D1: mov     ebx, [eax+68h]
0x4996D4: fld     dword ptr [esi+2Ch]
0x4996D7: mov     eax, [ebp+68h]
0x4996DA: sub     esp, 14h
0x4996DD: fstp    [esp+34h+var_24]; float
0x4996E1: movzx   ecx, al
0x4996E4: fld1
0x4996E6: mov     [esp+34h+arg_0], ecx
0x4996EA: fstp    [esp+34h+var_28]; float
0x4996EE: movzx   edx, bl
0x4996F1: fldz
0x4996F3: fstp    [esp+34h+var_2C]; float
0x4996F7: fild    [esp+34h+arg_0]
0x4996FB: mov     [esp+34h+arg_8], eax
0x4996FF: fld     qword ptr ds:0A3DDD8h
0x499705: fdiv    st(1), st
0x499707: fxch    st(1)
0x499709: fstp    [esp+34h+arg_0]
0x49970D: fld     [esp+34h+arg_0]
0x499711: fstp    [esp+34h+var_30]; float
0x499715: mov     [esp+34h+arg_0], edx
0x499719: fild    [esp+34h+arg_0]
0x49971D: fdivrp  st(1), st
0x49971F: fstp    [esp+34h+arg_0]
0x499723: fld     [esp+34h+arg_0]
0x499727: fstp    [esp+34h+var_34]; float
0x49972A: call    sub_410EB0
0x49972F: fstp    [esp+34h+var_10]
0x499733: fld     dword ptr [esi+2Ch]
0x499736: movzx   eax, byte ptr [esp+34h+arg_8+1]
0x49973B: fstp    [esp+34h+var_24]; float
0x49973F: mov     [esp+34h+arg_0], eax
0x499743: fld1
0x499745: movzx   ecx, bh
0x499748: fstp    [esp+34h+var_28]; float
0x49974C: fldz
0x49974E: fstp    [esp+34h+var_2C]; float
0x499752: fild    [esp+34h+arg_0]
0x499756: fld     qword ptr ds:0A3DDD8h
0x49975C: fdiv    st(1), st
0x49975E: fxch    st(1)
0x499760: fstp    [esp+34h+arg_0]
0x499764: fld     [esp+34h+arg_0]
0x499768: fstp    [esp+34h+var_30]; float
0x49976C: mov     [esp+34h+arg_0], ecx
0x499770: fild    [esp+34h+arg_0]
0x499774: fdivrp  st(1), st
0x499776: fstp    [esp+34h+arg_0]
0x49977A: fld     [esp+34h+arg_0]
0x49977E: fstp    [esp+34h+var_34]; float
0x499781: call    sub_410EB0
0x499786: fstp    [esp+34h+var_C]
0x49978A: mov     eax, [esp+34h+arg_8]
0x49978E: fld     dword ptr [esi+2Ch]
0x499791: fstp    [esp+34h+var_24]; float
0x499795: shr     eax, 10h
0x499798: fld1
0x49979A: movzx   edx, al
0x49979D: fstp    [esp+34h+var_28]; float
0x4997A1: mov     [esp+34h+arg_8], edx
0x4997A5: fldz
0x4997A7: shr     ebx, 10h
0x4997AA: movzx   eax, bl
0x4997AD: fstp    [esp+34h+var_2C]; float
0x4997B1: fild    [esp+34h+arg_8]
0x4997B5: fld     qword ptr ds:0A3DDD8h
0x4997BB: fdiv    st(1), st
0x4997BD: fxch    st(1)
0x4997BF: fstp    [esp+34h+arg_8]
0x4997C3: fld     [esp+34h+arg_8]
0x4997C7: fstp    [esp+34h+var_30]; float
0x4997CB: mov     [esp+34h+arg_8], eax
0x4997CF: fild    [esp+34h+arg_8]
0x4997D3: fdivrp  st(1), st
0x4997D5: fstp    [esp+34h+arg_8]
0x4997D9: fld     [esp+34h+arg_8]
0x4997DD: fstp    [esp+34h+var_34]; float
0x4997E0: call    sub_410EB0
0x4997E5: fstp    [esp+34h+var_8]
0x4997E9: fld1
0x4997EB: fst     [esp+34h+var_4]
0x4997EF: mov     ecx, [esp+34h+var_10]
0x4997F3: mov     edx, [esp+34h+var_C]
0x4997F7: mov     eax, [esp+34h+var_8]
0x4997FB: mov     ds:0B45E14h, ecx
0x499801: mov     ecx, [esp+34h+var_4]
0x499805: mov     ds:0B45E1Ch, eax
0x49980A: mov     ds:0B45E20h, ecx
0x499810: mov     ds:0B45E18h, edx
0x499816: fld     dword ptr [esi+2Ch]
0x499819: mov     eax, [ebp+6Ch]
0x49981C: fstp    [esp+34h+var_24]; float
0x499820: mov     [esp+34h+arg_8], eax
0x499824: fstp    [esp+34h+var_28]; float
0x499828: movzx   eax, al
0x49982B: fldz
0x49982D: mov     [esp+34h+arg_0], eax
0x499831: fstp    [esp+34h+var_2C]; float
0x499835: mov     edx, [esi+20h]
0x499838: fild    [esp+34h+arg_0]
0x49983C: mov     ebx, [edx+6Ch]
0x49983F: fld     qword ptr ds:0A3DDD8h
0x499845: movzx   ecx, bl
0x499848: fdiv    st(1), st
0x49984A: fxch    st(1)
0x49984C: fstp    [esp+34h+arg_0]
0x499850: fld     [esp+34h+arg_0]
0x499854: fstp    [esp+34h+var_30]; float
0x499858: mov     [esp+34h+arg_0], ecx
0x49985C: fild    [esp+34h+arg_0]
0x499860: fdivrp  st(1), st
0x499862: fstp    [esp+34h+arg_0]
0x499866: fld     [esp+34h+arg_0]
0x49986A: fstp    [esp+34h+var_34]; float
0x49986D: call    sub_410EB0
0x499872: fstp    [esp+34h+var_10]
0x499876: fld     dword ptr [esi+2Ch]
0x499879: movzx   edx, byte ptr [esp+34h+arg_8+1]
0x49987E: fstp    [esp+34h+var_24]; float
0x499882: mov     [esp+34h+arg_0], edx
0x499886: fld1
0x499888: movzx   eax, bh
0x49988B: fstp    [esp+34h+var_28]; float
0x49988F: fldz
0x499891: fstp    [esp+34h+var_2C]; float
0x499895: fild    [esp+34h+arg_0]
0x499899: fld     qword ptr ds:0A3DDD8h
0x49989F: fdiv    st(1), st
0x4998A1: fxch    st(1)
0x4998A3: fstp    [esp+34h+arg_0]
0x4998A7: fld     [esp+34h+arg_0]
0x4998AB: fstp    [esp+34h+var_30]; float
0x4998AF: mov     [esp+34h+arg_0], eax
0x4998B3: fild    [esp+34h+arg_0]
0x4998B7: fdivrp  st(1), st
0x4998B9: fstp    [esp+34h+arg_0]
0x4998BD: fld     [esp+34h+arg_0]
0x4998C1: fstp    [esp+34h+var_34]; float
0x4998C4: call    sub_410EB0
0x4998C9: fstp    [esp+34h+var_C]
0x4998CD: mov     eax, [esp+34h+arg_8]
0x4998D1: fld     dword ptr [esi+2Ch]
0x4998D4: fstp    [esp+34h+var_24]; float
0x4998D8: shr     eax, 10h
0x4998DB: fld1
0x4998DD: movzx   ecx, al
0x4998E0: fstp    [esp+34h+var_28]; float
0x4998E4: mov     [esp+34h+arg_8], ecx
0x4998E8: fldz
0x4998EA: shr     ebx, 10h
0x4998ED: movzx   edx, bl
0x4998F0: fstp    [esp+34h+var_2C]; float
0x4998F4: fild    [esp+34h+arg_8]
0x4998F8: fld     qword ptr ds:0A3DDD8h
0x4998FE: fdiv    st(1), st
0x499900: fxch    st(1)
0x499902: fstp    [esp+34h+arg_8]
0x499906: fld     [esp+34h+arg_8]
0x49990A: fstp    [esp+34h+var_30]; float
0x49990E: mov     [esp+34h+arg_8], edx
0x499912: fild    [esp+34h+arg_8]
0x499916: fdivrp  st(1), st
0x499918: fstp    [esp+34h+arg_8]
0x49991C: fld     [esp+34h+arg_8]
0x499920: fstp    [esp+34h+var_34]; float
0x499923: call    sub_410EB0
0x499928: mov     eax, [esp+34h+var_10]
0x49992C: fstp    [esp+34h+var_8]
0x499930: fld1
0x499932: mov     ecx, [esp+34h+var_C]
0x499936: mov     edx, [esp+34h+var_8]
0x49993A: fst     [esp+34h+var_4]
0x49993E: mov     ds:0B45E24h, eax
0x499943: mov     eax, [esp+34h+var_4]
0x499947: mov     ds:0B45E2Ch, edx
0x49994D: mov     ds:0B45E30h, eax
0x499952: mov     ds:0B45E28h, ecx
0x499958: fld     dword ptr [esi+2Ch]
0x49995B: mov     eax, [ebp+70h]
0x49995E: fstp    [esp+34h+var_24]; float
0x499962: movzx   edx, al
0x499965: fstp    [esp+34h+var_28]; float
0x499969: mov     [esp+34h+arg_0], edx
0x49996D: fldz
0x49996F: mov     ecx, [esi+20h]
0x499972: fstp    [esp+34h+var_2C]; float
0x499976: mov     ebx, [ecx+70h]
0x499979: fild    [esp+34h+arg_0]
0x49997D: mov     [esp+34h+arg_8], eax
0x499981: fld     qword ptr ds:0A3DDD8h
0x499987: movzx   eax, bl
0x49998A: fdiv    st(1), st
0x49998C: fxch    st(1)
0x49998E: fstp    [esp+34h+arg_0]
0x499992: fld     [esp+34h+arg_0]
0x499996: fstp    [esp+34h+var_30]; float
0x49999A: mov     [esp+34h+arg_0], eax
0x49999E: fild    [esp+34h+arg_0]
0x4999A2: fdivrp  st(1), st
0x4999A4: fstp    [esp+34h+arg_0]
0x4999A8: fld     [esp+34h+arg_0]
0x4999AC: fstp    [esp+34h+var_34]; float
0x4999AF: call    sub_410EB0
0x4999B4: fstp    [esp+34h+var_10]
0x4999B8: fld     dword ptr [esi+2Ch]
0x4999BB: movzx   ecx, byte ptr [esp+34h+arg_8+1]
0x4999C0: fstp    [esp+34h+var_24]; float
0x4999C4: mov     [esp+34h+arg_0], ecx
0x4999C8: fld1
0x4999CA: movzx   edx, bh
0x4999CD: fstp    [esp+34h+var_28]; float
0x4999D1: fldz
0x4999D3: fstp    [esp+34h+var_2C]; float
0x4999D7: fild    [esp+34h+arg_0]
0x4999DB: fld     qword ptr ds:0A3DDD8h
0x4999E1: fdiv    st(1), st
0x4999E3: fxch    st(1)
0x4999E5: fstp    [esp+34h+arg_0]
0x4999E9: fld     [esp+34h+arg_0]
0x4999ED: fstp    [esp+34h+var_30]; float
0x4999F1: mov     [esp+34h+arg_0], edx
0x4999F5: fild    [esp+34h+arg_0]
0x4999F9: fdivrp  st(1), st
0x4999FB: fstp    [esp+34h+arg_0]
0x4999FF: fld     [esp+34h+arg_0]
0x499A03: fstp    [esp+34h+var_34]; float
0x499A06: call    sub_410EB0
0x499A0B: fstp    [esp+34h+var_C]
0x499A0F: mov     eax, [esp+34h+arg_8]
0x499A13: fld     dword ptr [esi+2Ch]
0x499A16: fstp    [esp+34h+var_24]; float
0x499A1A: shr     eax, 10h
0x499A1D: fld1
0x499A1F: movzx   eax, al
0x499A22: fstp    [esp+34h+var_28]; float
0x499A26: mov     [esp+34h+arg_8], eax
0x499A2A: fldz
0x499A2C: fstp    [esp+34h+var_2C]; float
0x499A30: fild    [esp+34h+arg_8]
0x499A34: fld     qword ptr ds:0A3DDD8h
0x499A3A: fdiv    st(1), st
0x499A3C: fxch    st(1)
0x499A3E: fstp    [esp+34h+arg_8]
0x499A42: fld     [esp+34h+arg_8]
0x499A46: shr     ebx, 10h
0x499A49: movzx   ecx, bl
0x499A4C: fstp    [esp+34h+var_30]; float
0x499A50: mov     [esp+34h+arg_8], ecx
0x499A54: fild    [esp+34h+arg_8]
0x499A58: fdivrp  st(1), st
0x499A5A: fstp    [esp+34h+arg_8]
0x499A5E: fld     [esp+34h+arg_8]
0x499A62: fstp    [esp+34h+var_34]; float
0x499A65: call    sub_410EB0
0x499A6A: fstp    [esp+34h+var_8]
0x499A6E: fld1
0x499A70: mov     edx, [esp+34h+var_10]
0x499A74: mov     eax, [esp+34h+var_C]
0x499A78: fst     [esp+34h+var_4]
0x499A7C: mov     ecx, [esp+34h+var_8]
0x499A80: mov     ds:0B45E34h, edx
0x499A86: mov     edx, [esp+34h+var_4]
0x499A8A: mov     ds:0B45E38h, eax
0x499A8F: mov     ds:0B45E3Ch, ecx
0x499A95: mov     ds:0B45E40h, edx
0x499A9B: fld     dword ptr [esi+2Ch]
0x499A9E: mov     eax, [esi+24h]
0x499AA1: fstp    [esp+34h+var_24]; float
0x499AA5: mov     ecx, [esi+20h]
0x499AA8: fstp    [esp+34h+var_28]; float
0x499AAC: fldz
0x499AAE: fstp    [esp+34h+var_2C]; float
0x499AB2: fld     dword ptr [eax+4Ch]
0x499AB5: fstp    [esp+34h+var_30]; float
0x499AB9: fld     dword ptr [ecx+4Ch]
0x499ABC: fstp    [esp+34h+var_34]; float
0x499ABF: call    sub_410EB0
0x499AC4: fstp    dword ptr ds:0B45E44h
0x499ACA: fld     dword ptr [esi+2Ch]
0x499ACD: mov     edx, [esi+24h]
0x499AD0: mov     eax, [esi+20h]
0x499AD3: fstp    [esp+34h+var_24]; float
0x499AD7: fld1
0x499AD9: fstp    [esp+34h+var_28]; float
0x499ADD: fldz
0x499ADF: fstp    [esp+34h+var_2C]; float
0x499AE3: fld     dword ptr [edx+50h]
0x499AE6: fstp    [esp+34h+var_30]; float
0x499AEA: fld     dword ptr [eax+50h]
0x499AED: fstp    [esp+34h+var_34]; float
0x499AF0: call    sub_410EB0
0x499AF5: fstp    dword ptr ds:0B45E48h
0x499AFB: fld     dword ptr [esi+2Ch]
0x499AFE: mov     ecx, [esi+24h]
0x499B01: add     esp, 8
0x499B04: fstp    [esp+2Ch+var_24]; float
0x499B08: fld1
0x499B0A: fstp    [esp+2Ch+var_28]; float
0x499B0E: fldz
0x499B10: fstp    [esp+2Ch+var_2C]; float
0x499B13: call    sub_4ED660
0x499B18: push    ecx
0x499B19: mov     ecx, [esi+20h]
0x499B1C: fstp    [esp+30h+var_30]; float
0x499B1F: call    sub_4ED660
0x499B24: push    ecx
0x499B25: fstp    [esp+34h+var_34]; float
0x499B28: call    sub_410EB0
0x499B2D: fstp    dword ptr ds:0B45E4Ch
0x499B33: mov     ecx, [esi+24h]
0x499B36: fld     dword ptr [esi+2Ch]
0x499B39: add     esp, 8
0x499B3C: fstp    [esp+2Ch+var_24]; float
0x499B40: fld1
0x499B42: fstp    [esp+2Ch+var_28]; float
0x499B46: fldz
0x499B48: fstp    [esp+2Ch+var_2C]; float
0x499B4B: call    sub_4ED680
0x499B50: push    ecx
0x499B51: mov     ecx, [esi+20h]
0x499B54: fstp    [esp+30h+var_30]; float
0x499B57: call    sub_4ED680
0x499B5C: push    ecx
0x499B5D: fstp    [esp+34h+var_34]; float
0x499B60: call    sub_410EB0
0x499B65: fstp    dword ptr ds:0B45E50h
0x499B6B: fld     dword ptr [esi+2Ch]
0x499B6E: mov     ecx, [esi+24h]
0x499B71: mov     edx, [esi+20h]
0x499B74: fstp    [esp+34h+var_24]; float
0x499B78: fld1
0x499B7A: fstp    [esp+34h+var_28]; float
0x499B7E: fldz
0x499B80: fstp    [esp+34h+var_2C]; float
0x499B84: fld     dword ptr [ecx+58h]
0x499B87: fstp    [esp+34h+var_30]; float
0x499B8B: fld     dword ptr [edx+58h]
0x499B8E: fstp    [esp+34h+var_34]; float
0x499B91: call    sub_410EB0
0x499B96: fstp    dword ptr ds:0B45E54h
0x499B9C: fld     dword ptr [esi+2Ch]
0x499B9F: mov     eax, [esi+24h]
0x499BA2: mov     ecx, [esi+20h]
0x499BA5: fstp    [esp+34h+var_24]; float
0x499BA9: fld1
0x499BAB: fstp    [esp+34h+var_28]; float
0x499BAF: fldz
0x499BB1: fstp    [esp+34h+var_2C]; float
0x499BB5: fld     dword ptr [eax+5Ch]
0x499BB8: fstp    [esp+34h+var_30]; float
0x499BBC: fld     dword ptr [ecx+5Ch]
0x499BBF: fstp    [esp+34h+var_34]; float
0x499BC2: call    sub_410EB0
0x499BC7: fstp    dword ptr ds:0B45E58h
0x499BCD: fld     dword ptr [esi+2Ch]
0x499BD0: mov     edx, [esi+24h]
0x499BD3: mov     eax, [esi+20h]
0x499BD6: fstp    [esp+34h+var_24]; float
0x499BDA: fld1
0x499BDC: fstp    [esp+34h+var_28]; float
0x499BE0: fldz
0x499BE2: fstp    [esp+34h+var_2C]; float
0x499BE6: fld     dword ptr [edx+54h]
0x499BE9: fstp    [esp+34h+var_30]; float
0x499BED: fld     dword ptr [eax+54h]
0x499BF0: fstp    [esp+34h+var_34]; float
0x499BF3: call    sub_410EB0
0x499BF8: add     esp, 14h
0x499BFB: jmp     loc_499D78
0x499C00: mov     eax, [edi+68h]
0x499C03: movzx   ecx, al
0x499C06: mov     [esp+20h+arg_8], ecx
0x499C0A: movzx   edx, ah
0x499C0D: fild    [esp+20h+arg_8]
0x499C11: fld     qword ptr ds:0A3DDD8h
0x499C17: mov     [esp+20h+arg_8], edx
0x499C1B: shr     eax, 10h
0x499C1E: fdiv    st(1), st
0x499C20: movzx   eax, al
0x499C23: fxch    st(1)
0x499C25: fstp    [esp+20h+var_10]
0x499C29: fild    [esp+20h+arg_8]
0x499C2D: mov     ecx, [esp+20h+var_10]
0x499C31: mov     [esp+20h+arg_8], eax
0x499C35: mov     ds:0B45E14h, ecx
0x499C3B: fdiv    st, st(1)
0x499C3D: fstp    [esp+20h+var_C]
0x499C41: fild    [esp+20h+arg_8]
0x499C45: mov     edx, [esp+20h+var_C]
0x499C49: mov     ds:0B45E18h, edx
0x499C4F: fdiv    st, st(1)
0x499C51: fstp    [esp+20h+var_8]
0x499C55: fld1
0x499C57: mov     eax, [esp+20h+var_8]
0x499C5B: fst     [esp+20h+var_4]
0x499C5F: mov     ds:0B45E1Ch, eax
0x499C64: mov     ecx, [esp+20h+var_4]
0x499C68: mov     ds:0B45E20h, ecx
0x499C6E: mov     eax, [edi+6Ch]
0x499C71: movzx   edx, al
0x499C74: mov     [esp+20h+arg_8], edx
0x499C78: movzx   ecx, ah
0x499C7B: fild    [esp+20h+arg_8]
0x499C7F: mov     [esp+20h+arg_8], ecx
0x499C83: shr     eax, 10h
0x499C86: fdiv    st, st(2)
0x499C88: movzx   edx, al
0x499C8B: fstp    [esp+20h+var_10]
0x499C8F: fild    [esp+20h+arg_8]
0x499C93: mov     eax, [esp+20h+var_10]
0x499C97: mov     [esp+20h+arg_8], edx
0x499C9B: mov     ds:0B45E24h, eax
0x499CA0: fdiv    st, st(2)
0x499CA2: fstp    [esp+20h+var_C]
0x499CA6: fild    [esp+20h+arg_8]
0x499CAA: mov     ecx, [esp+20h+var_C]
0x499CAE: mov     ds:0B45E28h, ecx
0x499CB4: fdiv    st, st(2)
0x499CB6: fstp    [esp+20h+var_8]
0x499CBA: mov     edx, [esp+20h+var_8]
0x499CBE: mov     ds:0B45E2Ch, edx
0x499CC4: fst     [esp+20h+var_4]
0x499CC8: mov     eax, [esp+20h+var_4]
0x499CCC: mov     ds:0B45E30h, eax
0x499CD1: mov     eax, [edi+70h]
0x499CD4: movzx   ecx, al
0x499CD7: mov     [esp+20h+arg_8], ecx
0x499CDB: movzx   edx, ah
0x499CDE: fild    [esp+20h+arg_8]
0x499CE2: mov     [esp+20h+arg_8], edx
0x499CE6: shr     eax, 10h
0x499CE9: fdiv    st, st(2)
0x499CEB: movzx   eax, al
0x499CEE: fstp    [esp+20h+var_10]
0x499CF2: fild    [esp+20h+arg_8]
0x499CF6: mov     ecx, [esp+20h+var_10]
0x499CFA: mov     [esp+20h+arg_8], eax
0x499CFE: mov     ds:0B45E34h, ecx
0x499D04: fdiv    st, st(2)
0x499D06: fstp    [esp+20h+var_C]
0x499D0A: fild    [esp+20h+arg_8]
0x499D0E: mov     edx, [esp+20h+var_C]
0x499D12: mov     ds:0B45E38h, edx
0x499D18: fdivrp  st(2), st
0x499D1A: fxch    st(1)
0x499D1C: fstp    [esp+20h+var_8]
0x499D20: mov     eax, [esp+20h+var_8]
0x499D24: mov     ds:0B45E3Ch, eax
0x499D29: fstp    [esp+20h+var_4]
0x499D2D: mov     ecx, [esp+20h+var_4]
0x499D31: mov     ds:0B45E40h, ecx
0x499D37: fld     dword ptr [edi+4Ch]
0x499D3A: fstp    dword ptr ds:0B45E44h
0x499D40: mov     ecx, edi
0x499D42: fld     dword ptr [edi+50h]
0x499D45: fstp    dword ptr ds:0B45E48h
0x499D4B: call    sub_4ED660
0x499D50: mov     ecx, edi
0x499D52: fstp    dword ptr ds:0B45E4Ch
0x499D58: call    sub_4ED680
0x499D5D: fstp    dword ptr ds:0B45E50h
0x499D63: fld     dword ptr [edi+58h]
0x499D66: fstp    dword ptr ds:0B45E54h
0x499D6C: fld     dword ptr [edi+5Ch]
0x499D6F: fstp    dword ptr ds:0B45E58h
0x499D75: fld     dword ptr [edi+54h]
0x499D78: test    ebp, ebp
0x499D7A: fstp    dword ptr ds:0B45DC4h
0x499D80: mov     eax, ds:0B35220h
0x499D85: fld     dword ptr [eax+78h]
0x499D88: pop     ebx
0x499D89: fstp    dword ptr ds:0B45F58h
0x499D8F: fld     dword ptr [eax+7Ch]
0x499D92: fstp    dword ptr ds:0B45F5Ch
0x499D98: fld     dword ptr [eax+80h]
0x499D9E: fstp    dword ptr ds:0B45F60h
0x499DA4: fld     dword ptr [eax+88h]
0x499DAA: fstp    dword ptr ds:0B45F64h
0x499DB0: fld     dword ptr [eax+8Ch]
0x499DB6: fstp    dword ptr ds:0B45F68h
0x499DBC: fld     dword ptr [eax+90h]
0x499DC2: fstp    dword ptr ds:0B45F6Ch
0x499DC8: fld     dword ptr [eax+94h]
0x499DCE: fstp    dword ptr ds:0B45F70h
0x499DD4: fld     dword ptr [eax+9Ch]
0x499DDA: fstp    dword ptr ds:0B45F74h
0x499DE0: jnz     short loc_499DE7
0x499DE2: mov     [esi+20h], edi
0x499DE5: jmp     short loc_499E03
0x499DE7: fld1
0x499DE9: fcomp   [esp+1Ch+arg_4]
0x499DED: fnstsw  ax
0x499DEF: test    ah, 44h
0x499DF2: jp      short loc_499E03
0x499DF4: fldz
0x499DF6: mov     [esi+20h], ebp
0x499DF9: fstp    dword ptr [esi+2Ch]
0x499DFC: mov     dword ptr [esi+24h], 0
0x499E03: cmp     byte ptr [esi+29h], 0
0x499E07: jz      short loc_499E0D
0x499E09: mov     byte ptr [esi+29h], 0
0x499E0D: pop     ebp
0x499E0E: pop     edi
0x499E0F: pop     esi
0x499E10: add     esp, 10h
0x499E13: retn    0Ch
