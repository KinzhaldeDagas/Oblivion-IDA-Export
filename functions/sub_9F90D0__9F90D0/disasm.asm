0x9F90D0: push    0FFFFFFFFh; Verified INI setting registration for bEnableTrees:SpeedTree; calls SettingCollectionList_AddSetting on the 8-byte value/name pair and registers atexit cleanup.
0x9F90D2: push    offset SEH_9F90D0
0x9F90D7: mov     eax, large fs:0
0x9F90DD: push    eax
0x9F90DE: mov     eax, ___security_cookie
0x9F90E3: xor     eax, esp
0x9F90E5: push    eax
0x9F90E6: lea     eax, [esp+10h+var_C]
0x9F90EA: mov     large fs:0, eax
0x9F90F0: push    offset bEnableTrees_SpeedTree
0x9F90F5: mov     ecx, offset INISettingCollection
0x9F90FA: mov     [esp+14h+var_4], 0
0x9F9102: call    SettingCollectionList_AddSetting
0x9F9107: push    offset INISetting_bEnableTrees_SpeedTree_atexit; void (__cdecl *)()
0x9F910C: call    _atexit
0x9F9111: add     esp, 4
0x9F9114: mov     ecx, [esp+10h+var_C]
0x9F9118: mov     large fs:0, ecx
0x9F911F: pop     ecx
0x9F9120: add     esp, 0Ch
0x9F9123: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BCD70: mov     ecx, offset bEnableTrees_SpeedTree
0x9BCD75: jmp     loc_403BC0
0x9BCD7A: mov     edx, [esp+arg_4]
0x9BCD7E: lea     eax, [edx]
0x9BCD80: mov     ecx, [edx-4]
0x9BCD83: xor     ecx, eax
0x9BCD85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCD8A: mov     eax, offset stru_AE6890
0x9BCD8F: jmp     ___CxxFrameHandler3
