0x9DF1C0: push    0FFFFFFFFh
0x9DF1C2: push    offset SEH_9DF1C0
0x9DF1C7: mov     eax, large fs:0
0x9DF1CD: push    eax
0x9DF1CE: mov     eax, ___security_cookie
0x9DF1D3: xor     eax, esp
0x9DF1D5: push    eax
0x9DF1D6: lea     eax, [esp+10h+var_C]
0x9DF1DA: mov     large fs:0, eax
0x9DF1E0: push    offset OB_INI_bFullBrightLighting_Display_010201A0
0x9DF1E5: mov     ecx, offset INISettingCollection
0x9DF1EA: mov     [esp+14h+var_4], 0
0x9DF1F2: call    SettingCollectionList_AddSetting
0x9DF1F7: push    offset sub_A19E90; void (__cdecl *)()
0x9DF1FC: call    _atexit
0x9DF201: add     esp, 4
0x9DF204: mov     ecx, [esp+10h+var_C]
0x9DF208: mov     large fs:0, ecx
0x9DF20F: pop     ecx
0x9DF210: add     esp, 0Ch
0x9DF213: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B17E0: mov     ecx, offset OB_INI_bFullBrightLighting_Display_010201A0
0x9B17E5: jmp     loc_403BC0
0x9B17EA: mov     edx, [esp+arg_4]
0x9B17EE: lea     eax, [edx]
0x9B17F0: mov     ecx, [edx-4]
0x9B17F3: xor     ecx, eax
0x9B17F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B17FA: mov     eax, offset stru_ADD970
0x9B17FF: jmp     ___CxxFrameHandler3
