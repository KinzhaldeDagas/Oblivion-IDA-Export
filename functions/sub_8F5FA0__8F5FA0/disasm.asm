0x8F5FA0: mov     eax, ds:0BA81C4h
0x8F5FA5: push    edi
0x8F5FA6: mov     edi, ecx
0x8F5FA8: dec     eax
0x8F5FA9: mov     dword ptr [edi], offset off_A9B3DC
0x8F5FAF: mov     ds:0BA81C4h, eax
0x8F5FB4: jnz     short loc_8F5FFC
0x8F5FB6: mov     eax, ds:0BA81C8h
0x8F5FBB: push    esi
0x8F5FBC: xor     esi, esi
0x8F5FBE: push    eax; hLibModule
0x8F5FBF: mov     ds:0BA81C0h, esi
0x8F5FC5: mov     ds:0BA81BCh, esi
0x8F5FCB: mov     ds:0BA81B8h, esi
0x8F5FD1: mov     ds:0BA81B4h, esi
0x8F5FD7: mov     ds:0BA81B0h, esi
0x8F5FDD: mov     ds:0BA81ACh, esi
0x8F5FE3: mov     ds:0BA81A8h, esi
0x8F5FE9: mov     ds:0BA81A4h, esi
0x8F5FEF: call    dword ptr ds:0A28204h
0x8F5FF5: mov     ds:0BA81C8h, esi
0x8F5FFB: pop     esi
0x8F5FFC: mov     dword ptr [edi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F6002: pop     edi
0x8F6003: retn
