0x71C840: mov     ecx, [esp+arg_14]
0x71C844: cmp     dword ptr [ecx+4], 0FF00h
0x71C84B: mov     eax, [esp+arg_10]
0x71C84F: push    esi
0x71C850: mov     esi, [eax+14h]
0x71C853: jnz     loc_71C973
0x71C859: push    ebx
0x71C85A: mov     ebx, [esp+8+arg_4]
0x71C85E: push    ebp
0x71C85F: mov     ebp, [esp+0Ch+arg_0]
0x71C863: mov     edx, ebp
0x71C865: imul    edx, ebx
0x71C868: push    edi
0x71C869: push    edx; Size
0x71C86A: call    FormHeapAlloc
0x71C86F: mov     edi, ebp
0x71C871: shr     edi, 1
0x71C873: imul    edi, ebx
0x71C876: add     esp, 4
0x71C879: xor     ecx, ecx
0x71C87B: test    edi, edi
0x71C87D: mov     [esp+10h+arg_10], eax
0x71C881: jbe     short loc_71C8AA
0x71C883: mov     ebp, [esp+10h+arg_18]
0x71C887: movzx   edx, byte ptr [ecx+ebp]
0x71C88B: shr     dl, 4
0x71C88E: mov     [eax], dl
0x71C890: movzx   edx, byte ptr [ecx+ebp]
0x71C894: add     eax, 1
0x71C897: and     dl, 0Fh
0x71C89A: mov     [eax], dl
0x71C89C: add     ecx, 1
0x71C89F: add     eax, 1
0x71C8A2: cmp     ecx, edi
0x71C8A4: jb      short loc_71C887
0x71C8A6: mov     ebp, [esp+10h+arg_0]
0x71C8AA: mov     ecx, [esp+10h+arg_14]
0x71C8AE: mov     ecx, [ecx]
0x71C8B0: cmp     ecx, 0FFh
0x71C8B6: mov     eax, [esp+10h+arg_10]
0x71C8BA: jnz     short loc_71C915
0x71C8BC: test    ebx, ebx
0x71C8BE: jbe     loc_71C963
0x71C8C4: mov     ecx, [esp+10h+arg_C]
0x71C8C8: test    ebp, ebp
0x71C8CA: jbe     short loc_71C8FE
0x71C8CC: mov     edi, ebp
0x71C8CE: mov     edi, edi
0x71C8D0: movzx   edx, byte ptr [eax]
0x71C8D3: movzx   edx, byte ptr [esi+edx*4]
0x71C8D7: mov     [ecx], dl
0x71C8D9: movzx   edx, byte ptr [eax]
0x71C8DC: movzx   edx, byte ptr [esi+edx*4+1]
0x71C8E1: add     ecx, 1
0x71C8E4: mov     [ecx], dl
0x71C8E6: movzx   edx, byte ptr [eax]
0x71C8E9: movzx   edx, byte ptr [esi+edx*4+2]
0x71C8EE: add     ecx, 1
0x71C8F1: mov     [ecx], dl
0x71C8F3: add     ecx, 1
0x71C8F6: add     eax, 1
0x71C8F9: sub     edi, 1
0x71C8FC: jnz     short loc_71C8D0
0x71C8FE: sub     ebx, 1
0x71C901: jnz     short loc_71C8C8
0x71C903: mov     eax, [esp+10h+arg_10]
0x71C907: push    eax
0x71C908: call    FormHeapFree
0x71C90D: add     esp, 4
0x71C910: pop     edi
0x71C911: pop     ebp
0x71C912: pop     ebx
0x71C913: pop     esi
0x71C914: retn
0x71C915: cmp     ecx, 0FF0000h
0x71C91B: jnz     short loc_71C963
0x71C91D: test    ebx, ebx
0x71C91F: jbe     short loc_71C963
0x71C921: mov     ecx, [esp+10h+arg_C]
0x71C925: test    ebp, ebp
0x71C927: jbe     short loc_71C95E
0x71C929: mov     edi, ebp
0x71C92B: jmp     short loc_71C930
0x71C92D: align 10h
0x71C930: movzx   edx, byte ptr [eax]
0x71C933: movzx   edx, byte ptr [esi+edx*4+2]
0x71C938: mov     [ecx], dl
0x71C93A: movzx   edx, byte ptr [eax]
0x71C93D: movzx   edx, byte ptr [esi+edx*4+1]
0x71C942: add     ecx, 1
0x71C945: mov     [ecx], dl
0x71C947: movzx   edx, byte ptr [eax]
0x71C94A: movzx   edx, byte ptr [esi+edx*4]
0x71C94E: add     ecx, 1
0x71C951: mov     [ecx], dl
0x71C953: add     ecx, 1
0x71C956: add     eax, 1
0x71C959: sub     edi, 1
0x71C95C: jnz     short loc_71C930
0x71C95E: sub     ebx, 1
0x71C961: jnz     short loc_71C925
0x71C963: mov     eax, [esp+10h+arg_10]
0x71C967: push    eax
0x71C968: call    FormHeapFree
0x71C96D: add     esp, 4
0x71C970: pop     edi
0x71C971: pop     ebp
0x71C972: pop     ebx
0x71C973: pop     esi
0x71C974: retn
