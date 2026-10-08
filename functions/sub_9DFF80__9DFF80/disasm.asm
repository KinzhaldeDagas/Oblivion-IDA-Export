0x9DFF80: push    0FFFFFFFFh
0x9DFF82: push    offset SEH_9DFF80
0x9DFF87: mov     eax, large fs:0
0x9DFF8D: push    eax
0x9DFF8E: mov     eax, ___security_cookie
0x9DFF93: xor     eax, esp
0x9DFF95: push    eax
0x9DFF96: lea     eax, [esp+10h+var_C]
0x9DFF9A: mov     large fs:0, eax
0x9DFFA0: push    offset dword_B070E8
0x9DFFA5: mov     ecx, offset INISettingCollection
0x9DFFAA: mov     [esp+14h+var_4], 0
0x9DFFB2: call    SettingCollectionList_AddSetting
0x9DFFB7: push    offset sub_A1A5D0; void (__cdecl *)()
0x9DFFBC: call    _atexit
0x9DFFC1: add     esp, 4
0x9DFFC4: mov     ecx, [esp+10h+var_C]
0x9DFFC8: mov     large fs:0, ecx
0x9DFFCF: pop     ecx
0x9DFFD0: add     esp, 0Ch
0x9DFFD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B20C0: mov     ecx, offset dword_B070E8
0x9B20C5: jmp     loc_403BC0
0x9B20CA: mov     edx, [esp+arg_4]
0x9B20CE: lea     eax, [edx]
0x9B20D0: mov     ecx, [edx-4]
0x9B20D3: xor     ecx, eax
0x9B20D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B20DA: mov     eax, offset stru_ADE114
0x9B20DF: jmp     ___CxxFrameHandler3
