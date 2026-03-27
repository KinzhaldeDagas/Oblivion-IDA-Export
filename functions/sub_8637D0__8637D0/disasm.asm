0x8637D0: push    0FFFFFFFFh
0x8637D2: push    offset SEH_8637D0
0x8637D7: mov     eax, large fs:0
0x8637DD: push    eax
0x8637DE: sub     esp, 3Ch
0x8637E1: push    ebx
0x8637E2: push    ebp
0x8637E3: push    esi
0x8637E4: push    edi
0x8637E5: mov     eax, ds:0B30AACh
0x8637EA: xor     eax, esp
0x8637EC: push    eax
0x8637ED: lea     eax, [esp+5Ch+var_C]
0x8637F1: mov     large fs:0, eax
0x8637F7: mov     [esp+5Ch+var_3C], ecx
0x8637FB: movzx   edi, word ptr ds:0B42EACh
0x863802: mov     ecx, [esp+5Ch+arg_0]
0x863806: lea     eax, [esp+5Ch+var_34]
0x86380A: shl     edi, 8
0x86380D: or      edi, [esp+5Ch+arg_4]
0x863811: push    eax
0x863812: call    sub_405760
0x863817: mov     ebp, [eax]
0x863819: mov     eax, [esp+5Ch+var_34]
0x86381D: test    eax, eax
0x86381F: jz      short loc_86383F
0x863821: mov     esi, eax
0x863823: add     eax, 4
0x863826: push    eax; lpAddend
0x863827: call    dword ptr ds:0A2807Ch
0x86382D: test    eax, eax
0x86382F: jnz     short loc_86383F
0x863831: test    esi, esi
0x863833: jz      short loc_86383F
0x863835: mov     edx, [esi]
0x863837: mov     eax, [edx]
0x863839: push    1
0x86383B: mov     ecx, esi
0x86383D: call    eax
0x86383F: mov     esi, [esp+5Ch+var_3C]
0x863843: mov     eax, [esi+1Ch]
0x863846: test    al, 2
0x863848: setnbe  bl
0x86384B: test    eax, 100000h
0x863850: setnbe  cl
0x863853: test    cl, cl
0x863855: mov     byte ptr [esp+5Ch+var_48+2], bl
0x863859: jz      short loc_863869
0x86385B: cmp     byte ptr ds:0B42E86h, 0
0x863862: mov     byte ptr [esp+5Ch+var_44+1], 0
0x863867: jz      short loc_86386E
0x863869: mov     byte ptr [esp+5Ch+var_44+1], 1
0x86386E: mov     edx, ds:0B42EACh
0x863874: cmp     dx, 5
0x863878: jnz     loc_863945
0x86387E: mov     ecx, esi
0x863880: call    sub_7ED1A0
0x863885: cmp     dword ptr [esi+44h], 0
0x863889: jz      short loc_8638AB
0x86388B: mov     ecx, [esi+3Ch]
0x86388E: mov     eax, [ecx+8]
0x863891: cmp     byte ptr [eax+8], 0
0x863895: jbe     short loc_8638A1
0x863897: mov     edx, [eax+0Ch]
0x86389A: mov     eax, ds:0B42EB0h
0x86389F: mov     [edx], eax
0x8638A1: cmp     dword ptr [esi+44h], 0
0x8638A5: jnz     loc_86393D
0x8638AB: add     esi, 38h ; '8'
0x8638AE: mov     ecx, esi
0x8638B0: call    NiTPointerList__FreeAllNodes
0x8638B5: push    10h; Size
0x8638B7: call    FormHeapAlloc
0x8638BC: add     esp, 4
0x8638BF: test    bl, bl
0x8638C1: mov     [esp+5Ch+arg_C], eax
0x8638C5: jnz     short loc_8638F3
0x8638C7: test    eax, eax
0x8638C9: mov     [esp+5Ch+var_4], 0
0x8638D1: jz      short loc_86391F
0x8638D3: mov     ecx, ds:0B42EB0h
0x8638D9: mov     edx, [esp+5Ch+arg_0]
0x8638DD: push    ecx
0x8638DE: push    1
0x8638E0: push    1
0x8638E2: push    154h
0x8638E7: push    edx
0x8638E8: push    eax
0x8638E9: call    sub_7E2370
0x8638EE: add     esp, 18h
0x8638F1: jmp     short loc_863921
0x8638F3: test    eax, eax
0x8638F5: mov     [esp+5Ch+var_4], 1
0x8638FD: jz      short loc_86391F
0x8638FF: mov     ecx, ds:0B42EB0h
0x863905: mov     edx, [esp+5Ch+arg_0]
0x863909: push    ecx
0x86390A: push    1
0x86390C: push    1
0x86390E: push    155h
0x863913: push    edx
0x863914: push    eax
0x863915: call    sub_7E2370
0x86391A: add     esp, 18h
0x86391D: jmp     short loc_863921
0x86391F: xor     eax, eax
0x863921: mov     [esp+5Ch+arg_C], eax
0x863925: lea     eax, [esp+5Ch+arg_C]
0x863929: push    eax
0x86392A: mov     ecx, esi
0x86392C: mov     [esp+60h+var_4], 0FFFFFFFFh
0x863934: call    sub_5B1E20
0x863939: mov     esi, [esp+5Ch+var_3C]
0x86393D: lea     eax, [esi+38h]
0x863940: jmp     loc_86438E
0x863945: cmp     dx, 6
0x863949: jnz     loc_863A13
0x86394F: cmp     dword ptr [esi+54h], 0
0x863953: jnz     loc_863A0B
0x863959: test    cl, cl
0x86395B: push    10h; Size
0x86395D: jz      short loc_863992
0x86395F: call    FormHeapAlloc
0x863964: add     esp, 4
0x863967: mov     [esp+5Ch+arg_C], eax
0x86396B: test    eax, eax
0x86396D: mov     [esp+5Ch+var_4], 2
0x863975: jz      short loc_8639F0
0x863977: mov     ecx, [esp+5Ch+arg_0]
0x86397B: push    0
0x86397D: push    0
0x86397F: push    1
0x863981: push    15Dh
0x863986: push    ecx
0x863987: push    eax
0x863988: call    sub_7E2370
0x86398D: add     esp, 18h
0x863990: jmp     short loc_8639F2
0x863992: call    FormHeapAlloc
0x863997: add     esp, 4
0x86399A: test    bl, bl
0x86399C: mov     [esp+5Ch+arg_C], eax
0x8639A0: jnz     short loc_8639C9
0x8639A2: test    eax, eax
0x8639A4: mov     [esp+5Ch+var_4], 3
0x8639AC: jz      short loc_8639F0
0x8639AE: mov     ecx, [esp+5Ch+arg_0]
0x8639B2: push    0
0x8639B4: push    0
0x8639B6: push    1
0x8639B8: push    15Bh
0x8639BD: push    ecx
0x8639BE: push    eax
0x8639BF: call    sub_7E2370
0x8639C4: add     esp, 18h
0x8639C7: jmp     short loc_8639F2
0x8639C9: test    eax, eax
0x8639CB: mov     [esp+5Ch+var_4], 4
0x8639D3: jz      short loc_8639F0
0x8639D5: mov     ecx, [esp+5Ch+arg_0]
0x8639D9: push    0
0x8639DB: push    0
0x8639DD: push    1
0x8639DF: push    15Ch
0x8639E4: push    ecx
0x8639E5: push    eax
0x8639E6: call    sub_7E2370
0x8639EB: add     esp, 18h
0x8639EE: jmp     short loc_8639F2
0x8639F0: xor     eax, eax
0x8639F2: lea     edx, [esp+5Ch+arg_C]
0x8639F6: push    edx
0x8639F7: lea     ecx, [esi+48h]
0x8639FA: mov     [esp+60h+var_4], 0FFFFFFFFh
0x863A02: mov     [esp+60h+arg_C], eax
0x863A06: call    sub_5B1E20
0x863A0B: lea     eax, [esi+48h]
0x863A0E: jmp     loc_86438E
0x863A13: test    eax, 8000h
0x863A18: setnbe  byte ptr [esp+5Ch+var_40+1]
0x863A1D: test    eax, 10000h
0x863A22: setnbe  byte ptr [esp+5Ch+var_40+2]
0x863A27: test    eax, 800h
0x863A2C: setnbe  byte ptr [esp+5Ch+var_44+2]
0x863A31: test    eax, 400h
0x863A36: mov     eax, [esi]
0x863A38: mov     edx, [eax+90h]
0x863A3E: push    0
0x863A40: mov     ecx, esi
0x863A42: setnbe  byte ptr [esp+60h+var_44+3]
0x863A47: call    edx
0x863A49: test    eax, eax
0x863A4B: setnz   byte ptr [esp+5Ch+var_40]
0x863A50: cmp     byte ptr ds:0B43074h, 0
0x863A57: jnz     short loc_863A98
0x863A59: cmp     dword ptr ds:0B43108h, 0
0x863A60: jz      short loc_863A98
0x863A62: test    byte ptr ds:0B42F40h, 20h
0x863A69: jz      short loc_863A98
0x863A6B: cmp     dword ptr ds:0B42F48h, 2
0x863A72: jl      short loc_863A98
0x863A74: mov     eax, esi
0x863A76: mov     esi, [eax+1Ch]
0x863A79: test    esi, 2000h
0x863A7F: ja      short loc_863A98
0x863A81: call    sub_7E5D00
0x863A86: test    eax, eax
0x863A88: jz      short loc_863A98
0x863A8A: mov     ecx, esi
0x863A8C: shr     ecx, 1Ch
0x863A8F: cmp     cl, 1
0x863A92: jz      short loc_863A98
0x863A94: mov     bl, 1
0x863A96: jmp     short loc_863A9A
0x863A98: xor     bl, bl
0x863A9A: mov     esi, [esp+5Ch+var_3C]
0x863A9E: mov     eax, [esi+1Ch]
0x863AA1: mov     edx, [esp+5Ch+arg_0]
0x863AA5: mov     ecx, [edx+0B4h]
0x863AAB: test    eax, 80h
0x863AB0: setnbe  byte ptr [esp+5Ch+var_48+3]
0x863AB5: test    eax, 20000h
0x863ABA: setnbe  byte ptr [esp+5Ch+var_44]
0x863ABF: test    eax, 200000h
0x863AC4: setnbe  byte ptr [esp+5Ch+var_40+3]
0x863AC9: cmp     dword ptr [ecx+24h], 0
0x863ACD: setnz   byte ptr [esp+5Ch+var_48+1]
0x863AD2: cmp     dword ptr [esi+0E0h], 0
0x863AD9: jz      short loc_863ADD
0x863ADB: xor     bl, bl
0x863ADD: test    eax, 80000h
0x863AE2: jbe     loc_863B89
0x863AE8: lea     eax, [esp+5Ch+var_38]
0x863AEC: push    eax
0x863AED: mov     ecx, edx
0x863AEF: call    sub_405760
0x863AF4: mov     eax, [eax]
0x863AF6: mov     eax, [eax+10h]
0x863AF9: fld     dword ptr [eax+50h]
0x863AFC: mov     eax, [esp+5Ch+var_38]
0x863B00: test    eax, eax
0x863B02: fstp    [esp+5Ch+var_30]
0x863B06: jz      short loc_863B26
0x863B08: mov     esi, eax
0x863B0A: add     eax, 4
0x863B0D: push    eax; lpAddend
0x863B0E: call    dword ptr ds:0A2807Ch
0x863B14: test    eax, eax
0x863B16: jnz     short loc_863B26
0x863B18: test    esi, esi
0x863B1A: jz      short loc_863B26
0x863B1C: mov     edx, [esi]
0x863B1E: mov     eax, [edx]
0x863B20: push    1
0x863B22: mov     ecx, esi
0x863B24: call    eax
0x863B26: fld1
0x863B28: mov     ecx, [ebp+8]
0x863B2B: fld     [esp+5Ch+var_30]
0x863B2F: fucom   st(1)
0x863B31: fnstsw  ax
0x863B33: fstp    st(1)
0x863B35: test    ah, 44h
0x863B38: jp      short loc_863B57
0x863B3A: test    ecx, ecx
0x863B3C: jz      short loc_863B7C
0x863B3E: test    byte ptr [ecx+18h], 1
0x863B42: jz      short loc_863B7C
0x863B44: and     word ptr [ecx+18h], 0FFFEh
0x863B4A: mov     ecx, [esp+5Ch+var_3C]
0x863B4E: mov     dword ptr [ecx+24h], 0
0x863B55: jmp     short loc_863B7C
0x863B57: fldz
0x863B59: fcomp   st(1)
0x863B5B: fnstsw  ax
0x863B5D: test    ah, 5
0x863B60: jp      short loc_863B7C
0x863B62: test    ecx, ecx
0x863B64: jz      short loc_863B7C
0x863B66: test    byte ptr [ecx+18h], 1
0x863B6A: jnz     short loc_863B7C
0x863B6C: mov     edx, [esp+5Ch+var_3C]
0x863B70: or      word ptr [ecx+18h], 1
0x863B75: mov     dword ptr [edx+24h], 0
0x863B7C: mov     eax, [esp+5Ch+var_3C]
0x863B80: mov     edx, [esp+5Ch+arg_0]
0x863B84: fstp    dword ptr [eax+20h]
0x863B87: mov     esi, eax
0x863B89: cmp     byte ptr [esp+5Ch+var_48+3], 0
0x863B8E: fld     dword ptr [esi+0A4h]
0x863B94: fstp    [esp+5Ch+var_38]
0x863B98: jz      loc_863CA5
0x863B9E: fldz
0x863BA0: fcomp   dword ptr ds:0B430A0h
0x863BA6: fnstsw  ax
0x863BA8: test    ah, 5
0x863BAB: jp      loc_863CA5
0x863BB1: fld     dword ptr ds:0B46658h
0x863BB7: mov     ecx, [edx+20h]
0x863BBA: mov     eax, [edx+24h]
0x863BBD: fstp    [esp+5Ch+var_28]
0x863BC1: fld     dword ptr ds:0B4665Ch
0x863BC7: mov     [esp+5Ch+var_1C], ecx
0x863BCB: mov     ecx, [edx+28h]
0x863BCE: fstp    [esp+5Ch+var_24]
0x863BD2: fld     dword ptr ds:0B46660h
0x863BD8: mov     edx, [edx+2Ch]
0x863BDB: fstp    [esp+5Ch+var_20]
0x863BDF: mov     [esp+5Ch+var_18], eax
0x863BE3: fld     [esp+5Ch+var_1C]
0x863BE7: mov     [esp+5Ch+var_14], ecx
0x863BEB: fsub    [esp+5Ch+var_28]
0x863BEF: lea     ecx, [esp+5Ch+var_28]
0x863BF3: mov     [esp+5Ch+var_10], edx
0x863BF7: fstp    [esp+5Ch+var_30]
0x863BFB: fld     [esp+5Ch+var_18]
0x863BFF: fsub    [esp+5Ch+var_24]
0x863C03: fstp    [esp+5Ch+var_34]
0x863C07: fld     [esp+5Ch+var_14]
0x863C0B: fsub    [esp+5Ch+var_20]
0x863C0F: fstp    [esp+5Ch+var_38]
0x863C13: fld     [esp+5Ch+var_30]
0x863C17: fstp    [esp+5Ch+var_28]
0x863C1B: fld     [esp+5Ch+var_34]
0x863C1F: fstp    [esp+5Ch+var_24]
0x863C23: fld     [esp+5Ch+var_38]
0x863C27: fstp    [esp+5Ch+var_20]
0x863C2B: call    sub_404C90
0x863C30: cmp     byte ptr [esp+5Ch+var_44], 0
0x863C35: fsub    [esp+5Ch+var_10]
0x863C39: fstp    [esp+5Ch+var_34]
0x863C3D: fld     [esp+5Ch+var_34]
0x863C41: jz      short loc_863C62
0x863C43: fld     dword ptr ds:0B4309Ch
0x863C49: fcom    st(1)
0x863C4B: fnstsw  ax
0x863C4D: test    ah, 41h
0x863C50: jz      loc_863CEE
0x863C56: fld     st
0x863C58: fsubp   st(2), st
0x863C5A: fsubr   dword ptr ds:0B430A0h
0x863C60: jmp     short loc_863C8A
0x863C62: fld     dword ptr ds:0B43094h
0x863C68: fcom    st(1)
0x863C6A: fnstsw  ax
0x863C6C: test    ah, 41h
0x863C6F: jz      short loc_863CEE
0x863C71: fldz
0x863C73: fld     dword ptr ds:0B43098h
0x863C79: fucom   st(1)
0x863C7B: fnstsw  ax
0x863C7D: fstp    st(1)
0x863C7F: test    ah, 44h
0x863C82: jnp     short loc_863CEC
0x863C84: fld     st(1)
0x863C86: fsubp   st(3), st
0x863C88: fsubrp  st(1), st
0x863C8A: fdivp   st(1), st
0x863C8C: fld1
0x863C8E: fcom    st(1)
0x863C90: fnstsw  ax
0x863C92: test    ah, 5
0x863C95: jp      short loc_863C9D
0x863C97: fstp    st(1)
0x863C99: fld     st
0x863C9B: jmp     short loc_863C9F
0x863C9D: fxch    st(1)
0x863C9F: fsubp   st(1), st
0x863CA1: fstp    [esp+5Ch+var_38]
0x863CA5: fldz
0x863CA7: fld     st
0x863CA9: fld     [esp+5Ch+var_38]
0x863CAD: fucom   st(1)
0x863CAF: fnstsw  ax
0x863CB1: fstp    st(1)
0x863CB3: test    ah, 44h
0x863CB6: jp      short loc_863CC9
0x863CB8: fxch    st(1)
0x863CBA: fcom    dword ptr [esi+0A4h]
0x863CC0: fnstsw  ax
0x863CC2: test    ah, 5
0x863CC5: jnp     short loc_863CE3
0x863CC7: fxch    st(1)
0x863CC9: fcom    st(1)
0x863CCB: fnstsw  ax
0x863CCD: test    ah, 41h
0x863CD0: jnz     short loc_863CFE
0x863CD2: fstp    st(1)
0x863CD4: fldz
0x863CD6: fcom    dword ptr [esi+0A4h]
0x863CDC: fnstsw  ax
0x863CDE: test    ah, 44h
0x863CE1: jp      short loc_863D00
0x863CE3: mov     dword ptr [esi+24h], 0
0x863CEA: jmp     short loc_863D00
0x863CEC: fstp    st(1)
0x863CEE: fstp    st
0x863CF0: fstp    st
0x863CF2: fld1
0x863CF4: fstp    [esp+5Ch+var_38]
0x863CF8: fld     [esp+5Ch+var_38]
0x863CFC: jmp     short loc_863CD4
0x863CFE: fxch    st(1)
0x863D00: fxch    st(1)
0x863D02: fst     dword ptr [esi+0A4h]
0x863D08: fucompp
0x863D0A: fnstsw  ax
0x863D0C: test    ah, 44h
0x863D0F: jp      short loc_863D16
0x863D11: mov     byte ptr [esp+5Ch+var_48+3], 0
0x863D16: cmp     [esi+24h], edi
0x863D19: jz      loc_86438B
0x863D1F: mov     ecx, esi
0x863D21: call    sub_7E24C0
0x863D26: fldz
0x863D28: fcomp   dword ptr [esi+20h]
0x863D2B: fnstsw  ax
0x863D2D: test    ah, 44h
0x863D30: jnp     loc_86438B
0x863D36: cmp     byte ptr [esp+5Ch+var_44+1], 0
0x863D3B: jz      loc_86438B
0x863D41: cmp     byte ptr [esp+5Ch+var_40+1], 0
0x863D46: jz      short loc_863DAD
0x863D48: push    10h; Size
0x863D4A: call    FormHeapAlloc
0x863D4F: add     esp, 4
0x863D52: mov     [esp+5Ch+arg_C], eax
0x863D56: test    eax, eax
0x863D58: mov     [esp+5Ch+var_4], 5
0x863D60: jz      short loc_863D7A
0x863D62: mov     ecx, [esp+5Ch+arg_0]
0x863D66: push    0
0x863D68: push    0
0x863D6A: push    1
0x863D6C: push    0
0x863D6E: push    ecx
0x863D6F: push    eax
0x863D70: call    sub_7E2370
0x863D75: add     esp, 18h
0x863D78: jmp     short loc_863D7C
0x863D7A: xor     eax, eax
0x863D7C: xor     edx, edx
0x863D7E: cmp     byte ptr [esp+5Ch+var_48+2], dl
0x863D82: mov     [esp+5Ch+arg_C], eax
0x863D86: setnz   dl
0x863D89: lea     ecx, [esi+28h]
0x863D8C: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x863D94: add     edx, 156h
0x863D9A: mov     [eax+4], dx
0x863D9E: lea     eax, [esp+5Ch+arg_C]
0x863DA2: push    eax
0x863DA3: call    sub_6AA320
0x863DA8: jmp     loc_864374
0x863DAD: cmp     byte ptr [esp+5Ch+var_40+2], 0
0x863DB2: jz      short loc_863E0C
0x863DB4: push    10h; Size
0x863DB6: call    FormHeapAlloc
0x863DBB: add     esp, 4
0x863DBE: mov     [esp+5Ch+arg_C], eax
0x863DC2: test    eax, eax
0x863DC4: mov     [esp+5Ch+var_4], 6
0x863DCC: jz      short loc_863DE6
0x863DCE: mov     ecx, [esp+5Ch+arg_0]
0x863DD2: push    0
0x863DD4: push    0
0x863DD6: push    1
0x863DD8: push    0
0x863DDA: push    ecx
0x863DDB: push    eax
0x863DDC: call    sub_7E2370
0x863DE1: add     esp, 18h
0x863DE4: jmp     short loc_863DE8
0x863DE6: xor     eax, eax
0x863DE8: lea     edx, [esp+5Ch+arg_C]
0x863DEC: push    edx
0x863DED: lea     ecx, [esi+28h]
0x863DF0: mov     [esp+60h+var_4], 0FFFFFFFFh
0x863DF8: mov     [esp+60h+arg_C], eax
0x863DFC: mov     word ptr [eax+4], 158h
0x863E02: call    sub_6AA320
0x863E07: jmp     loc_864374
0x863E0C: mov     eax, [esi+1Ch]
0x863E0F: shr     eax, 1Ch
0x863E12: movzx   eax, al
0x863E15: push    eax
0x863E16: call    GetShadowSceneNode
0x863E1B: mov     edi, [eax+118h]
0x863E21: push    10h; Size
0x863E23: mov     [esp+64h+var_2C], edi
0x863E27: call    FormHeapAlloc
0x863E2C: add     esp, 8
0x863E2F: mov     [esp+5Ch+var_30], eax
0x863E33: test    eax, eax
0x863E35: mov     [esp+5Ch+var_4], 7
0x863E3D: jz      short loc_863E59
0x863E3F: mov     ecx, [esp+5Ch+arg_0]
0x863E43: push    0
0x863E45: push    0
0x863E47: push    1
0x863E49: push    0
0x863E4B: push    ecx
0x863E4C: push    eax
0x863E4D: call    sub_7E2370
0x863E52: add     esp, 18h
0x863E55: mov     esi, eax
0x863E57: jmp     short loc_863E5B
0x863E59: xor     esi, esi
0x863E5B: mov     ebp, [esp+5Ch+var_3C]
0x863E5F: mov     ecx, ebp
0x863E61: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x863E69: mov     [esp+5Ch+var_38], esi
0x863E6D: mov     byte ptr [esi+8], 1
0x863E71: call    sub_7ED1A0
0x863E76: test    eax, eax
0x863E78: jz      short loc_863E98
0x863E7A: lea     ebx, [ebx+0]
0x863E80: cmp     byte ptr [eax+0F4h], 0
0x863E87: jnz     short loc_863E8D
0x863E89: add     byte ptr [esi+8], 1
0x863E8D: mov     ecx, ebp
0x863E8F: call    sub_7ED3B0
0x863E94: test    eax, eax
0x863E96: jnz     short loc_863E80
0x863E98: mov     al, [esi+8]
0x863E9B: test    al, al
0x863E9D: jbe     short loc_863F04
0x863E9F: movzx   eax, al
0x863EA2: xor     ecx, ecx
0x863EA4: mov     edx, 4
0x863EA9: mul     edx
0x863EAB: seto    cl
0x863EAE: neg     ecx
0x863EB0: or      ecx, eax
0x863EB2: push    ecx; Size
0x863EB3: call    FormHeapAlloc
0x863EB8: add     esp, 4
0x863EBB: mov     ecx, ebp
0x863EBD: mov     [esi+0Ch], eax
0x863EC0: call    sub_7ED1A0
0x863EC5: test    eax, eax
0x863EC7: mov     ecx, [esi+0Ch]
0x863ECA: mov     [ecx], edi
0x863ECC: mov     [esp+5Ch+var_34], 1
0x863ED4: jz      short loc_863EFB
0x863ED6: cmp     byte ptr [eax+0F4h], 0
0x863EDD: jnz     short loc_863EF0
0x863EDF: mov     ecx, [esp+5Ch+var_34]
0x863EE3: mov     edx, [esi+0Ch]
0x863EE6: mov     [edx+ecx*4], eax
0x863EE9: add     ecx, 1
0x863EEC: mov     [esp+5Ch+var_34], ecx
0x863EF0: mov     ecx, ebp
0x863EF2: call    sub_7ED3B0
0x863EF7: test    eax, eax
0x863EF9: jnz     short loc_863ED6
0x863EFB: mov     al, byte ptr [esp+5Ch+var_34]
0x863EFF: mov     [esi+8], al
0x863F02: jmp     short loc_863F0B
0x863F04: mov     dword ptr [esi+0Ch], 0
0x863F0B: push    0
0x863F0D: push    1000000h
0x863F12: mov     ecx, ebp
0x863F14: call    sub_434980
0x863F19: test    dword ptr [ebp+1Ch], 40000h
0x863F20: jbe     short loc_863F34
0x863F22: neg     bl
0x863F24: sbb     ebx, ebx
0x863F26: and     ebx, 0Dh
0x863F29: add     ebx, 12Fh
0x863F2F: jmp     loc_86406A
0x863F34: cmp     byte ptr [esp+5Ch+var_48+2], 0
0x863F39: jnz     loc_863FE7
0x863F3F: cmp     byte ptr [esp+5Ch+var_44+2], 0
0x863F44: jz      short loc_863F71
0x863F46: cmp     byte ptr [esp+5Ch+var_48+1], 0
0x863F4B: jz      short loc_863F5F
0x863F4D: neg     bl
0x863F4F: sbb     ebx, ebx
0x863F51: and     ebx, 0Dh
0x863F54: add     ebx, 137h
0x863F5A: jmp     loc_86406A
0x863F5F: neg     bl
0x863F61: sbb     ebx, ebx
0x863F63: and     ebx, 0Dh
0x863F66: add     ebx, 130h
0x863F6C: jmp     loc_86406A
0x863F71: cmp     byte ptr [esp+5Ch+var_44+3], 0
0x863F76: jz      short loc_863F8A
0x863F78: neg     bl
0x863F7A: sbb     ebx, ebx
0x863F7C: and     ebx, 0Dh
0x863F7F: add     ebx, 131h
0x863F85: jmp     loc_86406A
0x863F8A: cmp     byte ptr [esp+5Ch+var_40], 0
0x863F8F: jz      short loc_863FBC
0x863F91: cmp     byte ptr [esp+5Ch+var_48+1], 0
0x863F96: jz      short loc_863FAA
0x863F98: neg     bl
0x863F9A: sbb     ebx, ebx
0x863F9C: and     ebx, 0Dh
0x863F9F: add     ebx, 138h
0x863FA5: jmp     loc_86406A
0x863FAA: neg     bl
0x863FAC: sbb     ebx, ebx
0x863FAE: and     ebx, 0Dh
0x863FB1: add     ebx, 133h
0x863FB7: jmp     loc_86406A
0x863FBC: cmp     byte ptr [esp+5Ch+var_48+1], 0
0x863FC1: jz      short loc_863FD5
0x863FC3: neg     bl
0x863FC5: sbb     ebx, ebx
0x863FC7: and     ebx, 0Dh
0x863FCA: add     ebx, 135h
0x863FD0: jmp     loc_86406A
0x863FD5: neg     bl
0x863FD7: sbb     ebx, ebx
0x863FD9: and     ebx, 0Dh
0x863FDC: add     ebx, 12Dh
0x863FE2: jmp     loc_86406A
0x863FE7: cmp     byte ptr [esp+5Ch+var_44+2], 0
0x863FEC: jz      short loc_864005
0x863FEE: mov     eax, ds:0B42E8Ch
0x863FF3: test    eax, eax
0x863FF5: jz      short loc_86406E
0x863FF7: push    0; _DWORD
0x863FF9: push    offset aShaderError_36; "SHADER ERROR : no shader to handle BSSM"...
0x863FFE: call    eax ; dword_B42E8C
0x864000: add     esp, 8
0x864003: jmp     short loc_86406E
0x864005: cmp     byte ptr [esp+5Ch+var_44+3], 0
0x86400A: jz      short loc_86401B
0x86400C: neg     bl
0x86400E: sbb     ebx, ebx
0x864010: and     ebx, 0Dh
0x864013: add     ebx, 132h
0x864019: jmp     short loc_86406A
0x86401B: cmp     byte ptr [esp+5Ch+var_40], 0
0x864020: jz      short loc_864047
0x864022: cmp     byte ptr [esp+5Ch+var_48+1], 0
0x864027: jz      short loc_864038
0x864029: neg     bl
0x86402B: sbb     ebx, ebx
0x86402D: and     ebx, 0Dh
0x864030: add     ebx, 139h
0x864036: jmp     short loc_86406A
0x864038: neg     bl
0x86403A: sbb     ebx, ebx
0x86403C: and     ebx, 0Dh
0x86403F: add     ebx, 134h
0x864045: jmp     short loc_86406A
0x864047: cmp     byte ptr [esp+5Ch+var_48+1], 0
0x86404C: jz      short loc_86405D
0x86404E: neg     bl
0x864050: sbb     ebx, ebx
0x864052: and     ebx, 0Dh
0x864055: add     ebx, 136h
0x86405B: jmp     short loc_86406A
0x86405D: neg     bl
0x86405F: sbb     ebx, ebx
0x864061: and     ebx, 0Dh
0x864064: add     ebx, 12Eh
0x86406A: mov     [esi+4], bx
0x86406E: lea     ecx, [esp+5Ch+var_38]
0x864072: lea     edi, [ebp+28h]
0x864075: push    ecx
0x864076: mov     ecx, edi
0x864078: call    sub_6AA320
0x86407D: fld1
0x86407F: fcomp   dword ptr [ebp+20h]
0x864082: fnstsw  ax
0x864084: test    ah, 41h
0x864087: jnz     short loc_8640F9
0x864089: call    InitBSShaderAccumulator
0x86408E: mov     ecx, eax
0x864090: call    sub_7AA380
0x864095: test    al, al
0x864097: jz      short loc_8640F9
0x864099: push    10h; Size
0x86409B: call    FormHeapAlloc
0x8640A0: add     esp, 4
0x8640A3: mov     [esp+5Ch+var_30], eax
0x8640A7: test    eax, eax
0x8640A9: mov     [esp+5Ch+var_4], 8
0x8640B1: jz      short loc_8640CB
0x8640B3: mov     edx, [esp+5Ch+arg_0]
0x8640B7: push    0
0x8640B9: push    0
0x8640BB: push    1
0x8640BD: push    0
0x8640BF: push    edx
0x8640C0: push    eax
0x8640C1: call    sub_7E2370
0x8640C6: add     esp, 18h
0x8640C9: jmp     short loc_8640CD
0x8640CB: xor     eax, eax
0x8640CD: mov     bl, byte ptr [esp+5Ch+var_48+2]
0x8640D1: xor     ecx, ecx
0x8640D3: test    bl, bl
0x8640D5: setnz   cl
0x8640D8: lea     edx, [esp+5Ch+var_30]
0x8640DC: push    edx
0x8640DD: mov     [esp+60h+var_4], 0FFFFFFFFh
0x8640E5: mov     [esp+60h+var_30], eax
0x8640E9: add     ecx, 4
0x8640EC: mov     [eax+4], cx
0x8640F0: mov     ecx, edi
0x8640F2: call    sub_6AA320
0x8640F7: jmp     short loc_8640FD
0x8640F9: mov     bl, byte ptr [esp+5Ch+var_48+2]
0x8640FD: cmp     dword ptr [ebp+0E0h], 0
0x864104: jz      short loc_864163
0x864106: push    10h; Size
0x864108: call    FormHeapAlloc
0x86410D: add     esp, 4
0x864110: mov     [esp+5Ch+var_30], eax
0x864114: test    eax, eax
0x864116: mov     [esp+5Ch+var_4], 9
0x86411E: jz      short loc_864138
0x864120: mov     ecx, [esp+5Ch+arg_0]
0x864124: push    0
0x864126: push    0
0x864128: push    1
0x86412A: push    0
0x86412C: push    ecx
0x86412D: push    eax
0x86412E: call    sub_7E2370
0x864133: add     esp, 18h
0x864136: jmp     short loc_86413A
0x864138: xor     eax, eax
0x86413A: xor     edx, edx
0x86413C: test    bl, bl
0x86413E: setnz   dl
0x864141: mov     [esp+5Ch+var_30], eax
0x864145: mov     ecx, edi
0x864147: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x86414F: add     edx, 15Eh
0x864155: mov     [eax+4], dx
0x864159: lea     eax, [esp+5Ch+var_30]
0x86415D: push    eax
0x86415E: call    sub_5B1E20
0x864163: cmp     byte ptr [esp+5Ch+var_48+3], 0
0x864168: jz      loc_86429D
0x86416E: cmp     byte ptr ds:0B43074h, 0
0x864175: jz      short loc_8641EB
0x864177: cmp     byte ptr [esp+5Ch+var_44], 0
0x86417C: jnz     loc_86421A
0x864182: cmp     byte ptr [esp+5Ch+var_40+3], 0
0x864187: jnz     short loc_8641F2
0x864189: test    bl, bl
0x86418B: jnz     short loc_8641D8
0x86418D: xor     ecx, ecx
0x86418F: cmp     byte ptr [esp+5Ch+var_48+1], cl
0x864193: setnz   cl
0x864196: lea     ecx, [ecx+ecx+148h]
0x86419D: mov     esi, ecx
0x86419F: push    10h; Size
0x8641A1: call    FormHeapAlloc
0x8641A6: add     esp, 4
0x8641A9: mov     [esp+5Ch+var_2C], eax
0x8641AD: test    eax, eax
0x8641AF: mov     [esp+5Ch+var_4], 0Ch
0x8641B7: jz      loc_86427F
0x8641BD: mov     ecx, [esp+5Ch+arg_0]
0x8641C1: push    0
0x8641C3: push    0
0x8641C5: push    0
0x8641C7: push    0
0x8641C9: push    ecx
0x8641CA: push    eax
0x8641CB: call    sub_7E2370
0x8641D0: add     esp, 18h
0x8641D3: jmp     loc_864281
0x8641D8: xor     edx, edx
0x8641DA: cmp     byte ptr [esp+5Ch+var_48+1], dl
0x8641DE: setnz   dl
0x8641E1: add     edx, 14Bh
0x8641E7: mov     esi, edx
0x8641E9: jmp     short loc_86419F
0x8641EB: cmp     byte ptr [esp+5Ch+var_44], 0
0x8641F0: jnz     short loc_86421A
0x8641F2: test    bl, bl
0x8641F4: jz      short loc_864208
0x8641F6: xor     eax, eax
0x8641F8: cmp     byte ptr [esp+5Ch+var_48+1], al
0x8641FC: setnz   al
0x8641FF: add     eax, 14Bh
0x864204: mov     esi, eax
0x864206: jmp     short loc_86419F
0x864208: xor     ecx, ecx
0x86420A: cmp     byte ptr [esp+5Ch+var_48+1], cl
0x86420E: setnz   cl
0x864211: lea     ecx, [ecx+ecx+147h]
0x864218: jmp     short loc_86419D
0x86421A: mov     ecx, ebp
0x86421C: call    sub_7ED1A0
0x864221: push    10h; Size
0x864223: mov     esi, eax
0x864225: call    FormHeapAlloc
0x86422A: add     esp, 4
0x86422D: test    esi, esi
0x86422F: jz      short loc_864244
0x864231: mov     [esp+5Ch+var_2C], eax
0x864235: test    eax, eax
0x864237: mov     [esp+5Ch+var_4], 0Ah
0x86423F: jz      short loc_864275
0x864241: push    esi
0x864242: jmp     short loc_864259
0x864244: mov     [esp+5Ch+var_30], eax
0x864248: test    eax, eax
0x86424A: mov     [esp+5Ch+var_4], 0Bh
0x864252: jz      short loc_864275
0x864254: mov     ecx, [esp+5Ch+var_2C]
0x864258: push    ecx
0x864259: mov     edx, [esp+60h+arg_0]
0x86425D: push    1
0x86425F: push    0
0x864261: push    0
0x864263: push    edx
0x864264: push    eax
0x864265: call    sub_7E2370
0x86426A: add     esp, 18h
0x86426D: mov     word ptr [eax+4], 14Dh
0x864273: jmp     short loc_864285
0x864275: xor     eax, eax
0x864277: mov     word ptr [eax+4], 14Dh
0x86427D: jmp     short loc_864285
0x86427F: xor     eax, eax
0x864281: mov     [eax+4], si
0x864285: lea     edx, [esp+5Ch+var_34]
0x864289: push    edx
0x86428A: mov     ecx, edi
0x86428C: mov     [esp+60h+var_34], eax
0x864290: mov     [esp+60h+var_4], 0FFFFFFFFh
0x864298: call    sub_5B1E20
0x86429D: mov     edi, [ebp+8Ch]
0x8642A3: test    edi, edi
0x8642A5: jle     loc_864374
0x8642AB: mov     bl, byte ptr [esp+5Ch+arg_C]
0x8642AF: mov     esi, [esp+5Ch+arg_8]
0x8642B3: mov     ebp, 0Eh
0x8642B8: jmp     short loc_8642C0
0x8642BA: align 10h
0x8642C0: mov     eax, [esp+5Ch+var_3C]
0x8642C4: test    dword ptr [eax+1Ch], 100h
0x8642CB: ja      short loc_86430B
0x8642CD: cmp     bl, 1
0x8642D0: jnz     loc_864362
0x8642D6: push    10h; Size
0x8642D8: call    FormHeapAlloc
0x8642DD: add     esp, 4
0x8642E0: mov     [esp+5Ch+arg_C], eax
0x8642E4: test    eax, eax
0x8642E6: mov     [esp+5Ch+var_4], 0Dh
0x8642EE: jz      short loc_864341
0x8642F0: mov     ecx, [esp+5Ch+arg_0]
0x8642F4: push    0
0x8642F6: push    0
0x8642F8: push    0
0x8642FA: push    152h
0x8642FF: push    ecx
0x864300: push    eax
0x864301: call    sub_7E2370
0x864306: add     esp, 18h
0x864309: jmp     short loc_864343
0x86430B: cmp     bl, 1
0x86430E: jnz     short loc_864362
0x864310: push    10h; Size
0x864312: call    FormHeapAlloc
0x864317: add     esp, 4
0x86431A: mov     [esp+5Ch+arg_C], eax
0x86431E: test    eax, eax
0x864320: mov     [esp+5Ch+var_4], ebp
0x864324: jz      short loc_864341
0x864326: mov     ecx, [esp+5Ch+arg_0]
0x86432A: push    0
0x86432C: push    0
0x86432E: push    0
0x864330: push    153h
0x864335: push    ecx
0x864336: push    eax
0x864337: call    sub_7E2370
0x86433C: add     esp, 18h
0x86433F: jmp     short loc_864343
0x864341: xor     eax, eax
0x864343: mov     ecx, [esp+5Ch+var_3C]
0x864347: lea     edx, [esp+5Ch+var_38]
0x86434B: push    edx
0x86434C: add     ecx, 28h ; '('
0x86434F: mov     [esp+60h+var_4], 0FFFFFFFFh
0x864357: mov     [esp+60h+var_38], eax
0x86435B: call    sub_5B1E20
0x864360: jmp     short loc_864366
0x864362: add     word ptr [esi], 1
0x864366: sub     edi, ds:0B42E88h
0x86436C: test    edi, edi
0x86436E: jg      loc_8642C0
0x864374: movzx   eax, word ptr ds:0B42EACh
0x86437B: mov     ecx, [esp+5Ch+var_3C]
0x86437F: shl     eax, 8
0x864382: or      eax, [esp+5Ch+arg_4]
0x864386: mov     esi, ecx
0x864388: mov     [ecx+24h], eax
0x86438B: lea     eax, [esi+28h]
0x86438E: mov     ecx, dword ptr [esp+5Ch+var_C]
0x864392: mov     large fs:0, ecx
0x864399: pop     ecx
0x86439A: pop     edi
0x86439B: pop     esi
0x86439C: pop     ebp
0x86439D: pop     ebx
0x86439E: add     esp, 48h
0x8643A1: retn    10h
