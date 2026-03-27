0x77CD10: cmp     byte ptr [ecx+10h], 0
0x77CD14: push    ebx
0x77CD15: push    ebp
0x77CD16: push    esi
0x77CD17: push    edi
0x77CD18: jz      short loc_77CD4B
0x77CD1A: mov     edi, [esp+10h+Src]
0x77CD1E: mov     eax, edi
0x77CD20: lea     edx, [eax+1]
0x77CD23: mov     cl, [eax]
0x77CD25: add     eax, 1
0x77CD28: test    cl, cl
0x77CD2A: jnz     short loc_77CD23
0x77CD2C: sub     eax, edx
0x77CD2E: lea     esi, [eax+1]
0x77CD31: push    esi; Size
0x77CD32: call    FormHeapAlloc
0x77CD37: mov     ebx, [esp+14h+arg_0]
0x77CD3B: push    edi; Src
0x77CD3C: push    esi; SizeInBytes
0x77CD3D: push    eax; Dst
0x77CD3E: mov     [ebx+4], eax
0x77CD41: call    _strcpy_s
0x77CD46: add     esp, 10h
0x77CD49: jmp     short loc_77CD56
0x77CD4B: mov     ebx, [esp+10h+arg_0]
0x77CD4F: mov     eax, [esp+10h+Src]
0x77CD53: mov     [ebx+4], eax
0x77CD56: mov     esi, [ebx+8]
0x77CD59: mov     edi, [esp+10h+arg_8]
0x77CD5D: cmp     esi, edi
0x77CD5F: mov     ebp, ds:0A2807Ch
0x77CD65: jz      short loc_77CD94
0x77CD67: test    esi, esi
0x77CD69: jz      short loc_77CD83
0x77CD6B: lea     ecx, [esi+4]
0x77CD6E: push    ecx; lpAddend
0x77CD6F: call    ebp ; InterlockedDecrement
0x77CD71: test    eax, eax
0x77CD73: jnz     short loc_77CD83
0x77CD75: test    esi, esi
0x77CD77: jz      short loc_77CD83
0x77CD79: mov     edx, [esi]
0x77CD7B: mov     eax, [edx]
0x77CD7D: push    1
0x77CD7F: mov     ecx, esi
0x77CD81: call    eax
0x77CD83: test    edi, edi
0x77CD85: mov     [ebx+8], edi
0x77CD88: jz      short loc_77CDAC
0x77CD8A: lea     ecx, [edi+4]
0x77CD8D: push    ecx; lpAddend
0x77CD8E: call    dword ptr ds:0A28078h
0x77CD94: test    edi, edi
0x77CD96: jz      short loc_77CDAC
0x77CD98: lea     edx, [edi+4]
0x77CD9B: push    edx; lpAddend
0x77CD9C: call    ebp ; InterlockedDecrement
0x77CD9E: test    eax, eax
0x77CDA0: jnz     short loc_77CDAC
0x77CDA2: mov     eax, [edi]
0x77CDA4: mov     edx, [eax]
0x77CDA6: push    1
0x77CDA8: mov     ecx, edi
0x77CDAA: call    edx
0x77CDAC: pop     edi
0x77CDAD: pop     esi
0x77CDAE: pop     ebp
0x77CDAF: pop     ebx
0x77CDB0: retn    0Ch
