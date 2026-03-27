0x8DEED0: push    ebx
0x8DEED1: push    esi
0x8DEED2: push    edi
0x8DEED3: mov     edi, ecx
0x8DEED5: mov     dword ptr [edi], offset off_A9A574
0x8DEEDB: mov     dword ptr [edi+8], offset off_A9A56C
0x8DEEE2: mov     dword ptr [edi+0Ch], offset off_A9A560
0x8DEEE9: lea     esi, [edi+14h]
0x8DEEEC: mov     ebx, 6
0x8DEEF1: mov     ecx, [esi]
0x8DEEF3: test    ecx, ecx
0x8DEEF5: jz      short loc_8DEF02
0x8DEEF7: call    sub_8BC730
0x8DEEFC: mov     dword ptr [esi], 0
0x8DEF02: add     esi, 4
0x8DEF05: dec     ebx
0x8DEF06: jnz     short loc_8DEEF1
0x8DEF08: mov     dword ptr [edi+0Ch], offset ??_7hkPhantomOverlapListener@@6B@; const hkPhantomOverlapListener::`vftable'
0x8DEF0F: mov     dword ptr [edi+8], offset off_A99B50
0x8DEF16: mov     dword ptr [edi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8DEF1C: pop     edi
0x8DEF1D: pop     esi
0x8DEF1E: pop     ebx
0x8DEF1F: retn
