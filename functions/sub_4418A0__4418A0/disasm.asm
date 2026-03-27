0x4418A0: push    esi
0x4418A1: mov     esi, ecx
0x4418A3: cmp     dword ptr [esi+84h], 0
0x4418AA: jz      short loc_4418CD
0x4418AC: push    edi
0x4418AD: lea     ecx, [ecx+0]
0x4418B0: mov     eax, [esi+84h]
0x4418B6: mov     edi, [eax+4]
0x4418B9: push    eax
0x4418BA: call    FormHeapFree
0x4418BF: add     esp, 4
0x4418C2: test    edi, edi
0x4418C4: mov     [esi+84h], edi
0x4418CA: jnz     short loc_4418B0
0x4418CC: pop     edi
0x4418CD: mov     dword ptr [esi+80h], 0
0x4418D7: pop     esi
0x4418D8: retn
