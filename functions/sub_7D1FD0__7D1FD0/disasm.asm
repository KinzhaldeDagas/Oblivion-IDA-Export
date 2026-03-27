0x7D1FD0: push    0FFFFFFFFh
0x7D1FD2: push    offset SEH_6C6610
0x7D1FD7: mov     eax, large fs:0
0x7D1FDD: push    eax
0x7D1FDE: push    ecx
0x7D1FDF: push    ebx
0x7D1FE0: push    esi
0x7D1FE1: push    edi
0x7D1FE2: mov     eax, ds:0B30AACh
0x7D1FE7: xor     eax, esp
0x7D1FE9: push    eax
0x7D1FEA: lea     eax, [esp+20h+var_C]
0x7D1FEE: mov     large fs:0, eax
0x7D1FF4: mov     esi, ecx
0x7D1FF6: mov     [esp+20h+var_10], 0
0x7D1FFE: mov     edi, [esi+8]
0x7D2001: mov     eax, [edi+4]
0x7D2004: test    eax, eax
0x7D2006: mov     [esi+8], eax
0x7D2009: jz      short loc_7D2013
0x7D200B: mov     dword ptr [eax], 0
0x7D2011: jmp     short loc_7D201A
0x7D2013: mov     dword ptr [esi+4], 0
0x7D201A: mov     eax, [edi+8]
0x7D201D: test    eax, eax
0x7D201F: mov     ebx, [esp+20h+arg_0]
0x7D2023: mov     [ebx], eax
0x7D2025: jz      short loc_7D2031
0x7D2027: add     eax, 4
0x7D202A: push    eax; lpAddend
0x7D202B: call    dword ptr ds:0A28078h
0x7D2031: mov     eax, [esi]
0x7D2033: mov     edx, [eax+8]
0x7D2036: push    edi
0x7D2037: mov     ecx, esi
0x7D2039: mov     [esp+24h+var_4], 0
0x7D2041: mov     [esp+24h+var_10], 1
0x7D2049: call    edx
0x7D204B: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7D204F: mov     eax, ebx
0x7D2051: mov     ecx, dword ptr [esp+20h+var_C]
0x7D2055: mov     large fs:0, ecx
0x7D205C: pop     ecx
0x7D205D: pop     edi
0x7D205E: pop     esi
0x7D205F: pop     ebx
0x7D2060: add     esp, 10h
0x7D2063: retn    4
