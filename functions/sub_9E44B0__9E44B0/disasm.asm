0x9E44B0: push    0FFFFFFFFh
0x9E44B2: push    offset SEH_9E44B0
0x9E44B7: mov     eax, large fs:0
0x9E44BD: push    eax
0x9E44BE: mov     eax, ___security_cookie
0x9E44C3: xor     eax, esp
0x9E44C5: push    eax
0x9E44C6: lea     eax, [esp+10h+var_C]
0x9E44CA: mov     large fs:0, eax
0x9E44D0: push    offset fGetUpTime
0x9E44D5: mov     ecx, offset BlendSettingCollection
0x9E44DA: mov     [esp+14h+var_4], 0
0x9E44E2: call    SettingCollectionList_AddSetting
0x9E44E7: push    offset sub_A1C6A0; void (__cdecl *)()
0x9E44EC: call    _atexit
0x9E44F1: add     esp, 4
0x9E44F4: mov     ecx, [esp+10h+var_C]
0x9E44F8: mov     large fs:0, ecx
0x9E44FF: pop     ecx
0x9E4500: add     esp, 0Ch
0x9E4503: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9650: mov     ecx, offset fGetUpTime
0x9B9655: jmp     loc_403BC0
0x9B965A: mov     edx, [esp+arg_4]
0x9B965E: lea     eax, [edx]
0x9B9660: mov     ecx, [edx-4]
0x9B9663: xor     ecx, eax
0x9B9665: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B966A: mov     eax, offset stru_AE3968
0x9B966F: jmp     ___CxxFrameHandler3
