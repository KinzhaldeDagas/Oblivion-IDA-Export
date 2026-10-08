0x9FB4C0: push    0FFFFFFFFh
0x9FB4C2: push    offset SEH_9FB4C0
0x9FB4C7: mov     eax, large fs:0
0x9FB4CD: push    eax
0x9FB4CE: mov     eax, ___security_cookie
0x9FB4D3: xor     eax, esp
0x9FB4D5: push    eax
0x9FB4D6: lea     eax, [esp+10h+var_C]
0x9FB4DA: mov     large fs:0, eax
0x9FB4E0: push    offset flt_B135B8
0x9FB4E5: mov     ecx, offset INISettingCollection
0x9FB4EA: mov     [esp+14h+var_4], 0
0x9FB4F2: call    SettingCollectionList_AddSetting
0x9FB4F7: push    offset sub_A246A0; void (__cdecl *)()
0x9FB4FC: call    _atexit
0x9FB501: add     esp, 4
0x9FB504: mov     ecx, [esp+10h+var_C]
0x9FB508: mov     large fs:0, ecx
0x9FB50F: pop     ecx
0x9FB510: add     esp, 0Ch
0x9FB513: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BEEB0: mov     ecx, offset flt_B135B8
0x9BEEB5: jmp     loc_403BC0
0x9BEEBA: mov     edx, [esp+arg_4]
0x9BEEBE: lea     eax, [edx]
0x9BEEC0: mov     ecx, [edx-4]
0x9BEEC3: xor     ecx, eax
0x9BEEC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEECA: mov     eax, offset stru_AE850C
0x9BEECF: jmp     ___CxxFrameHandler3
