0x9E3190: push    0FFFFFFFFh
0x9E3192: push    offset SEH_9E3190
0x9E3197: mov     eax, large fs:0
0x9E319D: push    eax
0x9E319E: mov     eax, ___security_cookie
0x9E31A3: xor     eax, esp
0x9E31A5: push    eax
0x9E31A6: lea     eax, [esp+10h+var_C]
0x9E31AA: mov     large fs:0, eax
0x9E31B0: push    offset iNumHavokThreads
0x9E31B5: mov     ecx, offset INISettingCollection
0x9E31BA: mov     [esp+14h+var_4], 0
0x9E31C2: call    SettingCollectionList_AddSetting
0x9E31C7: push    offset sub_A1BBC0; void (__cdecl *)()
0x9E31CC: call    _atexit
0x9E31D1: add     esp, 4
0x9E31D4: mov     ecx, [esp+10h+var_C]
0x9E31D8: mov     large fs:0, ecx
0x9E31DF: pop     ecx
0x9E31E0: add     esp, 0Ch
0x9E31E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B59E0: mov     ecx, offset iNumHavokThreads
0x9B59E5: jmp     loc_403BC0
0x9B59EA: mov     edx, [esp+arg_4]
0x9B59EE: lea     eax, [edx]
0x9B59F0: mov     ecx, [edx-4]
0x9B59F3: xor     ecx, eax
0x9B59F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B59FA: mov     eax, offset stru_AE09F8
0x9B59FF: jmp     ___CxxFrameHandler3
