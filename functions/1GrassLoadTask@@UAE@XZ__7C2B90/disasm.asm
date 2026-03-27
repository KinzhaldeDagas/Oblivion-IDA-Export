0x7C2B90: push    0FFFFFFFFh
0x7C2B92: push    offset SEH_6428F0
0x7C2B97: mov     eax, large fs:0
0x7C2B9D: push    eax
0x7C2B9E: push    ecx
0x7C2B9F: push    esi
0x7C2BA0: mov     eax, ds:0B30AACh
0x7C2BA5: xor     eax, esp
0x7C2BA7: push    eax
0x7C2BA8: lea     eax, [esp+18h+var_C]
0x7C2BAC: mov     large fs:0, eax
0x7C2BB2: mov     esi, ecx
0x7C2BB4: mov     [esp+18h+var_10], esi
0x7C2BB8: lea     ecx, [esi+28h]; this
0x7C2BBB: mov     [esp+18h+var_4], 0
0x7C2BC3: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x7C2BC8: mov     ecx, esi; this
0x7C2BCA: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7C2BD2: call    ??1LipTask@@UAE@XZ; LipTask::~LipTask(void)
0x7C2BD7: mov     ecx, [esp+18h+var_C]
0x7C2BDB: mov     large fs:0, ecx
0x7C2BE2: pop     ecx
0x7C2BE3: pop     esi
0x7C2BE4: add     esp, 10h
0x7C2BE7: retn
