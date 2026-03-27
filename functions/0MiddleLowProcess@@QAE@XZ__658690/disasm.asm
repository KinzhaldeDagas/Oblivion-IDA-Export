0x658690: push    0FFFFFFFFh
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
0x6586B8: call    ??0LowProcess@@QAE@XZ; LowProcess::LowProcess(void)
0x6586BD: lea     ecx, [esi+94h]
0x6586C3: mov     [esp+18h+var_4], 0
0x6586CB: mov     dword ptr [esi], offset ??_7MiddleLowProcess@@6B@; const MiddleLowProcess::`vftable'
0x6586D1: call    AVCollection_Constr
0x6586D6: mov     eax, esi
0x6586D8: mov     ecx, [esp+18h+var_C]
0x6586DC: mov     large fs:0, ecx
0x6586E3: pop     ecx
0x6586E4: pop     esi
0x6586E5: add     esp, 10h
0x6586E8: retn
