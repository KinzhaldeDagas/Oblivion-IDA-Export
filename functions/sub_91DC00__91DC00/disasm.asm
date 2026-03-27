0x91DC00: push    ebp
0x91DC01: mov     ebp, esp
0x91DC03: and     esp, 0FFFFFFF0h
0x91DC06: sub     esp, 60h
0x91DC09: movaps  xmm2, xmmword ptr [ecx]
0x91DC0C: movaps  xmm1, xmm2
0x91DC0F: mulps   xmm1, xmm2
0x91DC12: movaps  xmm0, xmm1
0x91DC15: shufps  xmm0, xmm1, 55h ; 'U'
0x91DC19: movaps  xmm3, xmm1
0x91DC1C: lea     eax, [esp+60h+var_5C]
0x91DC20: addss   xmm0, xmm1
0x91DC24: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x91DC28: addss   xmm3, xmm0
0x91DC2C: movss   dword ptr [eax], xmm3
0x91DC30: fld     [esp+60h+var_5C]
0x91DC34: fcomp   dword ptr ds:0A9D7CCh
0x91DC3A: fnstsw  ax
0x91DC3C: test    ah, 5
0x91DC3F: jnp     loc_91DEA8
0x91DC45: fld     dword ptr [ecx]
0x91DC47: mov     edx, [ebp+arg_0]
0x91DC4A: movaps  xmm6, xmmword ptr [edx]
0x91DC4D: fabs
0x91DC4F: fld     dword ptr [ecx+4]
0x91DC52: fabs
0x91DC54: movaps  xmm5, xmm6
0x91DC57: fst     [esp+60h+var_58]
0x91DC5B: fld     dword ptr [ecx+8]
0x91DC5E: addps   xmm5, xmm2
0x91DC61: fabs
0x91DC63: movaps  [esp+60h+var_50], xmm5
0x91DC68: fstp    [esp+60h+var_54]
0x91DC6C: mov     [esp+60h+var_60], 0
0x91DC73: fcomp   st(1)
0x91DC75: mov     edx, 1
0x91DC7A: mov     [esp+60h+var_5C], 2
0x91DC82: fnstsw  ax
0x91DC84: test    ah, 5
0x91DC87: jp      short loc_91DC98
0x91DC89: fstp    st
0x91DC8B: xor     edx, edx
0x91DC8D: fld     [esp+60h+var_58]
0x91DC91: mov     [esp+60h+var_60], 1
0x91DC98: fld     [esp+60h+var_54]
0x91DC9C: fcomp   st(1)
0x91DC9E: fnstsw  ax
0x91DCA0: fstp    st
0x91DCA2: test    ah, 5
0x91DCA5: mov     eax, [esp+60h+var_60]
0x91DCA8: jp      short loc_91DCB3
0x91DCAA: mov     [esp+60h+var_5C], eax
0x91DCAE: mov     eax, 2
0x91DCB3: mov     dword ptr [esp+eax*4+60h+var_40], 0
0x91DCBB: mov     eax, [esp+60h+var_5C]
0x91DCBF: mov     dword ptr [esp+60h+var_40+0Ch], 0
0x91DCC7: mov     eax, [ecx+eax*4]
0x91DCCA: mov     dword ptr [esp+edx*4+60h+var_40], eax
0x91DCCE: fld     dword ptr [ecx+edx*4]
0x91DCD1: mov     ecx, [esp+60h+var_5C]
0x91DCD5: fchs
0x91DCD7: fstp    dword ptr [esp+ecx*4+60h+var_40]
0x91DCDB: movaps  xmm4, [esp+60h+var_40]
0x91DCE0: movaps  xmm0, xmm4
0x91DCE3: mulps   xmm0, xmm4
0x91DCE6: movaps  xmm3, xmm0
0x91DCE9: shufps  xmm3, xmm0, 55h ; 'U'
0x91DCED: addss   xmm3, xmm0
0x91DCF1: movaps  xmm7, xmm0
0x91DCF4: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x91DCF8: movaps  xmm0, xmm7
0x91DCFB: addss   xmm0, xmm3
0x91DCFF: movaps  [esp+60h+var_40], xmm0
0x91DD04: rsqrtss xmm3, xmm0
0x91DD08: movss   dword ptr [esp+60h+var_40], xmm3
0x91DD0E: movaps  xmm3, [esp+60h+var_40]
0x91DD13: mulss   xmm0, xmm3
0x91DD17: mulss   xmm0, xmm3
0x91DD1B: mov     [esp+60h+var_54], 40400000h
0x91DD23: movss   xmm7, [esp+60h+var_54]
0x91DD29: subss   xmm7, xmm0
0x91DD2D: mov     [esp+60h+var_54], 3F000000h
0x91DD35: movss   xmm0, [esp+60h+var_54]
0x91DD3B: mulss   xmm0, xmm3
0x91DD3F: mulss   xmm0, xmm7
0x91DD43: movaps  xmm3, xmm0
0x91DD46: shufps  xmm3, xmm0, 0
0x91DD4A: movaps  xmm0, xmm3
0x91DD4D: mulps   xmm0, xmm4
0x91DD50: movaps  xmm3, xmm0
0x91DD53: shufps  xmm3, xmm0, 0C9h ; 'É'
0x91DD57: movaps  xmm4, xmm2
0x91DD5A: shufps  xmm4, xmm2, 0D2h ; 'Ò'
0x91DD5E: mulps   xmm4, xmm3
0x91DD61: movaps  xmm3, xmm0
0x91DD64: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x91DD68: movaps  xmm7, xmm2
0x91DD6B: shufps  xmm7, xmm2, 0C9h ; 'É'
0x91DD6F: movaps  xmm2, xmm7
0x91DD72: mulps   xmm2, xmm3
0x91DD75: subps   xmm2, xmm4
0x91DD78: movaps  xmm3, xmm1
0x91DD7B: shufps  xmm3, xmm1, 55h ; 'U'
0x91DD7F: addss   xmm3, xmm1
0x91DD83: movaps  xmm4, xmm1
0x91DD86: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x91DD8A: movaps  xmm1, xmm4
0x91DD8D: movaps  xmm4, xmmword ptr ds:0A6DFE0h
0x91DD94: addss   xmm1, xmm3
0x91DD98: movaps  [esp+60h+var_40], xmm1
0x91DD9D: sqrtss  xmm1, xmm1
0x91DDA1: movss   dword ptr [esp+60h+var_40], xmm1
0x91DDA7: movaps  xmm1, [esp+60h+var_40]
0x91DDAC: movaps  xmm3, xmm1
0x91DDAF: shufps  xmm3, xmm1, 0
0x91DDB3: movaps  xmm1, xmm3
0x91DDB6: mulps   xmm1, xmm0
0x91DDB9: mov     [esp+60h+var_54], 3F59999Ah
0x91DDC1: movss   xmm0, [esp+60h+var_54]
0x91DDC7: shufps  xmm0, xmm0, 0
0x91DDCB: subps   xmm4, xmm0
0x91DDCE: movaps  xmm3, xmm0
0x91DDD1: movaps  xmm0, xmm4
0x91DDD4: mulps   xmm3, xmm5
0x91DDD7: mulps   xmm0, xmm6
0x91DDDA: addps   xmm0, xmm3
0x91DDDD: mov     [esp+60h+var_54], 3E199998h
0x91DDE5: movss   xmm3, [esp+60h+var_54]
0x91DDEB: movaps  xmm4, xmm3
0x91DDEE: shufps  xmm4, xmm3, 0
0x91DDF2: mulps   xmm4, xmm1
0x91DDF5: movaps  xmm5, xmm0
0x91DDF8: addps   xmm5, xmm4
0x91DDFB: movaps  [esp+60h+var_40], xmm5
0x91DE00: mov     ecx, [ebp+arg_0]
0x91DE03: mov     edx, [esi]
0x91DE05: mov     [esp+60h+var_54], 0BE199998h
0x91DE0D: movss   xmm4, [esp+60h+var_54]
0x91DE13: movaps  xmm5, xmm4
0x91DE16: shufps  xmm5, xmm4, 0
0x91DE1A: mulps   xmm5, xmm1
0x91DE1D: movaps  xmm1, xmm0
0x91DE20: addps   xmm1, xmm5
0x91DE23: movaps  [esp+60h+var_30], xmm1
0x91DE28: movaps  xmm1, xmm3
0x91DE2B: shufps  xmm1, xmm3, 0
0x91DE2F: push    edi
0x91DE30: mulps   xmm1, xmm2
0x91DE33: movaps  xmm3, xmm0
0x91DE36: addps   xmm3, xmm1
0x91DE39: push    ebx
0x91DE3A: lea     eax, [esp+68h+var_50]
0x91DE3E: movaps  xmm1, xmm4
0x91DE41: push    eax
0x91DE42: shufps  xmm1, xmm4, 0
0x91DE46: mulps   xmm1, xmm2
0x91DE49: push    ecx
0x91DE4A: addps   xmm0, xmm1
0x91DE4D: mov     ecx, esi
0x91DE4F: movaps  [esp+70h+var_20], xmm3
0x91DE54: movaps  [esp+70h+var_10], xmm0
0x91DE59: call    dword ptr [edx+1Ch]
0x91DE5C: mov     edx, [esi]
0x91DE5E: push    edi
0x91DE5F: push    ebx
0x91DE60: lea     eax, [esp+68h+var_40]
0x91DE64: push    eax
0x91DE65: lea     ecx, [esp+6Ch+var_50]
0x91DE69: push    ecx
0x91DE6A: mov     ecx, esi
0x91DE6C: call    dword ptr [edx+1Ch]
0x91DE6F: mov     edx, [esi]
0x91DE71: push    edi
0x91DE72: push    ebx
0x91DE73: lea     eax, [esp+68h+var_30]
0x91DE77: push    eax
0x91DE78: lea     ecx, [esp+6Ch+var_50]
0x91DE7C: push    ecx
0x91DE7D: mov     ecx, esi
0x91DE7F: call    dword ptr [edx+1Ch]
0x91DE82: mov     edx, [esi]
0x91DE84: push    edi
0x91DE85: push    ebx
0x91DE86: lea     eax, [esp+68h+var_20]
0x91DE8A: push    eax
0x91DE8B: lea     ecx, [esp+6Ch+var_50]
0x91DE8F: push    ecx
0x91DE90: mov     ecx, esi
0x91DE92: call    dword ptr [edx+1Ch]
0x91DE95: mov     edx, [esi]
0x91DE97: push    edi
0x91DE98: push    ebx
0x91DE99: lea     eax, [esp+68h+var_10]
0x91DE9D: push    eax
0x91DE9E: lea     ecx, [esp+6Ch+var_50]
0x91DEA2: push    ecx
0x91DEA3: mov     ecx, esi
0x91DEA5: call    dword ptr [edx+1Ch]
0x91DEA8: mov     esp, ebp
0x91DEAA: pop     ebp
0x91DEAB: retn
