0x96D930: push    ebx
0x96D931: mov     ebx, dword ptr [esp+4+ArgList]
0x96D935: push    esi
0x96D936: mov     eax, ebx
0x96D938: push    edi
0x96D939: lea     edx, [eax+1]
0x96D93C: lea     esp, [esp+0]
0x96D940: mov     cl, [eax]
0x96D942: add     eax, 1
0x96D945: test    cl, cl
0x96D947: jnz     short loc_96D940
0x96D949: sub     eax, edx
0x96D94B: lea     edi, [eax+11h]
0x96D94E: push    edi; Size
0x96D94F: call    FormHeapAlloc
0x96D954: mov     esi, eax
0x96D956: mov     eax, [esp+10h+arg_4]
0x96D95A: add     esp, 4
0x96D95D: cmp     eax, 4; switch 5 cases
0x96D960: ja      short def_96D962
0x96D962: jmp     ds:jpt_96D962[eax*4]; switch jump
0x96D969: push    ebx; jumptable 0096D962 case 0
0x96D96A: push    offset aSUse_obb; "%s = USE_OBB"
0x96D96F: push    edi; SizeInBytes
0x96D970: push    esi; DstBuf
0x96D971: call    sub_6C5D40
0x96D976: add     esp, 10h
0x96D979: pop     edi
0x96D97A: mov     eax, esi
0x96D97C: pop     esi
0x96D97D: pop     ebx
0x96D97E: retn    8
0x96D981: push    ebx; jumptable 0096D962 case 1
0x96D982: push    offset aSUse_tri; "%s = USE_TRI"
0x96D987: push    edi; SizeInBytes
0x96D988: push    esi; DstBuf
0x96D989: call    sub_6C5D40
0x96D98E: add     esp, 10h
0x96D991: pop     edi
0x96D992: mov     eax, esi
0x96D994: pop     esi
0x96D995: pop     ebx
0x96D996: retn    8
0x96D999: push    ebx; jumptable 0096D962 case 2
0x96D99A: push    offset aSUse_abv; "%s = USE_ABV"
0x96D99F: push    edi; SizeInBytes
0x96D9A0: push    esi; DstBuf
0x96D9A1: call    sub_6C5D40
0x96D9A6: add     esp, 10h
0x96D9A9: pop     edi
0x96D9AA: mov     eax, esi
0x96D9AC: pop     esi
0x96D9AD: pop     ebx
0x96D9AE: retn    8
0x96D9B1: push    ebx; jumptable 0096D962 case 3
0x96D9B2: push    offset aSNotest; "%s = NOTEST"
0x96D9B7: push    edi; SizeInBytes
0x96D9B8: push    esi; DstBuf
0x96D9B9: call    sub_6C5D40
0x96D9BE: add     esp, 10h
0x96D9C1: pop     edi
0x96D9C2: mov     eax, esi
0x96D9C4: pop     esi
0x96D9C5: pop     ebx
0x96D9C6: retn    8
0x96D9C9: push    ebx; jumptable 0096D962 case 4
0x96D9CA: push    offset aSUse_nibound; "%s = USE_NIBOUND"
0x96D9CF: push    edi; SizeInBytes
0x96D9D0: push    esi; DstBuf
0x96D9D1: call    sub_6C5D40
0x96D9D6: add     esp, 10h
0x96D9D9: pop     edi
0x96D9DA: mov     eax, esi
0x96D9DC: pop     esi
0x96D9DD: pop     ebx
0x96D9DE: retn    8
