0x76DCB0: push    esi
0x76DCB1: mov     esi, ecx
0x76DCB3: mov     eax, [esi+0Ch]
0x76DCB6: test    eax, eax
0x76DCB8: mov     dword ptr [esi], offset ??_7NiDX92DBufferData@@6B@; const NiDX92DBufferData::`vftable'
0x76DCBE: jz      short loc_76DCCF
0x76DCC0: mov     ecx, [eax]
0x76DCC2: mov     edx, [ecx+8]
0x76DCC5: push    eax
0x76DCC6: call    edx
0x76DCC8: mov     dword ptr [esi+0Ch], 0
0x76DCCF: mov     eax, [esi+10h]
0x76DCD2: push    eax
0x76DCD3: call    FormHeapFree
0x76DCD8: add     esp, 4
0x76DCDB: push    offset NiRefObject_objcount; lpAddend
0x76DCE0: mov     dword ptr [esi+10h], 0
0x76DCE7: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x76DCED: call    dword ptr ds:0A2807Ch
0x76DCF3: test    [esp+4+arg_0], 1
0x76DCF8: jz      short loc_76DD03
0x76DCFA: push    esi
0x76DCFB: call    FormHeapFree
0x76DD00: add     esp, 4
0x76DD03: mov     eax, esi
0x76DD05: pop     esi
0x76DD06: retn    4
