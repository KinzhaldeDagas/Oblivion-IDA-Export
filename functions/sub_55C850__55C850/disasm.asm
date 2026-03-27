0x55C850: push    ebp
0x55C851: push    esi
0x55C852: mov     esi, [esp+8+arg_0]
0x55C856: push    edi
0x55C857: mov     ebp, ecx
0x55C859: xor     edi, edi
0x55C85B: jmp     short loc_55C860
0x55C85D: align 10h
0x55C860: mov     eax, [ebp+0]
0x55C863: mov     edx, [eax+9Ch]
0x55C869: mov     ecx, ebp
0x55C86B: call    edx
0x55C86D: mov     edx, [eax]
0x55C86F: mov     ecx, eax
0x55C871: mov     eax, [edx+54h]
0x55C874: push    edi
0x55C875: call    eax
0x55C877: fstp    [esp+0Ch+arg_0]
0x55C87B: fldz
0x55C87D: fld     [esp+0Ch+arg_0]
0x55C881: fcom    st(1)
0x55C883: fnstsw  ax
0x55C885: fstp    st(1)
0x55C887: test    ah, 41h
0x55C88A: jnz     short loc_55C8E9
0x55C88C: fld1
0x55C88E: fcompp
0x55C890: fnstsw  ax
0x55C892: test    ah, 1
0x55C895: jnz     short loc_55C8EB
0x55C897: mov     ecx, [esi+10h]
0x55C89A: mov     edx, [ecx]
0x55C89C: mov     eax, [edx+18h]
0x55C89F: push    edi
0x55C8A0: call    eax
0x55C8A2: test    eax, eax
0x55C8A4: jz      short loc_55C8EB
0x55C8A6: cmp     byte ptr [esi+1Ch], 0
0x55C8AA: jnz     short loc_55C8BF
0x55C8AC: mov     edx, [esi]
0x55C8AE: lea     ecx, [esi+4]
0x55C8B1: push    ecx
0x55C8B2: push    edx
0x55C8B3: call    sub_5508F0
0x55C8B8: add     esp, 8
0x55C8BB: mov     byte ptr [esi+1Ch], 1
0x55C8BF: mov     ecx, [esi+10h]
0x55C8C2: mov     eax, [ecx]
0x55C8C4: mov     edx, [eax+18h]
0x55C8C7: push    edi
0x55C8C8: call    edx
0x55C8CA: fld     [esp+0Ch+arg_0]
0x55C8CE: mov     edx, [eax]
0x55C8D0: mov     edx, [edx+4]
0x55C8D3: push    ecx
0x55C8D4: mov     ecx, [esi+14h]
0x55C8D7: fstp    [esp+10h+var_10]
0x55C8DA: push    ecx
0x55C8DB: mov     ecx, [esi+18h]
0x55C8DE: push    ecx
0x55C8DF: lea     ecx, [esi+4]
0x55C8E2: push    ecx
0x55C8E3: mov     ecx, eax
0x55C8E5: call    edx
0x55C8E7: jmp     short loc_55C8EB
0x55C8E9: fstp    st
0x55C8EB: add     edi, 1
0x55C8EE: cmp     edi, 0Dh
0x55C8F1: jl      loc_55C860
0x55C8F7: pop     edi
0x55C8F8: pop     esi
0x55C8F9: pop     ebp
0x55C8FA: retn    4
