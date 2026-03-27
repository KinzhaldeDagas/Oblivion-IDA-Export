0x4BEFA0: push    esi
0x4BEFA1: mov     esi, ecx
0x4BEFA3: cmp     dword ptr [esi+24h], 0
0x4BEFA7: jz      short loc_4BEFC7
0x4BEFA9: push    edi
0x4BEFAA: lea     ebx, [ebx+0]
0x4BEFB0: mov     eax, [esi+24h]
0x4BEFB3: mov     edi, [eax+4]
0x4BEFB6: push    eax
0x4BEFB7: call    FormHeapFree
0x4BEFBC: add     esp, 4
0x4BEFBF: test    edi, edi
0x4BEFC1: mov     [esi+24h], edi
0x4BEFC4: jnz     short loc_4BEFB0
0x4BEFC6: pop     edi
0x4BEFC7: mov     dword ptr [esi+20h], 0
0x4BEFCE: mov     ecx, esi; void *
0x4BEFD0: pop     esi
0x4BEFD1: jmp     ?ClearComponentReferences@TESTexture@@UAEXXZ?
