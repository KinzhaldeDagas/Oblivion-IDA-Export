0x451100: push    esi
0x451101: mov     esi, [esp+4+arg_0]
0x451105: mov     ecx, esi
0x451107: call    BSSimpleList_IsEmpty
0x45110C: test    al, al
0x45110E: jnz     short loc_451155
0x451110: push    edi
0x451111: mov     edi, [esi]
0x451113: test    edi, edi
0x451115: jz      short loc_451127
0x451117: mov     ecx, edi
0x451119: call    TESFile_destr
0x45111E: push    edi
0x45111F: call    FormHeapFree
0x451124: add     esp, 4
0x451127: mov     eax, [esi+4]
0x45112A: test    eax, eax
0x45112C: jz      short loc_451143
0x45112E: mov     ecx, [eax+4]
0x451131: mov     [esi+4], ecx
0x451134: mov     edx, [eax]
0x451136: push    eax
0x451137: mov     [esi], edx
0x451139: call    FormHeapFree
0x45113E: add     esp, 4
0x451141: jmp     short loc_451149
0x451143: mov     dword ptr [esi], 0
0x451149: mov     ecx, esi
0x45114B: call    BSSimpleList_IsEmpty
0x451150: test    al, al
0x451152: jz      short loc_451111
0x451154: pop     edi
0x451155: pop     esi
0x451156: retn
