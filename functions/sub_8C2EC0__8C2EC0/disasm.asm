0x8C2EC0: push    0FFFFFFFFh
0x8C2EC2: push    offset SEH_9266B0
0x8C2EC7: mov     eax, large fs:0
0x8C2ECD: push    eax
0x8C2ECE: push    ecx
0x8C2ECF: push    esi
0x8C2ED0: mov     eax, ds:0B30AACh
0x8C2ED5: xor     eax, esp
0x8C2ED7: push    eax
0x8C2ED8: lea     eax, [esp+18h+var_C]
0x8C2EDC: mov     large fs:0, eax
0x8C2EE2: mov     esi, ecx
0x8C2EE4: cmp     dword ptr [esi+4], 0
0x8C2EE8: jnz     short loc_8C2F17
0x8C2EEA: mov     ecx, ds:0BA7D98h
0x8C2EF0: mov     eax, [ecx]
0x8C2EF2: mov     edx, [eax+10h]
0x8C2EF5: push    29h ; ')'
0x8C2EF7: push    30h ; '0'
0x8C2EF9: call    edx
0x8C2EFB: mov     word ptr [eax+4], 30h ; '0'
0x8C2F01: mov     [esp+18h+var_10], eax
0x8C2F05: mov     ecx, eax
0x8C2F07: mov     [esp+18h+var_4], 0
0x8C2F0F: call    sub_913C30
0x8C2F14: mov     [esi+4], eax
0x8C2F17: mov     eax, 30h ; '0'
0x8C2F1C: mov     ecx, [esp+18h+var_C]
0x8C2F20: mov     large fs:0, ecx
0x8C2F27: pop     ecx
0x8C2F28: pop     esi
0x8C2F29: add     esp, 10h
0x8C2F2C: retn
