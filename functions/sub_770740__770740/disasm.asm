0x770740: sub     esp, 10h
0x770743: push    ebx
0x770744: push    ebp
0x770745: push    esi
0x770746: mov     esi, [esp+1Ch+arg_0]
0x77074A: mov     edx, [esi+10h]
0x77074D: mov     ebx, [esi+24h]
0x770750: xor     ebp, ebp
0x770752: test    edx, edx
0x770754: push    edi
0x770755: mov     [esp+20h+var_C], ebp
0x770759: jnz     short loc_770797
0x77075B: xor     edi, edi
0x77075D: cmp     [esi+8], di
0x770761: jbe     loc_770851
0x770767: mov     eax, [esi+1Ch]
0x77076A: lea     ebx, [ebx+0]
0x770770: push    eax
0x770771: push    0
0x770773: push    ebx
0x770774: call    __memset
0x770779: mov     eax, [esi+1Ch]
0x77077C: add     ebx, [esi+20h]
0x77077F: add     edi, 1
0x770782: add     esp, 0Ch
0x770785: add     ebp, eax
0x770787: cmp     di, [esi+8]
0x77078B: jb      short loc_770770
0x77078D: pop     edi
0x77078E: pop     esi
0x77078F: mov     eax, ebp
0x770791: pop     ebp
0x770792: pop     ebx
0x770793: add     esp, 10h
0x770796: retn
0x770797: mov     ax, [esi+4]
0x77079B: xor     ecx, ecx
0x77079D: sub     ax, 14h
0x7707A1: cmp     dword ptr [esi], 6
0x7707A4: movzx   edi, ax
0x7707A7: setnz   cl
0x7707AA: lea     ecx, [ecx+ecx+2]
0x7707AE: movzx   eax, cx
0x7707B1: mov     ecx, edi
0x7707B3: sub     ecx, eax
0x7707B5: test    cx, cx
0x7707B8: mov     [esp+20h+var_4], eax
0x7707BC: jle     short loc_7707C7
0x7707BE: movzx   eax, ax
0x7707C1: mov     [esp+20h+arg_0], eax
0x7707C5: jmp     short loc_7707CE
0x7707C7: movzx   ecx, di
0x7707CA: mov     [esp+20h+arg_0], ecx
0x7707CE: cmp     [esi+8], bp
0x7707D2: mov     [esp+20h+var_8], ebp
0x7707D6: jbe     short loc_770851
0x7707D8: jmp     short loc_7707E0
0x7707DA: align 10h
0x7707E0: mov     ecx, [esp+20h+arg_0]
0x7707E4: test    cx, cx
0x7707E7: mov     eax, edx
0x7707E9: mov     edi, ebx
0x7707EB: mov     [esp+20h+var_10], 0
0x7707F3: jbe     short loc_770816
0x7707F5: movzx   ecx, cx
0x7707F8: movzx   ebp, cx
0x7707FB: mov     [esp+20h+var_10], ebp
0x7707FF: nop
0x770800: movzx   bp, byte ptr [eax]
0x770804: mov     [edi], bp
0x770807: add     edi, 2
0x77080A: add     eax, 1
0x77080D: sub     ecx, 1
0x770810: jnz     short loc_770800
0x770812: mov     ebp, [esp+20h+var_C]
0x770816: mov     eax, [esp+20h+var_4]
0x77081A: mov     ecx, [esp+20h+var_10]
0x77081E: cmp     cx, ax
0x770821: jnb     short loc_770833
0x770823: sub     eax, ecx
0x770825: movzx   ecx, ax
0x770828: xor     eax, eax
0x77082A: shr     ecx, 1
0x77082C: rep stosd
0x77082E: adc     ecx, ecx
0x770830: rep stosw
0x770833: mov     eax, [esp+20h+var_8]
0x770837: add     ebp, [esi+1Ch]
0x77083A: add     edx, [esi+18h]
0x77083D: add     ebx, [esi+20h]
0x770840: add     eax, 1
0x770843: cmp     ax, [esi+8]
0x770847: mov     [esp+20h+var_C], ebp
0x77084B: mov     [esp+20h+var_8], eax
0x77084F: jb      short loc_7707E0
0x770851: pop     edi
0x770852: pop     esi
0x770853: mov     eax, ebp
0x770855: pop     ebp
0x770856: pop     ebx
0x770857: add     esp, 10h
0x77085A: retn
