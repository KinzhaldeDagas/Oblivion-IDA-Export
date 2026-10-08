0x9DC4F0: push    0FFFFFFFFh
0x9DC4F2: push    offset SEH_9DC4F0
0x9DC4F7: mov     eax, large fs:0
0x9DC4FD: push    eax
0x9DC4FE: mov     eax, ___security_cookie
0x9DC503: xor     eax, esp
0x9DC505: push    eax
0x9DC506: lea     eax, [esp+10h+var_C]
0x9DC50A: mov     large fs:0, eax
0x9DC510: push    offset uGridsToLoad
0x9DC515: mov     ecx, offset INISettingCollection
0x9DC51A: mov     [esp+14h+var_4], 0
0x9DC522: call    SettingCollectionList_AddSetting
0x9DC527: push    offset sub_A187A0; void (__cdecl *)()
0x9DC52C: call    _atexit
0x9DC531: add     esp, 4
0x9DC534: mov     ecx, [esp+10h+var_C]
0x9DC538: mov     large fs:0, ecx
0x9DC53F: pop     ecx
0x9DC540: add     esp, 0Ch
0x9DC543: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AF890: mov     ecx, offset uGridsToLoad
0x9AF895: jmp     loc_403BC0
0x9AF89A: mov     edx, [esp+arg_4]
0x9AF89E: lea     eax, [edx]
0x9AF8A0: mov     ecx, [edx-4]
0x9AF8A3: xor     ecx, eax
0x9AF8A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AF8AA: mov     eax, offset stru_ADBDC4
0x9AF8AF: jmp     ___CxxFrameHandler3
