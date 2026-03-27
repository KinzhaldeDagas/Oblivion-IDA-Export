0x8F5EB0: push    esi
0x8F5EB1: mov     esi, ecx
0x8F5EB3: mov     dword ptr [esi], offset off_A9B3BC
0x8F5EB9: call    sub_8F5C80
0x8F5EBE: mov     ecx, [esi+8]
0x8F5EC1: test    ecx, ecx
0x8F5EC3: jz      short loc_8F5ECA
0x8F5EC5: mov     eax, [ecx]
0x8F5EC7: call    dword ptr [eax+10h]
0x8F5ECA: mov     ecx, [esi+8]
0x8F5ECD: test    ecx, ecx
0x8F5ECF: jz      short loc_8F5EE9
0x8F5ED1: cmp     word ptr [ecx+4], 0
0x8F5ED6: jz      short loc_8F5EE9
0x8F5ED8: dec     word ptr [ecx+6]
0x8F5EDC: cmp     word ptr [ecx+6], 0
0x8F5EE1: jnz     short loc_8F5EE9
0x8F5EE3: mov     edx, [ecx]
0x8F5EE5: push    1
0x8F5EE7: call    dword ptr [edx]
0x8F5EE9: mov     al, [esi+18h]
0x8F5EEC: test    al, al
0x8F5EEE: jz      short loc_8F5EFF
0x8F5EF0: mov     ecx, ds:0BA7D98h
0x8F5EF6: mov     edx, [esi+0Ch]
0x8F5EF9: mov     eax, [ecx]
0x8F5EFB: push    edx
0x8F5EFC: call    dword ptr [eax+0Ch]
0x8F5EFF: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F5F05: pop     esi
0x8F5F06: retn
