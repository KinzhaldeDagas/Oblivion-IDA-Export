0x715910: push    ebx
0x715911: mov     ebx, dword ptr [esp+4+ArgList]
0x715915: push    esi
0x715916: mov     eax, ebx
0x715918: push    edi
0x715919: lea     edx, [eax+1]
0x71591C: lea     esp, [esp+0]
0x715920: mov     cl, [eax]
0x715922: add     eax, 1
0x715925: test    cl, cl
0x715927: jnz     short loc_715920
0x715929: sub     eax, edx
0x71592B: lea     edi, [eax+0Bh]
0x71592E: push    edi; Size
0x71592F: call    FormHeapAlloc
0x715934: mov     esi, eax
0x715936: mov     eax, [esp+10h+arg_4]
0x71593A: add     esp, 4
0x71593D: sub     eax, 0
0x715940: jz      short loc_715978
0x715942: sub     eax, 1
0x715945: jz      short loc_715962
0x715947: sub     eax, 1
0x71594A: jnz     short loc_715988
0x71594C: push    ebx; ArgList
0x71594D: push    offset aSClamp; "%s = CLAMP"
0x715952: push    edi; SizeInBytes
0x715953: push    esi; DstBuf
0x715954: call    sub_6C5D40
0x715959: add     esp, 10h
0x71595C: pop     edi
0x71595D: mov     eax, esi
0x71595F: pop     esi
0x715960: pop     ebx
0x715961: retn
0x715962: push    ebx; ArgList
0x715963: push    offset aSReverse; "%s = REVERSE"
0x715968: push    edi; SizeInBytes
0x715969: push    esi; DstBuf
0x71596A: call    sub_6C5D40
0x71596F: add     esp, 10h
0x715972: pop     edi
0x715973: mov     eax, esi
0x715975: pop     esi
0x715976: pop     ebx
0x715977: retn
0x715978: push    ebx; ArgList
0x715979: push    offset aSLoop; "%s = LOOP"
0x71597E: push    edi; SizeInBytes
0x71597F: push    esi; DstBuf
0x715980: call    sub_6C5D40
0x715985: add     esp, 10h
0x715988: pop     edi
0x715989: mov     eax, esi
0x71598B: pop     esi
0x71598C: pop     ebx
0x71598D: retn
