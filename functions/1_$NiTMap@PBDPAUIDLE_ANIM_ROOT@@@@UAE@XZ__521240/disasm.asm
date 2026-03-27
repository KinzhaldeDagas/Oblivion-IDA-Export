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
0x521294: call    FormHeapFree
0x521299: add     esp, 4
0x52129C: mov     ecx, [esp+18h+var_C]
0x5212A0: mov     large fs:0, ecx
0x5212A7: pop     ecx
0x5212A8: pop     esi
0x5212A9: add     esp, 10h
0x5212AC: retn
