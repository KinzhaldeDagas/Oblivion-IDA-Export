0x9DB750: push    0FFFFFFFFh
0x9DB752: push    offset SEH_9DB750
0x9DB757: mov     eax, large fs:0
0x9DB75D: push    eax
0x9DB75E: mov     eax, ___security_cookie
0x9DB763: xor     eax, esp
0x9DB765: push    eax
0x9DB766: lea     eax, [esp+10h+var_C]
0x9DB76A: mov     large fs:0, eax
0x9DB770: push    offset lpString2
0x9DB775: mov     ecx, offset INISettingCollection
0x9DB77A: mov     [esp+14h+var_4], 0
0x9DB782: call    SettingCollectionList_AddSetting
0x9DB787: push    offset sub_A180F0; void (__cdecl *)()
0x9DB78C: call    _atexit
0x9DB791: add     esp, 4
0x9DB794: mov     ecx, [esp+10h+var_C]
0x9DB798: mov     large fs:0, ecx
0x9DB79F: pop     ecx
0x9DB7A0: add     esp, 0Ch
0x9DB7A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADE10: mov     ecx, offset lpString2
0x9ADE15: jmp     loc_403BC0
0x9ADE1A: mov     edx, [esp+arg_4]
0x9ADE1E: lea     eax, [edx]
0x9ADE20: mov     ecx, [edx-4]
0x9ADE23: xor     ecx, eax
0x9ADE25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADE2A: mov     eax, offset stru_ADA738
0x9ADE2F: jmp     ___CxxFrameHandler3
