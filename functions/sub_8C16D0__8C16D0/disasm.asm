0x8C16D0: push    0FFFFFFFFh
0x8C16D2: push    offset SEH_9266B0
0x8C16D7: mov     eax, large fs:0
0x8C16DD: push    eax
0x8C16DE: push    ecx
0x8C16DF: push    esi
0x8C16E0: mov     eax, ds:0B30AACh
0x8C16E5: xor     eax, esp
0x8C16E7: push    eax
0x8C16E8: lea     eax, [esp+18h+var_C]
0x8C16EC: mov     large fs:0, eax
0x8C16F2: mov     esi, ecx
0x8C16F4: cmp     dword ptr [esi+4], 0
0x8C16F8: jnz     short loc_8C172A
0x8C16FA: mov     ecx, ds:0BA7D98h
0x8C1700: mov     eax, [ecx]
0x8C1702: mov     edx, [eax+10h]
0x8C1705: push    29h ; ')'
0x8C1707: push    0A0h ; ' '
0x8C170C: call    edx
0x8C170E: mov     word ptr [eax+4], 0A0h ; ' '
0x8C1714: mov     [esp+18h+var_10], eax
0x8C1718: mov     ecx, eax
0x8C171A: mov     [esp+18h+var_4], 0
0x8C1722: call    sub_9117E0
0x8C1727: mov     [esi+4], eax
0x8C172A: mov     eax, 0A0h ; ' '
0x8C172F: mov     ecx, [esp+18h+var_C]
0x8C1733: mov     large fs:0, ecx
0x8C173A: pop     ecx
0x8C173B: pop     esi
0x8C173C: add     esp, 10h
0x8C173F: retn
