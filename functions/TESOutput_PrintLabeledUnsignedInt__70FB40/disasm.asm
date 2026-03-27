0x70FB40: push    ebx
0x70FB41: mov     ebx, dword ptr [esp+4+ArgList]
0x70FB45: push    esi
0x70FB46: mov     eax, ebx
0x70FB48: push    edi
0x70FB49: lea     edx, [eax+1]
0x70FB4C: lea     esp, [esp+0]
0x70FB50: mov     cl, [eax]
0x70FB52: add     eax, 1
0x70FB55: test    cl, cl
0x70FB57: jnz     short loc_70FB50
0x70FB59: sub     eax, edx
0x70FB5B: lea     esi, [eax+0Eh]
0x70FB5E: push    esi; Size
0x70FB5F: call    FormHeapAlloc
0x70FB64: mov     edi, eax
0x70FB66: mov     eax, [esp+10h+arg_4]
0x70FB6A: push    eax
0x70FB6B: push    ebx; ArgList
0x70FB6C: push    offset aSU; "%s = %u"
0x70FB71: push    esi; SizeInBytes
0x70FB72: push    edi; DstBuf
0x70FB73: call    sub_6C5D40
0x70FB78: add     esp, 18h
0x70FB7B: mov     eax, edi
0x70FB7D: pop     edi
0x70FB7E: pop     esi
0x70FB7F: pop     ebx
0x70FB80: retn
