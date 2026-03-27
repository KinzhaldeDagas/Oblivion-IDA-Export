0x8E7C70: push    esi
0x8E7C71: mov     esi, ecx
0x8E7C73: mov     ecx, [esi+18h]
0x8E7C76: test    ecx, ecx
0x8E7C78: mov     dword ptr [esi], offset off_A9A77C
0x8E7C7E: jz      short loc_8E7C8C
0x8E7C80: call    sub_8BC730
0x8E7C85: mov     dword ptr [esi+18h], 0
0x8E7C8C: mov     ecx, [esi+1Ch]
0x8E7C8F: test    ecx, ecx
0x8E7C91: jz      short loc_8E7C9F
0x8E7C93: call    sub_8BC730
0x8E7C98: mov     dword ptr [esi+1Ch], 0
0x8E7C9F: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8E7CA5: pop     esi
0x8E7CA6: retn
