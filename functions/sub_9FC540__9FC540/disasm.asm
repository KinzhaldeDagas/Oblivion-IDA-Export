0x9FC540: push    0FFFFFFFFh
0x9FC542: push    offset SEH_9FC540
0x9FC547: mov     eax, large fs:0
0x9FC54D: push    eax
0x9FC54E: mov     eax, ___security_cookie
0x9FC553: xor     eax, esp
0x9FC555: push    eax
0x9FC556: lea     eax, [esp+10h+var_C]
0x9FC55A: mov     large fs:0, eax
0x9FC560: push    offset off_B14374; "Special\\TES4Title.mp3"
0x9FC565: mov     ecx, offset INISettingCollection
0x9FC56A: mov     [esp+14h+var_4], 0
0x9FC572: call    SettingCollectionList_AddSetting
0x9FC577: push    offset sub_A24D80; void (__cdecl *)()
0x9FC57C: call    _atexit
0x9FC581: add     esp, 4
0x9FC584: mov     ecx, [esp+10h+var_C]
0x9FC588: mov     large fs:0, ecx
0x9FC58F: pop     ecx
0x9FC590: add     esp, 0Ch
0x9FC593: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C0B60: mov     ecx, offset off_B14374; "Special\\TES4Title.mp3"
0x9C0B65: jmp     loc_403BC0
0x9C0B6A: mov     edx, [esp+arg_4]
0x9C0B6E: lea     eax, [edx]
0x9C0B70: mov     ecx, [edx-4]
0x9C0B73: xor     ecx, eax
0x9C0B75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0B7A: mov     eax, offset stru_AE9D14
0x9C0B7F: jmp     ___CxxFrameHandler3
