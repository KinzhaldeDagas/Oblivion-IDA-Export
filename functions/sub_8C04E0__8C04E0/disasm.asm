0x8C04E0: push    0FFFFFFFFh
0x8C04E2: push    offset SEH_9266B0
0x8C04E7: mov     eax, large fs:0
0x8C04ED: push    eax
0x8C04EE: push    ecx
0x8C04EF: push    esi
0x8C04F0: mov     eax, ds:0B30AACh
0x8C04F5: xor     eax, esp
0x8C04F7: push    eax
0x8C04F8: lea     eax, [esp+18h+var_C]
0x8C04FC: mov     large fs:0, eax
0x8C0502: mov     esi, ecx
0x8C0504: cmp     dword ptr [esi+4], 0
0x8C0508: jnz     short loc_8C0537
0x8C050A: mov     ecx, ds:0BA7D98h
0x8C0510: mov     eax, [ecx]
0x8C0512: mov     edx, [eax+10h]
0x8C0515: push    29h ; ')'
0x8C0517: push    30h ; '0'
0x8C0519: call    edx
0x8C051B: mov     word ptr [eax+4], 30h ; '0'
0x8C0521: mov     [esp+18h+var_10], eax
0x8C0525: mov     ecx, eax
0x8C0527: mov     [esp+18h+var_4], 0
0x8C052F: call    sub_910E00
0x8C0534: mov     [esi+4], eax
0x8C0537: mov     eax, 30h ; '0'
0x8C053C: mov     ecx, [esp+18h+var_C]
0x8C0540: mov     large fs:0, ecx
0x8C0547: pop     ecx
0x8C0548: pop     esi
0x8C0549: add     esp, 10h
0x8C054C: retn
