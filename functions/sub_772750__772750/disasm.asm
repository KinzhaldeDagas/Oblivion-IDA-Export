0x772750: mov     eax, [esp+arg_0]
0x772754: mov     edx, [eax+8]
0x772757: test    edx, edx
0x772759: push    esi
0x77275A: mov     esi, [eax+0Ch]
0x77275D: jz      short loc_772762
0x77275F: mov     [edx+0Ch], esi
0x772762: test    esi, esi
0x772764: jz      short loc_772769
0x772766: mov     [esi+8], edx
0x772769: cmp     eax, [ecx+8]
0x77276C: pop     esi
0x77276D: jnz     short loc_772772
0x77276F: mov     [ecx+8], edx
0x772772: add     dword ptr [ecx+4], 0FFFFFFFFh
0x772776: mov     dword ptr [eax+8], 0
0x77277D: mov     dword ptr [eax+0Ch], 0
0x772784: retn    4
