0x8A0320: push    ebx
0x8A0321: push    ebp
0x8A0322: push    esi
0x8A0323: push    edi
0x8A0324: mov     edi, [esp+10h+arg_0]
0x8A0328: mov     esi, ecx
0x8A032A: mov     ecx, edi
0x8A032C: call    sub_7124D0
0x8A0331: mov     ecx, edi
0x8A0333: call    sub_7124A0
0x8A0338: mov     ecx, edi
0x8A033A: mov     ebx, eax
0x8A033C: call    sub_7124A0
0x8A0341: mov     ebp, eax
0x8A0343: mov     eax, [esi]
0x8A0345: mov     edx, [eax+74h]
0x8A0348: lea     ecx, [esp+10h+arg_0]
0x8A034C: push    ecx
0x8A034D: mov     ecx, esi
0x8A034F: call    edx
0x8A0351: test    eax, eax
0x8A0353: jz      short loc_8A0382
0x8A0355: add     eax, 0FFFFFFFCh
0x8A0358: jz      short loc_8A0382
0x8A035A: test    ebx, ebx
0x8A035C: jz      short loc_8A0382
0x8A035E: test    ebp, ebp
0x8A0360: mov     ecx, [ebx+8]
0x8A0363: mov     [eax+0Ch], ecx
0x8A0366: jz      short loc_8A037D
0x8A0368: mov     ebp, [ebp+8]
0x8A036B: push    edi
0x8A036C: mov     ecx, esi
0x8A036E: mov     [eax+10h], ebp
0x8A0371: call    sub_89D6C0
0x8A0376: pop     edi
0x8A0377: pop     esi
0x8A0378: pop     ebp
0x8A0379: pop     ebx
0x8A037A: retn    4
0x8A037D: xor     ebp, ebp
0x8A037F: mov     [eax+10h], ebp
0x8A0382: push    edi
0x8A0383: mov     ecx, esi
0x8A0385: call    sub_89D6C0
0x8A038A: pop     edi
0x8A038B: pop     esi
0x8A038C: pop     ebp
0x8A038D: pop     ebx
0x8A038E: retn    4
