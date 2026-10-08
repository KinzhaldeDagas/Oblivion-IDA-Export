0x5505B0: push    0FFFFFFFFh
0x5505B2: push    offset ??1?$NiTMap@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@UAE@XZ_SEH
0x5505B7: mov     eax, large fs:0
0x5505BD: push    eax
0x5505BE: push    ecx
0x5505BF: push    esi
0x5505C0: mov     eax, ds:0B30AACh
0x5505C5: xor     eax, esp
0x5505C7: push    eax
0x5505C8: lea     eax, [esp+18h+var_C]
0x5505CC: mov     large fs:0, eax
0x5505D2: mov     esi, ecx
0x5505D4: mov     [esp+18h+var_10], esi
0x5505D8: mov     dword ptr [esi], offset ??_7?$NiTMap@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@6B@; const NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'
0x5505DE: mov     [esp+18h+var_4], 0
0x5505E6: call    NiTMap_Clear
0x5505EB: mov     ecx, esi
0x5505ED: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5505F5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@6B@; const NiTMapBase<DFALL<NiPointer<BSFaceGenModelMap::Entry>>,char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'
0x5505FB: call    NiTMap_Clear
0x550600: mov     eax, [esi+8]
0x550603: push    eax
0x550604: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x550609: add     esp, 4
0x55060C: mov     ecx, [esp+18h+var_C]
0x550610: mov     large fs:0, ecx
0x550617: pop     ecx
0x550618: pop     esi
0x550619: add     esp, 10h
0x55061C: retn
0x54F7F0: push    esi
0x54F7F1: mov     esi, ecx
0x54F7F3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@6B@; const NiTMapBase<DFALL<NiPointer<BSFaceGenModelMap::Entry>>,char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'
0x54F7F9: call    NiTMap_Clear
0x54F7FE: mov     eax, [esi+8]
0x54F801: push    eax
0x54F802: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x54F807: add     esp, 4
0x54F80A: pop     esi
0x54F80B: retn
0x9BBC20: mov     ecx, [ebp-10h]
0x9BBC23: jmp     loc_54F7F0
0x9BBC28: mov     edx, [esp+arg_4]
0x9BBC2C: lea     eax, [edx-8]
0x9BBC2F: mov     ecx, [edx-0Ch]
0x9BBC32: xor     ecx, eax
0x9BBC34: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BBC39: mov     eax, offset stru_AE5958
0x9BBC3E: jmp     ___CxxFrameHandler3
