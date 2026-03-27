0x92DCA0: push    ebp
0x92DCA1: mov     ebp, esp
0x92DCA3: and     esp, 0FFFFFFF0h
0x92DCA6: sub     esp, 34h
0x92DCA9: push    ebx
0x92DCAA: push    esi
0x92DCAB: push    edi
0x92DCAC: mov     edi, [ebp+arg_4]
0x92DCAF: mov     edx, [edi]
0x92DCB1: mov     ebx, [edi+4]
0x92DCB4: dec     ebx
0x92DCB5: mov     esi, edx
0x92DCB7: mov     [esp+40h+var_30], esi
0x92DCBB: js      loc_92DDF5
0x92DCC1: lea     ecx, [esi-10h]
0x92DCC4: mov     [esp+40h+var_34], ecx
0x92DCC8: jmp     short loc_92DCD0
0x92DCCA: mov     ecx, [esp+40h+var_34]
0x92DCCE: mov     edi, edi
0x92DCD0: cmp     ecx, [edi]
0x92DCD2: jb      loc_92DD54
0x92DCD8: fld     dword ptr [edx]
0x92DCDA: fsub    dword ptr ds:0A34BA0h
0x92DCE0: fstp    [esp+40h+var_2C]
0x92DCE4: fld     dword ptr [ecx]
0x92DCE6: fcomp   [esp+40h+var_2C]
0x92DCEA: fnstsw  ax
0x92DCEC: test    ah, 5
0x92DCEF: jnp     short loc_92DD54
0x92DCF1: fld     dword ptr [ecx]
0x92DCF3: lea     eax, [esp+40h+var_28]
0x92DCF7: fsub    dword ptr [edx]
0x92DCF9: fstp    dword ptr [esp+40h+var_20]
0x92DCFD: fld     dword ptr [ecx+4]
0x92DD00: fsub    dword ptr [edx+4]
0x92DD03: fstp    dword ptr [esp+40h+var_20+4]
0x92DD07: fld     dword ptr [ecx+8]
0x92DD0A: fsub    dword ptr [edx+8]
0x92DD0D: fstp    dword ptr [esp+40h+var_20+8]
0x92DD11: fld     dword ptr [ecx+0Ch]
0x92DD14: fsub    dword ptr [edx+0Ch]
0x92DD17: fstp    dword ptr [esp+40h+var_20+0Ch]
0x92DD1B: movaps  xmm0, [esp+40h+var_20]
0x92DD20: mulps   xmm0, xmm0
0x92DD23: movaps  xmm1, xmm0
0x92DD26: shufps  xmm1, xmm0, 55h ; 'U'
0x92DD2A: movaps  xmm2, xmm0
0x92DD2D: addss   xmm1, xmm0
0x92DD31: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92DD35: addss   xmm2, xmm1
0x92DD39: movss   dword ptr [eax], xmm2
0x92DD3D: fld     [esp+40h+var_28]
0x92DD41: fcomp   [ebp+arg_0]
0x92DD44: fnstsw  ax
0x92DD46: test    ah, 5
0x92DD49: jnp     short loc_92DD70
0x92DD4B: mov     eax, [edi]
0x92DD4D: sub     ecx, 10h
0x92DD50: cmp     ecx, eax
0x92DD52: jnb     short loc_92DCE4
0x92DD54: mov     ecx, [esp+40h+var_34]
0x92DD58: movaps  xmm0, xmmword ptr [edx]
0x92DD5B: mov     eax, esi
0x92DD5D: add     esi, 10h
0x92DD60: add     ecx, 10h
0x92DD63: mov     [esp+40h+var_30], esi
0x92DD67: mov     [esp+40h+var_34], ecx
0x92DD6B: movaps  xmmword ptr [eax], xmm0
0x92DD6E: jmp     short loc_92DDE7
0x92DD70: lea     edi, [ebx-1]
0x92DD73: test    edi, edi
0x92DD75: jl      short loc_92DDE4
0x92DD77: lea     esi, [edx+18h]
0x92DD7A: lea     ebx, [ebx+0]
0x92DD80: fld     dword ptr [ecx]
0x92DD82: lea     eax, [esp+40h+var_24]
0x92DD86: fsub    dword ptr [esi-8]
0x92DD89: fstp    dword ptr [esp+40h+var_10]
0x92DD8D: fld     dword ptr [ecx+4]
0x92DD90: fsub    dword ptr [esi-4]
0x92DD93: fstp    dword ptr [esp+40h+var_10+4]
0x92DD97: fld     dword ptr [ecx+8]
0x92DD9A: fsub    dword ptr [esi]
0x92DD9C: fstp    dword ptr [esp+40h+var_10+8]
0x92DDA0: fld     dword ptr [ecx+0Ch]
0x92DDA3: fsub    dword ptr [esi+4]
0x92DDA6: fstp    dword ptr [esp+40h+var_10+0Ch]
0x92DDAA: movaps  xmm0, [esp+40h+var_10]
0x92DDAF: mulps   xmm0, xmm0
0x92DDB2: movaps  xmm1, xmm0
0x92DDB5: shufps  xmm1, xmm0, 55h ; 'U'
0x92DDB9: movaps  xmm2, xmm0
0x92DDBC: addss   xmm1, xmm0
0x92DDC0: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92DDC4: addss   xmm2, xmm1
0x92DDC8: movss   dword ptr [eax], xmm2
0x92DDCC: fld     [esp+40h+var_24]
0x92DDD0: fcomp   [ebp+arg_0]
0x92DDD3: fnstsw  ax
0x92DDD5: test    ah, 5
0x92DDD8: jp      short loc_92DDE4
0x92DDDA: add     edx, 10h
0x92DDDD: add     esi, 10h
0x92DDE0: dec     ebx
0x92DDE1: dec     edi
0x92DDE2: jns     short loc_92DD80
0x92DDE4: mov     edi, [ebp+arg_4]
0x92DDE7: mov     esi, [esp+40h+var_30]
0x92DDEB: add     edx, 10h
0x92DDEE: dec     ebx
0x92DDEF: jns     loc_92DCCA
0x92DDF5: mov     eax, [edi]
0x92DDF7: mov     ecx, [ebp+arg_8]
0x92DDFA: sub     esi, eax
0x92DDFC: sar     esi, 4
0x92DDFF: mov     [ecx], esi
0x92DE01: mov     eax, [edi+8]
0x92DE04: and     eax, 3FFFFFFFh
0x92DE09: cmp     eax, esi
0x92DE0B: jge     short loc_92DE21
0x92DE0D: add     eax, eax
0x92DE0F: cmp     esi, eax
0x92DE11: jl      short loc_92DE15
0x92DE13: mov     eax, esi
0x92DE15: push    10h
0x92DE17: push    eax
0x92DE18: push    edi
0x92DE19: call    sub_8A6E40
0x92DE1E: add     esp, 0Ch
0x92DE21: mov     [edi+4], esi
0x92DE24: pop     edi
0x92DE25: pop     esi
0x92DE26: pop     ebx
0x92DE27: mov     esp, ebp
0x92DE29: pop     ebp
0x92DE2A: retn
