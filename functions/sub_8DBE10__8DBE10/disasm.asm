0x8DBE10: push    esi
0x8DBE11: mov     esi, ecx
0x8DBE13: mov     eax, [esi+4Ch]
0x8DBE16: test    eax, eax
0x8DBE18: mov     dword ptr [esi], offset off_A9A430
0x8DBE1E: jz      short loc_8DBE32
0x8DBE20: mov     ecx, [esi+8]
0x8DBE23: push    1
0x8DBE25: lea     eax, [esi+74h]
0x8DBE28: push    eax
0x8DBE29: push    ecx
0x8DBE2A: call    sub_8CB4E0
0x8DBE2F: add     esp, 0Ch
0x8DBE32: lea     ecx, [esi+74h]
0x8DBE35: mov     dword ptr [esi+84h], 0
0x8DBE3F: mov     dword ptr [esi+88h], 0
0x8DBE49: mov     dword ptr [esi+80h], 0
0x8DBE53: call    sub_8D98E0
0x8DBE58: lea     ecx, [esi+10h]
0x8DBE5B: call    sub_8DBCE0
0x8DBE60: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8DBE66: pop     esi
0x8DBE67: retn
