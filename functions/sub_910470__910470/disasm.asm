0x910470: mov     ecx, [ecx+0Ch]
0x910473: mov     eax, [ecx]
0x910475: push    esi
0x910476: mov     esi, [esp+4+arg_0]
0x91047A: push    esi
0x91047B: call    dword ptr [eax+20h]
0x91047E: mov     ecx, [esi+8]
0x910481: mov     eax, [esi+0Ch]
0x910484: add     ecx, 40h ; '@'
0x910487: add     eax, 2
0x91048A: mov     [esi+8], ecx
0x91048D: mov     [esi+0Ch], eax
0x910490: pop     esi
0x910491: retn    4
