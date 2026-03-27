0x7825F0: push    ebp
0x7825F1: mov     ebp, [esp+4+Src]
0x7825F5: test    ebp, ebp
0x7825F7: push    esi
0x7825F8: jz      short loc_782657
0x7825FA: cmp     byte ptr [ebp+0], 0
0x7825FE: jz      short loc_782657
0x782600: mov     eax, ebp
0x782602: lea     edx, [eax+1]
0x782605: mov     cl, [eax]
0x782607: add     eax, 1
0x78260A: test    cl, cl
0x78260C: jnz     short loc_782605
0x78260E: mov     esi, [esp+8+arg_0]
0x782612: sub     eax, edx
0x782614: push    ebx
0x782615: push    edi; Src
0x782616: lea     edi, [eax+1]
0x782619: mov     eax, [esi]
0x78261B: test    eax, eax
0x78261D: jz      short loc_782636
0x78261F: mov     ebx, [esp+10h+SizeInBytes]
0x782623: cmp     ebx, edi
0x782625: ja      short loc_782643
0x782627: push    eax
0x782628: call    FormHeapFree
0x78262D: add     esp, 4
0x782630: mov     dword ptr [esi], 0
0x782636: push    edi; Size
0x782637: call    FormHeapAlloc
0x78263C: add     esp, 4
0x78263F: mov     [esi], eax
0x782641: mov     ebx, edi
0x782643: mov     eax, [esi]
0x782645: push    ebp; Src
0x782646: push    ebx; SizeInBytes
0x782647: push    eax; Dst
0x782648: call    _strcpy_s
0x78264D: add     esp, 0Ch
0x782650: pop     edi
0x782651: mov     eax, ebx
0x782653: pop     ebx
0x782654: pop     esi
0x782655: pop     ebp
0x782656: retn
0x782657: mov     esi, [esp+8+arg_0]
0x78265B: mov     ecx, [esi]
0x78265D: push    ecx
0x78265E: call    FormHeapFree
0x782663: add     esp, 4
0x782666: mov     dword ptr [esi], 0
0x78266C: pop     esi
0x78266D: xor     eax, eax
0x78266F: pop     ebp
0x782670: retn
