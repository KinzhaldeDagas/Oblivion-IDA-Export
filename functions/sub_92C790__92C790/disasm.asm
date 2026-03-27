0x92C790: mov     eax, [esp+arg_4]
0x92C794: push    ebx
0x92C795: push    ebp
0x92C796: mov     ebp, [esp+8+arg_C]
0x92C79A: push    esi
0x92C79B: push    edi
0x92C79C: mov     edi, [esp+10h+arg_8]
0x92C7A0: cmp     edi, ebp
0x92C7A2: jz      short loc_92C7C4
0x92C7A4: mov     cx, [edi]
0x92C7A7: cmp     cx, [ebp+0]
0x92C7AB: jnz     short loc_92C7C4
0x92C7AD: movzx   edx, word ptr [edi+2]
0x92C7B1: movzx   ecx, word ptr [ebp+2]
0x92C7B5: mov     dx, [eax+edx*8]
0x92C7B9: cmp     dx, [eax+ecx*8]
0x92C7BD: mov     byte ptr [esp+10h+arg_8], 1
0x92C7C2: jnz     short loc_92C7C9
0x92C7C4: mov     byte ptr [esp+10h+arg_8], 0
0x92C7C9: mov     ebx, [esp+10h+arg_10]
0x92C7CD: mov     ecx, [esp+10h+arg_14]
0x92C7D1: cmp     ebx, ecx
0x92C7D3: jz      short loc_92C7F4
0x92C7D5: mov     dx, [ebx]
0x92C7D8: cmp     dx, [ecx]
0x92C7DB: jnz     short loc_92C7F4
0x92C7DD: movzx   edx, word ptr [ebx+2]
0x92C7E1: movzx   esi, word ptr [ecx+2]
0x92C7E5: mov     dx, [eax+edx*8]
0x92C7E9: cmp     dx, [eax+esi*8]
0x92C7ED: mov     byte ptr [esp+10h+arg_14], 1
0x92C7F2: jnz     short loc_92C7F9
0x92C7F4: mov     byte ptr [esp+10h+arg_14], 0
0x92C7F9: mov     dl, byte ptr [esp+10h+arg_8]
0x92C7FD: test    dl, dl
0x92C7FF: jz      short loc_92C80D
0x92C801: mov     dl, byte ptr [esp+10h+arg_14]
0x92C805: test    dl, dl
0x92C807: jz      short loc_92C80D
0x92C809: mov     dl, 1
0x92C80B: jmp     short loc_92C80F
0x92C80D: xor     dl, dl
0x92C80F: test    dl, dl
0x92C811: jz      loc_92C9A2
0x92C817: cmp     edi, ecx
0x92C819: jz      short loc_92C840
0x92C81B: mov     dx, [edi]
0x92C81E: cmp     dx, [ecx]
0x92C821: jnz     short loc_92C840
0x92C823: movzx   edx, word ptr [edi+2]
0x92C827: mov     bx, [eax+edx*8]
0x92C82B: movzx   esi, word ptr [ecx+2]
0x92C82F: xor     edx, edx
0x92C831: cmp     bx, [eax+esi*8]
0x92C835: mov     ebx, [esp+10h+arg_10]
0x92C839: setnz   dl
0x92C83C: test    dl, dl
0x92C83E: jz      short loc_92C86D
0x92C840: cmp     ebx, ecx
0x92C842: jz      short loc_92C86D
0x92C844: mov     si, [ecx]
0x92C847: cmp     [ebx], si
0x92C84A: jnz     short loc_92C86D
0x92C84C: movzx   edx, word ptr [ebx+2]
0x92C850: movzx   ebx, word ptr [ecx+2]
0x92C854: mov     bp, [eax+edx*8]
0x92C858: xor     edx, edx
0x92C85A: cmp     bp, [eax+ebx*8]
0x92C85E: mov     ebp, [esp+10h+arg_C]
0x92C862: mov     ebx, [esp+10h+arg_10]
0x92C866: setnz   dl
0x92C869: test    dl, dl
0x92C86B: jz      short loc_92C8A5
0x92C86D: movzx   edx, word ptr [edi+2]
0x92C871: mov     si, [ecx]
0x92C874: cmp     [eax+edx*8], si
0x92C878: lea     edx, [eax+edx*8]
0x92C87B: mov     [esp+10h+arg_C], edx
0x92C87F: jnz     short loc_92C8A5
0x92C881: movzx   edx, word ptr [ecx+2]
0x92C885: mov     dx, [eax+edx*8]
0x92C889: cmp     dx, [edi]
0x92C88C: jnz     short loc_92C8A5
0x92C88E: cmp     [esp+10h+arg_C], ecx
0x92C892: mov     [esp+10h+arg_8], 0
0x92C89A: mov     edx, [esp+10h+arg_8]
0x92C89E: setz    dl
0x92C8A1: test    dl, dl
0x92C8A3: jz      short loc_92C8D4
0x92C8A5: movzx   edx, word ptr [ebx+2]
0x92C8A9: cmp     [eax+edx*8], si
0x92C8AD: lea     edx, [eax+edx*8]
0x92C8B0: mov     [esp+10h+arg_C], edx
0x92C8B4: jnz     short loc_92C8D4
0x92C8B6: movzx   edx, word ptr [ecx+2]
0x92C8BA: mov     dx, [eax+edx*8]
0x92C8BE: cmp     dx, [ebx]
0x92C8C1: jnz     short loc_92C8D4
0x92C8C3: mov     esi, [esp+10h+arg_C]
0x92C8C7: xor     edx, edx
0x92C8C9: cmp     esi, ecx
0x92C8CB: setz    dl
0x92C8CE: mov     [esp+10h+arg_C], edx
0x92C8D2: jmp     short loc_92C8DC
0x92C8D4: mov     [esp+10h+arg_C], 1
0x92C8DC: cmp     edi, ebp
0x92C8DE: jz      short loc_92C902
0x92C8E0: mov     cx, [edi]
0x92C8E3: cmp     cx, [ebp+0]
0x92C8E7: jnz     short loc_92C902
0x92C8E9: movzx   edx, word ptr [edi+2]
0x92C8ED: movzx   esi, word ptr [ebp+2]
0x92C8F1: mov     dx, [eax+edx*8]
0x92C8F5: xor     ecx, ecx
0x92C8F7: cmp     dx, [eax+esi*8]
0x92C8FB: setnz   cl
0x92C8FE: test    cl, cl
0x92C900: jz      short loc_92C92C
0x92C902: cmp     ebx, ebp
0x92C904: jz      short loc_92C92C
0x92C906: mov     dx, [ebp+0]
0x92C90A: cmp     [ebx], dx
0x92C90D: jnz     short loc_92C92C
0x92C90F: movzx   ecx, word ptr [ebx+2]
0x92C913: mov     bx, [eax+ecx*8]
0x92C917: movzx   esi, word ptr [ebp+2]
0x92C91B: xor     ecx, ecx
0x92C91D: cmp     bx, [eax+esi*8]
0x92C921: mov     ebx, [esp+10h+arg_10]
0x92C925: setnz   cl
0x92C928: test    cl, cl
0x92C92A: jz      short loc_92C954
0x92C92C: movzx   edx, word ptr [edi+2]
0x92C930: lea     esi, [eax+edx*8]
0x92C933: mov     dx, [ebp+0]
0x92C937: cmp     [esi], dx
0x92C93A: jnz     short loc_92C954
0x92C93C: movzx   ecx, word ptr [ebp+2]
0x92C940: mov     cx, [eax+ecx*8]
0x92C944: cmp     cx, [edi]
0x92C947: jnz     short loc_92C954
0x92C949: xor     ecx, ecx
0x92C94B: cmp     esi, ebp
0x92C94D: setz    cl
0x92C950: test    cl, cl
0x92C952: jz      short loc_92C977
0x92C954: movzx   ecx, word ptr [ebx+2]
0x92C958: cmp     [eax+ecx*8], dx
0x92C95C: lea     ecx, [eax+ecx*8]
0x92C95F: jnz     short loc_92C977
0x92C961: movzx   edx, word ptr [ebp+2]
0x92C965: mov     ax, [eax+edx*8]
0x92C969: cmp     ax, [ebx]
0x92C96C: jnz     short loc_92C977
0x92C96E: xor     eax, eax
0x92C970: cmp     ecx, ebp
0x92C972: setz    al
0x92C975: jmp     short loc_92C97C
0x92C977: mov     eax, 1
0x92C97C: mov     cl, byte ptr [esp+10h+arg_C]
0x92C980: test    cl, cl
0x92C982: jz      short loc_92C995
0x92C984: test    al, al
0x92C986: jz      short loc_92C995
0x92C988: mov     eax, [esp+10h+arg_0]
0x92C98C: pop     edi
0x92C98D: pop     esi
0x92C98E: mov     cl, 1
0x92C990: pop     ebp
0x92C991: mov     [eax], cl
0x92C993: pop     ebx
0x92C994: retn
0x92C995: mov     eax, [esp+10h+arg_0]
0x92C999: pop     edi
0x92C99A: pop     esi
0x92C99B: xor     cl, cl
0x92C99D: pop     ebp
0x92C99E: mov     [eax], cl
0x92C9A0: pop     ebx
0x92C9A1: retn
0x92C9A2: mov     eax, [esp+10h+arg_0]
0x92C9A6: pop     edi
0x92C9A7: pop     esi
0x92C9A8: pop     ebp
0x92C9A9: mov     [eax], dl
0x92C9AB: pop     ebx
0x92C9AC: retn
