0x8BF5F0: push    ebx
0x8BF5F1: push    esi
0x8BF5F2: mov     esi, ecx
0x8BF5F4: xor     ebx, ebx
0x8BF5F6: cmp     [esi+4], ebx
0x8BF5F9: jnz     short loc_8BF63C
0x8BF5FB: mov     ecx, ds:0BA7D98h
0x8BF601: mov     eax, [ecx]
0x8BF603: mov     edx, [eax+10h]
0x8BF606: push    29h ; ')'
0x8BF608: push    20h ; ' '
0x8BF60A: call    edx
0x8BF60C: fld     dword ptr ds:0A31C80h
0x8BF612: fstp    dword ptr [eax+14h]
0x8BF615: mov     word ptr [eax+4], 20h ; ' '
0x8BF61B: mov     word ptr [eax+6], 1
0x8BF621: mov     [eax+10h], ebx
0x8BF624: mov     [eax+0Ch], ebx
0x8BF627: mov     dword ptr [eax], offset ??_7ahkBreakableConstraintData@@6B@; const ahkBreakableConstraintData::`vftable'
0x8BF62D: mov     [eax+1Ch], ebx
0x8BF630: mov     [eax+18h], bl
0x8BF633: mov     [eax+19h], bl
0x8BF636: mov     [eax+1Ah], bl
0x8BF639: mov     [esi+4], eax
0x8BF63C: pop     esi
0x8BF63D: mov     eax, 20h ; ' '
0x8BF642: pop     ebx
0x8BF643: retn
