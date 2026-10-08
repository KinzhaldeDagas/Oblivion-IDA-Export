0x9FC820: push    0FFFFFFFFh
0x9FC822: push    offset SEH_9FC820
0x9FC827: mov     eax, large fs:0
0x9FC82D: push    eax
0x9FC82E: mov     eax, ___security_cookie
0x9FC833: xor     eax, esp
0x9FC835: push    eax
0x9FC836: lea     eax, [esp+10h+var_C]
0x9FC83A: mov     large fs:0, eax
0x9FC840: push    offset dword_B14814
0x9FC845: mov     ecx, offset INISettingCollection
0x9FC84A: mov     [esp+14h+var_4], 0
0x9FC852: call    SettingCollectionList_AddSetting
0x9FC857: push    offset sub_A24F30; void (__cdecl *)()
0x9FC85C: call    _atexit
0x9FC861: add     esp, 4
0x9FC864: mov     ecx, [esp+10h+var_C]
0x9FC868: mov     large fs:0, ecx
0x9FC86F: pop     ecx
0x9FC870: add     esp, 0Ch
0x9FC873: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2230: mov     ecx, offset dword_B14814
0x9C2235: jmp     loc_403BC0
0x9C223A: mov     edx, [esp+arg_4]
0x9C223E: lea     eax, [edx]
0x9C2240: mov     ecx, [edx-4]
0x9C2243: xor     ecx, eax
0x9C2245: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C224A: mov     eax, offset stru_AEB148
0x9C224F: jmp     ___CxxFrameHandler3
