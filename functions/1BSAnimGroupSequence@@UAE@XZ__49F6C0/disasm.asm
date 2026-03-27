0x49F6C0: push    0FFFFFFFFh
0x49F6C2: push    offset ??1BSAnimGroupSequence@@UAE@XZ_SEH
0x49F6C7: mov     eax, large fs:0
0x49F6CD: push    eax
0x49F6CE: push    ecx
0x49F6CF: push    esi
0x49F6D0: push    edi
0x49F6D1: mov     eax, ds:0B30AACh
0x49F6D6: xor     eax, esp
0x49F6D8: push    eax
0x49F6D9: lea     eax, [esp+1Ch+var_C]
0x49F6DD: mov     large fs:0, eax
0x49F6E3: mov     edi, ecx
0x49F6E5: mov     [esp+1Ch+var_10], edi
0x49F6E9: mov     dword ptr [edi], offset ??_7BSAnimGroupSequence@@6B@; const BSAnimGroupSequence::`vftable'
0x49F6EF: mov     esi, [edi+68h]
0x49F6F2: test    esi, esi
0x49F6F4: mov     [esp+1Ch+var_4], 0
0x49F6FC: jz      short loc_49F71A
0x49F6FE: lea     eax, [esi+4]
0x49F701: push    eax; lpAddend
0x49F702: call    dword ptr ds:0A2807Ch
0x49F708: test    eax, eax
0x49F70A: jnz     short loc_49F71A
0x49F70C: test    esi, esi
0x49F70E: jz      short loc_49F71A
0x49F710: mov     edx, [esi]
0x49F712: mov     eax, [edx]
0x49F714: push    1
0x49F716: mov     ecx, esi
0x49F718: call    eax
0x49F71A: mov     ecx, edi; this
0x49F71C: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x49F724: call    ??1NiControllerSequence@@UAE@XZ; NiControllerSequence::~NiControllerSequence(void)
0x49F729: mov     ecx, dword ptr [esp+1Ch+var_C]
0x49F72D: mov     large fs:0, ecx
0x49F734: pop     ecx
0x49F735: pop     edi
0x49F736: pop     esi
0x49F737: add     esp, 10h
0x49F73A: retn
