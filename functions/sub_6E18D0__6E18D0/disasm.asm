0x6E18D0: push    0FFFFFFFFh
0x6E18D2: push    offset ??1NiKeyframeManager@@UAE@XZ_SEH
0x6E18D7: mov     eax, large fs:0
0x6E18DD: push    eax
0x6E18DE: push    ecx
0x6E18DF: push    esi
0x6E18E0: mov     eax, ds:0B30AACh
0x6E18E5: xor     eax, esp
0x6E18E7: push    eax
0x6E18E8: lea     eax, [esp+18h+var_C]
0x6E18EC: mov     large fs:0, eax
0x6E18F2: mov     esi, ecx
0x6E18F4: mov     [esp+18h+var_10], esi
0x6E18F8: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x6E18FD: mov     dword ptr [esi], offset ??_7NiKeyframeManager@@6B@; const NiKeyframeManager::`vftable'
0x6E1903: xor     ecx, ecx
0x6E1905: mov     eax, 25h ; '%'
0x6E190A: mov     [esi+40h], eax
0x6E190D: mov     edx, 4
0x6E1912: mul     edx
0x6E1914: seto    cl
0x6E1917: mov     [esp+18h+var_4], 0
0x6E191F: mov     dword ptr [esi+3Ch], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiSequence@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiSequence>>::`vftable'
0x6E1926: mov     dword ptr [esi+48h], 0
0x6E192D: neg     ecx
0x6E192F: or      ecx, eax
0x6E1931: push    ecx; Size
0x6E1932: call    FormHeapAlloc
0x6E1937: mov     ecx, [esi+40h]
0x6E193A: add     ecx, ecx
0x6E193C: add     ecx, ecx
0x6E193E: push    ecx
0x6E193F: push    0
0x6E1941: push    eax
0x6E1942: mov     [esi+44h], eax
0x6E1945: call    __memset
0x6E194A: add     esp, 10h
0x6E194D: mov     byte ptr [esi+4Ch], 0
0x6E1951: mov     dword ptr [esi+3Ch], offset ??_7?$NiTStringPointerMap@V?$NiPointer@VNiSequence@@@@@@6B@; const NiTStringPointerMap<NiPointer<NiSequence>>::`vftable'
0x6E1958: mov     eax, esi
0x6E195A: mov     ecx, [esp+18h+var_C]
0x6E195E: mov     large fs:0, ecx
0x6E1965: pop     ecx
0x6E1966: pop     esi
0x6E1967: add     esp, 10h
0x6E196A: retn
0x9C80C0: mov     ecx, [ebp-10h]; this
0x9C80C3: jmp     ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x9C80C8: mov     edx, [esp+arg_4]
0x9C80CC: lea     eax, [edx-8]
0x9C80CF: mov     ecx, [edx-0Ch]
0x9C80D2: xor     ecx, eax
0x9C80D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C80D9: mov     eax, offset stru_AF03BC
0x9C80DE: jmp     ___CxxFrameHandler3
