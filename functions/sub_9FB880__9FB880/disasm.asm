0x9FB880: push    0FFFFFFFFh
0x9FB882: push    offset SEH_9FB880
0x9FB887: mov     eax, large fs:0
0x9FB88D: push    eax
0x9FB88E: mov     eax, ___security_cookie
0x9FB893: xor     eax, esp
0x9FB895: push    eax
0x9FB896: lea     eax, [esp+10h+var_C]
0x9FB89A: mov     large fs:0, eax
0x9FB8A0: push    offset dword_B13608
0x9FB8A5: mov     ecx, offset INISettingCollection
0x9FB8AA: mov     [esp+14h+var_4], 0
0x9FB8B2: call    SettingCollectionList_AddSetting
0x9FB8B7: push    offset sub_A24880; void (__cdecl *)()
0x9FB8BC: call    _atexit
0x9FB8C1: add     esp, 4
0x9FB8C4: mov     ecx, [esp+10h+var_C]
0x9FB8C8: mov     large fs:0, ecx
0x9FB8CF: pop     ecx
0x9FB8D0: add     esp, 0Ch
0x9FB8D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BF090: mov     ecx, offset dword_B13608
0x9BF095: jmp     loc_403BC0
0x9BF09A: mov     edx, [esp+arg_4]
0x9BF09E: lea     eax, [edx]
0x9BF0A0: mov     ecx, [edx-4]
0x9BF0A3: xor     ecx, eax
0x9BF0A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF0AA: mov     eax, offset stru_AE86C4
0x9BF0AF: jmp     ___CxxFrameHandler3
