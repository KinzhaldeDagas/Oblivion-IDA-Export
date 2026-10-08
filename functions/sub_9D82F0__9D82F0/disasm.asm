0x9D82F0: push    0FFFFFFFFh
0x9D82F2: push    offset SEH_9D82F0
0x9D82F7: mov     eax, large fs:0
0x9D82FD: push    eax
0x9D82FE: mov     eax, ___security_cookie
0x9D8303: xor     eax, esp
0x9D8305: push    eax
0x9D8306: lea     eax, [esp+10h+var_C]
0x9D830A: mov     large fs:0, eax
0x9D8310: push    offset off_B02C98
0x9D8315: mov     ecx, offset INISettingCollection
0x9D831A: mov     [esp+14h+var_4], 0
0x9D8322: call    SettingCollectionList_AddSetting
0x9D8327: push    offset sub_A16730; void (__cdecl *)()
0x9D832C: call    _atexit
0x9D8331: add     esp, 4
0x9D8334: mov     ecx, [esp+10h+var_C]
0x9D8338: mov     large fs:0, ecx
0x9D833F: pop     ecx
0x9D8340: add     esp, 0Ch
0x9D8343: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA1B0: mov     ecx, offset off_B02C98
0x9AA1B5: jmp     loc_403BC0
0x9AA1BA: mov     edx, [esp+arg_4]
0x9AA1BE: lea     eax, [edx]
0x9AA1C0: mov     ecx, [edx-4]
0x9AA1C3: xor     ecx, eax
0x9AA1C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA1CA: mov     eax, offset stru_AD71D0
0x9AA1CF: jmp     ___CxxFrameHandler3
