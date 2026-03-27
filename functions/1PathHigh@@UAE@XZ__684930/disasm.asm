0x684930: push    0FFFFFFFFh
0x684932: push    offset ??1PathHigh@@UAE@XZ_SEH
0x684937: mov     eax, large fs:0
0x68493D: push    eax
0x68493E: push    ecx
0x68493F: push    esi
0x684940: push    edi
0x684941: mov     eax, ds:0B30AACh
0x684946: xor     eax, esp
0x684948: push    eax
0x684949: lea     eax, [esp+1Ch+var_C]
0x68494D: mov     large fs:0, eax
0x684953: mov     esi, ecx
0x684955: mov     [esp+1Ch+var_10], esi
0x684959: mov     dword ptr [esi], offset ??_7PathHigh@@6B@; const PathHigh::`vftable'
0x68495F: lea     ecx, [esi+14h]
0x684962: mov     [esp+1Ch+var_4], 1
0x68496A: call    sub_68C6E0
0x68496F: mov     ecx, esi
0x684971: call    sub_683C20
0x684976: mov     edi, [esi+30h]
0x684979: test    edi, edi
0x68497B: jz      short loc_684994
0x68497D: mov     ecx, edi
0x68497F: call    sub_538B60
0x684984: push    edi
0x684985: call    FormHeapFree
0x68498A: add     esp, 4
0x68498D: mov     dword ptr [esi+30h], 0
0x684994: mov     ecx, esi
0x684996: call    sub_684830
0x68499B: mov     edi, [esi+28h]
0x68499E: test    edi, edi
0x6849A0: mov     byte ptr [esp+1Ch+var_4], 0
0x6849A5: jz      short loc_6849C3
0x6849A7: lea     eax, [edi+4]
0x6849AA: push    eax; lpAddend
0x6849AB: call    dword ptr ds:0A2807Ch
0x6849B1: test    eax, eax
0x6849B3: jnz     short loc_6849C3
0x6849B5: test    edi, edi
0x6849B7: jz      short loc_6849C3
0x6849B9: mov     edx, [edi]
0x6849BB: mov     eax, [edx]
0x6849BD: push    1
0x6849BF: mov     ecx, edi
0x6849C1: call    eax
0x6849C3: mov     ecx, esi; this
0x6849C5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6849CD: call    ??1PathMiddleHigh@@UAE@XZ; PathMiddleHigh::~PathMiddleHigh(void)
0x6849D2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6849D6: mov     large fs:0, ecx
0x6849DD: pop     ecx
0x6849DE: pop     edi
0x6849DF: pop     esi
0x6849E0: add     esp, 10h
0x6849E3: retn
