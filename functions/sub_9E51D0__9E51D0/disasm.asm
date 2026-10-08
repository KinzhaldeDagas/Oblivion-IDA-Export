0x9E51D0: push    0FFFFFFFFh
0x9E51D2: push    offset SEH_9E51D0
0x9E51D7: mov     eax, large fs:0
0x9E51DD: push    eax
0x9E51DE: mov     eax, ___security_cookie
0x9E51E3: xor     eax, esp
0x9E51E5: push    eax
0x9E51E6: lea     eax, [esp+10h+var_C]
0x9E51EA: mov     large fs:0, eax
0x9E51F0: push    offset off_B11B3C; "1.0, 1.0"
0x9E51F5: mov     ecx, offset BlendSettingCollection
0x9E51FA: mov     [esp+14h+var_4], 0
0x9E5202: call    SettingCollectionList_AddSetting
0x9E5207: push    offset sub_A1CD30; void (__cdecl *)()
0x9E520C: call    _atexit
0x9E5211: add     esp, 4
0x9E5214: mov     ecx, [esp+10h+var_C]
0x9E5218: mov     large fs:0, ecx
0x9E521F: pop     ecx
0x9E5220: add     esp, 0Ch
0x9E5223: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9CE0: mov     ecx, offset off_B11B3C; "1.0, 1.0"
0x9B9CE5: jmp     loc_403BC0
0x9B9CEA: mov     edx, [esp+arg_4]
0x9B9CEE: lea     eax, [edx]
0x9B9CF0: mov     ecx, [edx-4]
0x9B9CF3: xor     ecx, eax
0x9B9CF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9CFA: mov     eax, offset stru_AE3F6C
0x9B9CFF: jmp     ___CxxFrameHandler3
