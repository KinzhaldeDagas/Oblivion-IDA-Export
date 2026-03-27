0x7243E0: push    esi
0x7243E1: mov     esi, ecx
0x7243E3: mov     eax, [esi+0E0h]
0x7243E9: test    eax, eax
0x7243EB: jl      short loc_72444F
0x7243ED: mov     ecx, [esi+0B0h]
0x7243F3: push    edi
0x7243F4: mov     edi, [ecx+eax*4]
0x7243F7: test    edi, edi
0x7243F9: jz      short loc_72444E
0x7243FB: mov     edx, [esi+0F0h]
0x724401: mov     edx, [edx+eax*4]
0x724404: cmp     edx, [esi+0E8h]
0x72440A: lea     ecx, [esi+0E8h]
0x724410: jz      short loc_724442
0x724412: push    ecx
0x724413: push    eax
0x724414: lea     ecx, [esi+0ECh]
0x72441A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72441F: fld     dword ptr [esi+0E4h]
0x724425: movzx   ecx, byte ptr [esi+0DCh]
0x72442C: mov     eax, [edi]
0x72442E: mov     edx, [eax+60h]
0x724431: shr     cl, 1
0x724433: and     ecx, 0FFFFFF01h
0x724439: push    ecx
0x72443A: push    ecx
0x72443B: mov     ecx, edi
0x72443D: fstp    [esp+10h+var_10]
0x724440: call    edx
0x724442: mov     eax, [esp+8+a2]
0x724446: push    eax; a2
0x724447: mov     ecx, edi; this
0x724449: call    NiAVObject_Render
0x72444E: pop     edi
0x72444F: pop     esi
0x724450: retn    4
