0x782CB0: push    esi
0x782CB1: mov     esi, ecx
0x782CB3: mov     eax, [esi+8]
0x782CB6: push    eax
0x782CB7: mov     dword ptr [esi], offset ??_7NiD3DShaderProgram@@6B@; const NiD3DShaderProgram::`vftable'
0x782CBD: call    FormHeapFree
0x782CC2: mov     ecx, [esi+0Ch]
0x782CC5: push    ecx
0x782CC6: call    FormHeapFree
0x782CCB: mov     edx, [esi+14h]
0x782CCE: push    edx
0x782CCF: call    FormHeapFree
0x782CD4: mov     eax, [esi+1Ch]
0x782CD7: add     esp, 0Ch
0x782CDA: test    eax, eax
0x782CDC: mov     dword ptr [esi+20h], 0
0x782CE3: mov     dword ptr [esi+24h], 0
0x782CEA: jz      short loc_782CF4
0x782CEC: mov     ecx, [eax]
0x782CEE: mov     edx, [ecx+8]
0x782CF1: push    eax
0x782CF2: call    edx
0x782CF4: push    offset NiRefObject_objcount; lpAddend
0x782CF9: mov     dword ptr [esi+1Ch], 0
0x782D00: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x782D06: call    dword ptr ds:0A2807Ch
0x782D0C: pop     esi
0x782D0D: retn
