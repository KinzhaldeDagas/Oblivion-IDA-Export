0x996BDE: unpcklpd xmm0, xmm0
0x996BE2: movapd  xmm1, ds:xmmword_AAE3C0
0x996BEA: movapd  xmm6, ds:xmmword_AAE3A0
0x996BF2: movapd  xmm2, ds:xmmword_AAE3D0
0x996BFA: movapd  xmm3, ds:xmmword_AAE3E0
0x996C02: pextrw  eax, xmm0, 3
0x996C07: and     eax, 7FFFh
0x996C0C: mov     edx, 408Fh
0x996C11: sub     edx, eax
0x996C13: sub     eax, 3C90h
0x996C18: or      edx, eax
0x996C1A: cmp     edx, 80000000h
0x996C20: jnb     start_15___RETURN_ONE_0
0x996C26: mulpd   xmm1, xmm0
0x996C2A: addpd   xmm1, xmm6
0x996C2E: movapd  xmm7, xmm1
0x996C32: subpd   xmm1, xmm6
0x996C36: mulpd   xmm2, xmm1
0x996C3A: movapd  xmm4, ds:xmmword_AAE3F0
0x996C42: mulpd   xmm3, xmm1
0x996C46: movapd  xmm5, ds:xmmword_AAE400
0x996C4E: subpd   xmm0, xmm2
0x996C52: movd    eax, xmm7
0x996C56: mov     ecx, eax
0x996C58: and     ecx, 3Fh
0x996C5B: shl     ecx, 4
0x996C5E: sar     eax, 6
0x996C61: mov     edx, eax
0x996C63: subpd   xmm0, xmm3
0x996C67: movapd  xmm2, xmmword ptr [ecx+0AAE410h]
0x996C6F: mulpd   xmm4, xmm0
0x996C73: movapd  xmm1, xmm0
0x996C77: mulpd   xmm0, xmm0
0x996C7B: addpd   xmm5, xmm4
0x996C7F: mulsd   xmm0, xmm0
0x996C83: addsd   xmm1, xmm2
0x996C87: unpckhpd xmm2, xmm2
0x996C8B: movdqa  xmm6, ds:xmmword_AAE380
0x996C93: pand    xmm7, xmm6
0x996C97: movdqa  xmm6, ds:xmmword_AAE390
0x996C9F: paddq   xmm7, xmm6
0x996CA3: psllq   xmm7, 2Eh ; '.'
0x996CA8: mulpd   xmm0, xmm5
0x996CAC: addsd   xmm1, xmm0
0x996CB0: orpd    xmm2, xmm7
0x996CB4: unpckhpd xmm0, xmm0
0x996CB8: addsd   xmm0, xmm1
0x996CBC: add     edx, 37Eh
0x996CC2: cmp     edx, 77Ch
0x996CC8: ja      short start_15___ADJUST
0x996CCA: mulsd   xmm0, xmm2
0x996CCE: sub     esp, 10h
0x996CD1: addsd   xmm0, xmm2
0x996CD5: movlpd  [esp+10h+var_C], xmm0
0x996CDB: fld     [esp+10h+var_C]
0x996CDF: add     esp, 10h
0x996CE2: retn
