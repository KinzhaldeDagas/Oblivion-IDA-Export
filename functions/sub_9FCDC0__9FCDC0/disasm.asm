0x9FCDC0: push    0FFFFFFFFh
0x9FCDC2: push    offset SEH_9FCDC0
0x9FCDC7: mov     eax, large fs:0
0x9FCDCD: push    eax
0x9FCDCE: mov     eax, ___security_cookie
0x9FCDD3: xor     eax, esp
0x9FCDD5: push    eax
0x9FCDD6: lea     eax, [esp+10h+var_C]
0x9FCDDA: mov     large fs:0, eax
0x9FCDE0: push    offset flt_B1488C
0x9FCDE5: mov     ecx, offset INISettingCollection
0x9FCDEA: mov     [esp+14h+var_4], 0
0x9FCDF2: call    SettingCollectionList_AddSetting
0x9FCDF7: push    offset sub_A25200; void (__cdecl *)()
0x9FCDFC: call    _atexit
0x9FCE01: add     esp, 4
0x9FCE04: mov     ecx, [esp+10h+var_C]
0x9FCE08: mov     large fs:0, ecx
0x9FCE0F: pop     ecx
0x9FCE10: add     esp, 0Ch
0x9FCE13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2500: mov     ecx, offset flt_B1488C
0x9C2505: jmp     loc_403BC0
0x9C250A: mov     edx, [esp+arg_4]
0x9C250E: lea     eax, [edx]
0x9C2510: mov     ecx, [edx-4]
0x9C2513: xor     ecx, eax
0x9C2515: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C251A: mov     eax, offset stru_AEB3DC
0x9C251F: jmp     ___CxxFrameHandler3
