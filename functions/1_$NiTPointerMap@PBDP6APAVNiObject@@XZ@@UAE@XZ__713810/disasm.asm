0x713810: push    0FFFFFFFFh
0x713812: push    offset ??1?$NiTPointerMap@PBDP6APAVNiObject@@XZ@@UAE@XZ_SEH
0x713817: mov     eax, large fs:0
0x71381D: push    eax
0x71381E: push    ecx
0x71381F: push    esi
0x713820: mov     eax, ds:0B30AACh
0x713825: xor     eax, esp
0x713827: push    eax
0x713828: lea     eax, [esp+18h+var_C]
0x71382C: mov     large fs:0, eax
0x713832: mov     esi, ecx
0x713834: mov     [esp+18h+var_10], esi
0x713838: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDP6APAVNiObject@@XZ@@6B@; const NiTPointerMap<char const *,NiObject * (*)(void)>::`vftable'
0x71383E: mov     [esp+18h+var_4], 0
0x713846: call    NiTMap_Clear
0x71384B: mov     ecx, esi
0x71384D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x713855: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDP6APAVNiObject@@XZ@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiObject * (*)(void)>::`vftable'
0x71385B: call    NiTMap_Clear
0x713860: mov     eax, [esi+8]
0x713863: push    eax
0x713864: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x713869: add     esp, 4
0x71386C: mov     ecx, [esp+18h+var_C]
0x713870: mov     large fs:0, ecx
0x713877: pop     ecx
0x713878: pop     esi
0x713879: add     esp, 10h
0x71387C: retn
0x7127C0: push    esi
0x7127C1: mov     esi, ecx
0x7127C3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDP6APAVNiObject@@XZ@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiObject * (*)(void)>::`vftable'
0x7127C9: call    NiTMap_Clear
0x7127CE: mov     eax, [esi+8]
0x7127D1: push    eax
0x7127D2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7127D7: add     esp, 4
0x7127DA: pop     esi
0x7127DB: retn
0x9C9C60: mov     ecx, [ebp-10h]
0x9C9C63: jmp     loc_7127C0
0x9C9C68: mov     edx, [esp+arg_4]
0x9C9C6C: lea     eax, [edx-8]
0x9C9C6F: mov     ecx, [edx-0Ch]
0x9C9C72: xor     ecx, eax
0x9C9C74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C9C79: mov     eax, offset stru_AF246C
0x9C9C7E: jmp     ___CxxFrameHandler3
