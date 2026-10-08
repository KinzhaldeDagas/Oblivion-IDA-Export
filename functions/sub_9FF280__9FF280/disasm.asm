0x9FF280: push    0FFFFFFFFh
0x9FF282: push    offset SEH_9FF280
0x9FF287: mov     eax, large fs:0
0x9FF28D: push    eax
0x9FF28E: mov     eax, ___security_cookie
0x9FF293: xor     eax, esp
0x9FF295: push    eax
0x9FF296: lea     eax, [esp+10h+var_C]
0x9FF29A: mov     large fs:0, eax
0x9FF2A0: push    offset flt_B161D8
0x9FF2A5: mov     ecx, offset INISettingCollection
0x9FF2AA: mov     [esp+14h+var_4], 0
0x9FF2B2: call    SettingCollectionList_AddSetting
0x9FF2B7: push    offset sub_A26210; void (__cdecl *)()
0x9FF2BC: call    _atexit
0x9FF2C1: add     esp, 4
0x9FF2C4: mov     ecx, [esp+10h+var_C]
0x9FF2C8: mov     large fs:0, ecx
0x9FF2CF: pop     ecx
0x9FF2D0: add     esp, 0Ch
0x9FF2D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6860: mov     ecx, offset flt_B161D8
0x9C6865: jmp     loc_403BC0
0x9C686A: mov     edx, [esp+arg_4]
0x9C686E: lea     eax, [edx]
0x9C6870: mov     ecx, [edx-4]
0x9C6873: xor     ecx, eax
0x9C6875: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C687A: mov     eax, offset stru_AEED70
0x9C687F: jmp     ___CxxFrameHandler3
