0x88A6B0: push    0FFFFFFFFh
0x88A6B2: push    offset SEH_88A6B0
0x88A6B7: mov     eax, large fs:0
0x88A6BD: push    eax
0x88A6BE: push    ecx
0x88A6BF: push    esi
0x88A6C0: mov     eax, ds:0B30AACh
0x88A6C5: xor     eax, esp
0x88A6C7: push    eax
0x88A6C8: lea     eax, [esp+18h+var_C]
0x88A6CC: mov     large fs:0, eax
0x88A6D2: mov     esi, ecx
0x88A6D4: cmp     dword ptr [esi+0Ch], 0
0x88A6D8: jnz     short loc_88A748
0x88A6DA: mov     ecx, ds:0BA7D98h
0x88A6E0: mov     eax, [ecx]
0x88A6E2: mov     edx, [eax+10h]
0x88A6E5: push    2Ch ; ','
0x88A6E7: push    0A0h ; ' '
0x88A6EC: call    edx
0x88A6EE: mov     word ptr [eax+4], 0A0h ; ' '
0x88A6F4: mov     [esp+18h+var_10], eax
0x88A6F8: mov     ecx, eax
0x88A6FA: mov     [esp+18h+var_4], 0
0x88A702: call    sub_88A4F0
0x88A707: test    eax, eax
0x88A709: mov     [esp+18h+var_4], 0FFFFFFFFh
0x88A711: jz      short loc_88A71A
0x88A713: add     eax, 0A0h ; ' '
0x88A718: jmp     short loc_88A71C
0x88A71A: xor     eax, eax
0x88A71C: cmp     dword ptr [esi+8], 0
0x88A720: mov     [esi+0Ch], eax
0x88A723: jz      short loc_88A73F
0x88A725: test    eax, eax
0x88A727: jz      short loc_88A730
0x88A729: add     eax, 0FFFFFF60h
0x88A72E: jmp     short loc_88A732
0x88A730: xor     eax, eax
0x88A732: mov     edx, [esi]
0x88A734: push    eax
0x88A735: mov     eax, [edx+84h]
0x88A73B: mov     ecx, esi
0x88A73D: call    eax
0x88A73F: mov     ecx, [esp+18h+arg_0]
0x88A743: mov     byte ptr [ecx], 1
0x88A746: jmp     short loc_88A74F
0x88A748: mov     edx, [esp+18h+arg_0]
0x88A74C: mov     byte ptr [edx], 0
0x88A74F: mov     eax, [esi+0Ch]
0x88A752: mov     ecx, [esp+18h+var_C]
0x88A756: mov     large fs:0, ecx
0x88A75D: pop     ecx
0x88A75E: pop     esi
0x88A75F: add     esp, 10h
0x88A762: retn    4
