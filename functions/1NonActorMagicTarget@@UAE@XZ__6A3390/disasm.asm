0x6A3390: push    0FFFFFFFFh; Verified Oblivion NonActorMagicTarget destructor runs MagicTarget_destr on subobject +0x0C and restores the BSExtraData vtable; no list removal appears in this function. Fallout's corresponding destructor explicitly removes all active-effect list entries first. This is a lifecycle difference; list ownership/cleanup responsibility in Oblivion remains Unknown pending all caller paths.
0x6A3392: push    offset SEH_42B090
0x6A3397: mov     eax, large fs:0
0x6A339D: push    eax
0x6A339E: push    ecx
0x6A339F: push    esi
0x6A33A0: mov     eax, ds:0B30AACh
0x6A33A5: xor     eax, esp
0x6A33A7: push    eax
0x6A33A8: lea     eax, [esp+18h+var_C]
0x6A33AC: mov     large fs:0, eax
0x6A33B2: mov     esi, ecx
0x6A33B4: mov     [esp+18h+var_10], esi
0x6A33B8: xor     ecx, ecx
0x6A33BA: cmp     esi, ecx
0x6A33BC: mov     [esp+18h+var_4], ecx
0x6A33C0: jz      short loc_6A33C5
0x6A33C2: lea     ecx, [esi+0Ch]; this
0x6A33C5: call    MagicTarget_destr
0x6A33CA: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x6A33D0: mov     ecx, [esp+18h+var_C]
0x6A33D4: mov     large fs:0, ecx
0x6A33DB: pop     ecx
0x6A33DC: pop     esi
0x6A33DD: add     esp, 10h
0x6A33E0: retn
0x9ABA50: mov     ecx, [ebp-10h]; this
0x9ABA53: jmp     ??1BSExtraData@@UAE@XZ; BSExtraData::~BSExtraData(void)
0x9ABA58: mov     edx, [esp+arg_4]
0x9ABA5C: lea     eax, [edx-8]
0x9ABA5F: mov     ecx, [edx-0Ch]
0x9ABA62: xor     ecx, eax
0x9ABA64: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABA69: mov     eax, offset stru_AD8848
0x9ABA6E: jmp     ___CxxFrameHandler3
