0x56CB70: sub     esp, 10h
0x56CB73: mov     eax, ds:0B30AACh
0x56CB78: xor     eax, esp
0x56CB7A: mov     [esp+10h+var_4], eax
0x56CB7E: fldz
0x56CB80: push    ebx
0x56CB81: mov     ebx, [esp+14h+arg_C]
0x56CB85: fld1
0x56CB87: fld     qword ptr ds:0A2FC80h
0x56CB8D: push    ebp
0x56CB8E: mov     ebp, [esp+18h+arg_4]
0x56CB92: push    esi
0x56CB93: mov     esi, [esp+1Ch+arg_0]
0x56CB97: xor     eax, eax
0x56CB99: push    edi
0x56CB9A: mov     [esp+20h+var_D], 0
0x56CB9F: mov     [esp+20h+var_C], eax
0x56CBA3: mov     [esp+20h+var_8], al
0x56CBA7: xor     edx, edx
0x56CBA9: lea     edi, [ebx+esi*2]
0x56CBAC: jmp     short loc_56CBB0
0x56CBAE: fxch    st(2)
0x56CBB0: cmp     [esp+20h+arg_8], 0
0x56CBB5: jz      short loc_56CBBC
0x56CBB7: mov     ax, [edi]
0x56CBBA: jmp     short loc_56CBC5
0x56CBBC: lea     ecx, [edx+esi*2]
0x56CBBF: add     ecx, esi
0x56CBC1: mov     ax, [ebx+ecx*2]
0x56CBC5: mov     ecx, [esp+20h+arg_14]
0x56CBC9: add     ax, bp
0x56CBCC: test    ecx, ecx
0x56CBCE: movzx   eax, ax
0x56CBD1: jz      short loc_56CBDA
0x56CBD3: movzx   eax, ax
0x56CBD6: movzx   eax, word ptr [ecx+eax*2]
0x56CBDA: movzx   eax, ax
0x56CBDD: fxch    st(2)
0x56CBDF: lea     ecx, [eax+eax*2]
0x56CBE2: mov     eax, [esp+20h+arg_10]
0x56CBE6: lea     ecx, [eax+ecx*4]
0x56CBE9: fcom    dword ptr [ecx]
0x56CBEB: fnstsw  ax
0x56CBED: test    ah, 41h
0x56CBF0: jnz     short loc_56CBF9
0x56CBF2: mov     byte ptr [esp+20h+var_C], 1
0x56CBF7: jmp     short loc_56CC0B
0x56CBF9: fxch    st(1)
0x56CBFB: fcom    dword ptr [ecx]
0x56CBFD: fnstsw  ax
0x56CBFF: test    ah, 5
0x56CC02: jp      short loc_56CC09
0x56CC04: mov     byte ptr [esp+20h+var_C+1], 1
0x56CC09: fxch    st(1)
0x56CC0B: fcom    dword ptr [ecx+4]
0x56CC0E: fnstsw  ax
0x56CC10: test    ah, 41h
0x56CC13: jnz     short loc_56CC1C
0x56CC15: mov     byte ptr [esp+20h+var_C+2], 1
0x56CC1A: jmp     short loc_56CC2F
0x56CC1C: fxch    st(1)
0x56CC1E: fcom    dword ptr [ecx+4]
0x56CC21: fnstsw  ax
0x56CC23: test    ah, 5
0x56CC26: jp      short loc_56CC2D
0x56CC28: mov     byte ptr [esp+20h+var_C+3], 1
0x56CC2D: fxch    st(1)
0x56CC2F: fld     dword ptr [ecx+8]
0x56CC32: fcomp   st(3)
0x56CC34: fnstsw  ax
0x56CC36: test    ah, 41h
0x56CC39: jnz     short loc_56CC40
0x56CC3B: mov     [esp+20h+var_8], 1
0x56CC40: fcom    dword ptr [ecx]
0x56CC42: fnstsw  ax
0x56CC44: test    ah, 5
0x56CC47: jp      short loc_56CC7F
0x56CC49: fxch    st(1)
0x56CC4B: fcom    dword ptr [ecx]
0x56CC4D: fnstsw  ax
0x56CC4F: fxch    st(1)
0x56CC51: test    ah, 41h
0x56CC54: jnz     short loc_56CC7F
0x56CC56: fcom    dword ptr [ecx+4]
0x56CC59: fnstsw  ax
0x56CC5B: test    ah, 5
0x56CC5E: jp      short loc_56CC7F
0x56CC60: fxch    st(1)
0x56CC62: fcom    dword ptr [ecx+4]
0x56CC65: fnstsw  ax
0x56CC67: test    ah, 41h
0x56CC6A: jnz     short loc_56CC7D
0x56CC6C: fld     dword ptr [ecx+8]
0x56CC6F: fcomp   st(3)
0x56CC71: fnstsw  ax
0x56CC73: test    ah, 41h
0x56CC76: jnz     short loc_56CC7D
0x56CC78: mov     [esp+20h+var_D], 1
0x56CC7D: fxch    st(1)
0x56CC7F: add     edx, 1
0x56CC82: add     edi, 2
0x56CC85: cmp     edx, 3
0x56CC88: jl      loc_56CBAE
0x56CC8E: cmp     byte ptr [esp+20h+var_C], 0
0x56CC93: fstp    st
0x56CC95: pop     edi
0x56CC96: fstp    st
0x56CC98: pop     esi
0x56CC99: fstp    st
0x56CC9B: pop     ebp
0x56CC9C: pop     ebx
0x56CC9D: jz      short loc_56CCA6
0x56CC9F: cmp     byte ptr [esp+10h+var_C+1], 0
0x56CCA4: jnz     short loc_56CCB4
0x56CCA6: cmp     byte ptr [esp+10h+var_C+2], 0
0x56CCAB: jz      short loc_56CCBD
0x56CCAD: cmp     byte ptr [esp+10h+var_C+3], 0
0x56CCB2: jz      short loc_56CCBD
0x56CCB4: cmp     [esp+10h+var_8], 0
0x56CCB9: mov     al, 1
0x56CCBB: jnz     short loc_56CCC1
0x56CCBD: mov     al, [esp+10h+var_D]
0x56CCC1: mov     ecx, [esp+10h+var_4]
0x56CCC5: xor     ecx, esp
0x56CCC7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x56CCCC: add     esp, 10h
0x56CCCF: retn    18h
