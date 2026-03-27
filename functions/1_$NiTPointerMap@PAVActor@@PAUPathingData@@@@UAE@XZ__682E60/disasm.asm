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
0x682EB4: call    FormHeapFree
0x682EB9: add     esp, 4
0x682EBC: mov     ecx, [esp+18h+var_C]
0x682EC0: mov     large fs:0, ecx
0x682EC7: pop     ecx
0x682EC8: pop     esi
0x682EC9: add     esp, 10h
0x682ECC: retn
