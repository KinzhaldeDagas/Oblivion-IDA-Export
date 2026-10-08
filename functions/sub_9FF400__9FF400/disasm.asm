0x9FF400: push    0FFFFFFFFh
0x9FF402: push    offset SEH_9FF400
0x9FF407: mov     eax, large fs:0
0x9FF40D: push    eax
0x9FF40E: mov     eax, ___security_cookie
0x9FF413: xor     eax, esp
0x9FF415: push    eax
0x9FF416: lea     eax, [esp+10h+var_C]
0x9FF41A: mov     large fs:0, eax
0x9FF420: push    offset dword_B16254
0x9FF425: mov     ecx, offset INISettingCollection
0x9FF42A: mov     [esp+14h+var_4], 0
0x9FF432: call    SettingCollectionList_AddSetting
0x9FF437: push    offset sub_A262E0; void (__cdecl *)()
0x9FF43C: call    _atexit
0x9FF441: add     esp, 4
0x9FF444: mov     ecx, [esp+10h+var_C]
0x9FF448: mov     large fs:0, ecx
0x9FF44F: pop     ecx
0x9FF450: add     esp, 0Ch
0x9FF453: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6980: mov     ecx, offset dword_B16254
0x9C6985: jmp     loc_403BC0
0x9C698A: mov     edx, [esp+arg_4]
0x9C698E: lea     eax, [edx]
0x9C6990: mov     ecx, [edx-4]
0x9C6993: xor     ecx, eax
0x9C6995: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C699A: mov     eax, offset stru_AEEE78
0x9C699F: jmp     ___CxxFrameHandler3
