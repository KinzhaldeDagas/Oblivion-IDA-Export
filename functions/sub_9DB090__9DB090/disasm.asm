0x9DB090: push    0FFFFFFFFh
0x9DB092: push    offset SEH_9DB090
0x9DB097: mov     eax, large fs:0
0x9DB09D: push    eax
0x9DB09E: mov     eax, ___security_cookie
0x9DB0A3: xor     eax, esp
0x9DB0A5: push    eax
0x9DB0A6: lea     eax, [esp+10h+var_C]
0x9DB0AA: mov     large fs:0, eax
0x9DB0B0: push    offset off_B051F4; "255,255,255,255"
0x9DB0B5: mov     ecx, offset INISettingCollection
0x9DB0BA: mov     [esp+14h+var_4], 0
0x9DB0C2: call    SettingCollectionList_AddSetting
0x9DB0C7: push    offset sub_A17DB0; void (__cdecl *)()
0x9DB0CC: call    _atexit
0x9DB0D1: add     esp, 4
0x9DB0D4: mov     ecx, [esp+10h+var_C]
0x9DB0D8: mov     large fs:0, ecx
0x9DB0DF: pop     ecx
0x9DB0E0: add     esp, 0Ch
0x9DB0E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD360: mov     ecx, offset off_B051F4; "255,255,255,255"
0x9AD365: jmp     loc_403BC0
0x9AD36A: mov     edx, [esp+arg_4]
0x9AD36E: lea     eax, [edx]
0x9AD370: mov     ecx, [edx-4]
0x9AD373: xor     ecx, eax
0x9AD375: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD37A: mov     eax, offset stru_AD9F0C
0x9AD37F: jmp     ___CxxFrameHandler3
