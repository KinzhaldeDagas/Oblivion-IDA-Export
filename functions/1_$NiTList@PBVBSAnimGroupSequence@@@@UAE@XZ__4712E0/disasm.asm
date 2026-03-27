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
0x471316: call    NiTPointerList__FreeAllNodes
0x47131B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PBVBSAnimGroupSequence@@@@PBVBSAnimGroupSequence@@@@6B@; const NiTListBase<DFALL<BSAnimGroupSequence const *>,BSAnimGroupSequence const *>::`vftable'
0x471321: mov     ecx, [esp+18h+var_C]
0x471325: mov     large fs:0, ecx
0x47132C: pop     ecx
0x47132D: pop     esi
0x47132E: add     esp, 10h
0x471331: retn
