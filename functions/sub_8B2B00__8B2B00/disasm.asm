0x8B2B00: push    0FFFFFFFFh
0x8B2B02: push    offset SEH_9266B0
0x8B2B07: mov     eax, large fs:0
0x8B2B0D: push    eax
0x8B2B0E: push    ecx
0x8B2B0F: push    esi
0x8B2B10: mov     eax, ds:0B30AACh
0x8B2B15: xor     eax, esp
0x8B2B17: push    eax
0x8B2B18: lea     eax, [esp+18h+var_C]
0x8B2B1C: mov     large fs:0, eax
0x8B2B22: mov     esi, ecx
0x8B2B24: cmp     dword ptr [esi+4], 0
0x8B2B28: jnz     short loc_8B2B5A
0x8B2B2A: mov     ecx, ds:0BA7D98h
0x8B2B30: mov     eax, [ecx]
0x8B2B32: mov     edx, [eax+10h]
0x8B2B35: push    29h ; ')'
0x8B2B37: push    90h
0x8B2B3C: call    edx
0x8B2B3E: mov     word ptr [eax+4], 90h
0x8B2B44: mov     [esp+18h+var_10], eax
0x8B2B48: mov     ecx, eax
0x8B2B4A: mov     [esp+18h+var_4], 0
0x8B2B52: call    sub_8B2390
0x8B2B57: mov     [esi+4], eax
0x8B2B5A: mov     eax, 90h
0x8B2B5F: mov     ecx, [esp+18h+var_C]
0x8B2B63: mov     large fs:0, ecx
0x8B2B6A: pop     ecx
0x8B2B6B: pop     esi
0x8B2B6C: add     esp, 10h
0x8B2B6F: retn
