0x9DB6F0: push    0FFFFFFFFh
0x9DB6F2: push    offset SEH_9DB6F0
0x9DB6F7: mov     eax, large fs:0
0x9DB6FD: push    eax
0x9DB6FE: mov     eax, ___security_cookie
0x9DB703: xor     eax, esp
0x9DB705: push    eax
0x9DB706: lea     eax, [esp+10h+var_C]
0x9DB70A: mov     large fs:0, eax
0x9DB710: push    offset off_B0555C; "Data\\"
0x9DB715: mov     ecx, offset INISettingCollection
0x9DB71A: mov     [esp+14h+var_4], 0
0x9DB722: call    SettingCollectionList_AddSetting
0x9DB727: push    offset sub_A180C0; void (__cdecl *)()
0x9DB72C: call    _atexit
0x9DB731: add     esp, 4
0x9DB734: mov     ecx, [esp+10h+var_C]
0x9DB738: mov     large fs:0, ecx
0x9DB73F: pop     ecx
0x9DB740: add     esp, 0Ch
0x9DB743: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADDE0: mov     ecx, offset off_B0555C; "Data\\"
0x9ADDE5: jmp     loc_403BC0
0x9ADDEA: mov     edx, [esp+arg_4]
0x9ADDEE: lea     eax, [edx]
0x9ADDF0: mov     ecx, [edx-4]
0x9ADDF3: xor     ecx, eax
0x9ADDF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADDFA: mov     eax, offset stru_ADA70C
0x9ADDFF: jmp     ___CxxFrameHandler3
