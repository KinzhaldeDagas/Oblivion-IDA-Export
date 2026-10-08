0x9D9500: push    0FFFFFFFFh
0x9D9502: push    offset SEH_9D9500
0x9D9507: mov     eax, large fs:0
0x9D950D: push    eax
0x9D950E: mov     eax, ___security_cookie
0x9D9513: xor     eax, esp
0x9D9515: push    eax
0x9D9516: lea     eax, [esp+10h+var_C]
0x9D951A: mov     large fs:0, eax
0x9D9520: push    offset iDebugTextLeftRightOffset
0x9D9525: mov     ecx, offset INISettingCollection
0x9D952A: mov     [esp+14h+var_4], 0
0x9D9532: call    SettingCollectionList_AddSetting
0x9D9537: push    offset sub_A17030; void (__cdecl *)()
0x9D953C: call    _atexit
0x9D9541: add     esp, 4
0x9D9544: mov     ecx, [esp+10h+var_C]
0x9D9548: mov     large fs:0, ecx
0x9D954F: pop     ecx
0x9D9550: add     esp, 0Ch
0x9D9553: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAAB0: mov     ecx, offset iDebugTextLeftRightOffset
0x9AAAB5: jmp     loc_403BC0
0x9AAABA: mov     edx, [esp+arg_4]
0x9AAABE: lea     eax, [edx]
0x9AAAC0: mov     ecx, [edx-4]
0x9AAAC3: xor     ecx, eax
0x9AAAC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAACA: mov     eax, offset stru_AD7A10
0x9AAACF: jmp     ___CxxFrameHandler3
