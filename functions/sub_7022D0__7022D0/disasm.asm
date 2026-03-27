0x7022D0: push    esi
0x7022D1: mov     esi, [esp+4+arg_0]
0x7022D5: push    edi
0x7022D6: push    esi
0x7022D7: mov     edi, ecx
0x7022D9: call    sub_6D7E00
0x7022DE: test    al, al
0x7022E0: jz      loc_702392
0x7022E6: mov     eax, [edi+34h]
0x7022E9: test    eax, eax
0x7022EB: jz      short loc_7022FB
0x7022ED: cmp     dword ptr [esi+34h], 0
0x7022F1: jz      loc_702392
0x7022F7: test    eax, eax
0x7022F9: jnz     short loc_702309
0x7022FB: cmp     dword ptr [esi+34h], 0
0x7022FF: jnz     loc_702392
0x702305: test    eax, eax
0x702307: jz      short loc_702339
0x702309: mov     ecx, [esi+34h]
0x70230C: lea     esp, [esp+0]
0x702310: mov     dl, [eax]
0x702312: cmp     dl, [ecx]
0x702314: jnz     short loc_702330
0x702316: test    dl, dl
0x702318: jz      short loc_70232C
0x70231A: mov     dl, [eax+1]
0x70231D: cmp     dl, [ecx+1]
0x702320: jnz     short loc_702330
0x702322: add     eax, 2
0x702325: add     ecx, 2
0x702328: test    dl, dl
0x70232A: jnz     short loc_702310
0x70232C: xor     eax, eax
0x70232E: jmp     short loc_702335
0x702330: sbb     eax, eax
0x702332: sbb     eax, 0FFFFFFFFh
0x702335: test    eax, eax
0x702337: jnz     short loc_702392
0x702339: mov     ecx, [edi+3Ch]
0x70233C: test    ecx, ecx
0x70233E: jz      short loc_70234A
0x702340: cmp     dword ptr [esi+3Ch], 0
0x702344: jz      short loc_702392
0x702346: test    ecx, ecx
0x702348: jnz     short loc_702354
0x70234A: cmp     dword ptr [esi+3Ch], 0
0x70234E: jnz     short loc_702392
0x702350: test    ecx, ecx
0x702352: jz      short loc_702363
0x702354: mov     eax, [esi+3Ch]
0x702357: mov     edx, [ecx]
0x702359: push    eax
0x70235A: mov     eax, [edx+2Ch]
0x70235D: call    eax
0x70235F: test    al, al
0x702361: jz      short loc_702392
0x702363: mov     ecx, [edi+18h]
0x702366: cmp     ecx, [esi+18h]
0x702369: jnz     short loc_702392
0x70236B: mov     edx, [edi+20h]
0x70236E: cmp     edx, [esi+20h]
0x702371: jnz     short loc_702392
0x702373: mov     eax, [edi+1Ch]
0x702376: cmp     eax, [esi+1Ch]
0x702379: jnz     short loc_702392
0x70237B: mov     cl, [edi+40h]
0x70237E: cmp     cl, [esi+40h]
0x702381: jnz     short loc_702392
0x702383: mov     dl, [edi+41h]
0x702386: cmp     dl, [esi+41h]
0x702389: jnz     short loc_702392
0x70238B: pop     edi
0x70238C: mov     al, 1
0x70238E: pop     esi
0x70238F: retn    4
0x702392: pop     edi
0x702393: xor     al, al
0x702395: pop     esi
0x702396: retn    4
