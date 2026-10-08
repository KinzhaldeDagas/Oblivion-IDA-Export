0x9F9190: push    0FFFFFFFFh
0x9F9192: push    offset SEH_9F9190
0x9F9197: mov     eax, large fs:0
0x9F919D: push    eax
0x9F919E: mov     eax, ___security_cookie
0x9F91A3: xor     eax, esp
0x9F91A5: push    eax
0x9F91A6: lea     eax, [esp+10h+var_C]
0x9F91AA: mov     large fs:0, eax
0x9F91B0: push    offset unk_B125F8
0x9F91B5: mov     ecx, offset INISettingCollection
0x9F91BA: mov     [esp+14h+var_4], 0
0x9F91C2: call    SettingCollectionList_AddSetting
0x9F91C7: push    offset sub_A23660; void (__cdecl *)()
0x9F91CC: call    _atexit
0x9F91D1: add     esp, 4
0x9F91D4: mov     ecx, [esp+10h+var_C]
0x9F91D8: mov     large fs:0, ecx
0x9F91DF: pop     ecx
0x9F91E0: add     esp, 0Ch
0x9F91E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BCDD0: mov     ecx, offset unk_B125F8
0x9BCDD5: jmp     loc_403BC0
0x9BCDDA: mov     edx, [esp+arg_4]
0x9BCDDE: lea     eax, [edx]
0x9BCDE0: mov     ecx, [edx-4]
0x9BCDE3: xor     ecx, eax
0x9BCDE5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCDEA: mov     eax, offset stru_AE68E8
0x9BCDEF: jmp     ___CxxFrameHandler3
