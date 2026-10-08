0x4F0E80: push    0FFFFFFFFh
0x4F0E82: push    offset ??1?$NiTPointerMap@I_N@@UAE@XZ_SEH
0x4F0E87: mov     eax, large fs:0
0x4F0E8D: push    eax
0x4F0E8E: push    ecx
0x4F0E8F: push    esi
0x4F0E90: mov     eax, ds:0B30AACh
0x4F0E95: xor     eax, esp
0x4F0E97: push    eax
0x4F0E98: lea     eax, [esp+18h+var_C]
0x4F0E9C: mov     large fs:0, eax
0x4F0EA2: mov     esi, ecx
0x4F0EA4: mov     [esp+18h+var_10], esi
0x4F0EA8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@I_N@@6B@; const NiTPointerMap<uint,bool>::`vftable'
0x4F0EAE: mov     [esp+18h+var_4], 0
0x4F0EB6: call    NiTMap_Clear
0x4F0EBB: mov     ecx, esi
0x4F0EBD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4F0EC5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@I_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,bool>::`vftable'
0x4F0ECB: call    NiTMap_Clear
0x4F0ED0: mov     eax, [esi+8]
0x4F0ED3: push    eax
0x4F0ED4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F0ED9: add     esp, 4
0x4F0EDC: mov     ecx, [esp+18h+var_C]
0x4F0EE0: mov     large fs:0, ecx
0x4F0EE7: pop     ecx
0x4F0EE8: pop     esi
0x4F0EE9: add     esp, 10h
0x4F0EEC: retn
0x4EF310: push    esi
0x4EF311: mov     esi, ecx
0x4EF313: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@I_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,bool>::`vftable'
0x4EF319: call    NiTMap_Clear
0x4EF31E: mov     eax, [esi+8]
0x4EF321: push    eax
0x4EF322: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4EF327: add     esp, 4
0x4EF32A: pop     esi
0x4EF32B: retn
0x9B6740: mov     ecx, [ebp-10h]
0x9B6743: jmp     loc_4EF310
0x9B6748: mov     edx, [esp+arg_4]
0x9B674C: lea     eax, [edx-8]
0x9B674F: mov     ecx, [edx-0Ch]
0x9B6752: xor     ecx, eax
0x9B6754: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6759: mov     eax, offset stru_AE15A0
0x9B675E: jmp     ___CxxFrameHandler3
