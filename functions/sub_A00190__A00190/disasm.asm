0xA00190: push    0FFFFFFFFh
0xA00192: push    offset SEH_A00190
0xA00197: mov     eax, large fs:0
0xA0019D: push    eax
0xA0019E: mov     eax, ___security_cookie
0xA001A3: xor     eax, esp
0xA001A5: push    eax
0xA001A6: lea     eax, [esp+10h+var_C]
0xA001AA: mov     large fs:0, eax
0xA001B0: push    offset byte_B23C60
0xA001B5: mov     ecx, offset INISettingCollection
0xA001BA: mov     [esp+14h+var_4], 0
0xA001C2: call    SettingCollectionList_AddSetting
0xA001C7: push    offset sub_A267A0; void (__cdecl *)()
0xA001CC: call    _atexit
0xA001D1: add     esp, 4
0xA001D4: mov     ecx, [esp+10h+var_C]
0xA001D8: mov     large fs:0, ecx
0xA001DF: pop     ecx
0xA001E0: add     esp, 0Ch
0xA001E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6FF0: mov     ecx, offset byte_B23C60
0x9C6FF5: jmp     loc_403BC0
0x9C6FFA: mov     edx, [esp+arg_4]
0x9C6FFE: lea     eax, [edx]
0x9C7000: mov     ecx, [edx-4]
0x9C7003: xor     ecx, eax
0x9C7005: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C700A: mov     eax, offset stru_AEF478
0x9C700F: jmp     ___CxxFrameHandler3
