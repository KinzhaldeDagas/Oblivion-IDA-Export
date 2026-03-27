0x8DB6D0: push    ebp
0x8DB6D1: mov     ebp, esp
0x8DB6D3: and     esp, 0FFFFFFF0h
0x8DB6D6: sub     esp, 74h
0x8DB6D9: push    ebx
0x8DB6DA: push    esi
0x8DB6DB: mov     esi, ecx
0x8DB6DD: movzx   eax, word ptr [esi+0Ch]
0x8DB6E1: mov     edx, [esi+4Ch]
0x8DB6E4: add     eax, edx
0x8DB6E6: cmp     eax, 0FEh ; 'þ'
0x8DB6EB: push    edi
0x8DB6EC: mov     [esp+80h+var_54], esi
0x8DB6F0: jg      loc_8DB8DF
0x8DB6F6: mov     eax, [ebp+arg_0]
0x8DB6F9: mov     ecx, [eax+0Ch]
0x8DB6FC: test    ecx, ecx
0x8DB6FE: jz      short loc_8DB709
0x8DB700: mov     eax, ecx
0x8DB702: mov     ecx, [eax+0Ch]
0x8DB705: test    ecx, ecx
0x8DB707: jnz     short loc_8DB700
0x8DB709: mov     edi, [eax+10h]
0x8DB70C: add     edi, eax
0x8DB70E: mov     eax, [ebp+arg_4]
0x8DB711: mov     ecx, [eax+0Ch]
0x8DB714: test    ecx, ecx
0x8DB716: jz      short loc_8DB721
0x8DB718: mov     eax, ecx
0x8DB71A: mov     ecx, [eax+0Ch]
0x8DB71D: test    ecx, ecx
0x8DB71F: jnz     short loc_8DB718
0x8DB721: mov     ebx, [eax+10h]
0x8DB724: add     ebx, eax
0x8DB726: test    edx, edx
0x8DB728: jnz     short loc_8DB76F
0x8DB72A: mov     eax, [esi+8]
0x8DB72D: mov     ecx, [eax+0A0h]; lpCriticalSection
0x8DB733: test    ecx, ecx
0x8DB735: jnz     short loc_8DB748
0x8DB737: push    1
0x8DB739: lea     ecx, [esi+74h]
0x8DB73C: push    ecx
0x8DB73D: push    eax
0x8DB73E: call    sub_8CB450
0x8DB743: add     esp, 0Ch
0x8DB746: jmp     short loc_8DB76F
0x8DB748: call    sub_8A7720
0x8DB74D: mov     eax, [esi+8]
0x8DB750: push    1
0x8DB752: lea     edx, [esi+74h]
0x8DB755: push    edx
0x8DB756: push    eax
0x8DB757: call    sub_8CB450
0x8DB75C: mov     ecx, [esi+8]
0x8DB75F: mov     edx, [ecx+0A0h]
0x8DB765: add     esp, 0Ch
0x8DB768: push    edx; lpCriticalSection
0x8DB769: call    dword ptr ds:0A28074h
0x8DB76F: lea     eax, [esp+80h+var_68]
0x8DB773: push    eax
0x8DB774: lea     ecx, [esp+84h+var_60]
0x8DB778: push    ecx
0x8DB779: lea     ecx, [esi+10h]
0x8DB77C: call    sub_925AE0
0x8DB781: mov     esi, [ebp+arg_C]
0x8DB784: movaps  xmm0, xmmword ptr [esi]
0x8DB787: lea     edx, [esp+80h+var_40]
0x8DB78B: push    edx
0x8DB78C: push    esi
0x8DB78D: mov     [esp+88h+var_64], eax
0x8DB791: mov     eax, [esp+88h+var_60]
0x8DB795: movaps  xmmword ptr [eax], xmm0
0x8DB798: movaps  xmm0, xmmword ptr [esi+10h]
0x8DB79C: mov     ecx, edi
0x8DB79E: movaps  xmmword ptr [eax+10h], xmm0
0x8DB7A2: call    sub_8ABCE0
0x8DB7A7: lea     eax, [esp+80h+var_50]
0x8DB7AB: push    eax
0x8DB7AC: push    esi
0x8DB7AD: mov     ecx, ebx
0x8DB7AF: call    sub_8ABCE0
0x8DB7B4: fld     dword ptr [ebx+5Ch]
0x8DB7B7: fmul    dword ptr [edi+5Ch]
0x8DB7BA: movaps  xmm0, [esp+80h+var_50]
0x8DB7BF: movaps  xmm2, [esp+80h+var_40]
0x8DB7C4: movaps  xmm1, xmmword ptr [esi+10h]
0x8DB7C8: fsqrt
0x8DB7CA: mov     eax, [esp+80h+var_68]
0x8DB7CE: subps   xmm2, xmm0
0x8DB7D1: movaps  xmm0, xmm2
0x8DB7D4: mulps   xmm0, xmm1
0x8DB7D7: movaps  xmm1, xmm0
0x8DB7DA: shufps  xmm1, xmm0, 55h ; 'U'
0x8DB7DE: movaps  xmm2, xmm0
0x8DB7E1: addss   xmm1, xmm0
0x8DB7E5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8DB7E9: lea     ecx, [esp+80h+var_58]
0x8DB7ED: addss   xmm2, xmm1
0x8DB7F1: movss   dword ptr [ecx], xmm2
0x8DB7F5: add     eax, 8
0x8DB7F8: fmul    dword ptr ds:0A3F458h
0x8DB7FE: fstp    [esp+80h+var_60]
0x8DB802: fld     [esp+80h+var_60]
0x8DB806: fistp   [esp+80h+var_5C]
0x8DB80A: mov     dx, word ptr [esp+80h+var_5C]
0x8DB80F: mov     [eax+4], dx
0x8DB813: fld     dword ptr [ebx+60h]
0x8DB816: fmul    dword ptr [edi+60h]
0x8DB819: mov     eax, [esp+80h+var_68]
0x8DB81D: add     eax, 8
0x8DB820: fsqrt
0x8DB822: fmul    dword ptr ds:0A2FFE8h
0x8DB828: fstp    [esp+80h+var_5C]
0x8DB82C: fld     [esp+80h+var_5C]
0x8DB830: fistp   [esp+80h+var_60]
0x8DB834: mov     cl, byte ptr [esp+80h+var_60]
0x8DB838: mov     [eax+6], cl
0x8DB83B: mov     edx, [esp+80h+var_68]
0x8DB83F: xor     ecx, ecx
0x8DB841: mov     [edx], ecx
0x8DB843: mov     edx, [ebp+arg_0]
0x8DB846: mov     eax, [esp+80h+var_68]
0x8DB84A: mov     [esp+80h+var_28], edx
0x8DB84E: mov     edx, [ebp+arg_4]
0x8DB851: add     eax, 8
0x8DB854: mov     [esp+80h+var_24], edx
0x8DB858: mov     dx, word ptr [esp+80h+var_64]
0x8DB85D: mov     [esp+80h+var_18], esi
0x8DB861: mov     esi, [esp+80h+var_54]
0x8DB865: mov     [esp+80h+var_14], eax
0x8DB869: mov     eax, [esp+80h+var_58]
0x8DB86D: mov     [esp+80h+var_20], 1
0x8DB875: mov     [esp+80h+var_10], eax
0x8DB879: mov     [esp+80h+var_8], esi
0x8DB87D: mov     [esp+80h+var_C], ecx
0x8DB881: mov     [esp+80h+var_4], dx
0x8DB886: mov     [esp+80h+var_2], cx
0x8DB88B: mov     ecx, [esi+8]
0x8DB88E: lea     eax, [esp+80h+var_28]
0x8DB892: push    eax
0x8DB893: push    ecx
0x8DB894: call    sub_8DC800
0x8DB899: mov     eax, [edi+98h]
0x8DB89F: add     esp, 8
0x8DB8A2: test    eax, eax
0x8DB8A4: jz      short loc_8DB8B4
0x8DB8A6: lea     edx, [esp+80h+var_28]
0x8DB8AA: push    edx
0x8DB8AB: push    edi
0x8DB8AC: call    sub_8DBF80
0x8DB8B1: add     esp, 8
0x8DB8B4: mov     eax, [ebx+98h]
0x8DB8BA: test    eax, eax
0x8DB8BC: jz      short loc_8DB8CC
0x8DB8BE: lea     eax, [esp+80h+var_28]
0x8DB8C2: push    eax
0x8DB8C3: push    ebx
0x8DB8C4: call    sub_8DBF80
0x8DB8C9: add     esp, 8
0x8DB8CC: cmp     [esp+80h+var_C], 1
0x8DB8D1: jnz     short loc_8DB8EC
0x8DB8D3: mov     eax, [esp+80h+var_64]
0x8DB8D7: mov     edx, [esi]
0x8DB8D9: push    eax
0x8DB8DA: mov     ecx, esi
0x8DB8DC: call    dword ptr [edx+10h]
0x8DB8DF: or      ax, 0FFFFh
0x8DB8E3: pop     edi
0x8DB8E4: pop     esi
0x8DB8E5: pop     ebx
0x8DB8E6: mov     esp, ebp
0x8DB8E8: pop     ebp
0x8DB8E9: retn    10h
0x8DB8EC: mov     cx, [esp+80h+var_2]
0x8DB8F1: mov     ax, word ptr [esp+80h+var_64]
0x8DB8F6: pop     edi
0x8DB8F7: mov     [esi+0Eh], cx
0x8DB8FB: pop     esi
0x8DB8FC: pop     ebx
0x8DB8FD: mov     esp, ebp
0x8DB8FF: pop     ebp
0x8DB900: retn    10h
