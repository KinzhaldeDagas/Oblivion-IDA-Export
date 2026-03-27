0x88AC20: push    ebp
0x88AC21: mov     ebp, esp
0x88AC23: and     esp, 0FFFFFFF0h
0x88AC26: sub     esp, 34h
0x88AC29: mov     eax, ds:0B30AACh
0x88AC2E: xor     eax, esp
0x88AC30: mov     [esp+34h+var_4], eax
0x88AC34: push    ebx
0x88AC35: mov     ebx, [ebp+arg_4]
0x88AC38: push    esi
0x88AC39: mov     esi, [ebp+arg_0]
0x88AC3C: test    esi, esi
0x88AC3E: push    edi
0x88AC3F: jnz     short loc_88AC45
0x88AC41: xor     edi, edi
0x88AC43: jmp     short loc_88AC6E
0x88AC45: mov     eax, [esi]
0x88AC47: mov     edx, [eax+4]
0x88AC4A: mov     ecx, esi
0x88AC4C: call    edx
0x88AC4E: test    eax, eax
0x88AC50: jz      short loc_88AC64
0x88AC52: cmp     eax, offset dword_BA7A20
0x88AC57: jz      loc_88AD79
0x88AC5D: mov     eax, [eax+4]
0x88AC60: test    eax, eax
0x88AC62: jnz     short loc_88AC52
0x88AC64: xor     al, al
0x88AC66: neg     al
0x88AC68: sbb     eax, eax
0x88AC6A: and     eax, esi
0x88AC6C: mov     edi, eax
0x88AC6E: mov     esi, [esi+10h]
0x88AC71: test    esi, esi
0x88AC73: jz      loc_88AD67
0x88AC79: mov     eax, [esi]
0x88AC7B: mov     edx, [eax+4]
0x88AC7E: mov     ecx, esi
0x88AC80: call    edx
0x88AC82: test    eax, eax
0x88AC84: jz      short loc_88ACA2
0x88AC86: jmp     short loc_88AC90
0x88AC88: align 10h
0x88AC90: cmp     eax, offset dword_BA7D84
0x88AC95: jz      loc_88AD80
0x88AC9B: mov     eax, [eax+4]
0x88AC9E: test    eax, eax
0x88ACA0: jnz     short loc_88AC90
0x88ACA2: xor     al, al
0x88ACA4: neg     al
0x88ACA6: sbb     eax, eax
0x88ACA8: and     eax, esi
0x88ACAA: mov     esi, eax
0x88ACAC: jz      loc_88AD67
0x88ACB2: mov     eax, [ebx+0Ch]
0x88ACB5: test    eax, eax
0x88ACB7: jz      loc_88AD67
0x88ACBD: test    edi, edi
0x88ACBF: movaps  xmm1, xmmword ptr [eax]
0x88ACC2: movaps  [esp+40h+var_20], xmm1
0x88ACC7: jz      short loc_88AD36
0x88ACC9: fld1
0x88ACCB: fcomp   dword ptr [edi+14h]
0x88ACCE: fnstsw  ax
0x88ACD0: test    ah, 41h
0x88ACD3: jnz     short loc_88AD36
0x88ACD5: fldz
0x88ACD7: fcomp   dword ptr [edi+14h]
0x88ACDA: fnstsw  ax
0x88ACDC: test    ah, 44h
0x88ACDF: jnp     loc_88AD67
0x88ACE5: fld     dword ptr [edi+18h]
0x88ACE8: xorps   xmm0, xmm0
0x88ACEB: fstp    dword ptr [esp+40h+var_34]
0x88ACEF: movss   xmm2, dword ptr [esp+40h+var_34]
0x88ACF5: movss   xmm0, xmm2
0x88ACF9: movaps  xmm2, xmm0
0x88ACFC: shufps  xmm2, xmm0, 0
0x88AD00: mulps   xmm2, xmm1
0x88AD03: movaps  xmm1, xmmword ptr ds:0BA7A40h
0x88AD0A: movaps  xmm0, xmm2
0x88AD0D: movaps  [esp+40h+var_20], xmm0
0x88AD12: movaps  xmm0, xmmword ptr ds:0A372D0h
0x88AD19: subps   xmm2, xmm1
0x88AD1C: andps   xmm2, xmm0
0x88AD1F: movss   xmm0, dword ptr ds:0A37080h
0x88AD27: shufps  xmm0, xmm0, 0
0x88AD2B: cmpltps xmm0, xmm2
0x88AD2F: movmskps eax, xmm0
0x88AD32: test    al, 7
0x88AD34: jz      short loc_88AD67
0x88AD36: mov     edx, [esi]
0x88AD38: mov     edx, [edx+8Ch]
0x88AD3E: lea     eax, [esp+40h+var_34+4]
0x88AD42: push    eax
0x88AD43: mov     ecx, esi
0x88AD45: call    edx
0x88AD47: movaps  xmm0, xmmword ptr [esp+40h+var_34+4]
0x88AD4C: mov     eax, [esi]
0x88AD4E: addps   xmm0, [esp+40h+var_20]
0x88AD53: mov     edx, [eax+94h]
0x88AD59: lea     ecx, [esp+40h+var_34+4]
0x88AD5D: push    ecx
0x88AD5E: mov     ecx, esi
0x88AD60: movaps  xmmword ptr [esp+44h+var_34+4], xmm0
0x88AD65: call    edx
0x88AD67: mov     ecx, [esp+40h+var_4]
0x88AD6B: pop     edi
0x88AD6C: pop     esi
0x88AD6D: pop     ebx
0x88AD6E: xor     ecx, esp
0x88AD70: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88AD75: mov     esp, ebp
0x88AD77: pop     ebp
0x88AD78: retn
0x88AD79: mov     al, 1
0x88AD7B: jmp     loc_88AC66
0x88AD80: mov     al, 1
0x88AD82: jmp     loc_88ACA4
