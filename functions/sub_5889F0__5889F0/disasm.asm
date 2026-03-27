0x5889F0: push    ecx
0x5889F1: push    esi
0x5889F2: mov     esi, ecx
0x5889F4: mov     ecx, [esi+4]
0x5889F7: mov     eax, [ecx]
0x5889F9: xor     edx, edx
0x5889FB: cmp     eax, edx
0x5889FD: mov     [esi+4], eax
0x588A00: jz      short loc_588A07
0x588A02: mov     [eax+4], edx
0x588A05: jmp     short loc_588A0A
0x588A07: mov     [esi+8], edx
0x588A0A: fld     dword ptr [ecx+8]
0x588A0D: mov     eax, [esi]
0x588A0F: mov     edx, [eax+8]
0x588A12: fstp    [esp+8+var_4]
0x588A16: push    ecx
0x588A17: mov     ecx, esi
0x588A19: call    edx
0x588A1B: fld     [esp+8+var_4]
0x588A1F: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x588A23: pop     esi
0x588A24: pop     ecx
0x588A25: retn
