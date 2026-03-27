0x532DF0: push    0FFFFFFFFh
0x532DF2: push    offset SEH_532DF0
0x532DF7: mov     eax, large fs:0
0x532DFD: push    eax
0x532DFE: push    ecx
0x532DFF: push    esi
0x532E00: push    edi
0x532E01: mov     eax, ds:0B30AACh
0x532E06: xor     eax, esp
0x532E08: push    eax
0x532E09: lea     eax, [esp+1Ch+var_C]
0x532E0D: mov     large fs:0, eax
0x532E13: mov     edi, ecx
0x532E15: mov     dword ptr [edi], 0
0x532E1B: mov     esi, [esp+1Ch+arg_0]
0x532E1F: test    esi, esi
0x532E21: jz      short loc_532E2F
0x532E23: lea     eax, [esi+4]
0x532E26: push    eax; lpAddend
0x532E27: mov     [edi], esi
0x532E29: call    dword ptr ds:0A28078h
0x532E2F: test    esi, esi
0x532E31: mov     dword ptr [edi+4], 0
0x532E38: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x532E40: jz      short loc_532E5A
0x532E42: lea     ecx, [esi+4]
0x532E45: push    ecx; lpAddend
0x532E46: call    dword ptr ds:0A2807Ch
0x532E4C: test    eax, eax
0x532E4E: jnz     short loc_532E5A
0x532E50: mov     edx, [esi]
0x532E52: mov     eax, [edx]
0x532E54: push    1
0x532E56: mov     ecx, esi
0x532E58: call    eax
0x532E5A: mov     eax, edi
0x532E5C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x532E60: mov     large fs:0, ecx
0x532E67: pop     ecx
0x532E68: pop     edi
0x532E69: pop     esi
0x532E6A: add     esp, 10h
0x532E6D: retn    4
