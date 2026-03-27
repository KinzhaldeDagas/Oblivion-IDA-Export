0x55C900: sub     esp, 0Ch
0x55C903: push    ebx
0x55C904: push    ebp
0x55C905: push    esi
0x55C906: push    edi
0x55C907: mov     esi, ecx
0x55C909: xor     edi, edi
0x55C90B: jmp     short loc_55C910
0x55C90D: align 10h
0x55C910: lea     eax, [edi-8]; switch 9 cases
0x55C913: cmp     eax, 8
0x55C916: ja      def_55C923; jumptable 0055C923 default case, cases 12,13
0x55C91C: movzx   eax, ds:byte_55CA94[eax]
0x55C923: jmp     ds:jpt_55C923[eax*4]; switch jump
0x55C92A: mov     edx, [esi]; jumptable 0055C923 cases 8,11
0x55C92C: mov     eax, [edx+9Ch]
0x55C932: mov     ecx, esi
0x55C934: call    eax
0x55C936: mov     edx, [esi]
0x55C938: mov     ebx, eax
0x55C93A: mov     eax, [edx+9Ch]
0x55C940: mov     ecx, esi
0x55C942: call    eax
0x55C944: lea     ecx, [esp+14h+arg_0]
0x55C948: push    ecx
0x55C949: lea     edx, [esp+18h]
0x55C94D: mov     ebp, eax
0x55C94F: mov     eax, [ebx]
0x55C951: push    edx
0x55C952: mov     edx, [eax+5Ch]
0x55C955: push    0Bh; int
0x55C957: mov     ecx, ebx
0x55C959: call    edx
0x55C95B: mov     eax, [ebp+0]
0x55C95E: mov     edx, [eax+5Ch]
0x55C961: push    ecx
0x55C962: fstp    [esp+24h+var_24]; int
0x55C965: push    8; float
0x55C967: mov     ecx, ebp
0x55C969: call    edx
0x55C96B: push    ecx
0x55C96C: fstp    [esp+2Ch+var_2C]; float
0x55C96F: call    sub_54F5E0
0x55C974: add     esp, 10h
0x55C977: cmp     edi, 8
0x55C97A: jnz     short loc_55C982
0x55C97C: fld     dword ptr [esp+1Ch+var_8]
0x55C980: jmp     short loc_55C9F6
0x55C982: fld     dword ptr [esp+1Ch+var_4]
0x55C986: jmp     short loc_55C9F6
0x55C988: mov     eax, [esi]; jumptable 0055C923 cases 9,10
0x55C98A: mov     edx, [eax+9Ch]
0x55C990: mov     ecx, esi
0x55C992: call    edx
0x55C994: mov     ebp, eax
0x55C996: mov     eax, [esi]
0x55C998: mov     edx, [eax+9Ch]
0x55C99E: mov     ecx, esi
0x55C9A0: call    edx
0x55C9A2: mov     edx, [ebp+0]
0x55C9A5: mov     ebx, eax
0x55C9A7: lea     eax, [esp+14h+arg_0]
0x55C9AB: push    eax
0x55C9AC: mov     eax, [edx+5Ch]
0x55C9AF: lea     ecx, [esp+18h]
0x55C9B3: push    ecx
0x55C9B4: push    0Ah; int
0x55C9B6: mov     ecx, ebp
0x55C9B8: call    eax
0x55C9BA: mov     edx, [ebx]
0x55C9BC: mov     eax, [edx+5Ch]
0x55C9BF: push    ecx
0x55C9C0: fstp    [esp+24h+var_24]; int
0x55C9C3: push    9; float
0x55C9C5: mov     ecx, ebx
0x55C9C7: call    eax
0x55C9C9: push    ecx
0x55C9CA: fstp    [esp+2Ch+var_2C]; float
0x55C9CD: call    sub_54F5E0
0x55C9D2: add     esp, 10h
0x55C9D5: cmp     edi, 9
0x55C9D8: jnz     short loc_55C982
0x55C9DA: fld     dword ptr [esp+1Ch+var_8]
0x55C9DE: jmp     short loc_55C9F6
0x55C9E0: mov     edx, [esi]; jumptable 0055C923 default case, cases 12,13
0x55C9E2: mov     eax, [edx+9Ch]
0x55C9E8: mov     ecx, esi
0x55C9EA: call    eax
0x55C9EC: mov     edx, [eax]
0x55C9EE: mov     ecx, eax
0x55C9F0: mov     eax, [edx+5Ch]
0x55C9F3: push    edi
0x55C9F4: call    eax
0x55C9F6: fstp    [esp+1Ch+var_C]
0x55C9FA: fldz
0x55C9FC: fld     [esp+1Ch+var_C]
0x55CA00: fcom    st(1)
0x55CA02: fnstsw  ax
0x55CA04: fstp    st(1)
0x55CA06: test    ah, 41h
0x55CA09: jnz     short loc_55CA6C
0x55CA0B: fld1
0x55CA0D: fcompp
0x55CA0F: fnstsw  ax
0x55CA11: test    ah, 1
0x55CA14: jnz     short loc_55CA6E; jumptable 0055C923 cases 14-16
0x55CA16: mov     ebx, [esp+1Ch+arg_0]
0x55CA1A: mov     ecx, [ebx+10h]
0x55CA1D: mov     edx, [ecx]
0x55CA1F: mov     eax, [edx+1Ch]
0x55CA22: push    edi
0x55CA23: call    eax
0x55CA25: test    eax, eax
0x55CA27: jz      short loc_55CA6E; jumptable 0055C923 cases 14-16
0x55CA29: cmp     byte ptr [ebx+1Ch], 0
0x55CA2D: jnz     short loc_55CA42
0x55CA2F: mov     edx, [ebx]
0x55CA31: lea     ecx, [ebx+4]
0x55CA34: push    ecx
0x55CA35: push    edx
0x55CA36: call    sub_5508F0
0x55CA3B: add     esp, 8
0x55CA3E: mov     byte ptr [ebx+1Ch], 1
0x55CA42: mov     ecx, [ebx+10h]
0x55CA45: mov     eax, [ecx]
0x55CA47: mov     edx, [eax+1Ch]
0x55CA4A: push    edi
0x55CA4B: call    edx
0x55CA4D: fld     [esp+1Ch+var_C]
0x55CA51: mov     edx, [eax]
0x55CA53: mov     edx, [edx+4]
0x55CA56: push    ecx
0x55CA57: mov     ecx, [ebx+14h]
0x55CA5A: fstp    [esp+20h+var_20]
0x55CA5D: push    ecx
0x55CA5E: mov     ecx, [ebx+18h]
0x55CA61: push    ecx
0x55CA62: add     ebx, 4
0x55CA65: push    ebx
0x55CA66: mov     ecx, eax
0x55CA68: call    edx
0x55CA6A: jmp     short loc_55CA6E; jumptable 0055C923 cases 14-16
0x55CA6C: fstp    st
0x55CA6E: add     edi, 1; jumptable 0055C923 cases 14-16
0x55CA71: cmp     edi, 11h
0x55CA74: jl      loc_55C910
0x55CA7A: pop     edi
0x55CA7B: pop     esi
0x55CA7C: pop     ebp
0x55CA7D: pop     ebx
0x55CA7E: add     esp, 0Ch
0x55CA81: retn    4
