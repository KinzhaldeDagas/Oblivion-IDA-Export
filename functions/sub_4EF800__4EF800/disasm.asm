0x4EF800: sub     esp, 90h
0x4EF806: push    ebx
0x4EF807: push    ebp
0x4EF808: push    esi
0x4EF809: push    edi
0x4EF80A: mov     edi, ecx
0x4EF80C: mov     ecx, ds:0B33A98h
0x4EF812: test    ecx, ecx
0x4EF814: mov     [esp+0A0h+var_70], edi
0x4EF818: jz      loc_4EFE28
0x4EF81E: cmp     [esp+0A0h+arg_14], 0
0x4EF826: jz      loc_4EFE28
0x4EF82C: fld     [esp+0A0h+arg_8]
0x4EF833: push    0; int
0x4EF835: fld     st
0x4EF837: push    edi; int
0x4EF838: fld     [esp+0A8h+arg_0]
0x4EF83F: sub     esp, 8
0x4EF842: fld     st
0x4EF844: faddp   st(2), st
0x4EF846: fld     qword ptr ds:0A2FAA0h
0x4EF84C: fmul    st(2), st
0x4EF84E: fxch    st(2)
0x4EF850: fstp    [esp+0B0h+var_80]
0x4EF854: fld     [esp+0B0h+arg_C]
0x4EF85B: fld     st
0x4EF85D: fld     [esp+0B0h+arg_4]
0x4EF864: fld     st
0x4EF866: faddp   st(2), st
0x4EF868: fxch    st(1)
0x4EF86A: fmul    st, st(4)
0x4EF86C: fstp    [esp+0B0h+var_7C]
0x4EF870: fldz
0x4EF872: fstp    [esp+0B0h+var_78]
0x4EF876: fxch    st(4)
0x4EF878: fsubrp  st(2), st
0x4EF87A: fxch    st(1)
0x4EF87C: fmul    st, st(2)
0x4EF87E: fstp    [esp+0B0h+var_90]
0x4EF882: fsubrp  st(2), st
0x4EF884: fmulp   st(1), st
0x4EF886: fstp    [esp+0B0h+var_88]
0x4EF88A: fld     [esp+0B0h+var_7C]
0x4EF88E: fstp    [esp+0B0h+var_AC]; float
0x4EF892: fld     [esp+0B0h+var_80]
0x4EF896: fstp    [esp+0B0h+var_B0]; float
0x4EF899: call    sub_44A270
0x4EF89E: mov     ebp, eax
0x4EF8A0: test    ebp, ebp
0x4EF8A2: jz      loc_4EFE28
0x4EF8A8: push    1
0x4EF8AA: mov     ecx, ebp
0x4EF8AC: call    sub_4C9B40
0x4EF8B1: test    eax, eax
0x4EF8B3: jz      loc_4EFE28
0x4EF8B9: fld     [esp+0A0h+var_90]
0x4EF8BD: xor     ecx, ecx
0x4EF8BF: fld     [esp+0A0h+var_88]
0x4EF8C3: lea     esi, [esp+0A0h+var_68]
0x4EF8C7: fldz
0x4EF8C9: fld     [esp+0A0h+arg_4]
0x4EF8D0: fld     [esp+0A0h+arg_0]
0x4EF8D7: jmp     short loc_4EF8DB
0x4EF8D9: fxch    st(2)
0x4EF8DB: mov     eax, 0AAAAAAABh
0x4EF8E0: mul     ecx
0x4EF8E2: shr     edx, 1
0x4EF8E4: lea     eax, [edx+edx*2]
0x4EF8E7: mov     ebx, ecx
0x4EF8E9: sub     ebx, eax
0x4EF8EB: test    ebx, ebx
0x4EF8ED: mov     [esp+0A0h+var_74], ebx
0x4EF8F1: fild    [esp+0A0h+var_74]
0x4EF8F5: jge     short loc_4EF8FD
0x4EF8F7: fadd    dword ptr ds:0A2FC78h
0x4EF8FD: test    edx, edx
0x4EF8FF: fmul    st, st(5)
0x4EF901: mov     [esp+0A0h+var_74], edx
0x4EF905: fadd    st, st(1)
0x4EF907: fstp    dword ptr [esi-4]
0x4EF90A: fild    [esp+0A0h+var_74]
0x4EF90E: jge     short loc_4EF916
0x4EF910: fadd    dword ptr ds:0A2FC78h
0x4EF916: fmul    st, st(4)
0x4EF918: add     ecx, 1
0x4EF91B: add     esi, 0Ch
0x4EF91E: cmp     ecx, 9
0x4EF921: fadd    st, st(2)
0x4EF923: fstp    dword ptr [esi-0Ch]
0x4EF926: fxch    st(2)
0x4EF928: fst     dword ptr [esi-8]
0x4EF92B: jb      short loc_4EF8D9
0x4EF92D: mov     ecx, ds:0B33A98h
0x4EF933: fstp    st(4)
0x4EF935: mov     ebx, [ecx+0CD8h]
0x4EF93B: fstp    st(2)
0x4EF93D: mov     edx, [esp+0A0h+var_80]
0x4EF941: fstp    st
0x4EF943: mov     ecx, [esp+0A0h+var_7C]
0x4EF947: fstp    st
0x4EF949: mov     esi, [ebx]
0x4EF94B: fstp    st
0x4EF94D: push    edi; int
0x4EF94E: sub     esp, 0Ch
0x4EF951: mov     eax, esp
0x4EF953: mov     [eax], edx
0x4EF955: mov     edx, [esp+0B0h+var_78]
0x4EF959: mov     [eax+4], ecx
0x4EF95C: push    6; int
0x4EF95E: push    1
0x4EF960: mov     ecx, ebp
0x4EF962: add     esi, 18h
0x4EF965: mov     [eax+8], edx
0x4EF968: call    sub_4C9B40
0x4EF96D: mov     ecx, eax
0x4EF96F: call    sub_4A67B0
0x4EF974: push    eax
0x4EF975: mov     eax, [esi]
0x4EF977: mov     ecx, ebx
0x4EF979: call    eax
0x4EF97B: mov     ebp, eax
0x4EF97D: xor     esi, esi
0x4EF97F: cmp     ebp, esi
0x4EF981: mov     [esp+0A0h+var_88], ebp
0x4EF985: jz      loc_4EFE28
0x4EF98B: push    8; Size
0x4EF98D: call    FormHeapAlloc
0x4EF992: add     esp, 4
0x4EF995: cmp     eax, esi
0x4EF997: jz      short loc_4EF9A4
0x4EF999: mov     [eax], esi
0x4EF99B: mov     [eax+4], esi
0x4EF99E: mov     [esp+0A0h+var_84], eax
0x4EF9A2: jmp     short loc_4EF9A8
0x4EF9A4: mov     [esp+0A0h+var_84], esi
0x4EF9A8: mov     edx, [ebp+0]
0x4EF9AB: mov     eax, [edx+24h]
0x4EF9AE: mov     ecx, ebp
0x4EF9B0: call    eax
0x4EF9B2: cmp     eax, esi
0x4EF9B4: jz      loc_4EFA81
0x4EF9BA: lea     edi, [eax+4]
0x4EF9BD: test    edi, edi
0x4EF9BF: jz      loc_4EFA81
0x4EF9C5: mov     esi, [edi]
0x4EF9C7: test    esi, esi
0x4EF9C9: jz      loc_4EFA76
0x4EF9CF: mov     edx, [esi]
0x4EF9D1: mov     eax, [edx+4]
0x4EF9D4: mov     ecx, esi
0x4EF9D6: call    eax
0x4EF9D8: mov     edx, [esi]
0x4EF9DA: mov     ebx, eax
0x4EF9DC: mov     eax, [edx+0Ch]
0x4EF9DF: mov     ecx, esi
0x4EF9E1: call    eax
0x4EF9E3: test    eax, eax
0x4EF9E5: jz      loc_4EFA76
0x4EF9EB: test    ebx, ebx
0x4EF9ED: jz      loc_4EFA76
0x4EF9F3: mov     edx, [ebx]
0x4EF9F5: mov     eax, [edx+120h]
0x4EF9FB: mov     ecx, ebx
0x4EF9FD: call    eax
0x4EF9FF: test    al, al
0x4EFA01: jz      short loc_4EFA76
0x4EFA03: mov     eax, [esp+0A0h+var_70]
0x4EFA07: mov     ecx, [esp+0A0h+var_80]
0x4EFA0B: mov     edx, [esi]
0x4EFA0D: mov     edx, [edx+18h]
0x4EFA10: push    0
0x4EFA12: push    eax
0x4EFA13: sub     esp, 0Ch
0x4EFA16: mov     eax, esp
0x4EFA18: mov     [eax], ecx
0x4EFA1A: mov     ecx, [esp+0B4h+var_7C]
0x4EFA1E: mov     [eax+4], ecx
0x4EFA21: mov     ecx, [esp+0B4h+var_78]
0x4EFA25: mov     [eax+8], ecx
0x4EFA28: mov     ecx, esi
0x4EFA2A: call    edx
0x4EFA2C: fcomp   dword ptr ds:0A2FAA8h
0x4EFA32: fnstsw  ax
0x4EFA34: test    ah, 44h
0x4EFA37: jnp     short loc_4EFA76
0x4EFA39: push    8; Size
0x4EFA3B: call    FormHeapAlloc
0x4EFA40: mov     ebp, eax
0x4EFA42: mov     [ebp+0], esi
0x4EFA45: mov     eax, [ebx]
0x4EFA47: mov     edx, [eax+120h]
0x4EFA4D: add     esp, 4
0x4EFA50: mov     ecx, ebx
0x4EFA52: call    edx
0x4EFA54: movzx   eax, al
0x4EFA57: mov     [esp+0A0h+var_90], eax
0x4EFA5B: mov     ecx, [esp+0A0h+var_84]
0x4EFA5F: push    ebp
0x4EFA60: fild    [esp+0A4h+var_90]
0x4EFA64: fdiv    qword ptr ds:0A309F0h
0x4EFA6A: fstp    dword ptr [ebp+4]
0x4EFA6D: call    BSSimpleList_PushFront
0x4EFA72: mov     ebp, [esp+0A0h+var_88]
0x4EFA76: mov     edi, [edi+4]
0x4EFA79: test    edi, edi
0x4EFA7B: jnz     loc_4EF9C5
0x4EFA81: mov     edx, [ebp+0]
0x4EFA84: mov     eax, [edx+24h]
0x4EFA87: mov     ecx, ebp
0x4EFA89: call    eax
0x4EFA8B: test    eax, eax
0x4EFA8D: jz      loc_4EFB58
0x4EFA93: lea     edi, [eax+4]
0x4EFA96: test    edi, edi
0x4EFA98: jz      loc_4EFB58
0x4EFA9E: mov     edi, edi
0x4EFAA0: mov     esi, [edi]
0x4EFAA2: test    esi, esi
0x4EFAA4: jz      loc_4EFB4D
0x4EFAAA: mov     edx, [esi]
0x4EFAAC: mov     eax, [edx+4]
0x4EFAAF: mov     ecx, esi
0x4EFAB1: call    eax
0x4EFAB3: mov     edx, [esi]
0x4EFAB5: mov     ebx, eax
0x4EFAB7: mov     eax, [edx+0Ch]
0x4EFABA: mov     ecx, esi
0x4EFABC: call    eax
0x4EFABE: test    eax, eax
0x4EFAC0: jnz     loc_4EFB4D
0x4EFAC6: test    ebx, ebx
0x4EFAC8: jz      loc_4EFB4D
0x4EFACE: mov     edx, [ebx]
0x4EFAD0: mov     eax, [edx+120h]
0x4EFAD6: mov     ecx, ebx
0x4EFAD8: call    eax
0x4EFADA: test    al, al
0x4EFADC: jz      short loc_4EFB4D
0x4EFADE: mov     eax, [esp+0A0h+var_70]
0x4EFAE2: mov     ecx, [esp+0A0h+var_80]
0x4EFAE6: mov     edx, [esi]
0x4EFAE8: mov     edx, [edx+18h]
0x4EFAEB: push    0
0x4EFAED: push    eax
0x4EFAEE: sub     esp, 0Ch
0x4EFAF1: mov     eax, esp
0x4EFAF3: mov     [eax], ecx
0x4EFAF5: mov     ecx, [esp+0B4h+var_7C]
0x4EFAF9: mov     [eax+4], ecx
0x4EFAFC: mov     ecx, [esp+0B4h+var_78]
0x4EFB00: mov     [eax+8], ecx
0x4EFB03: mov     ecx, esi
0x4EFB05: call    edx
0x4EFB07: fcomp   dword ptr ds:0A2FAA8h
0x4EFB0D: fnstsw  ax
0x4EFB0F: test    ah, 44h
0x4EFB12: jnp     short loc_4EFB4D
0x4EFB14: push    8; Size
0x4EFB16: call    FormHeapAlloc
0x4EFB1B: mov     ebp, eax
0x4EFB1D: mov     [ebp+0], esi
0x4EFB20: mov     eax, [ebx]
0x4EFB22: mov     edx, [eax+120h]
0x4EFB28: add     esp, 4
0x4EFB2B: mov     ecx, ebx
0x4EFB2D: call    edx
0x4EFB2F: movzx   eax, al
0x4EFB32: mov     [esp+0A0h+var_90], eax
0x4EFB36: mov     ecx, [esp+0A0h+var_84]
0x4EFB3A: push    ebp
0x4EFB3B: fild    [esp+0A4h+var_90]
0x4EFB3F: fdiv    qword ptr ds:0A309F0h
0x4EFB45: fstp    dword ptr [ebp+4]
0x4EFB48: call    BSSimpleList_PushFront
0x4EFB4D: mov     edi, [edi+4]
0x4EFB50: test    edi, edi
0x4EFB52: jnz     loc_4EFAA0
0x4EFB58: mov     esi, [esp+0A0h+var_84]
0x4EFB5C: test    esi, esi
0x4EFB5E: jz      loc_4EFE1F
0x4EFB64: cmp     dword ptr [esi+4], 0
0x4EFB68: jnz     short loc_4EFB73
0x4EFB6A: cmp     dword ptr [esi], 0
0x4EFB6D: jz      loc_4EFE1F
0x4EFB73: mov     edi, [esp+0A0h+arg_14]
0x4EFB7A: xor     ecx, ecx
0x4EFB7C: mov     eax, edi
0x4EFB7E: mov     edx, 4
0x4EFB83: mul     edx
0x4EFB85: seto    cl
0x4EFB88: neg     ecx
0x4EFB8A: or      ecx, eax
0x4EFB8C: push    ecx; Size
0x4EFB8D: call    FormHeapAlloc
0x4EFB92: mov     ebp, eax
0x4EFB94: lea     eax, ds:0[edi*4]
0x4EFB9B: push    eax
0x4EFB9C: push    0
0x4EFB9E: push    ebp
0x4EFB9F: mov     [esp+0B0h+var_74], ebp
0x4EFBA3: call    __memset
0x4EFBA8: add     esp, 10h
0x4EFBAB: test    edi, edi
0x4EFBAD: mov     ebx, esi
0x4EFBAF: mov     [esp+0A0h+var_8C], 0
0x4EFBB7: jbe     loc_4EFD1F
0x4EFBBD: mov     esi, [esp+0A0h+arg_10]
0x4EFBC4: add     esi, 4
0x4EFBC7: xor     eax, eax
0x4EFBC9: mov     [esi+1Ch], eax
0x4EFBCC: mov     [esi+20h], eax
0x4EFBCF: mov     [esi+24h], eax
0x4EFBD2: mov     [esi+28h], eax
0x4EFBD5: mov     [esi+2Ch], eax
0x4EFBD8: mov     [esi+30h], eax
0x4EFBDB: mov     [esi+34h], eax
0x4EFBDE: mov     [esi+38h], eax
0x4EFBE1: mov     [esi+3Ch], eax
0x4EFBE4: mov     eax, [esi-4]
0x4EFBE7: test    eax, eax
0x4EFBE9: jz      short loc_4EFBF4
0x4EFBEB: push    eax
0x4EFBEC: call    FormHeapFree
0x4EFBF1: add     esp, 4
0x4EFBF4: test    ebx, ebx
0x4EFBF6: mov     dword ptr [esi-4], 0
0x4EFBFD: jz      loc_4EFD09
0x4EFC03: mov     eax, [ebx]
0x4EFC05: test    eax, eax
0x4EFC07: jnz     short loc_4EFC27
0x4EFC09: lea     esp, [esp+0]
0x4EFC10: mov     ebx, [ebx+4]
0x4EFC13: test    ebx, ebx
0x4EFC15: jz      short loc_4EFC1F
0x4EFC17: mov     eax, [ebx]
0x4EFC19: test    eax, eax
0x4EFC1B: jz      short loc_4EFC10
0x4EFC1D: jmp     short loc_4EFC27
0x4EFC1F: test    eax, eax
0x4EFC21: jz      loc_4EFD09
0x4EFC27: mov     eax, [eax]
0x4EFC29: mov     edx, [eax]
0x4EFC2B: mov     [esp+0A0h+var_90], eax
0x4EFC2F: mov     ecx, eax
0x4EFC31: mov     eax, [edx+4]
0x4EFC34: call    eax
0x4EFC36: mov     edi, eax
0x4EFC38: test    edi, edi
0x4EFC3A: jz      short loc_4EFC43
0x4EFC3C: mov     ecx, edi
0x4EFC3E: call    sub_4AF3F0
0x4EFC43: mov     ecx, [esp+0A0h+var_90]
0x4EFC47: mov     edx, [esp+0A0h+var_8C]
0x4EFC4B: mov     [ebp+edx*4+0], ecx
0x4EFC4F: mov     eax, [esi-4]
0x4EFC52: test    eax, eax
0x4EFC54: jz      short loc_4EFC5F
0x4EFC56: push    eax
0x4EFC57: call    FormHeapFree
0x4EFC5C: add     esp, 4
0x4EFC5F: push    104h; Size
0x4EFC64: call    FormHeapAlloc
0x4EFC69: add     esp, 4
0x4EFC6C: mov     ecx, edi
0x4EFC6E: mov     [esi-4], eax
0x4EFC71: call    sub_4AF3F0
0x4EFC76: push    eax
0x4EFC77: mov     eax, [esi-4]
0x4EFC7A: push    offset aDataMeshesS; "data/meshes/%s"
0x4EFC7F: push    eax
0x4EFC80: call    __sprintf
0x4EFC85: mov     ecx, [edi+0Ch]
0x4EFC88: mov     [esi], ecx
0x4EFC8A: mov     edx, [edi]
0x4EFC8C: mov     eax, [edx+150h]
0x4EFC92: add     esp, 0Ch
0x4EFC95: mov     ecx, edi
0x4EFC97: call    eax
0x4EFC99: fstp    dword ptr [esi+4]
0x4EFC9C: mov     edx, [edi]
0x4EFC9E: mov     eax, [edx+158h]
0x4EFCA4: mov     ecx, edi
0x4EFCA6: call    eax
0x4EFCA8: fstp    dword ptr [esi+8]
0x4EFCAB: mov     edx, [edi]
0x4EFCAD: mov     eax, [edx+160h]
0x4EFCB3: mov     ecx, edi
0x4EFCB5: call    eax
0x4EFCB7: fstp    dword ptr [esi+0Ch]
0x4EFCBA: mov     edx, [edi]
0x4EFCBC: mov     eax, [edx+168h]
0x4EFCC2: mov     ecx, edi
0x4EFCC4: call    eax
0x4EFCC6: fstp    dword ptr [esi+14h]
0x4EFCC9: mov     edx, [edi]
0x4EFCCB: mov     eax, [edx+170h]
0x4EFCD1: mov     ecx, edi
0x4EFCD3: call    eax
0x4EFCD5: mov     [esi+18h], al
0x4EFCD8: mov     edx, [edi]
0x4EFCDA: mov     eax, [edx+178h]
0x4EFCE0: mov     ecx, edi
0x4EFCE2: call    eax
0x4EFCE4: mov     [esi+19h], al
0x4EFCE7: mov     edx, [edi]
0x4EFCE9: mov     eax, [edx+180h]
0x4EFCEF: mov     ecx, edi
0x4EFCF1: call    eax
0x4EFCF3: mov     edi, [esp+0A0h+arg_14]
0x4EFCFA: mov     [esi+1Ah], al
0x4EFCFD: fld     dword ptr ds:0B080DCh
0x4EFD03: fstp    dword ptr [esi+10h]
0x4EFD06: mov     ebx, [ebx+4]
0x4EFD09: mov     eax, [esp+0A0h+var_8C]
0x4EFD0D: add     eax, 1
0x4EFD10: add     esi, 44h ; 'D'
0x4EFD13: cmp     eax, edi
0x4EFD15: mov     [esp+0A0h+var_8C], eax
0x4EFD19: jb      loc_4EFBC7
0x4EFD1F: mov     ebx, [esp+0A0h+arg_10]
0x4EFD26: add     ebx, 20h ; ' '
0x4EFD29: lea     edi, [esp+0A0h+var_6C]
0x4EFD2D: mov     [esp+0A0h+var_88], ebx
0x4EFD31: mov     [esp+0A0h+var_90], 9
0x4EFD39: lea     esp, [esp+0]
0x4EFD40: xor     esi, esi
0x4EFD42: cmp     [esp+0A0h+arg_14], esi
0x4EFD49: jbe     short loc_4EFDB1
0x4EFD4B: mov     ecx, [esp+0A0h+arg_10]
0x4EFD52: add     ecx, 4
0x4EFD55: mov     [esp+0A0h+var_8C], ecx
0x4EFD59: lea     esp, [esp+0]
0x4EFD60: cmp     dword ptr [ebp+esi*4+0], 0
0x4EFD65: jz      short loc_4EFD9D
0x4EFD67: mov     edx, [esp+0A0h+var_8C]
0x4EFD6B: cmp     dword ptr [edx], 0
0x4EFD6E: jz      short loc_4EFD9D
0x4EFD70: mov     eax, [esp+0A0h+var_70]
0x4EFD74: mov     ecx, [ebp+esi*4+0]
0x4EFD78: mov     ebp, [edi]
0x4EFD7A: mov     edx, [ecx]
0x4EFD7C: mov     edx, [edx+18h]
0x4EFD7F: push    1
0x4EFD81: push    eax
0x4EFD82: sub     esp, 0Ch
0x4EFD85: mov     eax, esp
0x4EFD87: mov     [eax], ebp
0x4EFD89: mov     ebp, [edi+4]
0x4EFD8C: mov     [eax+4], ebp
0x4EFD8F: mov     ebp, [edi+8]
0x4EFD92: mov     [eax+8], ebp
0x4EFD95: call    edx
0x4EFD97: fstp    dword ptr [ebx]
0x4EFD99: mov     ebp, [esp+0A0h+var_74]
0x4EFD9D: add     [esp+0A0h+var_8C], 44h ; 'D'
0x4EFDA2: add     esi, 1
0x4EFDA5: add     ebx, 44h ; 'D'
0x4EFDA8: cmp     esi, [esp+0A0h+arg_14]
0x4EFDAF: jb      short loc_4EFD60
0x4EFDB1: mov     ebx, [esp+0A0h+var_88]
0x4EFDB5: add     ebx, 4
0x4EFDB8: add     edi, 0Ch
0x4EFDBB: sub     [esp+0A0h+var_90], 1
0x4EFDC0: mov     [esp+0A0h+var_88], ebx
0x4EFDC4: jnz     loc_4EFD40
0x4EFDCA: push    ebp
0x4EFDCB: call    FormHeapFree
0x4EFDD0: mov     edi, [esp+0A4h+var_84]
0x4EFDD4: add     esp, 4
0x4EFDD7: mov     esi, edi
0x4EFDD9: lea     esp, [esp+0]
0x4EFDE0: mov     eax, [esi]
0x4EFDE2: test    eax, eax
0x4EFDE4: jz      short loc_4EFDF6
0x4EFDE6: mov     esi, [esi+4]
0x4EFDE9: push    eax
0x4EFDEA: call    FormHeapFree
0x4EFDEF: add     esp, 4
0x4EFDF2: test    esi, esi
0x4EFDF4: jnz     short loc_4EFDE0
0x4EFDF6: cmp     dword ptr [edi+4], 0
0x4EFDFA: jz      short loc_4EFE16
0x4EFDFC: lea     esp, [esp+0]
0x4EFE00: mov     eax, [edi+4]
0x4EFE03: mov     esi, [eax+4]
0x4EFE06: push    eax
0x4EFE07: call    FormHeapFree
0x4EFE0C: add     esp, 4
0x4EFE0F: test    esi, esi
0x4EFE11: mov     [edi+4], esi
0x4EFE14: jnz     short loc_4EFE00
0x4EFE16: mov     dword ptr [edi], 0
0x4EFE1C: push    edi
0x4EFE1D: jmp     short loc_4EFE20
0x4EFE1F: push    esi
0x4EFE20: call    FormHeapFree
0x4EFE25: add     esp, 4
0x4EFE28: pop     edi
0x4EFE29: pop     esi
0x4EFE2A: pop     ebp
0x4EFE2B: pop     ebx
0x4EFE2C: add     esp, 90h
0x4EFE32: retn    18h
