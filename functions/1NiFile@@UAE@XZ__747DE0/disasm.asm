0x747DE0: push    esi
0x747DE1: mov     esi, ecx
0x747DE3: cmp     byte ptr [esi+24h], 0
0x747DE7: mov     dword ptr [esi], offset ??_7NiFile@@6B@; const NiFile::`vftable'
0x747DED: jz      short loc_747E06
0x747DEF: cmp     dword ptr [esi+1Ch], 0
0x747DF3: jz      short loc_747E06
0x747DF5: call    NiFile_Flush
0x747DFA: mov     eax, [esi+1Ch]
0x747DFD: push    eax; File
0x747DFE: call    _fclose
0x747E03: add     esp, 4
0x747E06: mov     ecx, [esi+18h]
0x747E09: push    ecx
0x747E0A: call    FormHeapFree
0x747E0F: add     esp, 4
0x747E12: mov     ecx, esi
0x747E14: pop     esi
0x747E15: jmp     NiBinaryStream_destr
