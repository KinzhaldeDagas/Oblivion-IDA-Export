0x956E90: mov     edx, [esp+arg_0]
0x956E94: sub     esp, 0Ch
0x956E97: push    ebx
0x956E98: xor     ebx, ebx
0x956E9A: cmp     edx, ebx
0x956E9C: jz      loc_95700A
0x956EA2: fld     dword ptr ds:0A2FAA8h
0x956EA8: mov     ecx, [ecx+34h]
0x956EAB: fld     dword ptr [edx+10h]
0x956EAE: push    esi
0x956EAF: fsub    dword ptr [edx+0Ch]
0x956EB2: push    edi
0x956EB3: mov     edi, [edx+0B8h]
0x956EB9: xor     esi, esi
0x956EBB: cmp     edi, ecx
0x956EBD: fstp    [esp+18h+var_C]
0x956EC1: jnz     short loc_956ED1
0x956EC3: fld     [esp+18h+var_C]
0x956EC7: fmul    dword ptr ds:0AA3560h
0x956ECD: fstp    [esp+18h+var_C]
0x956ED1: fld     [esp+18h+var_C]
0x956ED5: fcomp   dword ptr ds:0A2FAA8h
0x956EDB: fnstsw  ax
0x956EDD: test    ah, 41h
0x956EE0: jnz     short loc_956EEA
0x956EE2: fstp    st
0x956EE4: xor     esi, esi
0x956EE6: fld     [esp+18h+var_C]
0x956EEA: fld     dword ptr [edx+18h]
0x956EED: lea     eax, [ecx+20h]
0x956EF0: cmp     edi, eax
0x956EF2: fsub    dword ptr [edx+14h]
0x956EF5: fstp    [esp+18h+var_8]
0x956EF9: jnz     short loc_956F09
0x956EFB: fld     [esp+18h+var_8]
0x956EFF: fmul    dword ptr ds:0AA3560h
0x956F05: fstp    [esp+18h+var_8]
0x956F09: fld     [esp+18h+var_8]
0x956F0D: fcomp   st(1)
0x956F0F: fnstsw  ax
0x956F11: test    ah, 41h
0x956F14: jnz     short loc_956F21
0x956F16: fstp    st
0x956F18: mov     esi, 1
0x956F1D: fld     [esp+18h+var_8]
0x956F21: fld     dword ptr [edx+20h]
0x956F24: add     ecx, 40h ; '@'
0x956F27: cmp     edi, ecx
0x956F29: fsub    dword ptr [edx+1Ch]
0x956F2C: fstp    [esp+18h+var_4]
0x956F30: jnz     short loc_956F40
0x956F32: fld     [esp+18h+var_4]
0x956F36: fmul    dword ptr ds:0AA3560h
0x956F3C: fstp    [esp+18h+var_4]
0x956F40: fld     [esp+18h+var_4]
0x956F44: fcomp   st(1)
0x956F46: fnstsw  ax
0x956F48: test    ah, 41h
0x956F4B: jnz     short loc_956F58
0x956F4D: fstp    st
0x956F4F: mov     esi, 2
0x956F54: fld     [esp+18h+var_4]
0x956F58: lea     eax, [esi+1]
0x956F5B: cdq
0x956F5C: mov     ecx, 3
0x956F61: idiv    ecx
0x956F63: lea     eax, [esi+2]
0x956F66: push    ebp
0x956F67: mov     edi, edx
0x956F69: cdq
0x956F6A: fld     [esp+edi*4+1Ch+var_C]
0x956F6E: idiv    ecx
0x956F70: fcomp   [esp+edx*4+1Ch+var_C]
0x956F74: fld     dword ptr ds:0A2F948h
0x956F7A: fdiv    st, st(1)
0x956F7C: mov     ecx, [esp+1Ch+arg_4]
0x956F80: mov     [ecx], esi
0x956F82: mov     esi, [esp+1Ch+arg_8]
0x956F86: mov     [esi], ebx
0x956F88: lea     ebx, [esp+edi*4+1Ch+var_C]
0x956F8C: fnstsw  ax
0x956F8E: fld     st(1)
0x956F90: test    ah, 5
0x956F93: lea     ebp, [esp+edx*4+1Ch+var_C]
0x956F97: jp      short loc_956FE2
0x956F99: fsub    dword ptr [ebp+0]
0x956F9C: mov     [ecx+4], edx
0x956F9F: fmul    st, st(1)
0x956FA1: fld     st
0x956FA3: fmul    st, st(1)
0x956FA5: fmul    st, st(1)
0x956FA7: fmul    dword ptr ds:0A45FF4h
0x956FAD: fmul    dword ptr ds:0A43328h
0x956FB3: fstp    dword ptr [esi+4]
0x956FB6: mov     [ecx+8], edi
0x956FB9: fstp    st
0x956FBB: fxch    st(1)
0x956FBD: fsub    dword ptr [ebx]
0x956FBF: fmulp   st(1), st
0x956FC1: pop     ebp
0x956FC2: pop     edi
0x956FC3: fld     st
0x956FC5: fmul    st, st(1)
0x956FC7: fmul    st, st(1)
0x956FC9: fmul    dword ptr ds:0A45FF4h
0x956FCF: fmul    dword ptr ds:0A43328h
0x956FD5: fstp    dword ptr [esi+8]
0x956FD8: pop     esi
0x956FD9: pop     ebx
0x956FDA: fstp    st
0x956FDC: add     esp, 0Ch
0x956FDF: retn    0Ch
0x956FE2: fsub    dword ptr [ebx]
0x956FE4: mov     [ecx+4], edi
0x956FE7: fmul    st, st(1)
0x956FE9: fld     st
0x956FEB: fmul    st, st(1)
0x956FED: fmul    st, st(1)
0x956FEF: fmul    dword ptr ds:0A45FF4h
0x956FF5: fmul    dword ptr ds:0A43328h
0x956FFB: fstp    dword ptr [esi+4]
0x956FFE: mov     [ecx+8], edx
0x957001: fstp    st
0x957003: fxch    st(1)
0x957005: fsub    dword ptr [ebp+0]
0x957008: jmp     short loc_956FBF
0x95700A: mov     eax, [esp+10h+arg_4]
0x95700E: mov     [eax], ebx
0x957010: mov     dword ptr [eax+4], 1
0x957017: mov     dword ptr [eax+8], 2
0x95701E: mov     eax, [esp+10h+arg_8]
0x957022: mov     [eax], ebx
0x957024: mov     [eax+4], ebx
0x957027: mov     [eax+8], ebx
0x95702A: pop     ebx
0x95702B: add     esp, 0Ch
0x95702E: retn    0Ch
