0x92D6D0: push    ebp
0x92D6D1: mov     ebp, esp
0x92D6D3: and     esp, 0FFFFFFF0h
0x92D6D6: sub     esp, 44h
0x92D6D9: mov     eax, [ebp+arg_0]
0x92D6DC: mov     ecx, [eax]
0x92D6DE: mov     edx, [eax+4]
0x92D6E1: mov     eax, [ebp+arg_8]
0x92D6E4: mov     [eax], edx
0x92D6E6: mov     edx, [ebp+arg_4]
0x92D6E9: mov     edx, [edx+4]
0x92D6EC: mov     [eax+4], edx
0x92D6EF: xor     edx, edx
0x92D6F1: push    ebx
0x92D6F2: mov     ebx, [ebp+arg_C]
0x92D6F5: mov     [eax+8], edx
0x92D6F8: mov     [eax+10h], edx
0x92D6FB: mov     edx, [eax]
0x92D6FD: push    esi
0x92D6FE: mov     dword ptr [eax+0Ch], 0FFFFFFFFh
0x92D705: mov     eax, [eax+4]
0x92D708: movzx   esi, word ptr [eax]
0x92D70B: push    edi
0x92D70C: movzx   edi, word ptr [edx]
0x92D70F: shl     esi, 4
0x92D712: add     esi, ecx
0x92D714: push    ebx
0x92D715: shl     edi, 4
0x92D718: add     edi, ecx
0x92D71A: push    esi
0x92D71B: push    edi
0x92D71C: mov     [esp+5Ch+var_34], ecx
0x92D720: call    sub_92D400
0x92D725: mov     ecx, [ebp+arg_0]
0x92D728: mov     eax, [ecx+8]
0x92D72B: mov     edx, [ebp+arg_4]
0x92D72E: add     eax, [edx+8]
0x92D731: shl     eax, 1
0x92D733: add     esp, 0Ch
0x92D736: test    eax, eax
0x92D738: mov     [esp+50h+var_24], eax
0x92D73C: mov     [esp+50h+var_30], 0
0x92D744: jle     loc_92D8DF
0x92D74A: lea     ebx, [ebx+0]
0x92D750: mov     eax, [ebp+arg_0]
0x92D753: mov     eax, [eax+8]
0x92D756: dec     eax
0x92D757: mov     [esp+50h+var_38], 0
0x92D75C: mov     [esp+50h+var_3C], eax
0x92D760: js      loc_92D807
0x92D766: jmp     short loc_92D770
0x92D768: mov     eax, [esp+50h+var_3C]
0x92D76C: lea     esp, [esp+0]
0x92D770: mov     ecx, [ebp+arg_0]
0x92D773: mov     edx, [ecx+4]
0x92D776: movzx   ecx, word ptr [edx+eax*8]
0x92D77A: lea     edx, [edx+eax*8]
0x92D77D: mov     eax, [esp+50h+var_34]
0x92D781: shl     ecx, 4
0x92D784: add     ecx, eax
0x92D786: movaps  xmm0, xmmword ptr [ebx]
0x92D789: lea     eax, [esp+50h+var_2C]
0x92D78D: fld     dword ptr [ecx]
0x92D78F: fsub    dword ptr [edi]
0x92D791: fstp    dword ptr [esp+50h+var_20]
0x92D795: fld     dword ptr [ecx+4]
0x92D798: fsub    dword ptr [edi+4]
0x92D79B: fstp    dword ptr [esp+50h+var_20+4]
0x92D79F: fld     dword ptr [ecx+8]
0x92D7A2: fsub    dword ptr [edi+8]
0x92D7A5: fstp    dword ptr [esp+50h+var_20+8]
0x92D7A9: fld     dword ptr [ecx+0Ch]
0x92D7AC: fsub    dword ptr [edi+0Ch]
0x92D7AF: fstp    dword ptr [esp+50h+var_20+0Ch]
0x92D7B3: movaps  xmm1, [esp+50h+var_20]
0x92D7B8: mulps   xmm0, xmm1
0x92D7BB: movaps  xmm1, xmm0
0x92D7BE: shufps  xmm1, xmm0, 55h ; 'U'
0x92D7C2: movaps  xmm2, xmm0
0x92D7C5: addss   xmm1, xmm0
0x92D7C9: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92D7CD: addss   xmm2, xmm1
0x92D7D1: movss   dword ptr [eax], xmm2
0x92D7D5: fld     [esp+50h+var_2C]
0x92D7D9: fcomp   dword ptr ds:0AA1C44h
0x92D7DF: fnstsw  ax
0x92D7E1: test    ah, 41h
0x92D7E4: jnz     short loc_92D7FD
0x92D7E6: mov     eax, [ebp+arg_8]
0x92D7E9: push    ebx
0x92D7EA: push    esi
0x92D7EB: push    ecx
0x92D7EC: mov     [eax], edx
0x92D7EE: mov     edi, ecx
0x92D7F0: call    sub_92D400
0x92D7F5: add     esp, 0Ch
0x92D7F8: mov     [esp+50h+var_38], 1
0x92D7FD: dec     [esp+50h+var_3C]
0x92D801: jns     loc_92D768
0x92D807: mov     ecx, [ebp+arg_4]
0x92D80A: mov     eax, [ecx+8]
0x92D80D: dec     eax
0x92D80E: mov     [esp+50h+var_3C], eax
0x92D812: js      loc_92D8B7
0x92D818: jmp     short loc_92D820
0x92D81A: mov     eax, [esp+50h+var_3C]
0x92D81E: mov     edi, edi
0x92D820: mov     edx, [ebp+arg_4]
0x92D823: mov     ecx, [edx+4]
0x92D826: lea     edx, [ecx+eax*8]
0x92D829: movzx   ecx, word ptr [edx]
0x92D82C: mov     eax, [esp+50h+var_34]
0x92D830: shl     ecx, 4
0x92D833: add     ecx, eax
0x92D835: movaps  xmm0, xmmword ptr [ebx]
0x92D838: lea     eax, [esp+50h+var_28]
0x92D83C: fld     dword ptr [ecx]
0x92D83E: fsub    dword ptr [esi]
0x92D840: fstp    dword ptr [esp+50h+var_10]
0x92D844: fld     dword ptr [ecx+4]
0x92D847: fsub    dword ptr [esi+4]
0x92D84A: fstp    dword ptr [esp+50h+var_10+4]
0x92D84E: fld     dword ptr [ecx+8]
0x92D851: fsub    dword ptr [esi+8]
0x92D854: fstp    dword ptr [esp+50h+var_10+8]
0x92D858: fld     dword ptr [ecx+0Ch]
0x92D85B: fsub    dword ptr [esi+0Ch]
0x92D85E: fstp    dword ptr [esp+50h+var_10+0Ch]
0x92D862: movaps  xmm1, [esp+50h+var_10]
0x92D867: mulps   xmm0, xmm1
0x92D86A: movaps  xmm1, xmm0
0x92D86D: shufps  xmm1, xmm0, 55h ; 'U'
0x92D871: movaps  xmm2, xmm0
0x92D874: addss   xmm1, xmm0
0x92D878: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92D87C: addss   xmm2, xmm1
0x92D880: movss   dword ptr [eax], xmm2
0x92D884: fld     [esp+50h+var_28]
0x92D888: fcomp   dword ptr ds:0AA1C44h
0x92D88E: fnstsw  ax
0x92D890: test    ah, 41h
0x92D893: jnz     short loc_92D8AD
0x92D895: mov     eax, [ebp+arg_8]
0x92D898: push    ebx
0x92D899: push    ecx
0x92D89A: push    edi
0x92D89B: mov     [eax+4], edx
0x92D89E: mov     esi, ecx
0x92D8A0: call    sub_92D400
0x92D8A5: add     esp, 0Ch
0x92D8A8: mov     [esp+50h+var_38], 1
0x92D8AD: dec     [esp+50h+var_3C]
0x92D8B1: jns     loc_92D81A
0x92D8B7: mov     al, [esp+50h+var_38]
0x92D8BB: test    al, al
0x92D8BD: jz      short loc_92D8DF
0x92D8BF: push    ebx
0x92D8C0: push    esi
0x92D8C1: push    edi
0x92D8C2: call    sub_92D400
0x92D8C7: mov     eax, [esp+5Ch+var_30]
0x92D8CB: mov     ecx, [esp+5Ch+var_24]
0x92D8CF: add     esp, 0Ch
0x92D8D2: inc     eax
0x92D8D3: cmp     eax, ecx
0x92D8D5: mov     [esp+50h+var_30], eax
0x92D8D9: jl      loc_92D750
0x92D8DF: pop     edi
0x92D8E0: pop     esi
0x92D8E1: pop     ebx
0x92D8E2: mov     esp, ebp
0x92D8E4: pop     ebp
0x92D8E5: retn
