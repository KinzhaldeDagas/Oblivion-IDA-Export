0x9F8B90: push    0FFFFFFFFh
0x9F8B92: push    offset SEH_9F8B90
0x9F8B97: mov     eax, large fs:0
0x9F8B9D: push    eax
0x9F8B9E: mov     eax, ___security_cookie
0x9F8BA3: xor     eax, esp
0x9F8BA5: push    eax
0x9F8BA6: lea     eax, [esp+10h+var_C]
0x9F8BAA: mov     large fs:0, eax
0x9F8BB0: push    offset byte_B120E4
0x9F8BB5: mov     ecx, offset INISettingCollection
0x9F8BBA: mov     [esp+14h+var_4], 0
0x9F8BC2: call    SettingCollectionList_AddSetting
0x9F8BC7: push    offset sub_A23430; void (__cdecl *)()
0x9F8BCC: call    _atexit
0x9F8BD1: add     esp, 4
0x9F8BD4: mov     ecx, [esp+10h+var_C]
0x9F8BD8: mov     large fs:0, ecx
0x9F8BDF: pop     ecx
0x9F8BE0: add     esp, 0Ch
0x9F8BE3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BC490: mov     ecx, offset byte_B120E4
0x9BC495: jmp     loc_403BC0
0x9BC49A: mov     edx, [esp+arg_4]
0x9BC49E: lea     eax, [edx]
0x9BC4A0: mov     ecx, [edx-4]
0x9BC4A3: xor     ecx, eax
0x9BC4A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC4AA: mov     eax, offset stru_AE6068
0x9BC4AF: jmp     ___CxxFrameHandler3
