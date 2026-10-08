0x4712E0: push    0FFFFFFFFh
0x4712E2: push    offset ??1?$NiTList@PBVBSAnimGroupSequence@@@@UAE@XZ_SEH
0x4712E7: mov     eax, large fs:0
0x4712ED: push    eax
0x4712EE: push    ecx
0x4712EF: push    esi
0x4712F0: mov     eax, ds:0B30AACh
0x4712F5: xor     eax, esp
0x4712F7: push    eax
0x4712F8: lea     eax, [esp+18h+var_C]
0x4712FC: mov     large fs:0, eax
0x471302: mov     esi, ecx
0x471304: mov     [esp+18h+var_10], esi
0x471308: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PBVBSAnimGroupSequence@@@@PBVBSAnimGroupSequence@@@@6B@; const NiTPointerListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::`vftable'
0x47130E: mov     [esp+18h+var_4], 0
0x471316: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x47131B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PBVBSAnimGroupSequence@@@@PBVBSAnimGroupSequence@@@@6B@; const NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::`vftable'
0x471321: mov     ecx, [esp+18h+var_C]
0x471325: mov     large fs:0, ecx
0x47132C: pop     ecx
0x47132D: pop     esi
0x47132E: add     esp, 10h
0x471331: retn
0x470810: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PBVBSAnimGroupSequence@@@@PBVBSAnimGroupSequence@@@@6B@; const NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::`vftable'
0x470816: retn
0x9AEBC0: mov     ecx, [ebp-10h]
0x9AEBC3: jmp     loc_470810
0x9AEBC8: mov     edx, [esp+arg_4]
0x9AEBCC: lea     eax, [edx-8]
0x9AEBCF: mov     ecx, [edx-0Ch]
0x9AEBD2: xor     ecx, eax
0x9AEBD4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEBD9: mov     eax, offset stru_ADB2C4
0x9AEBDE: jmp     ___CxxFrameHandler3
