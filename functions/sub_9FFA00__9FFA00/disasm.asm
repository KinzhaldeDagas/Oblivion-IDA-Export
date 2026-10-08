0x9FFA00: push    0FFFFFFFFh
0x9FFA02: push    offset SEH_9FFA00
0x9FFA07: mov     eax, large fs:0
0x9FFA0D: push    eax
0x9FFA0E: mov     eax, ___security_cookie
0x9FFA13: xor     eax, esp
0x9FFA15: push    eax
0x9FFA16: lea     eax, [esp+10h+var_C]
0x9FFA1A: mov     large fs:0, eax
0x9FFA20: push    offset fLargeWeaponWeightMin_Audio
0x9FFA25: mov     ecx, offset INISettingCollection
0x9FFA2A: mov     [esp+14h+var_4], 0
0x9FFA32: call    SettingCollectionList_AddSetting
0x9FFA37: push    offset sub_A265E0; void (__cdecl *)()
0x9FFA3C: call    _atexit
0x9FFA41: add     esp, 4
0x9FFA44: mov     ecx, [esp+10h+var_C]
0x9FFA48: mov     large fs:0, ecx
0x9FFA4F: pop     ecx
0x9FFA50: add     esp, 0Ch
0x9FFA53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6C80: mov     ecx, offset fLargeWeaponWeightMin_Audio
0x9C6C85: jmp     loc_403BC0
0x9C6C8A: mov     edx, [esp+arg_4]
0x9C6C8E: lea     eax, [edx]
0x9C6C90: mov     ecx, [edx-4]
0x9C6C93: xor     ecx, eax
0x9C6C95: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6C9A: mov     eax, offset stru_AEF138
0x9C6C9F: jmp     ___CxxFrameHandler3
