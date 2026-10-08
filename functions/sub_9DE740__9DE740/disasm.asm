0x9DE740: push    0FFFFFFFFh
0x9DE742: push    offset SEH_9DE740
0x9DE747: mov     eax, large fs:0
0x9DE74D: push    eax
0x9DE74E: mov     eax, ___security_cookie
0x9DE753: xor     eax, esp
0x9DE755: push    eax
0x9DE756: lea     eax, [esp+10h+var_C]
0x9DE75A: mov     large fs:0, eax
0x9DE760: push    offset flt_B06EB4
0x9DE765: mov     ecx, offset INISettingCollection
0x9DE76A: mov     [esp+14h+var_4], 0
0x9DE772: call    SettingCollectionList_AddSetting
0x9DE777: push    offset sub_A19950; void (__cdecl *)()
0x9DE77C: call    _atexit
0x9DE781: add     esp, 4
0x9DE784: mov     ecx, [esp+10h+var_C]
0x9DE788: mov     large fs:0, ecx
0x9DE78F: pop     ecx
0x9DE790: add     esp, 0Ch
0x9DE793: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B12A0: mov     ecx, offset flt_B06EB4
0x9B12A5: jmp     loc_403BC0
0x9B12AA: mov     edx, [esp+arg_4]
0x9B12AE: lea     eax, [edx]
0x9B12B0: mov     ecx, [edx-4]
0x9B12B3: xor     ecx, eax
0x9B12B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B12BA: mov     eax, offset stru_ADD4A0
0x9B12BF: jmp     ___CxxFrameHandler3
