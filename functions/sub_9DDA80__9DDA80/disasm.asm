0x9DDA80: push    0FFFFFFFFh
0x9DDA82: push    offset SEH_9DDA80
0x9DDA87: mov     eax, large fs:0
0x9DDA8D: push    eax
0x9DDA8E: mov     eax, ___security_cookie
0x9DDA93: xor     eax, esp
0x9DDA95: push    eax
0x9DDA96: lea     eax, [esp+10h+var_C]
0x9DDA9A: mov     large fs:0, eax
0x9DDAA0: push    offset bAllowSM20Hair
0x9DDAA5: mov     ecx, offset INISettingCollection
0x9DDAAA: mov     [esp+14h+var_4], 0
0x9DDAB2: call    SettingCollectionList_AddSetting
0x9DDAB7: push    offset sub_A192F0; void (__cdecl *)()
0x9DDABC: call    _atexit
0x9DDAC1: add     esp, 4
0x9DDAC4: mov     ecx, [esp+10h+var_C]
0x9DDAC8: mov     large fs:0, ecx
0x9DDACF: pop     ecx
0x9DDAD0: add     esp, 0Ch
0x9DDAD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0C40: mov     ecx, offset bAllowSM20Hair
0x9B0C45: jmp     loc_403BC0
0x9B0C4A: mov     edx, [esp+arg_4]
0x9B0C4E: lea     eax, [edx]
0x9B0C50: mov     ecx, [edx-4]
0x9B0C53: xor     ecx, eax
0x9B0C55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0C5A: mov     eax, offset stru_ADCEC8
0x9B0C5F: jmp     ___CxxFrameHandler3
