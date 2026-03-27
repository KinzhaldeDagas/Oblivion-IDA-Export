0x67BEC0: push    ebx
0x67BEC1: mov     ebx, ecx
0x67BEC3: push    esi
0x67BEC4: mov     esi, [ebx]
0x67BEC6: cmp     dword ptr [esi+4], 0
0x67BECA: jz      short loc_67BEE7
0x67BECC: push    edi
0x67BECD: lea     ecx, [ecx+0]
0x67BED0: mov     eax, [esi+4]
0x67BED3: mov     edi, [eax+4]
0x67BED6: push    eax
0x67BED7: call    FormHeapFree
0x67BEDC: add     esp, 4
0x67BEDF: test    edi, edi
0x67BEE1: mov     [esi+4], edi
0x67BEE4: jnz     short loc_67BED0
0x67BEE6: pop     edi
0x67BEE7: mov     dword ptr [esi], 0
0x67BEED: mov     eax, [ebx]
0x67BEEF: push    eax
0x67BEF0: call    FormHeapFree
0x67BEF5: add     esp, 4
0x67BEF8: pop     esi
0x67BEF9: pop     ebx
0x67BEFA: retn
