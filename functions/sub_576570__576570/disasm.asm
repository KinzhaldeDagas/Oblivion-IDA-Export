0x576570: push    ebx
0x576571: push    esi
0x576572: push    edi
0x576573: mov     ebx, ecx
0x576575: xor     esi, esi
0x576577: mov     edi, [ebx+esi*4]
0x57657A: test    edi, edi
0x57657C: jz      short loc_57658E
0x57657E: mov     ecx, edi
0x576580: call    sub_573E70
0x576585: push    edi
0x576586: call    FormHeapFree
0x57658B: add     esp, 4
0x57658E: mov     dword ptr [ebx+esi*4], 0
0x576595: add     esi, 1
0x576598: cmp     esi, 5
0x57659B: jl      short loc_576577
0x57659D: pop     edi
0x57659E: pop     esi
0x57659F: pop     ebx
0x5765A0: retn
