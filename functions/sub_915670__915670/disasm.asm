0x915670: push    esi
0x915671: mov     esi, ecx
0x915673: mov     eax, [esi]
0x915675: push    edi
0x915676: xor     edi, edi
0x915678: call    dword ptr [eax+20h]
0x91567B: cmp     eax, 0FFFFFFFFh
0x91567E: jz      short loc_91568E
0x915680: mov     edx, [esi]
0x915682: push    eax
0x915683: mov     ecx, esi
0x915685: inc     edi
0x915686: call    dword ptr [edx+24h]
0x915689: cmp     eax, 0FFFFFFFFh
0x91568C: jnz     short loc_915680
0x91568E: mov     eax, edi
0x915690: pop     edi
0x915691: pop     esi
0x915692: retn
