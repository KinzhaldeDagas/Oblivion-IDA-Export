0x6586F0: push    0FFFFFFFFh
0x6586F2: push    offset ??1MiddleLowProcess@@UAE@XZ_SEH
0x6586F7: mov     eax, large fs:0
0x6586FD: push    eax
0x6586FE: push    ecx
0x6586FF: push    esi
0x658700: mov     eax, ds:0B30AACh
0x658705: xor     eax, esp
0x658707: push    eax
0x658708: lea     eax, [esp+18h+var_C]
0x65870C: mov     large fs:0, eax
0x658712: mov     esi, ecx
0x658714: mov     [esp+18h+var_10], esi
0x658718: mov     dword ptr [esi], offset ??_7MiddleLowProcess@@6B@; Verified persistence family:3F0 size,3F4 save,3F8 load,404 revert; base/low/middle-low bodies decoded and MobileObject dispatch confirmed. Probable:3FC InitLoadGame and400 FinishInitLoadGame; derived middle-high/high overrides remain only family-mapped, not fully decoded.
0x65871E: lea     ecx, [esi+94h]; self
0x658724: mov     [esp+18h+var_4], 0
0x65872C: call    AVCollection_destr
0x658731: mov     ecx, esi; this
0x658733: mov     [esp+18h+var_4], 0FFFFFFFFh
0x65873B: call    ??1LowProcess@@UAE@XZ; LowProcess::~LowProcess(void)
0x658740: mov     ecx, [esp+18h+var_C]
0x658744: mov     large fs:0, ecx
0x65874B: pop     ecx
0x65874C: pop     esi
0x65874D: add     esp, 10h
0x658750: retn
0x9C3BE0: mov     ecx, [ebp-10h]; this
0x9C3BE3: jmp     ??1LowProcess@@UAE@XZ; LowProcess::~LowProcess(void)
0x9C3BE8: mov     edx, [esp+arg_4]
0x9C3BEC: lea     eax, [edx-8]
0x9C3BEF: mov     ecx, [edx-0Ch]
0x9C3BF2: xor     ecx, eax
0x9C3BF4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3BF9: mov     eax, offset stru_AEC730
0x9C3BFE: jmp     ___CxxFrameHandler3
