0x898DB0: movaps  xmm0, xmmword ptr [ecx+20h]
0x898DB4: mov     eax, [esp+arg_0]
0x898DB8: movaps  xmmword ptr [eax+10h], xmm0
0x898DBC: mov     edx, [ecx+2A4h]
0x898DC2: mov     [eax+20h], edx
0x898DC5: movaps  xmm0, xmmword ptr [ecx+280h]
0x898DCC: movaps  xmmword ptr [eax+30h], xmm0
0x898DD0: movaps  xmm0, xmmword ptr [ecx+290h]
0x898DD7: movaps  xmmword ptr [eax+40h], xmm0
0x898DDB: mov     edx, [ecx+74h]
0x898DDE: mov     edx, [edx+8]
0x898DE1: mov     [eax+50h], edx
0x898DE4: mov     edx, [ecx+78h]
0x898DE7: push    esi
0x898DE8: mov     [eax+54h], edx
0x898DEB: mov     esi, [ecx+154h]
0x898DF1: test    esi, esi
0x898DF3: jz      short loc_898DFA
0x898DF5: mov     edx, [esi+2Ch]
0x898DF8: jmp     short loc_898DFF
0x898DFA: mov     edx, 3
0x898DFF: mov     [eax+28h], dl
0x898E02: mov     edx, [ecx+7Ch]
0x898E05: mov     edx, [edx+1C20h]
0x898E0B: mov     [eax+58h], edx
0x898E0E: mov     edx, [ecx+7Ch]
0x898E11: mov     edx, [edx+1C24h]
0x898E17: mov     [eax+5Ch], edx
0x898E1A: mov     edx, [ecx+60h]
0x898E1D: mov     [eax+60h], edx
0x898E20: mov     edx, [ecx+2A0h]
0x898E26: mov     [eax+64h], edx
0x898E29: mov     dl, [ecx+2ACh]
0x898E2F: mov     [eax+68h], dl
0x898E32: mov     edx, [ecx+1A0h]
0x898E38: mov     [eax+24h], edx
0x898E3B: mov     edx, [ecx+174h]
0x898E41: mov     [eax+6Ch], edx
0x898E44: mov     edx, [ecx+178h]
0x898E4A: mov     [eax+70h], edx
0x898E4D: mov     edx, [ecx+26Ch]
0x898E53: mov     [eax+74h], edx
0x898E56: mov     edx, [ecx+74h]
0x898E59: mov     edx, [edx+20h]
0x898E5C: mov     edx, [edx]
0x898E5E: mov     [eax+7Ch], edx
0x898E61: mov     edx, [ecx+74h]
0x898E64: mov     edx, [edx+20h]
0x898E67: mov     edx, [edx+4]
0x898E6A: mov     [eax+80h], edx
0x898E70: mov     edx, [ecx+0A8h]
0x898E76: mov     [eax+84h], edx
0x898E7C: mov     edx, [ecx+0ACh]
0x898E82: mov     [eax+88h], edx
0x898E88: mov     dl, [ecx+0A6h]
0x898E8E: mov     [eax+8Ch], dl
0x898E94: mov     edx, [ecx+0B0h]
0x898E9A: mov     [eax+90h], edx
0x898EA0: mov     dl, [ecx+0A5h]
0x898EA6: mov     [eax+94h], dl
0x898EAC: mov     dl, [ecx+0B4h]
0x898EB2: mov     [eax+95h], dl
0x898EB8: mov     cl, [ecx+0A4h]
0x898EBE: mov     [eax+96h], cl
0x898EC4: pop     esi
0x898EC5: retn    4
