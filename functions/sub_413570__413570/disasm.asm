0x413570: cmp     [esp+arg_0], 0
0x413575: push    esi
0x413576: push    edi
0x413577: mov     edi, [esp+8+MaxCount]
0x41357B: mov     esi, ecx
0x41357D: jz      short loc_4135A6
0x41357F: cmp     dword ptr [esi+18h], 10h
0x413583: jb      short loc_4135A6
0x413585: test    edi, edi
0x413587: lea     eax, [esi+4]
0x41358A: push    ebx; MaxCount
0x41358B: mov     ebx, [eax]
0x41358D: jbe     short loc_41359C
0x41358F: push    edi; Src
0x413590: push    ebx; Src
0x413591: push    10h; DstSize
0x413593: push    eax; Dst
0x413594: call    _memcpy_s
0x413599: add     esp, 10h
0x41359C: push    ebx
0x41359D: call    FormHeapFree
0x4135A2: add     esp, 4
0x4135A5: pop     ebx
0x4135A6: mov     [esi+14h], edi
0x4135A9: mov     dword ptr [esi+18h], 0Fh
0x4135B0: mov     byte ptr [esi+edi+4], 0
0x4135B5: pop     edi
0x4135B6: pop     esi
0x4135B7: retn    8
