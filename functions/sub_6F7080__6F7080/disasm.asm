0x6F7080: push    esi
0x6F7081: mov     esi, ecx
0x6F7083: mov     eax, [esi]
0x6F7085: mov     edx, [eax+10h]
0x6F7088: call    edx
0x6F708A: cmp     eax, 0FFFFFFFFh
0x6F708D: jnz     short loc_6F7093
0x6F708F: or      eax, eax
0x6F7091: pop     esi
0x6F7092: retn
0x6F7093: mov     eax, [esi+30h]
0x6F7096: add     dword ptr [eax], 0FFFFFFFFh
0x6F7099: mov     eax, [esi+20h]
0x6F709C: mov     ecx, [eax]
0x6F709E: lea     edx, [ecx+1]
0x6F70A1: mov     [eax], edx
0x6F70A3: movzx   eax, byte ptr [ecx]
0x6F70A6: pop     esi
0x6F70A7: retn
