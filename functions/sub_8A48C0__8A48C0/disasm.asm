0x8A48C0: push    ebp
0x8A48C1: mov     ebp, esp
0x8A48C3: and     esp, 0FFFFFFF0h
0x8A48C6: sub     esp, 14h
0x8A48C9: mov     eax, [ebp+arg_0]
0x8A48CC: push    ebx
0x8A48CD: push    esi
0x8A48CE: mov     esi, ecx
0x8A48D0: test    esi, esi
0x8A48D2: push    edi
0x8A48D3: mov     [esp+20h+var_C], eax
0x8A48D7: jz      short loc_8A48F5
0x8A48D9: mov     ecx, [esi+8]
0x8A48DC: test    ecx, ecx
0x8A48DE: jz      short loc_8A48F5
0x8A48E0: push    offset dword_BA7B80
0x8A48E5: lea     edx, [esp+24h+var_8]
0x8A48E9: push    edx
0x8A48EA: call    sub_47F990
0x8A48EF: mov     edi, [eax]
0x8A48F1: test    edi, edi
0x8A48F3: jnz     short loc_8A48F9
0x8A48F5: xor     ebx, ebx
0x8A48F7: jmp     short loc_8A4973
0x8A48F9: mov     eax, [edi]
0x8A48FB: mov     edx, [eax+4]
0x8A48FE: mov     ecx, edi
0x8A4900: call    edx
0x8A4902: test    eax, eax
0x8A4904: jz      short loc_8A4914
0x8A4906: cmp     eax, offset dword_BA7A20
0x8A490B: jz      short loc_8A496D
0x8A490D: mov     eax, [eax+4]
0x8A4910: test    eax, eax
0x8A4912: jnz     short loc_8A4906
0x8A4914: xor     al, al
0x8A4916: neg     al
0x8A4918: sbb     eax, eax
0x8A491A: and     eax, edi
0x8A491C: mov     ebx, eax
0x8A491E: jz      short loc_8A4973
0x8A4920: fld1
0x8A4922: fcom    dword ptr [ebx+14h]
0x8A4925: fnstsw  ax
0x8A4927: test    ah, 41h
0x8A492A: jz      short loc_8A4971
0x8A492C: fcomp   dword ptr [ebx+18h]
0x8A492F: fnstsw  ax
0x8A4931: test    ah, 41h
0x8A4934: jz      short loc_8A4973
0x8A4936: cmp     dword ptr [ebx+24h], 0
0x8A493A: jg      short loc_8A4973
0x8A493C: cmp     byte ptr ds:0BA7909h, 0
0x8A4943: jnz     short loc_8A4973
0x8A4945: mov     eax, [esi]
0x8A4947: mov     edx, [eax+58h]
0x8A494A: mov     ecx, esi
0x8A494C: call    edx
0x8A494E: test    eax, eax
0x8A4950: jz      short loc_8A495B
0x8A4952: mov     eax, [esi]
0x8A4954: mov     edx, [eax+60h]
0x8A4957: mov     ecx, esi
0x8A4959: call    edx
0x8A495B: mov     eax, [esp+20h+var_C]
0x8A495F: mov     [ebx+20h], eax
0x8A4962: mov     al, 1
0x8A4964: pop     edi
0x8A4965: pop     esi
0x8A4966: pop     ebx
0x8A4967: mov     esp, ebp
0x8A4969: pop     ebp
0x8A496A: retn    4
0x8A496D: mov     al, 1
0x8A496F: jmp     short loc_8A4916
0x8A4971: fstp    st
0x8A4973: mov     edi, [esp+20h+var_C]
0x8A4977: push    edi
0x8A4978: mov     ecx, esi
0x8A497A: call    sub_89F470
0x8A497F: test    al, al
0x8A4981: mov     [esp+20h+var_D], al
0x8A4985: jz      loc_8A4A4D
0x8A498B: cmp     byte ptr ds:0B2EB00h, 0
0x8A4992: jz      loc_8A4A3D
0x8A4998: cmp     dword ptr [edi+1Ch], 0
0x8A499C: ja      loc_8A4A3D
0x8A49A2: test    esi, esi
0x8A49A4: jz      short loc_8A49B7
0x8A49A6: mov     eax, [esi+8]
0x8A49A9: test    eax, eax
0x8A49AB: jz      short loc_8A49B7
0x8A49AD: mov     eax, [eax+50h]
0x8A49B0: add     eax, 0D0h ; 'Ð'
0x8A49B5: jmp     short loc_8A49BC
0x8A49B7: mov     eax, offset stru_BA7A40
0x8A49BC: movss   xmm0, dword ptr ds:0A37080h
0x8A49C4: movaps  xmm3, xmmword ptr [eax]
0x8A49C7: movaps  xmm1, xmmword ptr ds:0BA7A40h
0x8A49CE: movaps  xmm2, xmmword ptr ds:0A372D0h
0x8A49D5: shufps  xmm0, xmm0, 0
0x8A49D9: subps   xmm3, xmm1
0x8A49DC: andps   xmm3, xmm2
0x8A49DF: movaps  xmm4, xmm0
0x8A49E2: cmpltps xmm4, xmm3
0x8A49E6: movmskps ecx, xmm4
0x8A49E9: test    cl, 7
0x8A49EC: jnz     short loc_8A4A3D
0x8A49EE: test    esi, esi
0x8A49F0: jz      short loc_8A4A03
0x8A49F2: mov     eax, [esi+8]
0x8A49F5: test    eax, eax
0x8A49F7: jz      short loc_8A4A03
0x8A49F9: mov     eax, [eax+50h]
0x8A49FC: add     eax, 0E0h ; 'à'
0x8A4A01: jmp     short loc_8A4A08
0x8A4A03: mov     eax, offset stru_BA7A40
0x8A4A08: movaps  xmm3, xmmword ptr [eax]
0x8A4A0B: subps   xmm3, xmm1
0x8A4A0E: andps   xmm3, xmm2
0x8A4A11: cmpltps xmm0, xmm3
0x8A4A15: movmskps edx, xmm0
0x8A4A18: test    dl, 7
0x8A4A1B: jnz     short loc_8A4A3D
0x8A4A1D: test    esi, esi
0x8A4A1F: jz      short loc_8A4A3D
0x8A4A21: mov     edi, [esi+8]
0x8A4A24: test    edi, edi
0x8A4A26: jz      short loc_8A4A3D
0x8A4A28: mov     ecx, esi
0x8A4A2A: call    sub_89F570
0x8A4A2F: mov     ecx, edi
0x8A4A31: call    sub_8A6440
0x8A4A36: mov     ecx, esi
0x8A4A38: call    sub_89F570
0x8A4A3D: mov     edi, [esp+20h+var_C]
0x8A4A41: push    edi
0x8A4A42: mov     ecx, esi
0x8A4A44: call    sub_8A47C0
0x8A4A49: mov     al, [esp+20h+var_D]
0x8A4A4D: test    ebx, ebx
0x8A4A4F: jz      short loc_8A4A54
0x8A4A51: mov     [ebx+20h], edi
0x8A4A54: pop     edi
0x8A4A55: pop     esi
0x8A4A56: pop     ebx
0x8A4A57: mov     esp, ebp
0x8A4A59: pop     ebp
0x8A4A5A: retn    4
