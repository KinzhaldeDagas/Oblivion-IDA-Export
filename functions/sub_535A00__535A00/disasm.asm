0x535A00: push    0FFFFFFFFh
0x535A02: push    offset SEH_538C80
0x535A07: mov     eax, large fs:0
0x535A0D: push    eax
0x535A0E: push    ecx
0x535A0F: push    esi
0x535A10: mov     eax, ds:0B30AACh
0x535A15: xor     eax, esp
0x535A17: push    eax
0x535A18: lea     eax, [esp+18h+var_C]
0x535A1C: mov     large fs:0, eax
0x535A22: mov     esi, ecx
0x535A24: mov     [esp+18h+var_10], esi
0x535A28: fld1
0x535A2A: xor     eax, eax
0x535A2C: fst     dword ptr [esi+24h]
0x535A2F: fst     dword ptr [esi+24h]
0x535A32: mov     [esi+30h], eax
0x535A35: fstp    dword ptr [esi+4]
0x535A38: mov     ecx, [esp+18h+arg_4]
0x535A3C: cmp     ecx, eax
0x535A3E: mov     dword ptr [esi], offset ??_7SpecificItemCollector@@6B@; const SpecificItemCollector::`vftable'
0x535A44: mov     [esp+18h+var_4], eax
0x535A48: mov     [esi+40h], eax
0x535A4B: jz      short loc_535A83
0x535A4D: lea     eax, [esp+18h+arg_4]
0x535A51: push    eax
0x535A52: call    sub_65ABE0
0x535A57: mov     eax, [esp+18h+arg_0]
0x535A5B: cmp     eax, 18h
0x535A5E: mov     ecx, [esp+18h+arg_4]
0x535A62: mov     [esi+40h], ecx
0x535A65: jge     short loc_535A6C
0x535A67: mov     eax, 1Ch
0x535A6C: and     ecx, 3Fh
0x535A6F: mov     edx, 1
0x535A74: shl     edx, cl
0x535A76: or      edx, 0A277Fh
0x535A7C: mov     ds:0BA7DB0h[eax*4], edx
0x535A83: mov     eax, esi
0x535A85: mov     ecx, [esp+18h+var_C]
0x535A89: mov     large fs:0, ecx
0x535A90: pop     ecx
0x535A91: pop     esi
0x535A92: add     esp, 10h
0x535A95: retn    8
