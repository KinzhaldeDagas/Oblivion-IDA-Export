0x88B600: push    ebx
0x88B601: push    esi
0x88B602: mov     esi, ecx
0x88B604: mov     eax, [esi]
0x88B606: mov     edx, [eax+58h]
0x88B609: xor     bl, bl
0x88B60B: call    edx
0x88B60D: test    eax, eax
0x88B60F: jz      short loc_88B677
0x88B611: push    edi
0x88B612: mov     edi, [esp+0Ch+arg_0]
0x88B616: test    edi, edi
0x88B618: jz      short loc_88B676
0x88B61A: cmp     dword ptr [esi+20h], 0
0x88B61E: mov     ebx, 1
0x88B623: jbe     short loc_88B669
0x88B625: cmp     dword ptr [esi+44h], 0C8h ; 'È'
0x88B62C: jb      short loc_88B64A
0x88B62E: mov     ecx, esi
0x88B630: call    sub_88A440
0x88B635: mov     ecx, esi
0x88B637: call    sub_88A3A0
0x88B63C: mov     ecx, esi
0x88B63E: call    sub_88A310
0x88B643: mov     ecx, esi
0x88B645: call    sub_88A280
0x88B64A: cmp     word ptr [edi+4], 0
0x88B64F: jz      short loc_88B655
0x88B651: add     [edi+6], bx
0x88B655: mov     eax, [esi+44h]
0x88B658: mov     ecx, [esi+40h]
0x88B65B: mov     [ecx+eax*4], edi
0x88B65E: add     [esi+44h], ebx
0x88B661: pop     edi
0x88B662: pop     esi
0x88B663: mov     al, bl
0x88B665: pop     ebx
0x88B666: retn    4
0x88B669: push    edi
0x88B66A: lea     edx, [esp+10h+arg_0]
0x88B66E: push    edx
0x88B66F: mov     ecx, eax
0x88B671: call    sub_8988F0
0x88B676: pop     edi
0x88B677: pop     esi
0x88B678: mov     al, bl
0x88B67A: pop     ebx
0x88B67B: retn    4
