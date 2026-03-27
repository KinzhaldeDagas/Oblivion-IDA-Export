0x6D6AD0: cmp     byte ptr [ecx+1Ch], 0
0x6D6AD4: mov     edx, [esp+arg_0]
0x6D6AD8: jnz     short loc_6D6B0A
0x6D6ADA: fld     dword ptr [ecx+0Ch]
0x6D6ADD: fld     dword ptr [edx]
0x6D6ADF: fucompp
0x6D6AE1: fnstsw  ax
0x6D6AE3: test    ah, 44h
0x6D6AE6: jp      short loc_6D6B0A
0x6D6AE8: fld     dword ptr [ecx+10h]
0x6D6AEB: fld     dword ptr [edx+4]
0x6D6AEE: fucompp
0x6D6AF0: fnstsw  ax
0x6D6AF2: test    ah, 44h
0x6D6AF5: jp      short loc_6D6B0A
0x6D6AF7: xor     eax, eax
0x6D6AF9: mov     [ecx+1Ch], al
0x6D6AFC: mov     eax, [edx]
0x6D6AFE: mov     [ecx+0Ch], eax
0x6D6B01: mov     edx, [edx+4]
0x6D6B04: mov     [ecx+10h], edx
0x6D6B07: retn    4
0x6D6B0A: mov     eax, 1
0x6D6B0F: mov     [ecx+1Ch], al
0x6D6B12: mov     eax, [edx]
0x6D6B14: mov     [ecx+0Ch], eax
0x6D6B17: mov     edx, [edx+4]
0x6D6B1A: mov     [ecx+10h], edx
0x6D6B1D: retn    4
