0x5343B0: mov     ecx, ds:0BA7D98h
0x5343B6: mov     eax, [ecx]
0x5343B8: mov     edx, [eax+10h]
0x5343BB: push    17h
0x5343BD: push    10h
0x5343BF: call    edx
0x5343C1: mov     ecx, [esp+arg_0]
0x5343C5: mov     edx, 1
0x5343CA: sub     ecx, edx
0x5343CC: mov     word ptr [eax+4], 10h
0x5343D2: mov     [eax+6], dx
0x5343D6: mov     dword ptr [eax], offset ??_7HavokStreambufWriter@@6B@; const HavokStreambufWriter::`vftable'
0x5343DC: mov     [eax+8], edx
0x5343DF: mov     byte ptr [eax+0Ch], 0
0x5343E3: jz      short loc_5343F3
0x5343E5: sub     ecx, edx
0x5343E7: jnz     short locret_5343FA
0x5343E9: mov     dword ptr [eax+8], 0
0x5343F0: retn    4
0x5343F3: mov     dword ptr [eax+8], 4
0x5343FA: retn    4
