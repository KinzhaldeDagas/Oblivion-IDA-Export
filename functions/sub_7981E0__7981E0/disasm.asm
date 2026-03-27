0x7981E0: push    esi
0x7981E1: mov     esi, ecx
0x7981E3: mov     eax, [esi+10h]
0x7981E6: push    edi
0x7981E7: push    eax
0x7981E8: call    FormHeapFree
0x7981ED: mov     ecx, [esi+14h]
0x7981F0: push    ecx
0x7981F1: call    FormHeapFree
0x7981F6: mov     edx, [esi+18h]
0x7981F9: push    edx
0x7981FA: call    FormHeapFree
0x7981FF: mov     eax, [esi+24h]
0x798202: push    eax
0x798203: call    FormHeapFree
0x798208: mov     ecx, [esi+28h]
0x79820B: push    ecx
0x79820C: call    FormHeapFree
0x798211: mov     edx, [esi+2Ch]
0x798214: push    edx
0x798215: call    FormHeapFree
0x79821A: mov     eax, [esi+30h]
0x79821D: push    eax
0x79821E: call    FormHeapFree
0x798223: mov     ecx, [esi+1Ch]
0x798226: push    ecx
0x798227: call    FormHeapFree
0x79822C: mov     edx, [esi+20h]
0x79822F: push    edx
0x798230: call    FormHeapFree
0x798235: mov     eax, [esi+34h]
0x798238: push    eax
0x798239: call    FormHeapFree
0x79823E: mov     ecx, [esi+38h]
0x798241: push    ecx
0x798242: call    FormHeapFree
0x798247: mov     edx, [esi+40h]
0x79824A: xor     edi, edi
0x79824C: push    edx
0x79824D: mov     [esi+10h], edi
0x798250: mov     [esi+14h], edi
0x798253: mov     [esi+18h], edi
0x798256: mov     [esi+24h], edi
0x798259: mov     [esi+28h], edi
0x79825C: mov     [esi+2Ch], edi
0x79825F: mov     [esi+30h], edi
0x798262: mov     [esi+1Ch], edi
0x798265: mov     [esi+20h], edi
0x798268: mov     [esi+34h], edi
0x79826B: mov     [esi+38h], edi
0x79826E: call    FormHeapFree
0x798273: add     esp, 30h
0x798276: mov     [esi+40h], edi
0x798279: pop     edi
0x79827A: mov     ecx, esi
0x79827C: pop     esi
0x79827D: jmp     loc_786F70
