0x88D3D0: push    ebp
0x88D3D1: mov     ebp, esp
0x88D3D3: and     esp, 0FFFFFFF0h
0x88D3D6: sub     esp, 28h
0x88D3D9: mov     eax, ds:0B30AACh
0x88D3DE: xor     eax, esp
0x88D3E0: mov     [esp+28h+var_4], eax
0x88D3E4: push    esi
0x88D3E5: mov     esi, [ebp+arg_0]
0x88D3E8: mov     eax, [esi+0Ch]
0x88D3EB: test    eax, eax
0x88D3ED: push    edi
0x88D3EE: mov     edi, [ebp+arg_4]
0x88D3F1: mov     ecx, esi
0x88D3F3: jz      short loc_88D3FE
0x88D3F5: mov     ecx, eax
0x88D3F7: mov     eax, [ecx+0Ch]
0x88D3FA: test    eax, eax
0x88D3FC: jnz     short loc_88D3F5
0x88D3FE: cmp     byte ptr [ecx+18h], 1
0x88D402: jnz     loc_88D4C5
0x88D408: push    esi
0x88D409: call    sub_8AFC40
0x88D40E: add     esp, 4
0x88D411: test    eax, eax
0x88D413: jz      loc_88D4C5
0x88D419: cmp     dword ptr [eax+8], 0
0x88D41D: jz      short loc_88D47D
0x88D41F: mov     eax, [esi]
0x88D421: mov     ecx, [esi+8]
0x88D424: add     eax, 40h ; '@'
0x88D427: push    eax
0x88D428: push    ecx
0x88D429: lea     ecx, [esp+38h+var_20]
0x88D42D: call    sub_88FE00
0x88D432: fldz
0x88D434: mov     edx, [edi+10h]
0x88D437: movaps  xmm1, [esp+30h+var_20]
0x88D43C: movaps  xmm0, xmmword ptr [edx+10h]
0x88D440: mulps   xmm0, xmm1
0x88D443: movaps  xmm1, xmm0
0x88D446: shufps  xmm1, xmm0, 55h ; 'U'
0x88D44A: movaps  xmm2, xmm0
0x88D44D: addss   xmm1, xmm0
0x88D451: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x88D455: addss   xmm2, xmm1
0x88D459: movss   dword ptr [esp+30h+var_20], xmm2
0x88D45F: fcomp   dword ptr [esp+30h+var_20]
0x88D463: fnstsw  ax
0x88D465: test    ah, 41h
0x88D468: jnz     short loc_88D4C5
0x88D46A: mov     al, 1
0x88D46C: pop     edi
0x88D46D: pop     esi
0x88D46E: mov     ecx, [esp+28h+var_4]
0x88D472: xor     ecx, esp
0x88D474: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88D479: mov     esp, ebp
0x88D47B: pop     ebp
0x88D47C: retn
0x88D47D: mov     esi, [esi+0Ch]
0x88D480: test    esi, esi
0x88D482: jz      short loc_88D4C5
0x88D484: mov     esi, [esi]
0x88D486: test    esi, esi
0x88D488: jz      short loc_88D48F
0x88D48A: mov     esi, [esi+8]
0x88D48D: jmp     short loc_88D491
0x88D48F: xor     esi, esi
0x88D491: push    esi
0x88D492: push    offset dword_BA7FA8
0x88D497: call    sub_435CC0
0x88D49C: add     esp, 8
0x88D49F: test    al, al
0x88D4A1: jz      short loc_88D4C5
0x88D4A3: mov     eax, [edi+10h]
0x88D4A6: fldz
0x88D4A8: fcomp   dword ptr [eax+18h]
0x88D4AB: fnstsw  ax
0x88D4AD: test    ah, 41h
0x88D4B0: jnz     short loc_88D4C5
0x88D4B2: mov     al, 1
0x88D4B4: pop     edi
0x88D4B5: pop     esi
0x88D4B6: mov     ecx, [esp+28h+var_4]
0x88D4BA: xor     ecx, esp
0x88D4BC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88D4C1: mov     esp, ebp
0x88D4C3: pop     ebp
0x88D4C4: retn
0x88D4C5: mov     ecx, [esp+30h+var_4]
0x88D4C9: pop     edi
0x88D4CA: pop     esi
0x88D4CB: xor     ecx, esp
0x88D4CD: xor     al, al
0x88D4CF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88D4D4: mov     esp, ebp
0x88D4D6: pop     ebp
0x88D4D7: retn
