0x6D1F60: push    0FFFFFFFFh
0x6D1F62: push    offset SEH_88E880
0x6D1F67: mov     eax, large fs:0
0x6D1F6D: push    eax
0x6D1F6E: push    ecx
0x6D1F6F: push    ebx
0x6D1F70: push    ebp
0x6D1F71: push    esi
0x6D1F72: push    edi
0x6D1F73: mov     eax, ds:0B30AACh
0x6D1F78: xor     eax, esp
0x6D1F7A: push    eax
0x6D1F7B: lea     eax, [esp+24h+var_C]
0x6D1F7F: mov     large fs:0, eax
0x6D1F85: mov     esi, ecx
0x6D1F87: mov     edi, [esp+24h+arg_0]
0x6D1F8B: push    edi
0x6D1F8C: call    sub_75E480
0x6D1F91: cmp     dword ptr [esi+30h], 0
0x6D1F95: jz      short loc_6D200E
0x6D1F97: mov     ecx, edi
0x6D1F99: call    sub_7124D0
0x6D1F9E: mov     ebx, eax
0x6D1FA0: lea     ebp, [esi+40h]
0x6D1FA3: push    ebx
0x6D1FA4: mov     ecx, ebp
0x6D1FA6: call    sub_523B10
0x6D1FAB: xor     edi, edi
0x6D1FAD: test    ebx, ebx
0x6D1FAF: jbe     short loc_6D200E
0x6D1FB1: mov     ecx, [esp+24h+arg_0]
0x6D1FB5: call    sub_7124A0
0x6D1FBA: mov     esi, eax
0x6D1FBC: test    esi, esi
0x6D1FBE: mov     [esp+24h+var_10], esi
0x6D1FC2: jz      short loc_6D1FCE
0x6D1FC4: lea     eax, [esi+4]
0x6D1FC7: push    eax; lpAddend
0x6D1FC8: call    dword ptr ds:0A28078h
0x6D1FCE: lea     ecx, [esp+24h+var_10]
0x6D1FD2: push    ecx
0x6D1FD3: push    edi
0x6D1FD4: mov     ecx, ebp
0x6D1FD6: mov     [esp+2Ch+var_4], 0
0x6D1FDE: call    sub_5254D0
0x6D1FE3: test    esi, esi
0x6D1FE5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D1FED: jz      short loc_6D2007
0x6D1FEF: lea     edx, [esi+4]
0x6D1FF2: push    edx; lpAddend
0x6D1FF3: call    dword ptr ds:0A2807Ch
0x6D1FF9: test    eax, eax
0x6D1FFB: jnz     short loc_6D2007
0x6D1FFD: mov     eax, [esi]
0x6D1FFF: mov     edx, [eax]
0x6D2001: push    1
0x6D2003: mov     ecx, esi
0x6D2005: call    edx
0x6D2007: add     edi, 1
0x6D200A: cmp     edi, ebx
0x6D200C: jb      short loc_6D1FB1
0x6D200E: mov     ecx, dword ptr [esp+24h+var_C]
0x6D2012: mov     large fs:0, ecx
0x6D2019: pop     ecx
0x6D201A: pop     edi
0x6D201B: pop     esi
0x6D201C: pop     ebp
0x6D201D: pop     ebx
0x6D201E: add     esp, 10h
0x6D2021: retn    4
