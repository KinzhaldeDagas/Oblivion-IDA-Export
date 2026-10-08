0x9E37C0: push    0FFFFFFFFh
0x9E37C2: push    offset SEH_9E37C0
0x9E37C7: mov     eax, large fs:0
0x9E37CD: push    eax
0x9E37CE: mov     eax, ___security_cookie
0x9E37D3: xor     eax, esp
0x9E37D5: push    eax
0x9E37D6: lea     eax, [esp+10h+var_C]
0x9E37DA: mov     large fs:0, eax
0x9E37E0: push    offset unk_B09B40
0x9E37E5: mov     ecx, offset INISettingCollection
0x9E37EA: mov     [esp+14h+var_4], 0
0x9E37F2: call    SettingCollectionList_AddSetting
0x9E37F7: push    offset sub_A1BF70; void (__cdecl *)()
0x9E37FC: call    _atexit
0x9E3801: add     esp, 4
0x9E3804: mov     ecx, [esp+10h+var_C]
0x9E3808: mov     large fs:0, ecx
0x9E380F: pop     ecx
0x9E3810: add     esp, 0Ch
0x9E3813: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6400: mov     ecx, offset unk_B09B40
0x9B6405: jmp     loc_403BC0
0x9B640A: mov     edx, [esp+arg_4]
0x9B640E: lea     eax, [edx]
0x9B6410: mov     ecx, [edx-4]
0x9B6413: xor     ecx, eax
0x9B6415: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B641A: mov     eax, offset stru_AE1308
0x9B641F: jmp     ___CxxFrameHandler3
