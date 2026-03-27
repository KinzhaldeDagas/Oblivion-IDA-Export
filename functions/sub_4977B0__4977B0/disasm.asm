0x4977B0: push    ebx
0x4977B1: push    edi
0x4977B2: mov     edi, [esp+8+arg_0]
0x4977B6: xor     bl, bl
0x4977B8: test    edi, edi
0x4977BA: jz      short loc_49781C
0x4977BC: push    edi
0x4977BD: call    sub_497420
0x4977C2: add     esp, 4
0x4977C5: test    eax, eax
0x4977C7: jz      short loc_4977CB
0x4977C9: mov     bl, 1
0x4977CB: push    ebp
0x4977CC: movzx   ebp, word ptr [edi+0B6h]
0x4977D3: push    esi
0x4977D4: xor     esi, esi
0x4977D6: test    ebp, ebp
0x4977D8: jbe     short loc_497815
0x4977DA: lea     ebx, [ebx+0]
0x4977E0: movzx   eax, word ptr [edi+0B6h]
0x4977E7: cmp     eax, esi
0x4977E9: jbe     short loc_49780E
0x4977EB: mov     ecx, [edi+0B0h]
0x4977F1: mov     ecx, [ecx+esi*4]
0x4977F4: test    ecx, ecx
0x4977F6: jz      short loc_49780E
0x4977F8: mov     edx, [ecx]
0x4977FA: mov     eax, [edx+8]
0x4977FD: call    eax
0x4977FF: test    eax, eax
0x497801: jz      short loc_49780E
0x497803: push    eax
0x497804: call    sub_4977B0
0x497809: add     esp, 4
0x49780C: add     bl, al
0x49780E: add     esi, 1
0x497811: cmp     esi, ebp
0x497813: jb      short loc_4977E0
0x497815: pop     esi
0x497816: pop     ebp
0x497817: pop     edi
0x497818: mov     al, bl
0x49781A: pop     ebx
0x49781B: retn
0x49781C: pop     edi
0x49781D: mov     al, bl
0x49781F: pop     ebx
0x497820: retn
