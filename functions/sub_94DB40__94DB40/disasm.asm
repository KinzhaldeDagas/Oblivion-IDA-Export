0x94DB40: push    ebp
0x94DB41: mov     ebp, esp
0x94DB43: and     esp, 0FFFFFFF0h
0x94DB46: sub     esp, 54h
0x94DB49: push    ebx
0x94DB4A: mov     ebx, [ebp+arg_0]
0x94DB4D: mov     eax, [ebx+8]
0x94DB50: push    esi
0x94DB51: mov     esi, ecx
0x94DB53: push    edi
0x94DB54: mov     edi, [esi+80h]
0x94DB5A: and     eax, 3FFFFFFFh
0x94DB5F: cmp     eax, edi
0x94DB61: jge     short loc_94DB77
0x94DB63: add     eax, eax
0x94DB65: cmp     edi, eax
0x94DB67: jl      short loc_94DB6B
0x94DB69: mov     eax, edi
0x94DB6B: push    10h
0x94DB6D: push    eax
0x94DB6E: push    ebx
0x94DB6F: call    sub_8A6E40
0x94DB74: add     esp, 0Ch
0x94DB77: mov     [ebx+4], edi
0x94DB7A: fld     dword ptr [esi+70h]
0x94DB7D: fabs
0x94DB7F: lea     edi, [esi+70h]
0x94DB82: fld     dword ptr [edi+4]
0x94DB85: fabs
0x94DB87: xor     ecx, ecx
0x94DB89: fst     [esp+60h+var_4C]
0x94DB8D: fld     dword ptr [edi+8]
0x94DB90: mov     edx, 1
0x94DB95: fabs
0x94DB97: mov     [esp+60h+var_44], 2
0x94DB9F: fstp    [esp+60h+var_48]
0x94DBA3: fcomp   st(1)
0x94DBA5: fnstsw  ax
0x94DBA7: test    ah, 5
0x94DBAA: jp      short loc_94DBB9
0x94DBAC: fstp    st
0x94DBAE: xor     edx, edx
0x94DBB0: fld     [esp+60h+var_4C]
0x94DBB4: mov     ecx, 1
0x94DBB9: fld     [esp+60h+var_48]
0x94DBBD: fcomp   st(1)
0x94DBBF: fnstsw  ax
0x94DBC1: fstp    st
0x94DBC3: test    ah, 5
0x94DBC6: jp      short loc_94DBD1
0x94DBC8: mov     eax, ecx
0x94DBCA: mov     ecx, 2
0x94DBCF: jmp     short loc_94DBD5
0x94DBD1: mov     eax, [esp+60h+var_44]
0x94DBD5: mov     dword ptr [esp+ecx*4+60h+var_40], 0
0x94DBDD: mov     dword ptr [esp+60h+var_40+0Ch], 0
0x94DBE5: mov     ecx, [edi+eax*4]
0x94DBE8: mov     dword ptr [esp+edx*4+60h+var_40], ecx
0x94DBEC: fld     dword ptr [edi+edx*4]
0x94DBEF: mov     edx, [esi+84h]
0x94DBF5: fchs
0x94DBF7: fstp    dword ptr [esp+eax*4+60h+var_40]
0x94DBFB: movaps  xmm2, [esp+60h+var_40]
0x94DC00: movaps  xmm0, xmm2
0x94DC03: mulps   xmm0, xmm2
0x94DC06: movaps  xmm1, xmm0
0x94DC09: shufps  xmm1, xmm0, 55h ; 'U'
0x94DC0D: addss   xmm1, xmm0
0x94DC11: movaps  xmm3, xmm0
0x94DC14: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x94DC18: movaps  xmm0, xmm3
0x94DC1B: addss   xmm0, xmm1
0x94DC1F: movaps  [esp+60h+var_10], xmm0
0x94DC24: rsqrtss xmm1, xmm0
0x94DC28: movss   dword ptr [esp+60h+var_10], xmm1
0x94DC2E: movaps  xmm1, [esp+60h+var_10]
0x94DC33: mulss   xmm0, xmm1
0x94DC37: mulss   xmm0, xmm1
0x94DC3B: mov     [esp+60h+var_44], 40400000h
0x94DC43: movss   xmm3, [esp+60h+var_44]
0x94DC49: subss   xmm3, xmm0
0x94DC4D: mov     [esp+60h+var_44], 3F000000h
0x94DC55: movss   xmm0, [esp+60h+var_44]
0x94DC5B: mulss   xmm0, xmm1
0x94DC5F: mulss   xmm0, xmm3
0x94DC63: movaps  xmm1, xmm0
0x94DC66: push    edx; float
0x94DC67: lea     eax, [esp+64h+var_40]
0x94DC6B: shufps  xmm1, xmm0, 0
0x94DC6F: mulps   xmm1, xmm2
0x94DC72: push    eax; int
0x94DC73: lea     ecx, [esp+68h+var_30]
0x94DC77: movaps  [esp+68h+var_40], xmm1
0x94DC7C: call    sub_8B1B00
0x94DC81: fild    dword ptr [esi+80h]
0x94DC87: push    ecx
0x94DC88: lea     ecx, [esp+64h+var_20]
0x94DC8C: fdivr   dword ptr ds:0A46B14h
0x94DC92: fstp    [esp+64h+var_64]; float
0x94DC95: push    edi; int
0x94DC96: call    sub_8B1B00
0x94DC9B: fld     dword ptr [esp+60h+var_30+0Ch]
0x94DC9F: fmul    dword ptr [esp+60h+var_30+0Ch]
0x94DCA3: movaps  xmm0, [esp+60h+var_30]
0x94DCA8: movaps  xmm1, xmmword ptr [edi]
0x94DCAB: movaps  [esp+60h+var_10], xmm0
0x94DCB0: fadd    st, st
0x94DCB2: mov     dword ptr [esp+60h+var_10+0Ch], 0
0x94DCBA: movaps  xmm2, [esp+60h+var_10]
0x94DCBF: movaps  xmm0, xmm2
0x94DCC2: fsub    dword ptr ds:0A2F948h
0x94DCC8: mulps   xmm0, xmm1
0x94DCCB: movaps  xmm4, xmm0
0x94DCCE: shufps  xmm4, xmm0, 55h ; 'U'
0x94DCD2: fstp    [esp+60h+var_44]
0x94DCD6: movss   xmm3, [esp+60h+var_44]
0x94DCDC: addss   xmm4, xmm0
0x94DCE0: movaps  xmm5, xmm0
0x94DCE3: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x94DCE7: addss   xmm5, xmm4
0x94DCEB: lea     ecx, [esp+60h+var_44]
0x94DCEF: movss   dword ptr [ecx], xmm5
0x94DCF3: fld     [esp+60h+var_44]
0x94DCF7: fadd    st, st
0x94DCF9: movaps  xmm5, xmm1
0x94DCFC: movaps  xmm6, xmm2
0x94DCFF: shufps  xmm5, xmm1, 0C9h ; 'É'
0x94DD03: fstp    [esp+60h+var_44]
0x94DD07: movss   xmm0, [esp+60h+var_44]
0x94DD0D: fld     dword ptr [esp+60h+var_30+0Ch]
0x94DD11: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x94DD15: fadd    st, st
0x94DD17: mulps   xmm6, xmm5
0x94DD1A: fstp    [esp+60h+var_44]
0x94DD1E: movss   xmm4, [esp+60h+var_44]
0x94DD24: mov     eax, [esi+80h]
0x94DD2A: movaps  xmm5, xmm1
0x94DD2D: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x94DD31: movaps  xmm7, xmm2
0x94DD34: shufps  xmm7, xmm2, 0C9h ; 'É'
0x94DD38: mulps   xmm7, xmm5
0x94DD3B: movaps  xmm5, xmm4
0x94DD3E: shufps  xmm5, xmm4, 0
0x94DD42: movaps  xmm4, xmm0
0x94DD45: shufps  xmm4, xmm0, 0
0x94DD49: movaps  xmm0, xmm3
0x94DD4C: shufps  xmm0, xmm3, 0
0x94DD50: mulps   xmm0, xmm1
0x94DD53: subps   xmm7, xmm6
0x94DD56: mulps   xmm4, xmm2
0x94DD59: xor     edx, edx
0x94DD5B: test    eax, eax
0x94DD5D: mulps   xmm5, xmm7
0x94DD60: addps   xmm0, xmm4
0x94DD63: addps   xmm0, xmm5
0x94DD66: jle     loc_94DE75
0x94DD6C: xor     ecx, ecx
0x94DD6E: mov     edi, edi
0x94DD70: mov     eax, [ebx]
0x94DD72: movaps  xmm1, xmmword ptr [esi+60h]
0x94DD76: movaps  xmmword ptr [eax+ecx], xmm1
0x94DD7A: mov     eax, [esi+88h]
0x94DD80: mov     [esp+60h+var_44], eax
0x94DD84: movss   xmm1, [esp+60h+var_44]
0x94DD8A: mov     eax, [ebx]
0x94DD8C: movaps  xmm2, xmm1
0x94DD8F: shufps  xmm2, xmm1, 0
0x94DD93: movaps  xmm1, xmmword ptr [eax+ecx]
0x94DD97: add     eax, ecx
0x94DD99: mulps   xmm2, xmm0
0x94DD9C: addps   xmm1, xmm2
0x94DD9F: movaps  xmmword ptr [eax], xmm1
0x94DDA2: fld     dword ptr [esp+60h+var_20+0Ch]
0x94DDA6: fmul    dword ptr [esp+60h+var_20+0Ch]
0x94DDAA: movaps  xmm1, [esp+60h+var_20]
0x94DDAF: movaps  [esp+60h+var_10], xmm1
0x94DDB4: mov     dword ptr [esp+60h+var_10+0Ch], 0
0x94DDBC: movaps  xmm2, [esp+60h+var_10]
0x94DDC1: fadd    st, st
0x94DDC3: movaps  xmm1, xmm2
0x94DDC6: mulps   xmm1, xmm0
0x94DDC9: fsub    dword ptr ds:0A2F948h
0x94DDCF: movaps  xmm4, xmm1
0x94DDD2: shufps  xmm4, xmm1, 55h ; 'U'
0x94DDD6: addss   xmm4, xmm1
0x94DDDA: movaps  xmm5, xmm1
0x94DDDD: fstp    [esp+60h+var_48]
0x94DDE1: movss   xmm3, [esp+60h+var_48]
0x94DDE7: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x94DDEB: addss   xmm5, xmm4
0x94DDEF: lea     eax, [esp+60h+var_4C]
0x94DDF3: movss   dword ptr [eax], xmm5
0x94DDF7: fld     [esp+60h+var_4C]
0x94DDFB: mov     eax, [esi+80h]
0x94DE01: fadd    st, st
0x94DE03: movaps  xmm5, xmm0
0x94DE06: shufps  xmm5, xmm0, 0C9h ; 'É'
0x94DE0A: fstp    [esp+60h+var_48]
0x94DE0E: movaps  xmm6, xmm2
0x94DE11: fld     dword ptr [esp+60h+var_20+0Ch]
0x94DE15: movss   xmm1, [esp+60h+var_48]
0x94DE1B: fadd    st, st
0x94DE1D: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x94DE21: mulps   xmm6, xmm5
0x94DE24: movaps  xmm5, xmm0
0x94DE27: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x94DE2B: fstp    [esp+60h+var_48]
0x94DE2F: movss   xmm4, [esp+60h+var_48]
0x94DE35: movaps  xmm7, xmm2
0x94DE38: shufps  xmm7, xmm2, 0C9h ; 'É'
0x94DE3C: mulps   xmm7, xmm5
0x94DE3F: movaps  xmm5, xmm4
0x94DE42: shufps  xmm5, xmm4, 0
0x94DE46: movaps  xmm4, xmm1
0x94DE49: shufps  xmm4, xmm1, 0
0x94DE4D: movaps  xmm1, xmm3
0x94DE50: shufps  xmm1, xmm3, 0
0x94DE54: mulps   xmm1, xmm0
0x94DE57: mulps   xmm4, xmm2
0x94DE5A: inc     edx
0x94DE5B: subps   xmm7, xmm6
0x94DE5E: addps   xmm1, xmm4
0x94DE61: add     ecx, 10h
0x94DE64: cmp     edx, eax
0x94DE66: mulps   xmm5, xmm7
0x94DE69: movaps  xmm0, xmm1
0x94DE6C: addps   xmm0, xmm5
0x94DE6F: jl      loc_94DD70
0x94DE75: pop     edi
0x94DE76: pop     esi
0x94DE77: pop     ebx
0x94DE78: mov     esp, ebp
0x94DE7A: pop     ebp
0x94DE7B: retn    4
