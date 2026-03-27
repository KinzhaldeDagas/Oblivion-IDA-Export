0x8C25B0: push    0FFFFFFFFh
0x8C25B2: push    offset SEH_9266B0
0x8C25B7: mov     eax, large fs:0
0x8C25BD: push    eax
0x8C25BE: push    ecx
0x8C25BF: push    esi
0x8C25C0: mov     eax, ds:0B30AACh
0x8C25C5: xor     eax, esp
0x8C25C7: push    eax
0x8C25C8: lea     eax, [esp+18h+var_C]
0x8C25CC: mov     large fs:0, eax
0x8C25D2: mov     esi, ecx
0x8C25D4: cmp     dword ptr [esi+4], 0
0x8C25D8: jnz     short loc_8C2607
0x8C25DA: mov     ecx, ds:0BA7D98h
0x8C25E0: mov     eax, [ecx]
0x8C25E2: mov     edx, [eax+10h]
0x8C25E5: push    29h ; ')'
0x8C25E7: push    60h ; '`'
0x8C25E9: call    edx
0x8C25EB: mov     word ptr [eax+4], 60h ; '`'
0x8C25F1: mov     [esp+18h+var_10], eax
0x8C25F5: mov     ecx, eax
0x8C25F7: mov     [esp+18h+var_4], 0
0x8C25FF: call    sub_9138D0
0x8C2604: mov     [esi+4], eax
0x8C2607: mov     eax, 60h ; '`'
0x8C260C: mov     ecx, [esp+18h+var_C]
0x8C2610: mov     large fs:0, ecx
0x8C2617: pop     ecx
0x8C2618: pop     esi
0x8C2619: add     esp, 10h
0x8C261C: retn
