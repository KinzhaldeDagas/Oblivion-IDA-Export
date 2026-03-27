0x926B00: push    0FFFFFFFFh
0x926B02: push    offset SEH_9266B0
0x926B07: mov     eax, large fs:0
0x926B0D: push    eax
0x926B0E: push    ecx
0x926B0F: push    esi
0x926B10: mov     eax, ds:0B30AACh
0x926B15: xor     eax, esp
0x926B17: push    eax
0x926B18: lea     eax, [esp+18h+var_C]
0x926B1C: mov     large fs:0, eax
0x926B22: mov     esi, ecx
0x926B24: cmp     dword ptr [esi+4], 0
0x926B28: jnz     short loc_926B5A
0x926B2A: mov     ecx, ds:0BA7D98h
0x926B30: mov     eax, [ecx]
0x926B32: mov     edx, [eax+10h]
0x926B35: push    29h ; ')'
0x926B37: push    0A0h ; ' '
0x926B3C: call    edx
0x926B3E: mov     word ptr [eax+4], 0A0h ; ' '
0x926B44: mov     [esp+18h+var_10], eax
0x926B48: mov     ecx, eax
0x926B4A: mov     [esp+18h+var_4], 0
0x926B52: call    sub_924930
0x926B57: mov     [esi+4], eax
0x926B5A: mov     eax, 0A0h ; ' '
0x926B5F: mov     ecx, [esp+18h+var_C]
0x926B63: mov     large fs:0, ecx
0x926B6A: pop     ecx
0x926B6B: pop     esi
0x926B6C: add     esp, 10h
0x926B6F: retn
