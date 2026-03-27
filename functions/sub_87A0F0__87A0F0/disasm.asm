0x87A0F0: push    0FFFFFFFFh
0x87A0F2: push    offset SEH_87A1E0
0x87A0F7: mov     eax, large fs:0
0x87A0FD: push    eax
0x87A0FE: push    ebx
0x87A0FF: push    ebp
0x87A100: push    esi
0x87A101: push    edi
0x87A102: mov     eax, ds:0B30AACh
0x87A107: xor     eax, esp
0x87A109: push    eax
0x87A10A: lea     eax, [esp+20h+var_C]
0x87A10E: mov     large fs:0, eax
0x87A114: mov     esi, ecx
0x87A116: mov     ecx, [esp+20h+arg_0]
0x87A11A: mov     eax, [esi]
0x87A11C: mov     edx, [eax+0BCh]
0x87A122: mov     edi, ds:0B476F0h
0x87A128: push    0
0x87A12A: push    0
0x87A12C: push    ecx
0x87A12D: mov     ecx, esi
0x87A12F: call    edx
0x87A131: mov     eax, [edi+24h]
0x87A134: mov     ecx, [esp+20h+arg_C]
0x87A138: mov     ebx, [eax]
0x87A13A: mov     edx, [ecx]
0x87A13C: mov     eax, [edx+88h]
0x87A142: push    0
0x87A144: mov     [esp+24h+arg_0], ebx
0x87A148: call    eax
0x87A14A: mov     ebx, [ebx+4]
0x87A14D: mov     ebp, eax
0x87A14F: cmp     ebx, ebp
0x87A151: jz      short loc_87A188
0x87A153: test    ebx, ebx
0x87A155: jz      short loc_87A173
0x87A157: lea     ecx, [ebx+4]
0x87A15A: push    ecx; lpAddend
0x87A15B: call    dword ptr ds:0A2807Ch
0x87A161: test    eax, eax
0x87A163: jnz     short loc_87A173
0x87A165: test    ebx, ebx
0x87A167: jz      short loc_87A173
0x87A169: mov     edx, [ebx]
0x87A16B: mov     eax, [edx]
0x87A16D: push    1
0x87A16F: mov     ecx, ebx
0x87A171: call    eax
0x87A173: test    ebp, ebp
0x87A175: mov     ecx, [esp+20h+arg_0]
0x87A179: mov     [ecx+4], ebp
0x87A17C: jz      short loc_87A188
0x87A17E: add     ebp, 4
0x87A181: push    ebp; lpAddend
0x87A182: call    dword ptr ds:0A28078h
0x87A188: mov     ebx, 1
0x87A18D: add     [edi+60h], ebx
0x87A190: mov     [esp+20h+arg_0], edi
0x87A194: mov     eax, [esi+38h]
0x87A197: lea     edx, [esp+20h+arg_0]
0x87A19B: push    edx
0x87A19C: push    eax
0x87A19D: lea     ecx, [esi+40h]
0x87A1A0: mov     [esp+28h+var_4], 0
0x87A1A8: call    sub_76CE40
0x87A1AD: or      eax, 0FFFFFFFFh
0x87A1B0: add     [edi+60h], eax
0x87A1B3: mov     [esp+20h+var_4], eax
0x87A1B7: jnz     short loc_87A1C0
0x87A1B9: mov     ecx, edi
0x87A1BB: call    sub_7604D0
0x87A1C0: add     [esi+38h], ebx
0x87A1C3: mov     ecx, dword ptr [esp+20h+var_C]
0x87A1C7: mov     large fs:0, ecx
0x87A1CE: pop     ecx
0x87A1CF: pop     edi
0x87A1D0: pop     esi
0x87A1D1: pop     ebp
0x87A1D2: pop     ebx
0x87A1D3: add     esp, 0Ch
0x87A1D6: retn    10h
