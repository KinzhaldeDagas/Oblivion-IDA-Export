0x60BAC0: push    ebp
0x60BAC1: mov     ebp, esp
0x60BAC3: and     esp, 0FFFFFFF0h
0x60BAC6: sub     esp, 44h
0x60BAC9: mov     eax, ds:0B30AACh
0x60BACE: xor     eax, esp
0x60BAD0: mov     [esp+44h+var_4], eax
0x60BAD4: push    ebx
0x60BAD5: push    esi
0x60BAD6: mov     esi, [ebp+arg_0]
0x60BAD9: push    edi
0x60BADA: push    54h ; 'T'; Size
0x60BADC: mov     ebx, ecx
0x60BADE: mov     [esp+54h+var_38], esi
0x60BAE2: call    FormHeapAlloc
0x60BAE7: mov     ecx, [ebx+8Ch]
0x60BAED: mov     edx, [ebx+90h]
0x60BAF3: mov     [ebx+5Ch], eax
0x60BAF6: mov     eax, [ebx+88h]
0x60BAFC: mov     dword ptr [esp+54h+var_20], eax
0x60BB00: lea     eax, [esp+54h+var_20]
0x60BB04: push    eax
0x60BB05: mov     dword ptr [esp+58h+var_20+4], ecx
0x60BB09: mov     dword ptr [esp+58h+var_20+8], edx
0x60BB0D: call    sub_4BFAA0
0x60BB12: fld     dword ptr [esp+58h+var_20]
0x60BB16: mov     ecx, [ebx+5Ch]
0x60BB19: fld     qword ptr ds:0A2F920h
0x60BB1F: mov     dword ptr [ecx], 2
0x60BB25: fmul    st(1), st
0x60BB27: mov     edx, [ebx+5Ch]
0x60BB2A: fxch    st(1)
0x60BB2C: xor     eax, eax
0x60BB2E: mov     [edx+2Ch], eax
0x60BB31: fstp    dword ptr [esp+58h+var_20]
0x60BB35: mov     ecx, [ebx+5Ch]
0x60BB38: fld     dword ptr [esp+58h+var_20+4]
0x60BB3C: mov     [ecx+28h], eax
0x60BB3F: fmul    st, st(1)
0x60BB41: mov     eax, [ebx+5Ch]
0x60BB44: mov     ecx, [ebp+arg_4]
0x60BB47: mov     edx, [ecx]
0x60BB49: fstp    dword ptr [esp+58h+var_20+4]
0x60BB4D: mov     [eax+10h], edx
0x60BB50: mov     edx, [ecx+4]
0x60BB53: fmul    dword ptr [esp+58h+var_20+8]
0x60BB57: mov     [eax+14h], edx
0x60BB5A: mov     ecx, [ecx+8]
0x60BB5D: mov     [eax+18h], ecx
0x60BB60: fstp    dword ptr [esp+58h+var_20+8]
0x60BB64: fld     dword ptr [esi]
0x60BB66: add     eax, 10h
0x60BB69: fadd    dword ptr [esp+58h+var_20]
0x60BB6D: mov     eax, [ebx+5Ch]
0x60BB70: add     eax, 4
0x60BB73: add     esp, 8
0x60BB76: fstp    [esp+50h+var_34]
0x60BB7A: mov     edx, [esp+50h+var_34]
0x60BB7E: fld     dword ptr [esi+4]
0x60BB81: fadd    dword ptr [esp+50h+var_20+4]
0x60BB85: fstp    [esp+50h+var_30]
0x60BB89: mov     ecx, [esp+50h+var_30]
0x60BB8D: fld     dword ptr [esi+8]
0x60BB90: mov     [eax], edx
0x60BB92: fadd    dword ptr [esp+50h+var_20+8]
0x60BB96: mov     [eax+4], ecx
0x60BB99: mov     ecx, 9
0x60BB9E: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x60BBA3: fstp    [esp+50h+var_2C]
0x60BBA7: mov     edx, [esp+50h+var_2C]
0x60BBAB: mov     [eax+8], edx
0x60BBAE: mov     edi, [ebx+5Ch]
0x60BBB1: add     edi, 30h ; '0'
0x60BBB4: rep movsd
0x60BBB6: mov     eax, [ebx+5Ch]
0x60BBB9: mov     ecx, ds:0B3F9A8h
0x60BBBF: add     eax, 1Ch
0x60BBC2: mov     [eax], ecx
0x60BBC4: mov     edx, ds:0B3F9ACh
0x60BBCA: mov     [eax+4], edx
0x60BBCD: mov     ecx, ds:0B3F9B0h
0x60BBD3: mov     [eax+8], ecx
0x60BBD6: mov     ecx, ebx; this
0x60BBD8: call    MobileObject_GetCharProxy
0x60BBDD: test    eax, eax
0x60BBDF: jz      loc_60BCB3
0x60BBE5: mov     ecx, ebx; this
0x60BBE7: call    MobileObject_GetCharProxy
0x60BBEC: test    eax, eax
0x60BBEE: jz      short loc_60BC00
0x60BBF0: mov     eax, [eax+8]
0x60BBF3: test    eax, eax
0x60BBF5: jz      short loc_60BC00
0x60BBF7: mov     ecx, eax
0x60BBF9: call    sub_8AC0A0
0x60BBFE: jmp     short loc_60BC05
0x60BC00: mov     eax, offset stru_BA7A40
0x60BC05: movaps  xmm0, xmmword ptr [eax]
0x60BC08: movss   [esp+50h+var_34], xmm0
0x60BC0E: fld     [esp+50h+var_34]
0x60BC12: fld     dword ptr ds:0A7DEB4h
0x60BC18: movaps  [esp+50h+var_20], xmm0
0x60BC1D: fchs
0x60BC1F: fucompp
0x60BC21: fnstsw  ax
0x60BC23: test    ah, 44h
0x60BC26: jp      short loc_60BC9F
0x60BC28: mov     edx, [ebx]
0x60BC2A: mov     eax, [edx+154h]
0x60BC30: mov     ecx, ebx
0x60BC32: call    eax
0x60BC34: test    eax, eax
0x60BC36: jz      short loc_60BCB3
0x60BC38: fld     dword ptr [ebx+6Ch]
0x60BC3B: mov     edx, [ebx]
0x60BC3D: fstp    [esp+50h+var_24]
0x60BC41: mov     eax, [edx+154h]
0x60BC47: fld     dword ptr ds:0B258DCh
0x60BC4D: mov     ecx, ebx
0x60BC4F: fld     [esp+50h+var_24]
0x60BC53: fld     st
0x60BC55: fmulp   st(2), st
0x60BC57: fxch    st(1)
0x60BC59: fstp    [esp+50h+var_34]
0x60BC5D: fld     dword ptr ds:0B258E0h
0x60BC63: fmul    st, st(1)
0x60BC65: fstp    [esp+50h+var_30]
0x60BC69: fmul    dword ptr ds:0B258E4h
0x60BC6F: fstp    [esp+50h+var_2C]
0x60BC73: call    eax
0x60BC75: lea     ecx, [esp+50h+var_34]
0x60BC79: push    ecx
0x60BC7A: lea     edx, [esp+54h+var_20]
0x60BC7E: push    edx
0x60BC7F: lea     ecx, [eax+64h]
0x60BC82: call    sub_7101F0
0x60BC87: mov     ecx, [ebx+5Ch]
0x60BC8A: mov     edx, [eax]
0x60BC8C: add     ecx, 1Ch
0x60BC8F: mov     [ecx], edx
0x60BC91: mov     edx, [eax+4]
0x60BC94: mov     [ecx+4], edx
0x60BC97: mov     eax, [eax+8]
0x60BC9A: mov     [ecx+8], eax
0x60BC9D: jmp     short loc_60BCB3
0x60BC9F: mov     edx, [ebx+5Ch]
0x60BCA2: lea     ecx, [esp+50h+var_20]
0x60BCA6: push    ecx
0x60BCA7: add     edx, 1Ch
0x60BCAA: push    edx
0x60BCAB: call    sub_43F3E0
0x60BCB0: add     esp, 8
0x60BCB3: mov     esi, [esp+50h+var_38]
0x60BCB7: mov     ecx, ds:0B333A0h
0x60BCBD: push    esi
0x60BCBE: call    sub_440AC0
0x60BCC3: mov     edi, eax
0x60BCC5: cmp     edi, 1Eh; switch 31 cases
0x60BCC8: ja      short def_60BCD1; jumptable 0060BCD1 default case, cases 1,2,4,6-9,12,14,16,17,19,21-24,27,29
0x60BCCA: movzx   eax, ds:byte_60BE64[edi]
0x60BCD1: jmp     ds:jpt_60BCD1[eax*4]; switch jump
0x60BCD8: mov     ecx, [ebp+arg_4]; jumptable 0060BCD1 cases 0,3,5,10,11,13,15,18,20,25,26,28,30
0x60BCDB: push    ecx
0x60BCDC: push    esi
0x60BCDD: mov     ecx, ebx
0x60BCDF: call    sub_608DA0
0x60BCE4: mov     eax, [ebx+5Ch]; jumptable 0060BCD1 default case, cases 1,2,4,6-9,12,14,16,17,19,21-24,27,29
0x60BCE7: mov     dword ptr [ebx+60h], 1
0x60BCEE: fld     dword ptr [eax+20h]
0x60BCF1: fld     dword ptr [eax+1Ch]
0x60BCF4: mov     edx, [esi]
0x60BCF6: fld     dword ptr [eax+24h]
0x60BCF9: add     eax, 1Ch
0x60BCFC: mov     ecx, [esi+4]
0x60BCFF: fld     st(1)
0x60BD01: fmulp   st(2), st
0x60BD03: push    edi; char
0x60BD04: push    0; int
0x60BD06: sub     esp, 0Ch
0x60BD09: fld     st(2)
0x60BD0B: mov     eax, esp
0x60BD0D: fmulp   st(3), st
0x60BD0F: mov     [eax], edx
0x60BD11: mov     edx, [esi+8]
0x60BD14: fxch    st(1)
0x60BD16: mov     [eax+4], ecx
0x60BD19: faddp   st(2), st
0x60BD1B: mov     [eax+8], edx
0x60BD1E: fmul    st, st
0x60BD20: faddp   st(1), st
0x60BD22: fstp    [esp+64h+var_38]
0x60BD26: fld     [esp+64h+var_38]
0x60BD2A: call    __CIsqrt
0x60BD2F: fstp    [esp+64h+var_38]
0x60BD33: fld     [esp+64h+var_38]
0x60BD37: push    ecx
0x60BD38: mov     ecx, ebx
0x60BD3A: fstp    [esp+68h+var_68]; float
0x60BD3D: call    sub_609D50
0x60BD42: mov     ecx, [ebx+78h]
0x60BD45: test    ecx, ecx
0x60BD47: jz      short loc_60BD6E
0x60BD49: mov     eax, [ecx]
0x60BD4B: mov     edx, [eax+330h]
0x60BD51: call    edx
0x60BD53: test    eax, eax
0x60BD55: jz      short loc_60BD6E
0x60BD57: mov     ecx, [ebx+78h]
0x60BD5A: mov     eax, [ecx]
0x60BD5C: mov     edx, [eax+330h]
0x60BD62: push    0; float
0x60BD64: push    esi; int
0x60BD65: call    edx
0x60BD67: mov     ecx, eax
0x60BD69: call    sub_618120
0x60BD6E: mov     ecx, [ebx+78h]
0x60BD71: test    ecx, ecx
0x60BD73: jz      loc_60BE3B
0x60BD79: mov     eax, [ebx+7Ch]
0x60BD7C: test    eax, eax
0x60BD7E: jz      short loc_60BDB7
0x60BD80: mov     edx, [ecx+5Ch]
0x60BD83: add     ecx, 5Ch ; '\'
0x60BD86: add     eax, 18h
0x60BD89: push    eax
0x60BD8A: mov     eax, [edx+34h]
0x60BD8D: call    eax
0x60BD8F: mov     eax, [ebx+78h]
0x60BD92: mov     edx, [eax+5Ch]
0x60BD95: lea     ecx, [eax+5Ch]
0x60BD98: mov     eax, [edx+3Ch]
0x60BD9B: push    0
0x60BD9D: call    eax
0x60BD9F: mov     edx, [ebx]
0x60BDA1: mov     eax, [edx+170h]
0x60BDA7: mov     ecx, ebx
0x60BDA9: call    eax
0x60BDAB: mov     ecx, [ebx+78h]
0x60BDAE: push    eax
0x60BDAF: add     ecx, 5Ch ; '\'
0x60BDB2: call    MagicCaster_UseActiveMagicItem
0x60BDB7: mov     edx, [ebx+84h]
0x60BDBD: test    edx, edx
0x60BDBF: jz      short loc_60BDF9
0x60BDC1: mov     eax, [ebx+78h]
0x60BDC4: lea     ecx, [eax+5Ch]
0x60BDC7: mov     eax, [ecx]
0x60BDC9: add     edx, 24h ; '$'
0x60BDCC: push    edx
0x60BDCD: mov     edx, [eax+34h]
0x60BDD0: call    edx
0x60BDD2: mov     eax, [ebx+78h]
0x60BDD5: lea     ecx, [eax+5Ch]
0x60BDD8: mov     eax, [ecx]
0x60BDDA: mov     edx, [eax+3Ch]
0x60BDDD: push    0
0x60BDDF: call    edx
0x60BDE1: mov     eax, [ebx]
0x60BDE3: mov     edx, [eax+170h]
0x60BDE9: mov     ecx, ebx
0x60BDEB: call    edx
0x60BDED: mov     ecx, [ebx+78h]
0x60BDF0: push    eax
0x60BDF1: add     ecx, 5Ch ; '\'
0x60BDF4: call    MagicCaster_UseActiveMagicItem
0x60BDF9: mov     edx, [ebx+80h]
0x60BDFF: test    edx, edx
0x60BE01: jz      short loc_60BE3B
0x60BE03: mov     eax, [ebx+78h]
0x60BE06: lea     ecx, [eax+5Ch]
0x60BE09: mov     eax, [ecx]
0x60BE0B: add     edx, 18h
0x60BE0E: push    edx
0x60BE0F: mov     edx, [eax+34h]
0x60BE12: call    edx
0x60BE14: mov     eax, [ebx+78h]
0x60BE17: lea     ecx, [eax+5Ch]
0x60BE1A: mov     eax, [ecx]
0x60BE1C: mov     edx, [eax+3Ch]
0x60BE1F: push    0
0x60BE21: call    edx
0x60BE23: mov     eax, [ebx]
0x60BE25: mov     edx, [eax+170h]
0x60BE2B: mov     ecx, ebx
0x60BE2D: call    edx
0x60BE2F: mov     ecx, [ebx+78h]
0x60BE32: push    eax
0x60BE33: add     ecx, 5Ch ; '\'
0x60BE36: call    MagicCaster_UseActiveMagicItem
0x60BE3B: cmp     dword ptr [ebx+7Ch], 0
0x60BE3F: jz      short loc_60BE48
0x60BE41: mov     dword ptr [ebx+60h], 3
0x60BE48: mov     ecx, [esp+50h+var_4]
0x60BE4C: pop     edi
0x60BE4D: pop     esi
0x60BE4E: pop     ebx
0x60BE4F: xor     ecx, esp
0x60BE51: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60BE56: mov     esp, ebp
0x60BE58: pop     ebp
0x60BE59: retn    8
