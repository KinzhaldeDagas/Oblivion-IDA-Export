0x8C1E90: push    0FFFFFFFFh
0x8C1E92: push    offset SEH_911D50
0x8C1E97: mov     eax, large fs:0
0x8C1E9D: push    eax
0x8C1E9E: push    esi
0x8C1E9F: mov     eax, ds:0B30AACh
0x8C1EA4: xor     eax, esp
0x8C1EA6: push    eax
0x8C1EA7: lea     eax, [esp+14h+var_C]
0x8C1EAB: mov     large fs:0, eax
0x8C1EB1: mov     esi, ecx
0x8C1EB3: mov     eax, [esp+14h+arg_0]
0x8C1EB7: test    eax, eax
0x8C1EB9: jnz     short loc_8C1EED
0x8C1EBB: mov     ecx, ds:0BA7D98h
0x8C1EC1: mov     eax, [ecx]
0x8C1EC3: mov     edx, [eax+10h]
0x8C1EC6: push    29h ; ')'
0x8C1EC8: push    4Ch ; 'L'
0x8C1ECA: call    edx
0x8C1ECC: mov     word ptr [eax+4], 4Ch ; 'L'
0x8C1ED2: mov     [esp+14h+arg_0], eax
0x8C1ED6: mov     ecx, eax
0x8C1ED8: mov     [esp+14h+var_4], 0
0x8C1EE0: call    sub_913180
0x8C1EE5: mov     [esp+14h+var_4], 0FFFFFFFFh
0x8C1EED: mov     ecx, [esp+14h+arg_4]
0x8C1EF1: push    ecx
0x8C1EF2: push    eax
0x8C1EF3: mov     ecx, esi
0x8C1EF5: call    sub_911D50
0x8C1EFA: mov     ecx, [esp+14h+var_C]
0x8C1EFE: mov     large fs:0, ecx
0x8C1F05: pop     ecx
0x8C1F06: pop     esi
0x8C1F07: add     esp, 0Ch
0x8C1F0A: retn    8
