0x748860: push    esi
0x748861: mov     esi, ecx
0x748863: call    NiBinaryStream_constr
0x748868: xor     ecx, ecx
0x74886A: mov     eax, 1
0x74886F: mov     edx, 400h
0x748874: mul     edx
0x748876: seto    cl
0x748879: mov     dword ptr [esi], offset ??_7NiMemStream@@6B@; const NiMemStream::`vftable'
0x74887F: mov     dword ptr [esi+18h], 400h
0x748886: neg     ecx
0x748888: or      ecx, eax
0x74888A: push    ecx; Size
0x74888B: call    FormHeapAlloc
0x748890: mov     [esi+0Ch], eax
0x748893: xor     eax, eax
0x748895: add     esp, 4
0x748898: push    eax
0x748899: mov     ecx, esi
0x74889B: mov     [esi+14h], eax
0x74889E: mov     [esi+10h], eax
0x7488A1: mov     [esi+1Dh], al
0x7488A4: call    sub_748CF0
0x7488A9: mov     eax, esi
0x7488AB: pop     esi
0x7488AC: retn
