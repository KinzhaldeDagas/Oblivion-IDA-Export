0x93DB40: push    ebp
0x93DB41: mov     ebp, esp
0x93DB43: and     esp, 0FFFFFFF0h
0x93DB46: sub     esp, 164h
0x93DB4C: push    ebx
0x93DB4D: mov     ebx, [ebp+arg_4]
0x93DB50: push    esi
0x93DB51: push    edi
0x93DB52: mov     edi, [ebp+arg_0]
0x93DB55: fld     dword ptr [edi+80h]
0x93DB5B: mov     [esp+170h+var_14C], 3F800000h
0x93DB63: fst     [esp+170h+var_158]
0x93DB67: fstp    [esp+170h+var_134]
0x93DB6B: jmp     short loc_93DB70
0x93DB6D: align 10h
0x93DB70: mov     ecx, [esp+170h+var_158]
0x93DB74: lea     eax, [esp+170h+var_110]
0x93DB78: push    eax; int
0x93DB79: push    ecx; float
0x93DB7A: push    edi; int
0x93DB7B: call    sub_93D670
0x93DB80: fld     [esp+17Ch+var_14C]
0x93DB84: fsub    [esp+17Ch+var_158]
0x93DB88: mov     esi, [edi+8]
0x93DB8B: mov     eax, [edi+0Ch]
0x93DB8E: mov     edx, [esp+17Ch+var_14C]
0x93DB92: fst     [esp+17Ch+var_154]
0x93DB96: add     esp, 0Ch
0x93DB99: dec     eax
0x93DB9A: fmul    dword ptr [edi+44h]
0x93DB9D: mov     ecx, esi
0x93DB9F: mov     [esp+170h+var_138], ecx
0x93DBA3: fstp    [esp+170h+var_128]
0x93DBA7: mov     [esp+170h+var_144], edx
0x93DBAB: js      loc_93DDEF
0x93DBB1: movaps  xmm2, [esp+170h+var_20]
0x93DBB9: movaps  xmm3, [esp+170h+var_50]
0x93DBC1: inc     eax
0x93DBC2: mov     [esp+170h+var_13C], eax
0x93DBC6: movaps  xmm0, xmmword ptr [esi]
0x93DBC9: fld     [esp+170h+var_128]
0x93DBCD: fadd    dword ptr [ebx]
0x93DBCF: movaps  xmm1, xmm0
0x93DBD2: subps   xmm1, [esp+170h+var_40]
0x93DBDA: movaps  xmm4, xmm1
0x93DBDD: movaps  xmm1, xmm3
0x93DBE0: mulps   xmm1, xmm4
0x93DBE3: movaps  xmm4, xmm3
0x93DBE6: shufps  xmm4, xmm3, 0FFh
0x93DBEA: movaps  xmm5, xmm1
0x93DBED: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x93DBF1: addss   xmm5, xmm4
0x93DBF5: movaps  xmm4, xmm1
0x93DBF8: shufps  xmm4, xmm1, 55h ; 'U'
0x93DBFC: lea     eax, [esp+170h+var_150]
0x93DC00: addss   xmm4, xmm1
0x93DC04: addps   xmm4, xmm5
0x93DC07: movss   dword ptr [eax], xmm4
0x93DC0B: fcomp   [esp+170h+var_150]
0x93DC0F: fnstsw  ax
0x93DC11: test    ah, 5
0x93DC14: jnp     loc_93DDDD
0x93DC1A: subps   xmm0, [esp+170h+var_10]
0x93DC22: fld     [esp+170h+var_150]
0x93DC26: fsub    dword ptr [ebx]
0x93DC28: movaps  xmm4, xmm0
0x93DC2B: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x93DC2F: movaps  xmm1, xmm2
0x93DC32: shufps  xmm1, xmm2, 0C9h ; 'É'
0x93DC36: mulps   xmm4, xmm1
0x93DC39: movaps  xmm5, xmm0
0x93DC3C: shufps  xmm5, xmm0, 0C9h ; 'É'
0x93DC40: movaps  xmm1, xmm2
0x93DC43: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x93DC47: mulps   xmm5, xmm1
0x93DC4A: subps   xmm5, xmm4
0x93DC4D: movaps  xmm0, xmm5
0x93DC50: subps   xmm0, [esp+170h+var_30]
0x93DC58: mulps   xmm0, xmm3
0x93DC5B: movaps  xmm1, xmm0
0x93DC5E: shufps  xmm1, xmm0, 55h ; 'U'
0x93DC62: movaps  xmm4, xmm0
0x93DC65: addss   xmm1, xmm0
0x93DC69: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93DC6D: lea     edx, [esp+170h+var_148]
0x93DC71: addss   xmm4, xmm1
0x93DC75: movss   dword ptr [edx], xmm4
0x93DC79: fld     [esp+170h+var_148]
0x93DC7D: fmul    [esp+170h+var_154]
0x93DC81: faddp   st(1), st
0x93DC83: fld     [esp+170h+var_154]
0x93DC87: fmul    dword ptr [edi+18h]
0x93DC8A: fmul    [esp+170h+var_154]
0x93DC8E: fmul    dword ptr ds:0A3D65Ch
0x93DC94: fcompp
0x93DC96: fnstsw  ax
0x93DC98: test    ah, 5
0x93DC9B: jnp     loc_93DDDD
0x93DCA1: fld     [esp+170h+var_150]
0x93DCA5: fcomp   dword ptr [ebx]
0x93DCA7: fnstsw  ax
0x93DCA9: test    ah, 5
0x93DCAC: jp      short loc_93DCEA
0x93DCAE: mov     eax, [esi+0Ch]
0x93DCB1: mov     ecx, [ebp+arg_8]
0x93DCB4: mov     edx, [esp+170h+var_148]
0x93DCB8: push    ecx; int
0x93DCB9: push    edx; int
0x93DCBA: mov     edx, [esp+178h+var_158]
0x93DCBE: mov     [esp+178h+var_130], eax
0x93DCC2: mov     eax, [esp+178h+var_150]
0x93DCC6: mov     ecx, [esp+178h+var_130]
0x93DCCA: push    eax; float
0x93DCCB: mov     eax, [esp+17Ch+var_134]
0x93DCCF: push    ecx; float
0x93DCD0: push    edx; float
0x93DCD1: push    eax; int
0x93DCD2: push    esi; int
0x93DCD3: push    ebx; int
0x93DCD4: push    edi; int
0x93DCD5: call    sub_93D9D0
0x93DCDA: fstp    [esp+194h+var_14C]
0x93DCDE: mov     ecx, [esp+194h+var_138]
0x93DCE2: add     esp, 24h
0x93DCE5: jmp     loc_93DDCD
0x93DCEA: movaps  xmm0, xmmword ptr [ecx]
0x93DCED: fld     [esp+170h+var_150]
0x93DCF1: mov     edx, esi
0x93DCF3: mov     eax, [edx]
0x93DCF5: mov     dword ptr [esp+170h+var_120], eax
0x93DCF9: mov     eax, [edx+4]
0x93DCFC: mov     dword ptr [esp+170h+var_120+4], eax
0x93DD00: mov     eax, [edx+8]
0x93DD03: mov     edx, [edx+0Ch]
0x93DD06: movaps  xmmword ptr [esi], xmm0
0x93DD09: mov     dword ptr [esp+170h+var_120+8], eax
0x93DD0D: mov     eax, [esp+170h+var_150]
0x93DD11: mov     dword ptr [esp+170h+var_120+0Ch], edx
0x93DD15: movaps  xmm0, [esp+170h+var_120]
0x93DD1A: movaps  xmmword ptr [ecx], xmm0
0x93DD1D: mov     [ecx+0Ch], eax
0x93DD20: fsub    dword ptr [ebx+4]
0x93DD23: add     ecx, 10h
0x93DD26: mov     [esp+170h+var_138], ecx
0x93DD2A: fmul    dword ptr [edi+1Ch]
0x93DD2D: fadd    st, st
0x93DD2F: fld     [esp+170h+var_154]
0x93DD33: fmul    [esp+170h+var_154]
0x93DD37: fld     st(1)
0x93DD39: fcompp
0x93DD3B: fnstsw  ax
0x93DD3D: test    ah, 41h
0x93DD40: jz      loc_93DDCB
0x93DD46: fld     dword ptr [ebx]
0x93DD48: fsub    dword ptr [ebx+4]
0x93DD4B: fmul    dword ptr [edi+1Ch]
0x93DD4E: fadd    st, st
0x93DD50: fstp    [esp+170h+var_12C]
0x93DD54: fsqrt
0x93DD56: fld     [esp+170h+var_148]
0x93DD5A: fcomp   dword ptr ds:0A2FAA8h
0x93DD60: fld     [esp+170h+var_148]
0x93DD64: fmul    dword ptr [edi+1Ch]
0x93DD67: fnstsw  ax
0x93DD69: test    ah, 1
0x93DD6C: jnz     short loc_93DD74
0x93DD6E: fadd    st, st
0x93DD70: faddp   st(1), st
0x93DD72: jmp     short loc_93DD89
0x93DD74: fchs
0x93DD76: fst     [esp+170h+var_124]
0x93DD7A: fcomp   st(1)
0x93DD7C: fnstsw  ax
0x93DD7E: test    ah, 41h
0x93DD81: jnz     short loc_93DD89
0x93DD83: fstp    st
0x93DD85: fld     [esp+170h+var_124]
0x93DD89: fcom    [esp+170h+var_154]
0x93DD8D: fnstsw  ax
0x93DD8F: test    ah, 41h
0x93DD92: jz      short loc_93DDCB
0x93DD94: fld     [esp+170h+var_12C]
0x93DD98: mov     edx, [ebx+8]
0x93DD9B: fsqrt
0x93DD9D: mov     [esp+170h+var_140], edx
0x93DDA1: faddp   st(1), st
0x93DDA3: fcom    [esp+170h+var_140]
0x93DDA7: fnstsw  ax
0x93DDA9: test    ah, 41h
0x93DDAC: jz      short loc_93DDB4
0x93DDAE: fstp    st
0x93DDB0: fld     [esp+170h+var_140]
0x93DDB4: fadd    [esp+170h+var_158]
0x93DDB8: fld     [esp+170h+var_144]
0x93DDBC: fcomp   st(1)
0x93DDBE: fnstsw  ax
0x93DDC0: test    ah, 5
0x93DDC3: jnp     short loc_93DDCB
0x93DDC5: fstp    [esp+170h+var_144]
0x93DDC9: jmp     short loc_93DDCD
0x93DDCB: fstp    st
0x93DDCD: movaps  xmm2, [esp+170h+var_20]
0x93DDD5: movaps  xmm3, [esp+170h+var_50]
0x93DDDD: mov     eax, [esp+170h+var_13C]
0x93DDE1: add     esi, 10h
0x93DDE4: dec     eax
0x93DDE5: mov     [esp+170h+var_13C], eax
0x93DDE9: jnz     loc_93DBC6
0x93DDEF: fld     [esp+170h+var_158]
0x93DDF3: fcomp   [esp+170h+var_14C]
0x93DDF7: fnstsw  ax
0x93DDF9: test    ah, 41h
0x93DDFC: jz      short loc_93DE33
0x93DDFE: fld     [esp+170h+var_144]
0x93DE02: fld     [esp+170h+var_158]
0x93DE06: fucompp
0x93DE08: fnstsw  ax
0x93DE0A: test    ah, 44h
0x93DE0D: jp      short loc_93DE1E
0x93DE0F: fld     [esp+170h+var_158]
0x93DE13: fcomp   [esp+170h+var_14C]
0x93DE17: fnstsw  ax
0x93DE19: test    ah, 1
0x93DE1C: jz      short loc_93DE33
0x93DE1E: mov     eax, [esp+170h+var_158]
0x93DE22: mov     ecx, [esp+170h+var_144]
0x93DE26: mov     [esp+170h+var_134], eax
0x93DE2A: mov     [esp+170h+var_158], ecx
0x93DE2E: jmp     loc_93DB70
0x93DE33: pop     edi
0x93DE34: pop     esi
0x93DE35: pop     ebx
0x93DE36: mov     esp, ebp
0x93DE38: pop     ebp
0x93DE39: retn
