0x70D6B0: push    0FFFFFFFFh
0x70D6B2: push    offset SEH_8C8970
0x70D6B7: mov     eax, large fs:0
0x70D6BD: push    eax
0x70D6BE: push    ecx
0x70D6BF: push    esi
0x70D6C0: push    edi
0x70D6C1: mov     eax, ds:0B30AACh
0x70D6C6: xor     eax, esp
0x70D6C8: push    eax
0x70D6C9: lea     eax, [esp+1Ch+var_C]
0x70D6CD: mov     large fs:0, eax
0x70D6D3: mov     edi, ecx
0x70D6D5: push    124h; Size
0x70D6DA: call    FormHeapAlloc
0x70D6DF: add     esp, 4
0x70D6E2: mov     [esp+1Ch+var_10], eax
0x70D6E6: xor     esi, esi
0x70D6E8: cmp     eax, esi
0x70D6EA: mov     [esp+1Ch+var_4], esi
0x70D6EE: jz      short loc_70D6F9
0x70D6F0: mov     ecx, eax
0x70D6F2: call    sub_70D590
0x70D6F7: mov     esi, eax
0x70D6F9: mov     eax, [esp+1Ch+arg_0]
0x70D6FD: push    eax
0x70D6FE: push    esi
0x70D6FF: mov     ecx, edi
0x70D701: mov     [esp+24h+var_4], 0FFFFFFFFh
0x70D709: call    sub_70D050
0x70D70E: mov     eax, esi
0x70D710: mov     ecx, [esp+1Ch+var_C]
0x70D714: mov     large fs:0, ecx
0x70D71B: pop     ecx
0x70D71C: pop     edi
0x70D71D: pop     esi
0x70D71E: add     esp, 10h
0x70D721: retn    4
