0x9FAD40: push    0FFFFFFFFh
0x9FAD42: push    offset SEH_9FAD40
0x9FAD47: mov     eax, large fs:0
0x9FAD4D: push    eax
0x9FAD4E: mov     eax, ___security_cookie
0x9FAD53: xor     eax, esp
0x9FAD55: push    eax
0x9FAD56: lea     eax, [esp+10h+var_C]
0x9FAD5A: mov     large fs:0, eax
0x9FAD60: push    offset off_B12E1C; "Data\\Fonts\\Kingthings_Regular.fnt"
0x9FAD65: mov     ecx, offset INISettingCollection
0x9FAD6A: mov     [esp+14h+var_4], 0
0x9FAD72: call    SettingCollectionList_AddSetting
0x9FAD77: push    offset sub_A242E0; void (__cdecl *)()
0x9FAD7C: call    _atexit
0x9FAD81: add     esp, 4
0x9FAD84: mov     ecx, [esp+10h+var_C]
0x9FAD88: mov     large fs:0, ecx
0x9FAD8F: pop     ecx
0x9FAD90: add     esp, 0Ch
0x9FAD93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BE700: mov     ecx, offset off_B12E1C; "Data\\Fonts\\Kingthings_Regular.fnt"
0x9BE705: jmp     loc_403BC0
0x9BE70A: mov     edx, [esp+arg_4]
0x9BE70E: lea     eax, [edx]
0x9BE710: mov     ecx, [edx-4]
0x9BE713: xor     ecx, eax
0x9BE715: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE71A: mov     eax, offset stru_AE7E14
0x9BE71F: jmp     ___CxxFrameHandler3
