0x9E3640: push    0FFFFFFFFh
0x9E3642: push    offset SEH_9E3640
0x9E3647: mov     eax, large fs:0
0x9E364D: push    eax
0x9E364E: mov     eax, ___security_cookie
0x9E3653: xor     eax, esp
0x9E3655: push    eax
0x9E3656: lea     eax, [esp+10h+var_C]
0x9E365A: mov     large fs:0, eax
0x9E3660: push    offset SettingMinGrassSize
0x9E3665: mov     ecx, offset INISettingCollection
0x9E366A: mov     [esp+14h+var_4], 0
0x9E3672: call    SettingCollectionList_AddSetting
0x9E3677: push    offset sub_A1BEB0; void (__cdecl *)()
0x9E367C: call    _atexit
0x9E3681: add     esp, 4
0x9E3684: mov     ecx, [esp+10h+var_C]
0x9E3688: mov     large fs:0, ecx
0x9E368F: pop     ecx
0x9E3690: add     esp, 0Ch
0x9E3693: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6340: mov     ecx, offset SettingMinGrassSize
0x9B6345: jmp     loc_403BC0
0x9B634A: mov     edx, [esp+arg_4]
0x9B634E: lea     eax, [edx]
0x9B6350: mov     ecx, [edx-4]
0x9B6353: xor     ecx, eax
0x9B6355: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B635A: mov     eax, offset stru_AE1258
0x9B635F: jmp     ___CxxFrameHandler3
