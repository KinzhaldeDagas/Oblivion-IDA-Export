0x613810: push    ebx
0x613811: push    esi
0x613812: mov     esi, [ecx+64h]
0x613815: xor     ebx, ebx
0x613817: test    esi, esi
0x613819: jz      short loc_613873
0x61381B: push    ebp
0x61381C: mov     ebp, [esp+0Ch+arg_0]
0x613820: push    edi
0x613821: cmp     dword ptr [esi+4], 0
0x613825: jnz     short loc_61382C
0x613827: cmp     dword ptr [esi], 0
0x61382A: jz      short loc_61384E
0x61382C: test    ebx, ebx
0x61382E: jnz     short loc_613852
0x613830: mov     edi, [esi]
0x613832: mov     ecx, [edi]
0x613834: push    48h ; 'H'
0x613836: push    ebp
0x613837: add     ecx, 0Ch
0x61383A: call    EffectItemList_HasEffect
0x61383F: test    al, al
0x613841: jz      short loc_613847
0x613843: mov     ebx, edi
0x613845: jmp     short loc_61384A
0x613847: mov     esi, [esi+4]
0x61384A: test    esi, esi
0x61384C: jnz     short loc_613821
0x61384E: test    ebx, ebx
0x613850: jz      short loc_61386A
0x613852: mov     ecx, [ebx]
0x613854: test    ecx, ecx
0x613856: jz      short loc_61386A
0x613858: call    sub_419D90
0x61385D: test    al, al
0x61385F: jnz     short loc_61386A
0x613861: mov     ecx, [ebx]
0x613863: push    0
0x613865: call    sub_41A610
0x61386A: pop     edi
0x61386B: pop     ebp
0x61386C: pop     esi
0x61386D: mov     eax, ebx
0x61386F: pop     ebx
0x613870: retn    4
0x613873: pop     esi
0x613874: mov     eax, ebx
0x613876: pop     ebx
0x613877: retn    4
