0x8B7E80: push    0FFFFFFFFh
0x8B7E82: push    offset SEH_8C8970
0x8B7E87: mov     eax, large fs:0
0x8B7E8D: push    eax
0x8B7E8E: push    ecx
0x8B7E8F: push    esi
0x8B7E90: push    edi
0x8B7E91: mov     eax, ds:0B30AACh
0x8B7E96: xor     eax, esp
0x8B7E98: push    eax
0x8B7E99: lea     eax, [esp+1Ch+var_C]
0x8B7E9D: mov     large fs:0, eax
0x8B7EA3: mov     esi, ecx
0x8B7EA5: push    offset stru_BA7C80; lpCriticalSection
0x8B7EAA: call    dword ptr ds:0A2806Ch
0x8B7EB0: call    dword ptr ds:0A2808Ch
0x8B7EB6: add     dword ptr ds:0BA7CFCh, 1
0x8B7EBD: push    14h; Size
0x8B7EBF: mov     ds:0BA7CF8h, eax
0x8B7EC4: call    FormHeapAlloc
0x8B7EC9: add     esp, 4
0x8B7ECC: mov     [esp+1Ch+var_10], eax
0x8B7ED0: test    eax, eax
0x8B7ED2: mov     [esp+1Ch+var_4], 0
0x8B7EDA: jz      short loc_8B7EE7
0x8B7EDC: mov     ecx, eax
0x8B7EDE: call    sub_8B7D50
0x8B7EE3: mov     edi, eax
0x8B7EE5: jmp     short loc_8B7EE9
0x8B7EE7: xor     edi, edi
0x8B7EE9: mov     ecx, [esp+1Ch+arg_0]
0x8B7EED: mov     eax, [esi]
0x8B7EEF: mov     edx, [eax+80h]
0x8B7EF5: push    ecx
0x8B7EF6: push    edi
0x8B7EF7: mov     ecx, esi
0x8B7EF9: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8B7F01: call    edx
0x8B7F03: sub     dword ptr ds:0BA7CFCh, 1
0x8B7F0A: jnz     short loc_8B7F16
0x8B7F0C: mov     dword ptr ds:0BA7CF8h, 0
0x8B7F16: push    offset stru_BA7C80; lpCriticalSection
0x8B7F1B: call    dword ptr ds:0A28074h
0x8B7F21: mov     eax, edi
0x8B7F23: mov     ecx, dword ptr [esp+1Ch+var_C]
0x8B7F27: mov     large fs:0, ecx
0x8B7F2E: pop     ecx
0x8B7F2F: pop     edi
0x8B7F30: pop     esi
0x8B7F31: add     esp, 10h
0x8B7F34: retn    4
