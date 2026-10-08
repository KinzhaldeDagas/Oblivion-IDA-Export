0x9D85F0: push    0FFFFFFFFh
0x9D85F2: push    offset SEH_9D85F0
0x9D85F7: mov     eax, large fs:0
0x9D85FD: push    eax
0x9D85FE: mov     eax, ___security_cookie
0x9D8603: xor     eax, esp
0x9D8605: push    eax
0x9D8606: lea     eax, [esp+10h+var_C]
0x9D860A: mov     large fs:0, eax
0x9D8610: push    offset off_B02CD8
0x9D8615: mov     ecx, offset INISettingCollection
0x9D861A: mov     [esp+14h+var_4], 0
0x9D8622: call    SettingCollectionList_AddSetting
0x9D8627: push    offset sub_A168B0; void (__cdecl *)()
0x9D862C: call    _atexit
0x9D8631: add     esp, 4
0x9D8634: mov     ecx, [esp+10h+var_C]
0x9D8638: mov     large fs:0, ecx
0x9D863F: pop     ecx
0x9D8640: add     esp, 0Ch
0x9D8643: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA330: mov     ecx, offset off_B02CD8
0x9AA335: jmp     loc_403BC0
0x9AA33A: mov     edx, [esp+arg_4]
0x9AA33E: lea     eax, [edx]
0x9AA340: mov     ecx, [edx-4]
0x9AA343: xor     ecx, eax
0x9AA345: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA34A: mov     eax, offset stru_AD7330
0x9AA34F: jmp     ___CxxFrameHandler3
