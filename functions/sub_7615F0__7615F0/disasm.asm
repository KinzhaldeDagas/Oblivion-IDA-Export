0x7615F0: push    esi
0x7615F1: mov     esi, ecx
0x7615F3: cmp     byte ptr [esi+64h], 0
0x7615F7: jnz     loc_761693
0x7615FD: mov     eax, [esi+4]
0x761600: push    edi
0x761601: mov     edi, [eax+3Ch]
0x761604: test    edi, edi
0x761606: jz      loc_761692
0x76160C: mov     eax, [edi+4Ch]
0x76160F: xor     dl, dl
0x761611: test    eax, eax
0x761613: jz      short loc_761632
0x761615: mov     ecx, [eax+10h]
0x761618: cmp     [esi+78h], ecx
0x76161B: jz      short loc_76161F
0x76161D: mov     dl, 1
0x76161F: cmp     [esi+6Ch], eax
0x761622: mov     [esi+78h], ecx
0x761625: lea     ecx, [esi+6Ch]; this
0x761628: jz      short loc_761632
0x76162A: push    eax; a2
0x76162B: call    NiSmartPointer_Set??
0x761630: mov     dl, 1
0x761632: mov     ecx, [edi+68h]
0x761635: cmp     ecx, [esi+74h]
0x761638: jnz     short loc_76163E
0x76163A: test    dl, dl
0x76163C: jz      short loc_761692
0x76163E: push    ebx
0x76163F: call    sub_71B280
0x761644: movzx   ecx, byte ptr [esi+65h]
0x761648: mov     edx, [eax]
0x76164A: mov     edx, [edx+10h]
0x76164D: push    ecx
0x76164E: push    edi
0x76164F: lea     ecx, [esi+0Ch]
0x761652: push    ecx
0x761653: push    edi
0x761654: mov     ecx, eax
0x761656: call    edx
0x761658: cmp     dword ptr [esi+4], 0
0x76165C: mov     ebx, eax
0x76165E: mov     eax, [edi+68h]
0x761661: mov     [esi+74h], eax
0x761664: jz      short loc_76166E
0x761666: push    ebx
0x761667: mov     ecx, esi
0x761669: call    sub_760CC0
0x76166E: test    ebx, ebx
0x761670: jz      short loc_761691
0x761672: lea     esi, [ebx+4]
0x761675: push    esi; lpAddend
0x761676: call    dword ptr ds:0A28078h
0x76167C: push    esi; lpAddend
0x76167D: call    dword ptr ds:0A2807Ch
0x761683: test    eax, eax
0x761685: jnz     short loc_761691
0x761687: mov     edx, [ebx]
0x761689: mov     eax, [edx]
0x76168B: push    1
0x76168D: mov     ecx, ebx
0x76168F: call    eax
0x761691: pop     ebx
0x761692: pop     edi
0x761693: pop     esi
0x761694: retn
