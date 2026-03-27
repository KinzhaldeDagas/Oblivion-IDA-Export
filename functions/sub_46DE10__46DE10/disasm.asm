0x46DE10: push    esi
0x46DE11: mov     esi, ecx
0x46DE13: cmp     dword ptr [esi+4], 0
0x46DE17: jz      short loc_46DE57
0x46DE19: push    edi
0x46DE1A: xor     edi, edi
0x46DE1C: cmp     [esi], edi
0x46DE1E: jbe     short loc_46DE43
0x46DE20: push    ebx
0x46DE21: mov     eax, [esi+4]
0x46DE24: mov     ebx, [eax+edi*4]
0x46DE27: test    ebx, ebx
0x46DE29: jz      short loc_46DE3B
0x46DE2B: mov     ecx, ebx
0x46DE2D: call    sub_46D450
0x46DE32: push    ebx
0x46DE33: call    FormHeapFree
0x46DE38: add     esp, 4
0x46DE3B: add     edi, 1
0x46DE3E: cmp     edi, [esi]
0x46DE40: jb      short loc_46DE21
0x46DE42: pop     ebx
0x46DE43: mov     ecx, [esi+4]
0x46DE46: push    ecx
0x46DE47: call    FormHeapFree
0x46DE4C: add     esp, 4
0x46DE4F: mov     dword ptr [esi+4], 0
0x46DE56: pop     edi
0x46DE57: mov     dword ptr [esi], 0
0x46DE5D: pop     esi
0x46DE5E: retn
