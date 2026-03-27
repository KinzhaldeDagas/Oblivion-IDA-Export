0x9266B0: push    0FFFFFFFFh
0x9266B2: push    offset SEH_9266B0
0x9266B7: mov     eax, large fs:0
0x9266BD: push    eax
0x9266BE: push    ecx
0x9266BF: push    esi
0x9266C0: mov     eax, ds:0B30AACh
0x9266C5: xor     eax, esp
0x9266C7: push    eax
0x9266C8: lea     eax, [esp+18h+var_C]
0x9266CC: mov     large fs:0, eax
0x9266D2: mov     esi, ecx
0x9266D4: cmp     dword ptr [esi+4], 0
0x9266D8: jnz     short loc_92670A
0x9266DA: mov     ecx, ds:0BA7D98h
0x9266E0: mov     eax, [ecx]
0x9266E2: mov     edx, [eax+10h]
0x9266E5: push    29h ; ')'
0x9266E7: push    0A0h ; ' '
0x9266EC: call    edx
0x9266EE: mov     word ptr [eax+4], 0A0h ; ' '
0x9266F4: mov     [esp+18h+var_10], eax
0x9266F8: mov     ecx, eax
0x9266FA: mov     [esp+18h+var_4], 0
0x926702: call    sub_9285E0
0x926707: mov     [esi+4], eax
0x92670A: mov     eax, 0A0h ; ' '
0x92670F: mov     ecx, [esp+18h+var_C]
0x926713: mov     large fs:0, ecx
0x92671A: pop     ecx
0x92671B: pop     esi
0x92671C: add     esp, 10h
0x92671F: retn
