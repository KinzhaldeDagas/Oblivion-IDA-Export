0x6C4F80: cmp     byte ptr [ecx+10h], 0
0x6C4F84: jz      short loc_6C4FC5
0x6C4F86: push    ebx
0x6C4F87: mov     ebx, [esp+4+Src]
0x6C4F8B: push    esi
0x6C4F8C: mov     eax, ebx
0x6C4F8E: push    edi
0x6C4F8F: lea     edx, [eax+1]
0x6C4F92: mov     cl, [eax]
0x6C4F94: add     eax, 1
0x6C4F97: test    cl, cl
0x6C4F99: jnz     short loc_6C4F92
0x6C4F9B: sub     eax, edx
0x6C4F9D: lea     esi, [eax+1]
0x6C4FA0: push    esi; Size
0x6C4FA1: call    FormHeapAlloc
0x6C4FA6: mov     edi, [esp+10h+arg_0]
0x6C4FAA: push    ebx; Src
0x6C4FAB: push    esi; SizeInBytes
0x6C4FAC: push    eax; Dst
0x6C4FAD: mov     [edi+4], eax
0x6C4FB0: call    _strcpy_s
0x6C4FB5: mov     eax, [esp+1Ch+arg_8]
0x6C4FB9: add     esp, 10h
0x6C4FBC: mov     [edi+8], eax
0x6C4FBF: pop     edi
0x6C4FC0: pop     esi
0x6C4FC1: pop     ebx
0x6C4FC2: retn    0Ch
0x6C4FC5: mov     eax, [esp+arg_0]
0x6C4FC9: mov     ecx, [esp+Src]
0x6C4FCD: mov     edx, [esp+arg_8]
0x6C4FD1: mov     [eax+4], ecx
0x6C4FD4: mov     [eax+8], edx
0x6C4FD7: retn    0Ch
