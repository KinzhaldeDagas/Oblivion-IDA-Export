0x75E410: mov     eax, [esp+arg_4]
0x75E414: push    ebx
0x75E415: push    esi
0x75E416: push    edi
0x75E417: mov     edi, [esp+0Ch+arg_0]
0x75E41B: push    eax
0x75E41C: push    edi
0x75E41D: mov     esi, ecx
0x75E41F: call    sub_6CE2C0
0x75E424: mov     ecx, [edi+40h]
0x75E427: mov     ebx, [esi+40h]
0x75E42A: push    ecx
0x75E42B: call    FormHeapFree
0x75E430: mov     eax, ebx
0x75E432: add     esp, 4
0x75E435: lea     edx, [eax+1]
0x75E438: mov     cl, [eax]
0x75E43A: add     eax, 1
0x75E43D: test    cl, cl
0x75E43F: jnz     short loc_75E438
0x75E441: sub     eax, edx
0x75E443: lea     esi, [eax+1]
0x75E446: push    esi; Size
0x75E447: call    FormHeapAlloc
0x75E44C: push    ebx; Src
0x75E44D: push    esi; SizeInBytes
0x75E44E: push    eax; Dst
0x75E44F: mov     [edi+40h], eax
0x75E452: call    _strcpy_s
0x75E457: add     esp, 10h
0x75E45A: pop     edi
0x75E45B: pop     esi
0x75E45C: pop     ebx
0x75E45D: retn    8
