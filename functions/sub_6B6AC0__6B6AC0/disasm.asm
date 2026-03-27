0x6B6AC0: push    esi
0x6B6AC1: mov     esi, ecx
0x6B6AC3: cmp     dword ptr [esi+50h], 0
0x6B6AC7: jz      short loc_6B6AE9
0x6B6AC9: mov     eax, [esi+50h]
0x6B6ACC: mov     ecx, [eax]
0x6B6ACE: mov     edx, [ecx+48h]
0x6B6AD1: push    edi
0x6B6AD2: push    eax
0x6B6AD3: call    edx
0x6B6AD5: mov     edi, eax
0x6B6AD7: mov     eax, [esi+50h]
0x6B6ADA: mov     ecx, [eax]
0x6B6ADC: mov     edx, [ecx+34h]
0x6B6ADF: push    0
0x6B6AE1: push    eax
0x6B6AE2: call    edx
0x6B6AE4: mov     eax, edi
0x6B6AE6: pop     edi
0x6B6AE7: pop     esi
0x6B6AE8: retn
0x6B6AE9: mov     eax, 80004005h
0x6B6AEE: pop     esi
0x6B6AEF: retn
