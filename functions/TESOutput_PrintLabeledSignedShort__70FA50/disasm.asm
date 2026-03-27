0x70FA50: push    ebx
0x70FA51: mov     ebx, dword ptr [esp+4+ArgList]
0x70FA55: push    esi
0x70FA56: mov     eax, ebx
0x70FA58: push    edi
0x70FA59: lea     edx, [eax+1]
0x70FA5C: lea     esp, [esp+0]
0x70FA60: mov     cl, [eax]
0x70FA62: add     eax, 1
0x70FA65: test    cl, cl
0x70FA67: jnz     short loc_70FA60
0x70FA69: sub     eax, edx
0x70FA6B: lea     esi, [eax+0Ah]
0x70FA6E: push    esi; Size
0x70FA6F: call    FormHeapAlloc
0x70FA74: mov     edi, eax
0x70FA76: movsx   eax, [esp+10h+arg_4]
0x70FA7B: push    eax
0x70FA7C: push    ebx; ArgList
0x70FA7D: push    offset aSHd; "%s = %hd"
0x70FA82: push    esi; SizeInBytes
0x70FA83: push    edi; DstBuf
0x70FA84: call    sub_6C5D40
0x70FA89: add     esp, 18h
0x70FA8C: mov     eax, edi
0x70FA8E: pop     edi
0x70FA8F: pop     esi
0x70FA90: pop     ebx
0x70FA91: retn
