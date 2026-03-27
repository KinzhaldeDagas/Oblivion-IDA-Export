0x4A6010: push    ebx
0x4A6011: push    esi
0x4A6012: mov     esi, ecx
0x4A6014: push    edi
0x4A6015: mov     edi, [esi+4]
0x4A6018: xor     ebx, ebx
0x4A601A: cmp     edi, ebx
0x4A601C: jz      short loc_4A605B
0x4A601E: mov     edi, edi
0x4A6020: mov     eax, [esi+8]
0x4A6023: cmp     eax, ebx
0x4A6025: jz      short loc_4A603D
0x4A6027: mov     ecx, [eax+4]
0x4A602A: mov     [esi+8], ecx
0x4A602D: mov     edx, [eax]
0x4A602F: push    eax
0x4A6030: mov     [esi+4], edx
0x4A6033: call    FormHeapFree
0x4A6038: add     esp, 4
0x4A603B: jmp     short loc_4A6040
0x4A603D: mov     [esi+4], ebx
0x4A6040: cmp     [esi+0Ch], bl
0x4A6043: jz      short loc_4A6054
0x4A6045: cmp     edi, ebx
0x4A6047: jz      short loc_4A6054
0x4A6049: mov     eax, [edi]
0x4A604B: mov     edx, [eax+8]
0x4A604E: push    1
0x4A6050: mov     ecx, edi
0x4A6052: call    edx
0x4A6054: mov     edi, [esi+4]
0x4A6057: cmp     edi, ebx
0x4A6059: jnz     short loc_4A6020
0x4A605B: pop     edi
0x4A605C: mov     [esi+10h], ebx
0x4A605F: pop     esi
0x4A6060: pop     ebx
0x4A6061: retn
