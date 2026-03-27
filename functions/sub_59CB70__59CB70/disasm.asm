0x59CB70: sub     esp, 108h
0x59CB76: mov     eax, ds:0B30AACh
0x59CB7B: xor     eax, esp
0x59CB7D: mov     [esp+108h+var_4], eax
0x59CB84: push    ebx
0x59CB85: push    ebp
0x59CB86: push    esi
0x59CB87: mov     esi, ecx
0x59CB89: mov     ebp, [esi+38h]
0x59CB8C: mov     eax, [esi+30h]
0x59CB8F: mov     dl, [eax+ebp]
0x59CB92: mov     ecx, [esp+114h+arg_0]; this
0x59CB99: xor     ebx, ebx
0x59CB9B: cmp     dl, 0Dh
0x59CB9E: jz      short loc_59CBD4
0x59CBA0: push    edi
0x59CBA1: cmp     dl, 3Ch ; '<'
0x59CBA4: jz      short loc_59CBD3
0x59CBA6: cmp     dl, 3Eh ; '>'
0x59CBA9: jz      short loc_59CBD3
0x59CBAB: cmp     dl, 2Ah ; '*'
0x59CBAE: jz      short loc_59CBD3
0x59CBB0: mov     edi, [esi+34h]
0x59CBB3: mov     eax, [esi+30h]
0x59CBB6: cmp     eax, edi
0x59CBB8: jnb     short loc_59CBD3
0x59CBBA: add     eax, 1
0x59CBBD: mov     [esp+ebx+118h+var_108], dl
0x59CBC1: add     ebx, 1
0x59CBC4: cmp     eax, edi
0x59CBC6: mov     [esi+30h], eax
0x59CBC9: jnb     short loc_59CBCE
0x59CBCB: mov     dl, [eax+ebp]
0x59CBCE: cmp     dl, 0Dh
0x59CBD1: jnz     short loc_59CBA1
0x59CBD3: pop     edi
0x59CBD4: push    0; a3
0x59CBD6: lea     edx, [esp+118h+var_108]
0x59CBDA: push    edx; a2
0x59CBDB: mov     [esp+ebx+11Ch+var_108], 0
0x59CBE0: call    BSStringT_Set
0x59CBE5: mov     ecx, [esp+114h+var_4]
0x59CBEC: pop     esi
0x59CBED: pop     ebp
0x59CBEE: pop     ebx
0x59CBEF: xor     ecx, esp
0x59CBF1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x59CBF6: add     esp, 108h
0x59CBFC: retn    4
