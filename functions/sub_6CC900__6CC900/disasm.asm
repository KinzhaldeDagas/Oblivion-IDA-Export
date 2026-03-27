0x6CC900: sub     esp, 8
0x6CC903: push    ebx
0x6CC904: push    ebp
0x6CC905: mov     ebp, ecx
0x6CC907: mov     cl, [ebp+0Dh]
0x6CC90A: push    esi
0x6CC90B: xor     edx, edx
0x6CC90D: xor     esi, esi
0x6CC90F: xor     bl, bl
0x6CC911: test    cl, cl
0x6CC913: jbe     loc_6CCAEB
0x6CC919: push    edi
0x6CC91A: mov     edi, [ebp+14h]
0x6CC91D: lea     ecx, [ecx+0]
0x6CC920: movzx   eax, bl
0x6CC923: lea     eax, [eax+eax*2]
0x6CC926: cmp     [edi+eax*8], esi
0x6CC929: lea     eax, [edi+eax*8]
0x6CC92C: jz      short loc_6CC934
0x6CC92E: test    edx, edx
0x6CC930: jnz     short loc_6CC93D
0x6CC932: mov     edx, eax
0x6CC934: add     bl, 1
0x6CC937: cmp     bl, cl
0x6CC939: jb      short loc_6CC920
0x6CC93B: jmp     short loc_6CC946
0x6CC93D: movzx   eax, bl
0x6CC940: lea     ecx, [eax+eax*2]
0x6CC943: lea     esi, [edi+ecx*8]
0x6CC946: test    edx, edx
0x6CC948: pop     edi
0x6CC949: jz      loc_6CCAEB
0x6CC94F: test    esi, esi
0x6CC951: jz      loc_6CCAEB
0x6CC957: fld     dword ptr [edx+4]
0x6CC95A: fmul    dword ptr [edx+10h]
0x6CC95D: fstp    [esp+14h+var_8]
0x6CC961: fld     dword ptr [esi+4]
0x6CC964: fmul    dword ptr [esi+10h]
0x6CC967: fstp    [esp+14h+var_4]
0x6CC96B: fldz
0x6CC96D: fld     st
0x6CC96F: fld     [esp+14h+var_8]
0x6CC973: fucom   st(1)
0x6CC975: fnstsw  ax
0x6CC977: fstp    st(1)
0x6CC979: test    ah, 44h
0x6CC97C: fld     [esp+14h+var_4]
0x6CC980: jp      short loc_6CC99E
0x6CC982: fld     st(2)
0x6CC984: fucomp  st(1)
0x6CC986: fnstsw  ax
0x6CC988: test    ah, 44h
0x6CC98B: jp      short loc_6CC99E
0x6CC98D: fstp    st
0x6CC98F: fstp    st
0x6CC991: fst     dword ptr [edx+8]
0x6CC994: fstp    dword ptr [esi+8]
0x6CC997: pop     esi
0x6CC998: pop     ebp
0x6CC999: pop     ebx
0x6CC99A: add     esp, 8
0x6CC99D: retn
0x6CC99E: mov     al, [edx+0Ch]
0x6CC9A1: fld1
0x6CC9A3: mov     bl, [esi+0Ch]
0x6CC9A6: cmp     al, bl
0x6CC9A8: jle     short loc_6CC9FC
0x6CC9AA: fcom    dword ptr [edx+10h]
0x6CC9AD: fnstsw  ax
0x6CC9AF: test    ah, 44h
0x6CC9B2: jp      short loc_6CC9C5
0x6CC9B4: fstp    st(1)
0x6CC9B6: fstp    st(1)
0x6CC9B8: fstp    dword ptr [edx+8]
0x6CC9BB: fstp    dword ptr [esi+8]
0x6CC9BE: pop     esi
0x6CC9BF: pop     ebp
0x6CC9C0: pop     ebx
0x6CC9C1: add     esp, 8
0x6CC9C4: retn
0x6CC9C5: fld     dword ptr [edx+10h]
0x6CC9C8: fld1
0x6CC9CA: fld     st
0x6CC9CC: fsubrp  st(2), st
0x6CC9CE: fxch    st(1)
0x6CC9D0: fstp    [esp+14h+var_4]
0x6CC9D4: fld     dword ptr [edx+10h]
0x6CC9D7: fmulp   st(4), st
0x6CC9D9: fld     [esp+14h+var_4]
0x6CC9DD: fmulp   st(3), st
0x6CC9DF: fld     st(2)
0x6CC9E1: fadd    st, st(4)
0x6CC9E3: fdivp   st(1), st
0x6CC9E5: fstp    [esp+14h+var_4]
0x6CC9E9: fld     [esp+14h+var_4]
0x6CC9ED: fld     st
0x6CC9EF: fmulp   st(4), st
0x6CC9F1: fxch    st(3)
0x6CC9F3: fstp    dword ptr [edx+8]
0x6CC9F6: fxch    st(2)
0x6CC9F8: fmulp   st(1), st
0x6CC9FA: jmp     short loc_6CCA74
0x6CC9FC: jge     short loc_6CCA57
0x6CC9FE: fcom    dword ptr [esi+10h]
0x6CCA01: fnstsw  ax
0x6CCA03: test    ah, 44h
0x6CCA06: jp      short loc_6CCA1B
0x6CCA08: fstp    st(1)
0x6CCA0A: fstp    st(1)
0x6CCA0C: fxch    st(1)
0x6CCA0E: fstp    dword ptr [edx+8]
0x6CCA11: fstp    dword ptr [esi+8]
0x6CCA14: pop     esi
0x6CCA15: pop     ebp
0x6CCA16: pop     ebx
0x6CCA17: add     esp, 8
0x6CCA1A: retn
0x6CCA1B: fld     dword ptr [esi+10h]
0x6CCA1E: fld1
0x6CCA20: fld     st
0x6CCA22: fsubrp  st(2), st
0x6CCA24: fxch    st(1)
0x6CCA26: fstp    [esp+14h+var_4]
0x6CCA2A: fld     [esp+14h+var_4]
0x6CCA2E: fmulp   st(4), st
0x6CCA30: fld     st(2)
0x6CCA32: fmul    dword ptr [esi+10h]
0x6CCA35: fadd    st, st(4)
0x6CCA37: fdivp   st(1), st
0x6CCA39: fstp    [esp+14h+var_4]
0x6CCA3D: fld     [esp+14h+var_4]
0x6CCA41: fld     st
0x6CCA43: fmulp   st(4), st
0x6CCA45: fxch    st(3)
0x6CCA47: fstp    dword ptr [edx+8]
0x6CCA4A: fld     dword ptr [esi+10h]
0x6CCA4D: fmulp   st(2), st
0x6CCA4F: fxch    st(1)
0x6CCA51: fmulp   st(2), st
0x6CCA53: fxch    st(1)
0x6CCA55: jmp     short loc_6CCA74
0x6CCA57: fld     st(1)
0x6CCA59: fadd    st, st(3)
0x6CCA5B: fld1
0x6CCA5D: fdivrp  st(1), st
0x6CCA5F: fstp    [esp+14h+var_4]
0x6CCA63: fld     [esp+14h+var_4]
0x6CCA67: fld     st
0x6CCA69: fmulp   st(4), st
0x6CCA6B: fxch    st(3)
0x6CCA6D: fstp    dword ptr [edx+8]
0x6CCA70: fxch    st(2)
0x6CCA72: fmulp   st(1), st
0x6CCA74: fstp    dword ptr [esi+8]
0x6CCA77: test    byte ptr [ebp+0Ch], 2
0x6CCA7B: jz      short loc_6CCA99
0x6CCA7D: fld     dword ptr [edx+8]
0x6CCA80: fld     dword ptr [esi+8]
0x6CCA83: fcompp
0x6CCA85: fnstsw  ax
0x6CCA87: test    ah, 41h
0x6CCA8A: jp      short loc_6CCA0C
0x6CCA8C: fstp    dword ptr [edx+8]
0x6CCA8F: fstp    dword ptr [esi+8]
0x6CCA92: pop     esi
0x6CCA93: pop     ebp
0x6CCA94: pop     ebx
0x6CCA95: add     esp, 8
0x6CCA98: retn
0x6CCA99: fxch    st(1)
0x6CCA9B: fcom    dword ptr [ebp+1Ch]
0x6CCA9E: fnstsw  ax
0x6CCAA0: test    ah, 5
0x6CCAA3: jp      short loc_6CCAE7
0x6CCAA5: fld     dword ptr [edx+8]
0x6CCAA8: xor     bl, bl
0x6CCAAA: fld     dword ptr [ebp+1Ch]
0x6CCAAD: fcompp
0x6CCAAF: fnstsw  ax
0x6CCAB1: test    ah, 41h
0x6CCAB4: jnz     short loc_6CCABB
0x6CCAB6: fst     dword ptr [edx+8]
0x6CCAB9: mov     bl, 1
0x6CCABB: fld     dword ptr [esi+8]
0x6CCABE: fld     dword ptr [ebp+1Ch]
0x6CCAC1: fcompp
0x6CCAC3: fnstsw  ax
0x6CCAC5: test    ah, 41h
0x6CCAC8: jnz     short loc_6CCAD7
0x6CCACA: fstp    dword ptr [esi+8]
0x6CCACD: fstp    dword ptr [esi+8]
0x6CCAD0: pop     esi
0x6CCAD1: pop     ebp
0x6CCAD2: pop     ebx
0x6CCAD3: add     esp, 8
0x6CCAD6: retn
0x6CCAD7: test    bl, bl
0x6CCAD9: fstp    st
0x6CCADB: jz      short loc_6CCAE9
0x6CCADD: fstp    dword ptr [esi+8]
0x6CCAE0: pop     esi
0x6CCAE1: pop     ebp
0x6CCAE2: pop     ebx
0x6CCAE3: add     esp, 8
0x6CCAE6: retn
0x6CCAE7: fstp    st
0x6CCAE9: fstp    st
0x6CCAEB: pop     esi
0x6CCAEC: pop     ebp
0x6CCAED: pop     ebx
0x6CCAEE: add     esp, 8
0x6CCAF1: retn
