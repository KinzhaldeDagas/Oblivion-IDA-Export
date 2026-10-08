0x9FC230: push    0FFFFFFFFh
0x9FC232: push    offset SEH_9FC230
0x9FC237: mov     eax, large fs:0
0x9FC23D: push    eax
0x9FC23E: mov     eax, ___security_cookie
0x9FC243: xor     eax, esp
0x9FC245: push    eax
0x9FC246: lea     eax, [esp+10h+var_C]
0x9FC24A: mov     large fs:0, eax
0x9FC250: push    offset a33J
0x9FC255: mov     ecx, offset INISettingCollection
0x9FC25A: mov     [esp+14h+var_4], 0
0x9FC262: call    SettingCollectionList_AddSetting
0x9FC267: push    offset sub_A24BF0; void (__cdecl *)()
0x9FC26C: call    _atexit
0x9FC271: add     esp, 4
0x9FC274: mov     ecx, [esp+10h+var_C]
0x9FC278: mov     large fs:0, ecx
0x9FC27F: pop     ecx
0x9FC280: add     esp, 0Ch
0x9FC283: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C06B0: mov     ecx, offset a33J
0x9C06B5: jmp     loc_403BC0
0x9C06BA: mov     edx, [esp+arg_4]
0x9C06BE: lea     eax, [edx]
0x9C06C0: mov     ecx, [edx-4]
0x9C06C3: xor     ecx, eax
0x9C06C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C06CA: mov     eax, offset stru_AE992C
0x9C06CF: jmp     ___CxxFrameHandler3
