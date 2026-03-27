0x8BEEC0: push    esi
0x8BEEC1: mov     esi, ecx
0x8BEEC3: cmp     dword ptr [esi+4], 0
0x8BEEC7: jnz     short loc_8BEEF6
0x8BEEC9: mov     ecx, ds:0BA7D98h
0x8BEECF: mov     eax, [ecx]
0x8BEED1: mov     edx, [eax+10h]
0x8BEED4: push    29h ; ')'
0x8BEED6: push    18h
0x8BEED8: call    edx
0x8BEEDA: mov     word ptr [eax+4], 18h
0x8BEEE0: mov     word ptr [eax+6], 1
0x8BEEE6: mov     dword ptr [eax+0Ch], 0
0x8BEEED: mov     dword ptr [eax], offset ??_7ahkMalleableConstraintData@@6B@; const ahkMalleableConstraintData::`vftable'
0x8BEEF3: mov     [esi+4], eax
0x8BEEF6: mov     eax, 18h
0x8BEEFB: pop     esi
0x8BEEFC: retn
