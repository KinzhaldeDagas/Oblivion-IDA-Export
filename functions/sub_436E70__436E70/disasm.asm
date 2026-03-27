0x436E70: push    esi
0x436E71: mov     esi, ecx
0x436E73: mov     eax, [esi+1Ch]
0x436E76: add     eax, 10h
0x436E79: push    eax; lpAddend
0x436E7A: call    ds:InterlockedIncrement
0x436E80: mov     edx, [esi]
0x436E82: mov     eax, [edx+28h]
0x436E85: mov     ecx, esi
0x436E87: call    eax
0x436E89: pop     esi
0x436E8A: retn    4
