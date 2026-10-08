0x9E3760: push    0FFFFFFFFh
0x9E3762: push    offset SEH_9E3760
0x9E3767: mov     eax, large fs:0
0x9E376D: push    eax
0x9E376E: mov     eax, ___security_cookie
0x9E3773: xor     eax, esp
0x9E3775: push    eax
0x9E3776: lea     eax, [esp+10h+var_C]
0x9E377A: mov     large fs:0, eax
0x9E3780: push    offset unk_B09B38
0x9E3785: mov     ecx, offset INISettingCollection
0x9E378A: mov     [esp+14h+var_4], 0
0x9E3792: call    SettingCollectionList_AddSetting
0x9E3797: push    offset sub_A1BF40; void (__cdecl *)()
0x9E379C: call    _atexit
0x9E37A1: add     esp, 4
0x9E37A4: mov     ecx, [esp+10h+var_C]
0x9E37A8: mov     large fs:0, ecx
0x9E37AF: pop     ecx
0x9E37B0: add     esp, 0Ch
0x9E37B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B63D0: mov     ecx, offset unk_B09B38
0x9B63D5: jmp     loc_403BC0
0x9B63DA: mov     edx, [esp+arg_4]
0x9B63DE: lea     eax, [edx]
0x9B63E0: mov     ecx, [edx-4]
0x9B63E3: xor     ecx, eax
0x9B63E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B63EA: mov     eax, offset stru_AE12DC
0x9B63EF: jmp     ___CxxFrameHandler3
