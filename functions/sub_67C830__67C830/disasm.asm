0x67C830: push    esi
0x67C831: mov     esi, ecx
0x67C833: cmp     dword ptr [esi+3Ch], 0
0x67C837: jz      short loc_67C85D
0x67C839: call    sub_67C310
0x67C83E: mov     ecx, [esi+3Ch]
0x67C841: mov     edx, [ecx+14h]
0x67C844: mov     eax, [esp+4+arg_0]
0x67C848: add     ecx, 14h
0x67C84B: mov     [eax], edx
0x67C84D: mov     edx, [ecx+4]
0x67C850: mov     ecx, [ecx+8]
0x67C853: mov     [eax+4], edx
0x67C856: mov     [eax+8], ecx
0x67C859: pop     esi
0x67C85A: retn    4
0x67C85D: mov     eax, [esp+4+arg_0]
0x67C861: mov     edx, ds:0B3F9A8h
0x67C867: mov     ecx, ds:0B3F9ACh
0x67C86D: mov     [eax], edx
0x67C86F: mov     edx, ds:0B3F9B0h
0x67C875: mov     [eax+4], ecx
0x67C878: mov     [eax+8], edx
0x67C87B: pop     esi
0x67C87C: retn    4
