0x8C8970: push    0FFFFFFFFh
0x8C8972: push    offset SEH_8C8970
0x8C8977: mov     eax, large fs:0
0x8C897D: push    eax
0x8C897E: push    ecx
0x8C897F: push    esi
0x8C8980: push    edi
0x8C8981: mov     eax, ds:0B30AACh
0x8C8986: xor     eax, esp
0x8C8988: push    eax
0x8C8989: lea     eax, [esp+1Ch+var_C]
0x8C898D: mov     large fs:0, eax
0x8C8993: mov     esi, ecx
0x8C8995: push    offset stru_BA7C80; lpCriticalSection
0x8C899A: call    dword ptr ds:0A2806Ch
0x8C89A0: call    dword ptr ds:0A2808Ch
0x8C89A6: add     dword ptr ds:0BA7CFCh, 1
0x8C89AD: push    14h; Size
0x8C89AF: mov     ds:0BA7CF8h, eax
0x8C89B4: call    FormHeapAlloc
0x8C89B9: add     esp, 4
0x8C89BC: mov     [esp+1Ch+var_10], eax
0x8C89C0: test    eax, eax
0x8C89C2: mov     [esp+1Ch+var_4], 0
0x8C89CA: jz      short loc_8C89D7
0x8C89CC: mov     ecx, eax
0x8C89CE: call    sub_8C8830
0x8C89D3: mov     edi, eax
0x8C89D5: jmp     short loc_8C89D9
0x8C89D7: xor     edi, edi
0x8C89D9: mov     ecx, [esp+1Ch+arg_0]
0x8C89DD: mov     eax, [esi]
0x8C89DF: mov     edx, [eax+80h]
0x8C89E5: push    ecx
0x8C89E6: push    edi
0x8C89E7: mov     ecx, esi
0x8C89E9: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8C89F1: call    edx
0x8C89F3: sub     dword ptr ds:0BA7CFCh, 1
0x8C89FA: jnz     short loc_8C8A06
0x8C89FC: mov     dword ptr ds:0BA7CF8h, 0
0x8C8A06: push    offset stru_BA7C80; lpCriticalSection
0x8C8A0B: call    dword ptr ds:0A28074h
0x8C8A11: mov     eax, edi
0x8C8A13: mov     ecx, dword ptr [esp+1Ch+var_C]
0x8C8A17: mov     large fs:0, ecx
0x8C8A1E: pop     ecx
0x8C8A1F: pop     edi
0x8C8A20: pop     esi
0x8C8A21: add     esp, 10h
0x8C8A24: retn    4
