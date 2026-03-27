0x770860: sub     esp, 10h
0x770863: push    ebx
0x770864: push    ebp
0x770865: push    esi
0x770866: mov     esi, [esp+1Ch+arg_0]
0x77086A: mov     edx, [esi+10h]
0x77086D: mov     ebx, [esi+24h]
0x770870: xor     ebp, ebp
0x770872: test    edx, edx
0x770874: push    edi
0x770875: mov     [esp+20h+var_C], ebp
0x770879: jnz     short loc_7708B7
0x77087B: xor     edi, edi
0x77087D: cmp     [esi+8], di
0x770881: jbe     loc_770971
0x770887: mov     eax, [esi+1Ch]
0x77088A: lea     ebx, [ebx+0]
0x770890: push    eax
0x770891: push    0
0x770893: push    ebx
0x770894: call    __memset
0x770899: mov     eax, [esi+1Ch]
0x77089C: add     ebx, [esi+20h]
0x77089F: add     edi, 1
0x7708A2: add     esp, 0Ch
0x7708A5: add     ebp, eax
0x7708A7: cmp     di, [esi+8]
0x7708AB: jb      short loc_770890
0x7708AD: pop     edi
0x7708AE: pop     esi
0x7708AF: mov     eax, ebp
0x7708B1: pop     ebp
0x7708B2: pop     ebx
0x7708B3: add     esp, 10h
0x7708B6: retn
0x7708B7: mov     ax, [esi+4]
0x7708BB: xor     ecx, ecx
0x7708BD: sub     ax, 18h
0x7708C1: cmp     dword ptr [esi], 6
0x7708C4: movzx   edi, ax
0x7708C7: setnz   cl
0x7708CA: lea     ecx, [ecx+ecx+2]
0x7708CE: movzx   eax, cx
0x7708D1: mov     ecx, edi
0x7708D3: sub     ecx, eax
0x7708D5: test    cx, cx
0x7708D8: mov     [esp+20h+var_4], eax
0x7708DC: jle     short loc_7708E7
0x7708DE: movzx   eax, ax
0x7708E1: mov     [esp+20h+arg_0], eax
0x7708E5: jmp     short loc_7708EE
0x7708E7: movzx   ecx, di
0x7708EA: mov     [esp+20h+arg_0], ecx
0x7708EE: cmp     [esi+8], bp
0x7708F2: mov     [esp+20h+var_8], ebp
0x7708F6: jbe     short loc_770971
0x7708F8: jmp     short loc_770900
0x7708FA: align 10h
0x770900: mov     ecx, [esp+20h+arg_0]
0x770904: test    cx, cx
0x770907: mov     eax, edx
0x770909: mov     edi, ebx
0x77090B: mov     [esp+20h+var_10], 0
0x770913: jbe     short loc_770936
0x770915: movzx   ecx, cx
0x770918: movzx   ebp, cx
0x77091B: mov     [esp+20h+var_10], ebp
0x77091F: nop
0x770920: movzx   bp, byte ptr [eax]
0x770924: mov     [edi], bp
0x770927: add     edi, 2
0x77092A: add     eax, 1
0x77092D: sub     ecx, 1
0x770930: jnz     short loc_770920
0x770932: mov     ebp, [esp+20h+var_C]
0x770936: mov     eax, [esp+20h+var_4]
0x77093A: mov     ecx, [esp+20h+var_10]
0x77093E: cmp     cx, ax
0x770941: jnb     short loc_770953
0x770943: sub     eax, ecx
0x770945: movzx   ecx, ax
0x770948: xor     eax, eax
0x77094A: shr     ecx, 1
0x77094C: rep stosd
0x77094E: adc     ecx, ecx
0x770950: rep stosw
0x770953: mov     eax, [esp+20h+var_8]
0x770957: add     ebp, [esi+1Ch]
0x77095A: add     edx, [esi+18h]
0x77095D: add     ebx, [esi+20h]
0x770960: add     eax, 1
0x770963: cmp     ax, [esi+8]
0x770967: mov     [esp+20h+var_C], ebp
0x77096B: mov     [esp+20h+var_8], eax
0x77096F: jb      short loc_770900
0x770971: pop     edi
0x770972: pop     esi
0x770973: mov     eax, ebp
0x770975: pop     ebp
0x770976: pop     ebx
0x770977: add     esp, 10h
0x77097A: retn
