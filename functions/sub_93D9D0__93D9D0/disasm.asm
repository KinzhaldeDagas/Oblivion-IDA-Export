0x93D9D0: push    ebp
0x93D9D1: mov     ebp, esp
0x93D9D3: and     esp, 0FFFFFFF0h
0x93D9D6: sub     esp, 124h
0x93D9DC: mov     eax, [ebp+arg_C]
0x93D9DF: push    ebx
0x93D9E0: mov     ebx, [ebp+arg_8]
0x93D9E3: push    esi
0x93D9E4: mov     esi, [ebp+arg_4]
0x93D9E7: fld     dword ptr [esi+10h]
0x93D9EA: push    edi
0x93D9EB: fmul    dword ptr ds:0A41304h
0x93D9F1: mov     [esp+130h+var_11C], eax
0x93D9F5: xor     edi, edi
0x93D9F7: fstp    [esp+130h+var_118]
0x93D9FB: jmp     short loc_93DA00
0x93D9FD: align 10h
0x93DA00: fld     [ebp+arg_14]
0x93DA03: fcomp   dword ptr [esi]
0x93DA05: fnstsw  ax
0x93DA07: test    ah, 41h
0x93DA0A: jnp     loc_93DB13
0x93DA10: fld     [ebp+arg_18]
0x93DA13: fsub    [ebp+arg_14]
0x93DA16: fld     [esp+130h+var_118]
0x93DA1A: fchs
0x93DA1C: fld     st(1)
0x93DA1E: fcompp
0x93DA20: fnstsw  ax
0x93DA22: test    ah, 41h
0x93DA25: jz      loc_93DB11
0x93DA2B: fld     dword ptr [esi]
0x93DA2D: fsub    [ebp+arg_14]
0x93DA30: fdivrp  st(1), st
0x93DA32: fcom    dword ptr ds:0A2FAACh
0x93DA38: fnstsw  ax
0x93DA3A: test    ah, 41h
0x93DA3D: jz      short loc_93DA49
0x93DA3F: fstp    st
0x93DA41: fld     dword ptr ds:0A2FAACh
0x93DA47: jmp     short loc_93DA5E
0x93DA49: fcom    dword ptr ds:0A37450h
0x93DA4F: fnstsw  ax
0x93DA51: test    ah, 5
0x93DA54: jnp     short loc_93DA5E
0x93DA56: fstp    st
0x93DA58: fld     dword ptr ds:0A37450h
0x93DA5E: fld     dword ptr ds:0A2F948h
0x93DA64: mov     eax, [ebp+arg_0]
0x93DA67: fsub    st, st(1)
0x93DA69: lea     ecx, [esp+130h+var_110]
0x93DA6D: push    ecx; int
0x93DA6E: fmul    [ebp+arg_C]
0x93DA71: fxch    st(1)
0x93DA73: fmul    [ebp+arg_10]
0x93DA76: faddp   st(1), st
0x93DA78: fstp    [esp+134h+var_11C]
0x93DA7C: mov     edx, [esp+134h+var_11C]
0x93DA80: push    edx; float
0x93DA81: push    eax; int
0x93DA82: call    sub_93D670
0x93DA87: movaps  xmm0, [esp+13Ch+var_40]
0x93DA8F: movaps  xmm1, xmmword ptr [ebx]
0x93DA92: subps   xmm1, xmm0
0x93DA95: movaps  xmm2, xmm1
0x93DA98: movaps  xmm1, [esp+13Ch+var_50]
0x93DAA0: movaps  xmm0, xmm1
0x93DAA3: mulps   xmm0, xmm2
0x93DAA6: movaps  xmm2, xmm1
0x93DAA9: shufps  xmm2, xmm1, 0FFh
0x93DAAD: movaps  xmm1, xmm0
0x93DAB0: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x93DAB4: addss   xmm1, xmm2
0x93DAB8: movaps  xmm2, xmm0
0x93DABB: shufps  xmm2, xmm0, 55h ; 'U'
0x93DABF: addss   xmm2, xmm0
0x93DAC3: lea     ecx, [esp+13Ch+var_114]
0x93DAC7: addps   xmm2, xmm1
0x93DACA: movss   dword ptr [ecx], xmm2
0x93DACE: fld     [esp+13Ch+var_114]
0x93DAD2: fld     st
0x93DAD4: add     esp, 0Ch
0x93DAD7: fsub    dword ptr [esi]
0x93DAD9: fabs
0x93DADB: fcomp   [esp+130h+var_118]
0x93DADF: fnstsw  ax
0x93DAE1: test    ah, 5
0x93DAE4: jnp     short loc_93DB11
0x93DAE6: fcom    dword ptr [esi]
0x93DAE8: fnstsw  ax
0x93DAEA: test    ah, 5
0x93DAED: jp      short loc_93DAFB
0x93DAEF: mov     edx, [esp+130h+var_11C]
0x93DAF3: fstp    [ebp+arg_18]
0x93DAF6: mov     [ebp+arg_10], edx
0x93DAF9: jmp     short loc_93DB05
0x93DAFB: mov     eax, [esp+130h+var_11C]
0x93DAFF: fstp    [ebp+arg_14]
0x93DB02: mov     [ebp+arg_C], eax
0x93DB05: inc     edi
0x93DB06: cmp     edi, 0Ah
0x93DB09: jl      loc_93DA00
0x93DB0F: jmp     short loc_93DB13
0x93DB11: fstp    st
0x93DB13: fld     [esp+130h+var_11C]
0x93DB17: mov     ecx, [ebp+arg_20]
0x93DB1A: fcomp   dword ptr [ecx]
0x93DB1C: fld     [esp+130h+var_11C]
0x93DB20: fnstsw  ax
0x93DB22: test    ah, 5
0x93DB25: jp      short loc_93DB2D
0x93DB27: mov     edx, [esp+130h+var_11C]
0x93DB2B: mov     [ecx], edx
0x93DB2D: pop     edi
0x93DB2E: pop     esi
0x93DB2F: pop     ebx
0x93DB30: mov     esp, ebp
0x93DB32: pop     ebp
0x93DB33: retn
