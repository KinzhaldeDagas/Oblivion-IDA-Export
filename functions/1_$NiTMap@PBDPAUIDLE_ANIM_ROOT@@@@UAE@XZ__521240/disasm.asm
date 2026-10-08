0x521240: push    0FFFFFFFFh
0x521242: push    offset ??1?$NiTMap@PBDPAUIDLE_ANIM_ROOT@@@@UAE@XZ_SEH
0x521247: mov     eax, large fs:0
0x52124D: push    eax
0x52124E: push    ecx
0x52124F: push    esi
0x521250: mov     eax, ds:0B30AACh
0x521255: xor     eax, esp
0x521257: push    eax
0x521258: lea     eax, [esp+18h+var_C]
0x52125C: mov     large fs:0, eax
0x521262: mov     esi, ecx
0x521264: mov     [esp+18h+var_10], esi
0x521268: mov     dword ptr [esi], offset ??_7?$NiTMap@PBDPAUIDLE_ANIM_ROOT@@@@6B@; const NiTMap<char const *,IDLE_ANIM_ROOT *>::`vftable'
0x52126E: mov     [esp+18h+var_4], 0
0x521276: call    NiTMap_Clear
0x52127B: mov     ecx, esi
0x52127D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x521285: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAUIDLE_ANIM_ROOT@@@@PBDPAUIDLE_ANIM_ROOT@@@@6B@; const NiTMapBase<DFALL<IDLE_ANIM_ROOT *>,char const *,IDLE_ANIM_ROOT *>::`vftable'
0x52128B: call    NiTMap_Clear
0x521290: mov     eax, [esi+8]
0x521293: push    eax
0x521294: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x521299: add     esp, 4
0x52129C: mov     ecx, [esp+18h+var_C]
0x5212A0: mov     large fs:0, ecx
0x5212A7: pop     ecx
0x5212A8: pop     esi
0x5212A9: add     esp, 10h
0x5212AC: retn
0x520F50: push    esi
0x520F51: mov     esi, ecx
0x520F53: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAUIDLE_ANIM_ROOT@@@@PBDPAUIDLE_ANIM_ROOT@@@@6B@; const NiTMapBase<DFALL<IDLE_ANIM_ROOT *>,char const *,IDLE_ANIM_ROOT *>::`vftable'
0x520F59: call    NiTMap_Clear
0x520F5E: mov     eax, [esi+8]
0x520F61: push    eax
0x520F62: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x520F67: add     esp, 4
0x520F6A: pop     esi
0x520F6B: retn
0x9B7E70: mov     ecx, [ebp-10h]
0x9B7E73: jmp     loc_520F50
0x9B7E78: mov     edx, [esp+arg_4]
0x9B7E7C: lea     eax, [edx-8]
0x9B7E7F: mov     ecx, [edx-0Ch]
0x9B7E82: xor     ecx, eax
0x9B7E84: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B7E89: mov     eax, offset stru_AE2698
0x9B7E8E: jmp     ___CxxFrameHandler3
