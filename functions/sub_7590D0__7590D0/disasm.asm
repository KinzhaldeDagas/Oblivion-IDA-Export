0x7590D0: push    esi
0x7590D1: push    40h ; '@'; Size
0x7590D3: call    FormHeapAlloc
0x7590D8: mov     esi, eax
0x7590DA: add     esp, 4
0x7590DD: test    esi, esi
0x7590DF: jz      short loc_759110
0x7590E1: mov     ecx, esi
0x7590E3: call    sub_75E800
0x7590E8: mov     dword ptr [esi], offset ??_7NiPSysDragFieldModifier@@6B@; const NiPSysDragFieldModifier::`vftable'
0x7590EE: mov     byte ptr [esi+30h], 0
0x7590F2: mov     eax, ds:0B3F9A8h
0x7590F7: mov     [esi+34h], eax
0x7590FA: mov     ecx, ds:0B3F9ACh
0x759100: mov     [esi+38h], ecx
0x759103: mov     edx, ds:0B3F9B0h
0x759109: mov     [esi+3Ch], edx
0x75910C: mov     eax, esi
0x75910E: pop     esi
0x75910F: retn
0x759110: xor     eax, eax
0x759112: pop     esi
0x759113: retn
