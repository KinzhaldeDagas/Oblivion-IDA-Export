0x9FCBE0: push    0FFFFFFFFh
0x9FCBE2: push    offset SEH_9FCBE0
0x9FCBE7: mov     eax, large fs:0
0x9FCBED: push    eax
0x9FCBEE: mov     eax, ___security_cookie
0x9FCBF3: xor     eax, esp
0x9FCBF5: push    eax
0x9FCBF6: lea     eax, [esp+10h+var_C]
0x9FCBFA: mov     large fs:0, eax
0x9FCC00: push    offset flt_B14864
0x9FCC05: mov     ecx, offset INISettingCollection
0x9FCC0A: mov     [esp+14h+var_4], 0
0x9FCC12: call    SettingCollectionList_AddSetting
0x9FCC17: push    offset sub_A25110; void (__cdecl *)()
0x9FCC1C: call    _atexit
0x9FCC21: add     esp, 4
0x9FCC24: mov     ecx, [esp+10h+var_C]
0x9FCC28: mov     large fs:0, ecx
0x9FCC2F: pop     ecx
0x9FCC30: add     esp, 0Ch
0x9FCC33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2410: mov     ecx, offset flt_B14864
0x9C2415: jmp     loc_403BC0
0x9C241A: mov     edx, [esp+arg_4]
0x9C241E: lea     eax, [edx]
0x9C2420: mov     ecx, [edx-4]
0x9C2423: xor     ecx, eax
0x9C2425: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C242A: mov     eax, offset stru_AEB300
0x9C242F: jmp     ___CxxFrameHandler3
