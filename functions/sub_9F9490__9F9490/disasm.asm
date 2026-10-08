0x9F9490: push    0FFFFFFFFh; Verified INI setting registration for fCanopyShadowGrassMult:SpeedTree; adds the float value/name pair to INISettingCollection and registers atexit cleanup.
0x9F9492: push    offset SEH_9F9490
0x9F9497: mov     eax, large fs:0
0x9F949D: push    eax
0x9F949E: mov     eax, ___security_cookie
0x9F94A3: xor     eax, esp
0x9F94A5: push    eax
0x9F94A6: lea     eax, [esp+10h+var_C]
0x9F94AA: mov     large fs:0, eax
0x9F94B0: push    offset fCanopyShadowGrassMult_SpeedTree
0x9F94B5: mov     ecx, offset INISettingCollection
0x9F94BA: mov     [esp+14h+var_4], 0
0x9F94C2: call    SettingCollectionList_AddSetting
0x9F94C7: push    offset INISetting_fCanopyShadowGrassMult_SpeedTree_atexit; void (__cdecl *)()
0x9F94CC: call    _atexit
0x9F94D1: add     esp, 4
0x9F94D4: mov     ecx, [esp+10h+var_C]
0x9F94D8: mov     large fs:0, ecx
0x9F94DF: pop     ecx
0x9F94E0: add     esp, 0Ch
0x9F94E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BCF50: mov     ecx, offset fCanopyShadowGrassMult_SpeedTree
0x9BCF55: jmp     loc_403BC0
0x9BCF5A: mov     edx, [esp+arg_4]
0x9BCF5E: lea     eax, [edx]
0x9BCF60: mov     ecx, [edx-4]
0x9BCF63: xor     ecx, eax
0x9BCF65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCF6A: mov     eax, offset stru_AE6A48
0x9BCF6F: jmp     ___CxxFrameHandler3
