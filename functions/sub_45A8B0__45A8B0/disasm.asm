0x45A8B0: sub     esp, 0Ch
0x45A8B3: push    esi
0x45A8B4: push    edi
0x45A8B5: mov     edi, ecx
0x45A8B7: mov     edx, [edi+4]
0x45A8BA: xor     eax, eax
0x45A8BC: test    edx, edx
0x45A8BE: jbe     short loc_45A8D4
0x45A8C0: mov     esi, [edi+8]
0x45A8C3: mov     ecx, esi
0x45A8C5: cmp     dword ptr [ecx], 0
0x45A8C8: jnz     short loc_45A934
0x45A8CA: add     eax, 1
0x45A8CD: add     ecx, 4
0x45A8D0: cmp     eax, edx
0x45A8D2: jb      short loc_45A8C5
0x45A8D4: xor     eax, eax
0x45A8D6: test    eax, eax
0x45A8D8: mov     [esp+14h+var_8], eax
0x45A8DC: jz      short loc_45A928
0x45A8DE: mov     edi, edi
0x45A8E0: lea     eax, [esp+14h+var_C]
0x45A8E4: push    eax
0x45A8E5: lea     ecx, [esp+18h+var_4]
0x45A8E9: push    ecx
0x45A8EA: lea     edx, [esp+1Ch+var_8]
0x45A8EE: push    edx
0x45A8EF: mov     ecx, edi
0x45A8F1: mov     [esp+20h+var_C], 0
0x45A8F9: call    sub_452600
0x45A8FE: mov     esi, [esp+14h+var_C]
0x45A902: test    esi, esi
0x45A904: jz      short loc_45A921
0x45A906: mov     eax, [esi+4]
0x45A909: test    eax, eax
0x45A90B: jz      short loc_45A918
0x45A90D: push    eax; void *
0x45A90E: mov     ecx, offset FormHeap
0x45A913: call    MemoryHeap_Free_checked
0x45A918: push    esi
0x45A919: call    FormHeapFree
0x45A91E: add     esp, 4
0x45A921: cmp     [esp+14h+var_8], 0
0x45A926: jnz     short loc_45A8E0
0x45A928: mov     ecx, edi
0x45A92A: pop     edi
0x45A92B: pop     esi
0x45A92C: add     esp, 0Ch
0x45A92F: jmp     NiTMap_Clear
0x45A934: mov     eax, [esi+eax*4]
0x45A937: jmp     short loc_45A8D6
