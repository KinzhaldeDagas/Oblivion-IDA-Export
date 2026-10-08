0x9DCB20: push    0FFFFFFFFh
0x9DCB22: push    offset SEH_9DCB20
0x9DCB27: mov     eax, large fs:0
0x9DCB2D: push    eax
0x9DCB2E: mov     eax, ___security_cookie
0x9DCB33: xor     eax, esp
0x9DCB35: push    eax
0x9DCB36: lea     eax, [esp+10h+var_C]
0x9DCB3A: mov     large fs:0, eax
0x9DCB40: push    offset dword_B06C5C
0x9DCB45: mov     ecx, offset INISettingCollection
0x9DCB4A: mov     [esp+14h+var_4], 0
0x9DCB52: call    SettingCollectionList_AddSetting
0x9DCB57: push    offset sub_A18B40; void (__cdecl *)()
0x9DCB5C: call    _atexit
0x9DCB61: add     esp, 4
0x9DCB64: mov     ecx, [esp+10h+var_C]
0x9DCB68: mov     large fs:0, ecx
0x9DCB6F: pop     ecx
0x9DCB70: add     esp, 0Ch
0x9DCB73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0490: mov     ecx, offset dword_B06C5C
0x9B0495: jmp     loc_403BC0
0x9B049A: mov     edx, [esp+arg_4]
0x9B049E: lea     eax, [edx]
0x9B04A0: mov     ecx, [edx-4]
0x9B04A3: xor     ecx, eax
0x9B04A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B04AA: mov     eax, offset stru_ADC7BC
0x9B04AF: jmp     ___CxxFrameHandler3
