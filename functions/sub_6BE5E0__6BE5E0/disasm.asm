0x6BE5E0: sub     esp, 0Ch
0x6BE5E3: mov     ecx, [esp+0Ch+arg_0]
0x6BE5E7: push    ebx
0x6BE5E8: push    ebp
0x6BE5E9: mov     ebp, [esp+14h+arg_4]
0x6BE5ED: push    esi
0x6BE5EE: xor     eax, eax
0x6BE5F0: lea     esi, [ecx+2Ch]
0x6BE5F3: lea     edx, [ebp+30h]
0x6BE5F6: push    edi
0x6BE5F7: mov     [esp+1Ch+var_C], eax
0x6BE5FB: mov     [esp+1Ch+var_8], esi
0x6BE5FF: mov     ebx, esi
0x6BE601: mov     [esp+1Ch+arg_0], edx
0x6BE605: lea     edi, [ecx+20h]
0x6BE608: sub     ebp, ecx
0x6BE60A: jmp     short loc_6BE614
0x6BE60C: align 10h
0x6BE610: mov     esi, [esp+1Ch+var_8]
0x6BE614: mov     ecx, [edi-0Ch]
0x6BE617: cmp     ecx, [edi+ebp-0Ch]
0x6BE61B: jnz     loc_6BE6A4
0x6BE621: mov     edx, [edi]
0x6BE623: cmp     edx, [edi+ebp]
0x6BE626: jnz     short loc_6BE6A4
0x6BE628: mov     dl, [esi+eax]
0x6BE62B: mov     esi, [esp+1Ch+arg_4]
0x6BE62F: cmp     dl, [eax+esi+2Ch]
0x6BE633: jnz     short loc_6BE6A4
0x6BE635: test    ecx, ecx
0x6BE637: jbe     short loc_6BE67F
0x6BE639: mov     edx, [edi]
0x6BE63B: mov     edx, ds:0B3D4A0h[edx*4]
0x6BE642: xor     esi, esi
0x6BE644: test    ecx, ecx
0x6BE646: mov     [esp+1Ch+var_4], edx
0x6BE64A: jbe     short loc_6BE67F
0x6BE64C: lea     esp, [esp+0]
0x6BE650: movzx   eax, byte ptr [ebx+ebp]
0x6BE654: mov     ecx, [esp+1Ch+arg_0]
0x6BE658: imul    eax, esi
0x6BE65B: add     eax, [ecx]
0x6BE65D: movzx   ecx, byte ptr [ebx]
0x6BE660: imul    ecx, esi
0x6BE663: add     ecx, [edi+10h]
0x6BE666: push    eax
0x6BE667: push    ecx
0x6BE668: call    [esp+24h+var_4]
0x6BE66C: add     esp, 8
0x6BE66F: test    al, al
0x6BE671: jz      short loc_6BE6A4
0x6BE673: add     esi, 1
0x6BE676: cmp     esi, [edi-0Ch]
0x6BE679: jb      short loc_6BE650
0x6BE67B: mov     eax, [esp+1Ch+var_C]
0x6BE67F: add     [esp+1Ch+arg_0], 4
0x6BE684: add     eax, 1
0x6BE687: add     edi, 4
0x6BE68A: add     ebx, 1
0x6BE68D: cmp     eax, 3
0x6BE690: mov     [esp+1Ch+var_C], eax
0x6BE694: jb      loc_6BE610
0x6BE69A: pop     edi
0x6BE69B: pop     esi
0x6BE69C: pop     ebp
0x6BE69D: mov     al, 1
0x6BE69F: pop     ebx
0x6BE6A0: add     esp, 0Ch
0x6BE6A3: retn
0x6BE6A4: pop     edi
0x6BE6A5: pop     esi
0x6BE6A6: pop     ebp
0x6BE6A7: xor     al, al
0x6BE6A9: pop     ebx
0x6BE6AA: add     esp, 0Ch
0x6BE6AD: retn
