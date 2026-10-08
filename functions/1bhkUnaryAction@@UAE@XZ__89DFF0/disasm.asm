0x89DFF0: push    0FFFFFFFFh
0x89DFF2: push    offset ??1bhkBinaryAction@@UAE@XZ_SEH
0x89DFF7: mov     eax, large fs:0
0x89DFFD: push    eax
0x89DFFE: push    ecx
0x89DFFF: push    esi
0x89E000: mov     eax, ds:0B30AACh
0x89E005: xor     eax, esp
0x89E007: push    eax
0x89E008: lea     eax, [esp+18h+var_C]
0x89E00C: mov     large fs:0, eax
0x89E012: mov     esi, ecx
0x89E014: mov     [esp+18h+var_10], esi
0x89E018: mov     dword ptr [esi], offset ??_7bhkUnaryAction@@6B@; const bhkUnaryAction::`vftable'
0x89E01E: mov     [esp+18h+var_4], 0
0x89E026: call    sub_89D700
0x89E02B: sub     dword ptr ds:0BA7D0Ch, 1
0x89E032: mov     ecx, esi; this
0x89E034: mov     [esp+18h+var_4], 0FFFFFFFFh
0x89E03C: call    ??1bhkAction@@UAE@XZ; bhkAction::~bhkAction(void)
0x89E041: mov     ecx, [esp+18h+var_C]
0x89E045: mov     large fs:0, ecx
0x89E04C: pop     ecx
0x89E04D: pop     esi
0x89E04E: add     esp, 10h
0x89E051: retn
0x9D68B0: mov     ecx, [ebp-10h]; this
0x9D68B3: jmp     ??1bhkAction@@UAE@XZ; bhkAction::~bhkAction(void)
0x9D68B8: mov     edx, [esp+arg_4]
0x9D68BC: lea     eax, [edx-8]
0x9D68BF: mov     ecx, [edx-0Ch]
0x9D68C2: xor     ecx, eax
0x9D68C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D68C9: mov     eax, offset stru_AFE670
0x9D68CE: jmp     ___CxxFrameHandler3
