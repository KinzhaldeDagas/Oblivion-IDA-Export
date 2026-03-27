0x903650: sub     esp, 1Ch
0x903653: mov     edx, [esp+1Ch+arg_0]
0x903657: mov     eax, [edx]
0x903659: push    ebx
0x90365A: mov     ebx, ecx
0x90365C: mov     ecx, [edx+8]
0x90365F: mov     [esp+20h+var_8], ecx
0x903663: mov     ecx, [ebx+10h]
0x903666: push    esi
0x903667: xor     esi, esi
0x903669: test    ecx, ecx
0x90366B: mov     [esp+24h+var_18], eax
0x90366F: mov     [esp+24h+var_4], edx
0x903673: mov     [esp+24h+var_1C], esi
0x903677: jle     loc_90378C
0x90367D: push    ebp
0x90367E: push    edi
0x90367F: mov     edi, [esp+2Ch+arg_8]
0x903683: jmp     short loc_903690
0x903685: mov     edx, [esp+2Ch+arg_0]
0x903689: mov     eax, [esp+2Ch+var_18]
0x90368D: lea     ecx, [ecx+0]
0x903690: mov     ecx, [eax+10h]
0x903693: mov     ecx, [ecx+esi*8]
0x903696: push    esi
0x903697: push    eax
0x903698: push    edx
0x903699: mov     edx, [esp+38h+arg_4]
0x90369D: push    edx
0x90369E: mov     [esp+3Ch+var_10], ecx
0x9036A2: mov     ecx, [edi+4]
0x9036A5: push    edi
0x9036A6: lea     eax, [esp+40h+arg_8]
0x9036AA: mov     [esp+40h+var_C], esi
0x9036AE: mov     ebp, [ecx]
0x9036B0: push    eax
0x9036B1: call    dword ptr [ebp+0]
0x9036B4: cmp     byte ptr [eax], 0
0x9036B7: jz      loc_90374F
0x9036BD: mov     ecx, [ebx+0Ch]
0x9036C0: mov     ebp, [ecx+esi*4]
0x9036C3: call    sub_8E0970
0x9036C8: cmp     ebp, eax
0x9036CA: jnz     short loc_90373A
0x9036CC: mov     ecx, [esp+2Ch+var_10]
0x9036D0: mov     edx, [ebx+8]
0x9036D3: mov     eax, [ecx]
0x9036D5: mov     ebp, [edi]
0x9036D7: mov     [esp+2Ch+var_14], edx
0x9036DB: call    dword ptr [eax+8]
0x9036DE: mov     ecx, [esp+2Ch+arg_4]
0x9036E2: mov     ecx, [ecx]
0x9036E4: mov     edx, [ecx]
0x9036E6: mov     esi, eax
0x9036E8: call    dword ptr [edx+8]
0x9036EB: mov     cl, [edi+0Ch]
0x9036EE: test    cl, cl
0x9036F0: lea     ecx, [ebp+590h]
0x9036F6: jnz     short loc_9036FE
0x9036F8: lea     ecx, [ebp+190h]
0x9036FE: mov     edx, [esp+2Ch+arg_4]
0x903702: shl     esi, 5
0x903705: add     esi, ecx
0x903707: movzx   eax, byte ptr [esi+eax]
0x90370B: mov     ecx, [esp+2Ch+var_14]
0x90370F: mov     esi, [ebx+0Ch]
0x903712: lea     eax, [eax+eax*4]
0x903715: mov     ebp, [ebp+eax*4+990h]
0x90371C: mov     eax, [esp+2Ch+var_1C]
0x903720: push    ecx
0x903721: shl     eax, 2
0x903724: push    edi
0x903725: add     esi, eax
0x903727: push    edx
0x903728: lea     eax, [esp+38h+var_10]
0x90372C: push    eax
0x90372D: call    ebp
0x90372F: mov     [esi], eax
0x903731: mov     esi, [esp+3Ch+var_1C]
0x903735: add     esp, 10h
0x903738: jmp     short loc_90377A
0x90373A: mov     eax, [esp+2Ch+arg_4]
0x90373E: mov     edx, [ebp+0]
0x903741: push    edi
0x903742: push    eax
0x903743: lea     ecx, [esp+34h+var_10]
0x903747: push    ecx
0x903748: mov     ecx, ebp
0x90374A: call    dword ptr [edx+1Ch]
0x90374D: jmp     short loc_90377A
0x90374F: mov     edx, [ebx+0Ch]
0x903752: mov     ebp, [edx+esi*4]
0x903755: call    sub_8E0970
0x90375A: cmp     ebp, eax
0x90375C: jz      short loc_90377A
0x90375E: mov     eax, [ebp+0]
0x903761: mov     ecx, ebp
0x903763: call    dword ptr [eax+18h]
0x903766: mov     ebp, [ebx+0Ch]
0x903769: lea     eax, ds:0[esi*4]
0x903770: add     ebp, eax
0x903772: call    sub_8E0970
0x903777: mov     [ebp+0], eax
0x90377A: mov     eax, [ebx+10h]
0x90377D: inc     esi
0x90377E: cmp     esi, eax
0x903780: mov     [esp+2Ch+var_1C], esi
0x903784: jl      loc_903685
0x90378A: pop     edi
0x90378B: pop     ebp
0x90378C: pop     esi
0x90378D: pop     ebx
0x90378E: add     esp, 1Ch
0x903791: retn    0Ch
