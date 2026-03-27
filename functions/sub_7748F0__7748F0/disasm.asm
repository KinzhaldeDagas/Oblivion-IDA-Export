0x7748F0: push    esi
0x7748F1: mov     esi, ecx
0x7748F3: cmp     byte ptr [esi+64h], 0
0x7748F7: jnz     loc_77498C
0x7748FD: mov     eax, [esi+4]
0x774900: push    ebx
0x774901: push    ebp
0x774902: mov     ebp, [eax+3Ch]
0x774905: xor     bl, bl
0x774907: test    ebp, ebp
0x774909: jz      short loc_77498A
0x77490B: mov     eax, [ebp+4Ch]
0x77490E: push    eax
0x77490F: call    sub_760D70
0x774914: test    al, al
0x774916: jz      short loc_77491A
0x774918: mov     bl, 1
0x77491A: mov     ecx, [ebp+68h]
0x77491D: cmp     ecx, [esi+7Ch]
0x774920: jnz     short loc_774926
0x774922: test    bl, bl
0x774924: jz      short loc_77498A
0x774926: push    edi
0x774927: call    sub_71B280
0x77492C: movzx   ecx, byte ptr [esi+65h]
0x774930: mov     edx, [eax]
0x774932: mov     edx, [edx+10h]
0x774935: push    ecx
0x774936: push    ebp
0x774937: lea     ecx, [esi+0Ch]
0x77493A: push    ecx
0x77493B: push    ebp
0x77493C: mov     ecx, eax
0x77493E: call    edx
0x774940: cmp     dword ptr [esi+50h], 0
0x774944: mov     edi, eax
0x774946: mov     eax, [ebp+68h]
0x774949: mov     [esi+7Ch], eax
0x77494C: jz      short loc_774966
0x77494E: xor     ebx, ebx
0x774950: cmp     [edi+6Ch], ebx
0x774953: jbe     short loc_774966
0x774955: push    ebx
0x774956: push    edi
0x774957: mov     ecx, esi
0x774959: call    sub_7744D0
0x77495E: add     ebx, 1
0x774961: cmp     ebx, [edi+6Ch]
0x774964: jb      short loc_774955
0x774966: test    edi, edi
0x774968: jz      short loc_774989
0x77496A: lea     esi, [edi+4]
0x77496D: push    esi; lpAddend
0x77496E: call    dword ptr ds:0A28078h
0x774974: push    esi; lpAddend
0x774975: call    dword ptr ds:0A2807Ch
0x77497B: test    eax, eax
0x77497D: jnz     short loc_774989
0x77497F: mov     edx, [edi]
0x774981: mov     eax, [edx]
0x774983: push    1
0x774985: mov     ecx, edi
0x774987: call    eax
0x774989: pop     edi
0x77498A: pop     ebp
0x77498B: pop     ebx
0x77498C: pop     esi
0x77498D: retn
