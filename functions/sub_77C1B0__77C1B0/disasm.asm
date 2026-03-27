0x77C1B0: push    esi
0x77C1B1: push    edi
0x77C1B2: mov     esi, ecx
0x77C1B4: xor     edi, edi
0x77C1B6: push    offset NiRefObject_objcount; lpAddend
0x77C1BB: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x77C1C1: mov     [esi+4], edi
0x77C1C4: call    dword ptr ds:0A28078h
0x77C1CA: mov     ecx, [esp+8+Src]
0x77C1CE: push    ecx; Src
0x77C1CF: lea     eax, [esi+8]
0x77C1D2: push    edi; SizeInBytes
0x77C1D3: push    eax; int
0x77C1D4: mov     dword ptr [esi], offset ??_7NiD3DGlobalConstantEntry@@6B@; const NiD3DGlobalConstantEntry::`vftable'
0x77C1DA: mov     [eax], edi
0x77C1DC: mov     [esi+0Ch], edi
0x77C1DF: mov     [esi+10h], edi
0x77C1E2: mov     [esi+14h], edi
0x77C1E5: mov     [esi+18h], edi
0x77C1E8: call    sub_7825F0
0x77C1ED: mov     ecx, [esp+14h+Size]
0x77C1F1: mov     edx, [esp+14h+arg_4]
0x77C1F5: add     esp, 0Ch
0x77C1F8: mov     [esi+0Ch], eax
0x77C1FB: mov     eax, [esp+8+arg_C]
0x77C1FF: push    eax; Src
0x77C200: push    ecx; Size
0x77C201: mov     ecx, esi
0x77C203: mov     [esi+10h], edx
0x77C206: call    sub_782680
0x77C20B: pop     edi
0x77C20C: mov     eax, esi
0x77C20E: pop     esi
0x77C20F: retn    10h
