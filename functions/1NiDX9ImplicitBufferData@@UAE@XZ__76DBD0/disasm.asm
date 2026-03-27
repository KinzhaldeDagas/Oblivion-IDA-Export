0x76DBD0: push    esi
0x76DBD1: mov     esi, ecx
0x76DBD3: mov     eax, [esi+4Ch]
0x76DBD6: test    eax, eax
0x76DBD8: mov     dword ptr [esi], offset ??_7NiDX9ImplicitBufferData@@6B@; const NiDX9ImplicitBufferData::`vftable'
0x76DBDE: jz      short loc_76DBEF
0x76DBE0: mov     ecx, [eax]
0x76DBE2: mov     edx, [ecx+8]
0x76DBE5: push    eax
0x76DBE6: call    edx
0x76DBE8: mov     dword ptr [esi+4Ch], 0
0x76DBEF: mov     eax, [esi+0Ch]
0x76DBF2: test    eax, eax
0x76DBF4: mov     dword ptr [esi], offset ??_7NiDX92DBufferData@@6B@; const NiDX92DBufferData::`vftable'
0x76DBFA: jz      short loc_76DC0B
0x76DBFC: mov     ecx, [eax]
0x76DBFE: mov     edx, [ecx+8]
0x76DC01: push    eax
0x76DC02: call    edx
0x76DC04: mov     dword ptr [esi+0Ch], 0
0x76DC0B: mov     eax, [esi+10h]
0x76DC0E: push    eax
0x76DC0F: call    FormHeapFree
0x76DC14: add     esp, 4
0x76DC17: push    offset NiRefObject_objcount; lpAddend
0x76DC1C: mov     dword ptr [esi+10h], 0
0x76DC23: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x76DC29: call    dword ptr ds:0A2807Ch
0x76DC2F: pop     esi
0x76DC30: retn
