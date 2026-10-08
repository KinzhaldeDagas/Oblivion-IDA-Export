0x46C160: push    0FFFFFFFFh
0x46C162: push    offset ??1?$NiTMap@PBDPAVTESForm@@@@UAE@XZ_SEH
0x46C167: mov     eax, large fs:0
0x46C16D: push    eax
0x46C16E: push    ecx
0x46C16F: push    esi
0x46C170: mov     eax, ds:0B30AACh
0x46C175: xor     eax, esp
0x46C177: push    eax
0x46C178: lea     eax, [esp+18h+var_C]
0x46C17C: mov     large fs:0, eax
0x46C182: mov     esi, ecx
0x46C184: mov     [esp+18h+var_10], esi
0x46C188: mov     dword ptr [esi], offset ??_7?$NiTMap@PBDPAVTESForm@@@@6B@; const NiTMap<char const *,TESForm *>::`vftable'
0x46C18E: mov     [esp+18h+var_4], 0
0x46C196: call    NiTMap_Clear
0x46C19B: mov     ecx, esi
0x46C19D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x46C1A5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVTESForm@@@@PBDPAVTESForm@@@@6B@; const NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>::`vftable'
0x46C1AB: call    NiTMap_Clear
0x46C1B0: mov     eax, [esi+8]
0x46C1B3: push    eax
0x46C1B4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x46C1B9: add     esp, 4
0x46C1BC: mov     ecx, [esp+18h+var_C]
0x46C1C0: mov     large fs:0, ecx
0x46C1C7: pop     ecx
0x46C1C8: pop     esi
0x46C1C9: add     esp, 10h
0x46C1CC: retn
0x46B010: push    esi
0x46B011: mov     esi, ecx
0x46B013: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAVTESForm@@@@PBDPAVTESForm@@@@6B@; const NiTMapBase<DFALL<TESForm *>,char const *,TESForm *>::`vftable'
0x46B019: call    NiTMap_Clear
0x46B01E: mov     eax, [esi+8]
0x46B021: push    eax
0x46B022: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x46B027: add     esp, 4
0x46B02A: pop     esi
0x46B02B: retn
0x9AEAC0: mov     ecx, [ebp-10h]
0x9AEAC3: jmp     loc_46B010
0x9AEAC8: mov     edx, [esp+arg_4]
0x9AEACC: lea     eax, [edx-8]
0x9AEACF: mov     ecx, [edx-0Ch]
0x9AEAD2: xor     ecx, eax
0x9AEAD4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEAD9: mov     eax, offset stru_ADB1E0
0x9AEADE: jmp     ___CxxFrameHandler3
