0x76D820: push    esi
0x76D821: mov     esi, ecx
0x76D823: mov     eax, [esi+14h]
0x76D826: test    eax, eax
0x76D828: mov     dword ptr [esi], offset ??_7NiDX9TextureBufferData@@6B@; const NiDX9TextureBufferData::`vftable'
0x76D82E: jz      short loc_76D83F
0x76D830: mov     ecx, [eax]
0x76D832: mov     edx, [ecx+8]
0x76D835: push    eax
0x76D836: call    edx
0x76D838: mov     dword ptr [esi+14h], 0
0x76D83F: mov     eax, [esi+0Ch]
0x76D842: test    eax, eax
0x76D844: mov     dword ptr [esi], offset ??_7NiDX92DBufferData@@6B@; const NiDX92DBufferData::`vftable'
0x76D84A: jz      short loc_76D85B
0x76D84C: mov     ecx, [eax]
0x76D84E: mov     edx, [ecx+8]
0x76D851: push    eax
0x76D852: call    edx
0x76D854: mov     dword ptr [esi+0Ch], 0
0x76D85B: mov     eax, [esi+10h]
0x76D85E: push    eax
0x76D85F: call    FormHeapFree
0x76D864: add     esp, 4
0x76D867: push    offset NiRefObject_objcount; lpAddend
0x76D86C: mov     dword ptr [esi+10h], 0
0x76D873: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x76D879: call    dword ptr ds:0A2807Ch
0x76D87F: pop     esi
0x76D880: retn
