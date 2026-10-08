0x682E60: push    0FFFFFFFFh
0x682E62: push    offset ??1?$NiTPointerMap@PAVActor@@PAUPathingData@@@@UAE@XZ_SEH
0x682E67: mov     eax, large fs:0
0x682E6D: push    eax
0x682E6E: push    ecx
0x682E6F: push    esi
0x682E70: mov     eax, ds:0B30AACh
0x682E75: xor     eax, esp
0x682E77: push    eax
0x682E78: lea     eax, [esp+18h+var_C]
0x682E7C: mov     large fs:0, eax
0x682E82: mov     esi, ecx
0x682E84: mov     [esp+18h+var_10], esi
0x682E88: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVActor@@PAUPathingData@@@@6B@; const NiTPointerMap<Actor *,PathingData *>::`vftable'
0x682E8E: mov     [esp+18h+var_4], 0
0x682E96: call    NiTMap_Clear
0x682E9B: mov     ecx, esi
0x682E9D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x682EA5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVActor@@PAUPathingData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,Actor *,PathingData *>::`vftable'
0x682EAB: call    NiTMap_Clear
0x682EB0: mov     eax, [esi+8]
0x682EB3: push    eax
0x682EB4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x682EB9: add     esp, 4
0x682EBC: mov     ecx, [esp+18h+var_C]
0x682EC0: mov     large fs:0, ecx
0x682EC7: pop     ecx
0x682EC8: pop     esi
0x682EC9: add     esp, 10h
0x682ECC: retn
0x682530: push    esi
0x682531: mov     esi, ecx
0x682533: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVActor@@PAUPathingData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,Actor *,PathingData *>::`vftable'
0x682539: call    NiTMap_Clear
0x68253E: mov     eax, [esi+8]
0x682541: push    eax
0x682542: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x682547: add     esp, 4
0x68254A: pop     esi
0x68254B: retn
0x9C4D10: mov     ecx, [ebp-10h]
0x9C4D13: jmp     loc_682530
0x9C4D18: mov     edx, [esp+arg_4]
0x9C4D1C: lea     eax, [edx-8]
0x9C4D1F: mov     ecx, [edx-0Ch]
0x9C4D22: xor     ecx, eax
0x9C4D24: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4D29: mov     eax, offset stru_AED5E0
0x9C4D2E: jmp     ___CxxFrameHandler3
