0x910E30: push    ebp
0x910E31: mov     ebp, esp
0x910E33: and     esp, 0FFFFFFF0h
0x910E36: sub     esp, 54h
0x910E39: push    ebx
0x910E3A: mov     ebx, [ebp+arg_4]
0x910E3D: push    esi
0x910E3E: mov     esi, [ebp+arg_0]
0x910E41: mov     eax, [esi+28h]
0x910E44: push    edi
0x910E45: push    8
0x910E47: push    eax
0x910E48: push    ebx
0x910E49: push    esi
0x910E4A: mov     edi, ecx
0x910E4C: call    sub_8F0F70
0x910E51: mov     edx, [esi+1Ch]
0x910E54: add     esp, 10h
0x910E57: lea     ecx, [edi+10h]
0x910E5A: push    ecx
0x910E5B: push    edx
0x910E5C: lea     ecx, [esp+68h+var_30]
0x910E60: call    sub_88FCC0
0x910E65: mov     ecx, [esi+20h]
0x910E68: lea     eax, [edi+20h]
0x910E6B: push    eax
0x910E6C: push    ecx
0x910E6D: lea     ecx, [esp+68h+var_20]
0x910E71: call    sub_88FCC0
0x910E76: movaps  xmm0, [esp+60h+var_20]
0x910E7B: movaps  xmm1, [esp+60h+var_30]
0x910E80: subps   xmm1, xmm0
0x910E83: movaps  xmm0, xmm1
0x910E86: mulps   xmm0, xmm1
0x910E89: movaps  xmm2, xmm0
0x910E8C: shufps  xmm2, xmm0, 55h ; 'U'
0x910E90: addss   xmm2, xmm0
0x910E94: movaps  xmm3, xmm0
0x910E97: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x910E9B: movaps  xmm0, xmm3
0x910E9E: addss   xmm0, xmm2
0x910EA2: movaps  [esp+60h+var_40], xmm0
0x910EA7: rsqrtss xmm2, xmm0
0x910EAB: movss   dword ptr [esp+60h+var_40], xmm2
0x910EB1: movaps  xmm2, [esp+60h+var_40]
0x910EB6: mov     [esp+60h+var_44], 40400000h
0x910EBE: movss   xmm4, [esp+60h+var_44]
0x910EC4: movaps  xmm3, xmm0
0x910EC7: mulss   xmm3, xmm2
0x910ECB: mulss   xmm3, xmm2
0x910ECF: subss   xmm4, xmm3
0x910ED3: mov     [esp+60h+var_44], 3F000000h
0x910EDB: movss   xmm3, [esp+60h+var_44]
0x910EE1: mulss   xmm3, xmm2
0x910EE5: movaps  xmm2, xmm3
0x910EE8: mulss   xmm2, xmm4
0x910EEC: shufps  xmm2, xmm2, 0
0x910EF0: lea     edx, [esp+60h+var_48]
0x910EF4: mulss   xmm0, xmm2
0x910EF8: movss   dword ptr [edx], xmm0
0x910EFC: fld     [esp+60h+var_48]
0x910F00: fcomp   dword ptr ds:0A2FAA8h
0x910F06: mov     eax, [esp+60h+var_48]
0x910F0A: mov     [esp+60h+var_44], eax
0x910F0E: fnstsw  ax
0x910F10: test    ah, 41h
0x910F13: jnz     short loc_910F1F
0x910F15: mulps   xmm2, xmm1
0x910F18: movaps  [esp+60h+var_10], xmm2
0x910F1D: jmp     short loc_910F33
0x910F1F: movaps  xmm0, xmmword ptr ds:0B2F090h
0x910F26: movaps  [esp+60h+var_10], xmm0
0x910F2B: mov     [esp+60h+var_44], 0
0x910F33: push    ebx
0x910F34: lea     ecx, [esp+64h+var_30]
0x910F38: push    esi
0x910F39: push    ecx
0x910F3A: call    sub_8F1790
0x910F3F: fld     dword ptr [edi+0Ch]
0x910F42: fsub    [esp+6Ch+var_44]
0x910F46: add     esp, 0Ch
0x910F49: push    1; int
0x910F4B: push    ebx; int
0x910F4C: push    esi; int
0x910F4D: push    ecx
0x910F4E: fstp    [esp+70h+var_70]; float
0x910F51: call    sub_8F0EF0
0x910F56: add     esp, 10h
0x910F59: pop     edi
0x910F5A: pop     esi
0x910F5B: pop     ebx
0x910F5C: mov     esp, ebp
0x910F5E: pop     ebp
0x910F5F: retn    8
