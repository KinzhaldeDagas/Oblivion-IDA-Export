0x9FE590: push    0FFFFFFFFh
0x9FE592: push    offset SEH_9FE590
0x9FE597: mov     eax, large fs:0
0x9FE59D: push    eax
0x9FE59E: mov     eax, ___security_cookie
0x9FE5A3: xor     eax, esp
0x9FE5A5: push    eax
0x9FE5A6: lea     eax, [esp+10h+var_C]
0x9FE5AA: mov     large fs:0, eax
0x9FE5B0: push    offset unk_B15370
0x9FE5B5: mov     ecx, offset INISettingCollection
0x9FE5BA: mov     [esp+14h+var_4], 0
0x9FE5C2: call    SettingCollectionList_AddSetting
0x9FE5C7: push    offset sub_A25D70; void (__cdecl *)()
0x9FE5CC: call    _atexit
0x9FE5D1: add     esp, 4
0x9FE5D4: mov     ecx, [esp+10h+var_C]
0x9FE5D8: mov     large fs:0, ecx
0x9FE5DF: pop     ecx
0x9FE5E0: add     esp, 0Ch
0x9FE5E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4980: mov     ecx, offset unk_B15370
0x9C4985: jmp     loc_403BC0
0x9C498A: mov     edx, [esp+arg_4]
0x9C498E: lea     eax, [edx]
0x9C4990: mov     ecx, [edx-4]
0x9C4993: xor     ecx, eax
0x9C4995: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C499A: mov     eax, offset stru_AED2BC
0x9C499F: jmp     ___CxxFrameHandler3
