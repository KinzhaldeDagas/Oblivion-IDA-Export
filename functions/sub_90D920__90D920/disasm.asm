0x90D920: push    ebx
0x90D921: mov     ebx, [esp+4+arg_4]
0x90D925: push    esi
0x90D926: mov     esi, ecx
0x90D928: mov     eax, [esi+8]
0x90D92B: mov     ecx, [esi+4]
0x90D92E: and     eax, 3FFFFFFFh
0x90D933: cmp     ecx, eax
0x90D935: push    edi
0x90D936: mov     edi, [esp+0Ch+arg_0]
0x90D93A: jnz     short loc_90D947
0x90D93C: push    8
0x90D93E: push    esi
0x90D93F: call    sub_8A6EE0
0x90D944: add     esp, 8
0x90D947: mov     ecx, [esi+4]
0x90D94A: mov     edx, [esi]
0x90D94C: mov     [edx+ecx*8], edi
0x90D94F: mov     [edx+ecx*8+4], ebx
0x90D953: mov     eax, [esi+4]
0x90D956: inc     eax
0x90D957: pop     edi
0x90D958: mov     [esi+4], eax
0x90D95B: pop     esi
0x90D95C: pop     ebx
0x90D95D: retn    8
