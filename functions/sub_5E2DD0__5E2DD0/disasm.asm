0x5E2DD0: push    edi
0x5E2DD1: mov     edi, ecx
0x5E2DD3: mov     ecx, [edi+58h]
0x5E2DD6: xor     eax, eax
0x5E2DD8: test    ecx, ecx
0x5E2DDA: jz      short loc_5E2DFC
0x5E2DDC: push    esi
0x5E2DDD: mov     esi, [ecx+8]
0x5E2DE0: test    esi, esi
0x5E2DE2: jz      short loc_5E2DEF
0x5E2DE4: mov     ecx, esi
0x5E2DE6: call    sub_567770
0x5E2DEB: test    al, al
0x5E2DED: jz      short loc_5E2DF9
0x5E2DEF: pop     esi
0x5E2DF0: lea     ecx, [edi+44h]
0x5E2DF3: pop     edi
0x5E2DF4: jmp     ExtraDataList__GetExtraPackage
0x5E2DF9: mov     eax, esi
0x5E2DFB: pop     esi
0x5E2DFC: pop     edi
0x5E2DFD: retn
