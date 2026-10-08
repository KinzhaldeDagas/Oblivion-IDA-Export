0x9D8E30: push    0FFFFFFFFh
0x9D8E32: push    offset SEH_9D8E30
0x9D8E37: mov     eax, large fs:0
0x9D8E3D: push    eax
0x9D8E3E: mov     eax, ___security_cookie
0x9D8E43: xor     eax, esp
0x9D8E45: push    eax
0x9D8E46: lea     eax, [esp+10h+var_C]
0x9D8E4A: mov     large fs:0, eax
0x9D8E50: push    offset unk_B02D88
0x9D8E55: mov     ecx, offset INISettingCollection
0x9D8E5A: mov     [esp+14h+var_4], 0
0x9D8E62: call    SettingCollectionList_AddSetting
0x9D8E67: push    offset sub_A16CD0; void (__cdecl *)()
0x9D8E6C: call    _atexit
0x9D8E71: add     esp, 4
0x9D8E74: mov     ecx, [esp+10h+var_C]
0x9D8E78: mov     large fs:0, ecx
0x9D8E7F: pop     ecx
0x9D8E80: add     esp, 0Ch
0x9D8E83: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA750: mov     ecx, offset unk_B02D88
0x9AA755: jmp     loc_403BC0
0x9AA75A: mov     edx, [esp+arg_4]
0x9AA75E: lea     eax, [edx]
0x9AA760: mov     ecx, [edx-4]
0x9AA763: xor     ecx, eax
0x9AA765: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA76A: mov     eax, offset stru_AD76F8
0x9AA76F: jmp     ___CxxFrameHandler3
