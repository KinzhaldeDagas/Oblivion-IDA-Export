0x9E4A50: push    0FFFFFFFFh
0x9E4A52: push    offset SEH_9E4A50
0x9E4A57: mov     eax, large fs:0
0x9E4A5D: push    eax
0x9E4A5E: mov     eax, ___security_cookie
0x9E4A63: xor     eax, esp
0x9E4A65: push    eax
0x9E4A66: lea     eax, [esp+10h+var_C]
0x9E4A6A: mov     large fs:0, eax
0x9E4A70: push    offset off_B11A9C; "0.2, 0.5"
0x9E4A75: mov     ecx, offset BlendSettingCollection
0x9E4A7A: mov     [esp+14h+var_4], 0
0x9E4A82: call    SettingCollectionList_AddSetting
0x9E4A87: push    offset sub_A1C970; void (__cdecl *)()
0x9E4A8C: call    _atexit
0x9E4A91: add     esp, 4
0x9E4A94: mov     ecx, [esp+10h+var_C]
0x9E4A98: mov     large fs:0, ecx
0x9E4A9F: pop     ecx
0x9E4AA0: add     esp, 0Ch
0x9E4AA3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9920: mov     ecx, offset off_B11A9C; "0.2, 0.5"
0x9B9925: jmp     loc_403BC0
0x9B992A: mov     edx, [esp+arg_4]
0x9B992E: lea     eax, [edx]
0x9B9930: mov     ecx, [edx-4]
0x9B9933: xor     ecx, eax
0x9B9935: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B993A: mov     eax, offset stru_AE3BFC
0x9B993F: jmp     ___CxxFrameHandler3
