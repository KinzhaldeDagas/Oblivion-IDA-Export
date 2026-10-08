0x45A620: push    0FFFFFFFFh
0x45A622: push    offset ??1?$NiTPointerMap@IPAVChangeData@@@@UAE@XZ_SEH
0x45A627: mov     eax, large fs:0
0x45A62D: push    eax
0x45A62E: push    ecx
0x45A62F: push    esi
0x45A630: mov     eax, ds:0B30AACh
0x45A635: xor     eax, esp
0x45A637: push    eax
0x45A638: lea     eax, [esp+18h+var_C]
0x45A63C: mov     large fs:0, eax
0x45A642: mov     esi, ecx
0x45A644: mov     [esp+18h+var_10], esi
0x45A648: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVChangeData@@@@6B@; const NiTPointerMap<uint,ChangeData *>::`vftable'
0x45A64E: mov     [esp+18h+var_4], 0
0x45A656: call    NiTMap_Clear
0x45A65B: mov     ecx, esi
0x45A65D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x45A665: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVChangeData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,ChangeData *>::`vftable'
0x45A66B: call    NiTMap_Clear
0x45A670: mov     eax, [esi+8]
0x45A673: push    eax
0x45A674: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x45A679: add     esp, 4
0x45A67C: mov     ecx, [esp+18h+var_C]
0x45A680: mov     large fs:0, ecx
0x45A687: pop     ecx
0x45A688: pop     esi
0x45A689: add     esp, 10h
0x45A68C: retn
0x452AB0: push    esi
0x452AB1: mov     esi, ecx
0x452AB3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVChangeData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,ChangeData *>::`vftable'
0x452AB9: call    NiTMap_Clear
0x452ABE: mov     eax, [esi+8]
0x452AC1: push    eax
0x452AC2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x452AC7: add     esp, 4
0x452ACA: pop     esi
0x452ACB: retn
0x9AE170: mov     ecx, [ebp-10h]
0x9AE173: jmp     loc_452AB0
0x9AE178: mov     edx, [esp+arg_4]
0x9AE17C: lea     eax, [edx-8]
0x9AE17F: mov     ecx, [edx-0Ch]
0x9AE182: xor     ecx, eax
0x9AE184: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE189: mov     eax, offset stru_ADAA34
0x9AE18E: jmp     ___CxxFrameHandler3
