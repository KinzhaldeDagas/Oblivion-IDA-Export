0x6A4620: push    esi
0x6A4621: mov     esi, ecx
0x6A4623: cmp     dword ptr [esi+38h], 0
0x6A4627: push    edi
0x6A4628: jz      short ScriptEffect_Remove___DestroyEventList
0x6A462A: mov     eax, ds:0B33B00h
0x6A462F: mov     eax, [eax+18h]
0x6A4632: mov     ecx, eax
0x6A4634: shr     ecx, 0Bh
0x6A4637: test    cl, 1
0x6A463A: jz      short ScriptEffect_Remove___RunFinishEvent
0x6A463C: shr     eax, 1
0x6A463E: test    al, 1
0x6A4640: jz      short ScriptEffect_Remove___DestroyEventList
