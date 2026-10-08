0x9FB820: push    0FFFFFFFFh
0x9FB822: push    offset SEH_9FB820
0x9FB827: mov     eax, large fs:0
0x9FB82D: push    eax
0x9FB82E: mov     eax, ___security_cookie
0x9FB833: xor     eax, esp
0x9FB835: push    eax
0x9FB836: lea     eax, [esp+10h+var_C]
0x9FB83A: mov     large fs:0, eax
0x9FB840: push    offset dword_B13600
0x9FB845: mov     ecx, offset INISettingCollection
0x9FB84A: mov     [esp+14h+var_4], 0
0x9FB852: call    SettingCollectionList_AddSetting
0x9FB857: push    offset sub_A24850; void (__cdecl *)()
0x9FB85C: call    _atexit
0x9FB861: add     esp, 4
0x9FB864: mov     ecx, [esp+10h+var_C]
0x9FB868: mov     large fs:0, ecx
0x9FB86F: pop     ecx
0x9FB870: add     esp, 0Ch
0x9FB873: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BF060: mov     ecx, offset dword_B13600
0x9BF065: jmp     loc_403BC0
0x9BF06A: mov     edx, [esp+arg_4]
0x9BF06E: lea     eax, [edx]
0x9BF070: mov     ecx, [edx-4]
0x9BF073: xor     ecx, eax
0x9BF075: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF07A: mov     eax, offset stru_AE8698
0x9BF07F: jmp     ___CxxFrameHandler3
