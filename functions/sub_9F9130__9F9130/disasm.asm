0x9F9130: push    0FFFFFFFFh; Verified INI setting registration for bForceFullLOD:SpeedTree; adds the value/name pair to INISettingCollection and registers atexit cleanup.
0x9F9132: push    offset SEH_9F9130
0x9F9137: mov     eax, large fs:0
0x9F913D: push    eax
0x9F913E: mov     eax, ___security_cookie
0x9F9143: xor     eax, esp
0x9F9145: push    eax
0x9F9146: lea     eax, [esp+10h+var_C]
0x9F914A: mov     large fs:0, eax
0x9F9150: push    offset bForceFullLOD_SpeedTree
0x9F9155: mov     ecx, offset INISettingCollection
0x9F915A: mov     [esp+14h+var_4], 0
0x9F9162: call    SettingCollectionList_AddSetting
0x9F9167: push    offset INISetting_bForceFullLOD_SpeedTree_atexit; void (__cdecl *)()
0x9F916C: call    _atexit
0x9F9171: add     esp, 4
0x9F9174: mov     ecx, [esp+10h+var_C]
0x9F9178: mov     large fs:0, ecx
0x9F917F: pop     ecx
0x9F9180: add     esp, 0Ch
0x9F9183: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BCDA0: mov     ecx, offset bForceFullLOD_SpeedTree
0x9BCDA5: jmp     loc_403BC0
0x9BCDAA: mov     edx, [esp+arg_4]
0x9BCDAE: lea     eax, [edx]
0x9BCDB0: mov     ecx, [edx-4]
0x9BCDB3: xor     ecx, eax
0x9BCDB5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCDBA: mov     eax, offset stru_AE68BC
0x9BCDBF: jmp     ___CxxFrameHandler3
