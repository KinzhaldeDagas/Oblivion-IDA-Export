0x721440: push    ebx
0x721441: mov     ebx, ecx
0x721443: mov     eax, [ebx+8]
0x721446: test    eax, eax
0x721448: push    edi
0x721449: jz      short loc_72145B
0x72144B: push    eax
0x72144C: call    FormHeapFree
0x721451: add     esp, 4
0x721454: mov     dword ptr [ebx+8], 0
0x72145B: mov     edi, [esp+8+Src]
0x72145F: test    edi, edi
0x721461: jz      short loc_721494
0x721463: cmp     byte ptr [edi], 0
0x721466: jz      short loc_721494
0x721468: mov     eax, edi
0x72146A: lea     edx, [eax+1]
0x72146D: lea     ecx, [ecx+0]
0x721470: mov     cl, [eax]
0x721472: add     eax, 1
0x721475: test    cl, cl
0x721477: jnz     short loc_721470
0x721479: sub     eax, edx
0x72147B: push    esi
0x72147C: lea     esi, [eax+1]
0x72147F: push    esi; Size
0x721480: call    FormHeapAlloc
0x721485: push    edi; Src
0x721486: push    esi; SizeInBytes
0x721487: push    eax; Dst
0x721488: mov     [ebx+8], eax
0x72148B: call    _strcpy_s
0x721490: add     esp, 10h
0x721493: pop     esi
0x721494: pop     edi
0x721495: pop     ebx
0x721496: retn    4
