0x70FAF0: push    ebx
0x70FAF1: mov     ebx, dword ptr [esp+4+ArgList]
0x70FAF5: push    esi
0x70FAF6: mov     eax, ebx
0x70FAF8: push    edi
0x70FAF9: lea     edx, [eax+1]
0x70FAFC: lea     esp, [esp+0]
0x70FB00: mov     cl, [eax]
0x70FB02: add     eax, 1
0x70FB05: test    cl, cl
0x70FB07: jnz     short loc_70FB00
0x70FB09: sub     eax, edx
0x70FB0B: lea     esi, [eax+0Fh]
0x70FB0E: push    esi; Size
0x70FB0F: call    FormHeapAlloc
0x70FB14: mov     edi, eax
0x70FB16: mov     eax, [esp+10h+arg_4]
0x70FB1A: push    eax
0x70FB1B: push    ebx; ArgList
0x70FB1C: push    offset aSD; "%s = %d"
0x70FB21: push    esi; SizeInBytes
0x70FB22: push    edi; DstBuf
0x70FB23: call    sub_6C5D40
0x70FB28: add     esp, 18h
0x70FB2B: mov     eax, edi
0x70FB2D: pop     edi
0x70FB2E: pop     esi
0x70FB2F: pop     ebx
0x70FB30: retn
