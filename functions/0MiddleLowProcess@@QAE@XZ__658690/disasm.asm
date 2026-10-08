0x658690: push    0FFFFFFFFh; MiddleLowProcess constructor: derives from LowProcess and installs MiddleLowProcess vtable; no currentPackage or movementFlags storage.
0x658692: push    offset ??1MiddleLowProcess@@UAE@XZ_SEH
0x658697: mov     eax, large fs:0
0x65869D: push    eax
0x65869E: push    ecx
0x65869F: push    esi
0x6586A0: mov     eax, ds:0B30AACh
0x6586A5: xor     eax, esp
0x6586A7: push    eax
0x6586A8: lea     eax, [esp+18h+var_C]
0x6586AC: mov     large fs:0, eax
0x6586B2: mov     esi, ecx
0x6586B4: mov     [esp+18h+var_10], esi
0x6586B8: call    ??0LowProcess@@QAE@XZ; LowProcess constructor: initializes editorPackage/editorPackProcedure and follow/pathing state, but no currentPackage field used by runtime package assignment.
0x6586BD: lea     ecx, [esi+94h]; self
0x6586C3: mov     [esp+18h+var_4], 0
0x6586CB: mov     dword ptr [esi], offset ??_7MiddleLowProcess@@6B@; Verified persistence family:3F0 size,3F4 save,3F8 load,404 revert; base/low/middle-low bodies decoded and MobileObject dispatch confirmed. Probable:3FC InitLoadGame and400 FinishInitLoadGame; derived middle-high/high overrides remain only family-mapped, not fully decoded.
0x6586D1: call    AVCollection_Constr
0x6586D6: mov     eax, esi
0x6586D8: mov     ecx, [esp+18h+var_C]
0x6586DC: mov     large fs:0, ecx
0x6586E3: pop     ecx
0x6586E4: pop     esi
0x6586E5: add     esp, 10h
0x6586E8: retn
0x9C3BE0: mov     ecx, [ebp-10h]; this
0x9C3BE3: jmp     ??1LowProcess@@UAE@XZ; LowProcess::~LowProcess(void)
0x9C3BE8: mov     edx, [esp+arg_4]
0x9C3BEC: lea     eax, [edx-8]
0x9C3BEF: mov     ecx, [edx-0Ch]
0x9C3BF2: xor     ecx, eax
0x9C3BF4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3BF9: mov     eax, offset stru_AEC730
0x9C3BFE: jmp     ___CxxFrameHandler3
