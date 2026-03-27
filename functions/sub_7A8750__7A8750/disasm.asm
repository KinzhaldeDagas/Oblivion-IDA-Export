0x7A8750: mov     ecx, [esp+arg_4]
0x7A8754: mov     edx, [esp+arg_8]
0x7A8758: push    esi
0x7A8759: mov     esi, [esp+4+arg_0]
0x7A875D: mov     eax, ecx
0x7A875F: sub     eax, esi
0x7A8761: sar     eax, 3
0x7A8764: add     eax, eax
0x7A8766: add     eax, eax
0x7A8768: add     eax, eax
0x7A876A: push    edi
0x7A876B: mov     edi, eax
0x7A876D: mov     eax, edx
0x7A876F: sub     eax, edi
0x7A8771: cmp     esi, ecx
0x7A8773: jz      short loc_7A878B
0x7A8775: sub     edx, ecx
0x7A8777: mov     edi, [ecx-8]
0x7A877A: sub     ecx, 8
0x7A877D: cmp     ecx, esi
0x7A877F: mov     [edx+ecx], edi
0x7A8782: mov     edi, [ecx+4]
0x7A8785: mov     [edx+ecx+4], edi
0x7A8789: jnz     short loc_7A8777
0x7A878B: pop     edi
0x7A878C: pop     esi
0x7A878D: retn
