0x611B00: push    ebx
0x611B01: mov     ebx, [esp+4+arg_0]
0x611B05: push    esi
0x611B06: push    edi
0x611B07: mov     edi, ecx
0x611B09: mov     esi, [edi+104h]
0x611B0F: test    esi, esi
0x611B11: jz      short loc_611B27
0x611B13: cmp     esi, ebx
0x611B15: jz      short loc_611B2D
0x611B17: mov     ecx, esi
0x611B19: call    sub_47AB80
0x611B1E: push    esi
0x611B1F: call    FormHeapFree
0x611B24: add     esp, 4
0x611B27: mov     [edi+104h], ebx
0x611B2D: pop     edi
0x611B2E: pop     esi
0x611B2F: pop     ebx
0x611B30: retn    4
