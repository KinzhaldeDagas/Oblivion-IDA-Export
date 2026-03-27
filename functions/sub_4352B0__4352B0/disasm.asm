0x4352B0: push    esi
0x4352B1: mov     esi, ecx
0x4352B3: mov     eax, [esi+28h]
0x4352B6: test    eax, eax
0x4352B8: jz      short loc_4352C9
0x4352BA: cmp     dword ptr [esi+0Ch], 6
0x4352BE: jz      short loc_4352C9
0x4352C0: mov     ecx, [esi+34h]
0x4352C3: push    eax
0x4352C4: call    sub_477C40
0x4352C9: mov     eax, ModelLoaderPtr
0x4352CE: mov     ecx, [eax+0Ch]
0x4352D1: mov     edx, [ecx]
0x4352D3: mov     eax, [esi+34h]
0x4352D6: mov     edx, [edx+10h]
0x4352D9: push    eax
0x4352DA: call    edx
0x4352DC: pop     esi
0x4352DD: retn
