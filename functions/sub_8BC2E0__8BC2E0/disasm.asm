0x8BC2E0: push    esi
0x8BC2E1: mov     esi, ecx
0x8BC2E3: mov     eax, [esi+10h]
0x8BC2E6: test    eax, eax
0x8BC2E8: mov     dword ptr [esi], offset off_A98330
0x8BC2EE: jnz     short loc_8BC2FE
0x8BC2F0: mov     ecx, [esi+8]
0x8BC2F3: test    ecx, ecx
0x8BC2F5: jz      short loc_8BC2FE
0x8BC2F7: push    1
0x8BC2F9: call    sub_8BC310
0x8BC2FE: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8BC304: pop     esi
0x8BC305: retn
