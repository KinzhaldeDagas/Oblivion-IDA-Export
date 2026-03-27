0x70B120: push    0FFFFFFFFh
0x70B122: push    offset SEH_88E880
0x70B127: mov     eax, large fs:0
0x70B12D: push    eax
0x70B12E: push    ecx
0x70B12F: push    ebx
0x70B130: push    ebp
0x70B131: push    esi
0x70B132: push    edi
0x70B133: mov     eax, ds:0B30AACh
0x70B138: xor     eax, esp
0x70B13A: push    eax
0x70B13B: lea     eax, [esp+24h+var_C]
0x70B13F: mov     large fs:0, eax
0x70B145: mov     ebx, ecx
0x70B147: xor     ebp, ebp
0x70B149: mov     [esp+24h+var_10], ebp
0x70B14D: xor     edi, edi
0x70B14F: cmp     [ebx+0B6h], bp
0x70B156: jbe     short loc_70B1BE
0x70B158: jmp     short loc_70B160
0x70B15A: align 10h
0x70B160: mov     eax, [ebx+0B0h]
0x70B166: mov     esi, [eax+edi*4]
0x70B169: cmp     esi, ebp
0x70B16B: lea     eax, [eax+edi*4]
0x70B16E: mov     [esp+24h+var_10], esi
0x70B172: jz      short loc_70B17E
0x70B174: lea     ecx, [esi+4]
0x70B177: push    ecx; lpAddend
0x70B178: call    dword ptr ds:0A28078h
0x70B17E: cmp     esi, ebp
0x70B180: mov     [esp+24h+var_4], ebp
0x70B184: jz      short loc_70B18C
0x70B186: cmp     esi, [esp+24h+arg_4]
0x70B18A: jz      short loc_70B1DA
0x70B18C: cmp     esi, ebp
0x70B18E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x70B196: jz      short loc_70B1B0
0x70B198: lea     edx, [esi+4]
0x70B19B: push    edx; lpAddend
0x70B19C: call    dword ptr ds:0A2807Ch
0x70B1A2: test    eax, eax
0x70B1A4: jnz     short loc_70B1B0
0x70B1A6: mov     eax, [esi]
0x70B1A8: mov     edx, [eax]
0x70B1AA: push    1
0x70B1AC: mov     ecx, esi
0x70B1AE: call    edx
0x70B1B0: movzx   eax, word ptr [ebx+0B6h]
0x70B1B7: add     edi, 1
0x70B1BA: cmp     edi, eax
0x70B1BC: jb      short loc_70B160
0x70B1BE: mov     eax, [esp+24h+arg_0]
0x70B1C2: mov     [eax], ebp
0x70B1C4: mov     ecx, dword ptr [esp+24h+var_C]
0x70B1C8: mov     large fs:0, ecx
0x70B1CF: pop     ecx
0x70B1D0: pop     edi
0x70B1D1: pop     esi
0x70B1D2: pop     ebp
0x70B1D3: pop     ebx
0x70B1D4: add     esp, 10h
0x70B1D7: retn    8
0x70B1DA: push    edi
0x70B1DB: lea     ecx, [esp+28h+arg_4]
0x70B1DF: push    ecx
0x70B1E0: lea     ecx, [ebx+0ACh]
0x70B1E6: mov     [esi+1Ch], ebp
0x70B1E9: call    sub_6D7F60
0x70B1EE: mov     eax, [esp+24h+arg_4]
0x70B1F2: cmp     eax, ebp
0x70B1F4: jz      short loc_70B214
0x70B1F6: mov     edi, eax
0x70B1F8: add     eax, 4
0x70B1FB: push    eax; lpAddend
0x70B1FC: call    dword ptr ds:0A2807Ch
0x70B202: test    eax, eax
0x70B204: jnz     short loc_70B214
0x70B206: cmp     edi, ebp
0x70B208: jz      short loc_70B214
0x70B20A: mov     edx, [edi]
0x70B20C: mov     eax, [edx]
0x70B20E: push    1
0x70B210: mov     ecx, edi
0x70B212: call    eax
0x70B214: mov     ebx, [esp+24h+arg_0]
0x70B218: lea     edi, [esi+4]
0x70B21B: push    edi; lpAddend
0x70B21C: mov     [ebx], esi
0x70B21E: call    dword ptr ds:0A28078h
0x70B224: push    edi; lpAddend
0x70B225: mov     [esp+28h+var_4], 0FFFFFFFFh
0x70B22D: call    dword ptr ds:0A2807Ch
0x70B233: test    eax, eax
0x70B235: jnz     short loc_70B241
0x70B237: mov     edx, [esi]
0x70B239: mov     eax, [edx]
0x70B23B: push    1
0x70B23D: mov     ecx, esi
0x70B23F: call    eax
0x70B241: mov     eax, ebx
0x70B243: jmp     loc_70B1C4
