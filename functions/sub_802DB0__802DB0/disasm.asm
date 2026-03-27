0x802DB0: xor     eax, eax
0x802DB2: cmp     [ecx+0Eh], ax
0x802DB6: jbe     short loc_802DE6
0x802DB8: fldz
0x802DBA: xor     edx, edx
0x802DBC: push    esi
0x802DBD: mov     esi, [ecx+10h]
0x802DC0: fst     dword ptr [esi+edx+8]
0x802DC4: mov     esi, [ecx+10h]
0x802DC7: fst     dword ptr [esi+edx+0Ch]
0x802DCB: mov     esi, [ecx+14h]
0x802DCE: mov     dword ptr [esi+eax*4], 0
0x802DD5: movzx   esi, word ptr [ecx+0Eh]
0x802DD9: add     eax, 1
0x802DDC: add     edx, 10h
0x802DDF: cmp     eax, esi
0x802DE1: jl      short loc_802DBD
0x802DE3: fstp    st
0x802DE5: pop     esi
0x802DE6: mov     word ptr [ecx+0Eh], 0
0x802DEC: jmp     sub_802AE0
