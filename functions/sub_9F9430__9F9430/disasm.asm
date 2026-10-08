0x9F9430: push    0FFFFFFFFh; Verified INI setting registration for iCanopyShadowScale:SpeedTree; adds the int value/name pair to INISettingCollection and registers atexit cleanup.
0x9F9432: push    offset SEH_9F9430
0x9F9437: mov     eax, large fs:0
0x9F943D: push    eax
0x9F943E: mov     eax, ___security_cookie
0x9F9443: xor     eax, esp
0x9F9445: push    eax
0x9F9446: lea     eax, [esp+10h+var_C]
0x9F944A: mov     large fs:0, eax
0x9F9450: push    offset iCanopyShadowScale_SpeedTree
0x9F9455: mov     ecx, offset INISettingCollection
0x9F945A: mov     [esp+14h+var_4], 0
0x9F9462: call    SettingCollectionList_AddSetting
0x9F9467: push    offset INISetting_iCanopyShadowScale_SpeedTree_atexit; void (__cdecl *)()
0x9F946C: call    _atexit
0x9F9471: add     esp, 4
0x9F9474: mov     ecx, [esp+10h+var_C]
0x9F9478: mov     large fs:0, ecx
0x9F947F: pop     ecx
0x9F9480: add     esp, 0Ch
0x9F9483: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BCF20: mov     ecx, offset iCanopyShadowScale_SpeedTree
0x9BCF25: jmp     loc_403BC0
0x9BCF2A: mov     edx, [esp+arg_4]
0x9BCF2E: lea     eax, [edx]
0x9BCF30: mov     ecx, [edx-4]
0x9BCF33: xor     ecx, eax
0x9BCF35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BCF3A: mov     eax, offset stru_AE6A1C
0x9BCF3F: jmp     ___CxxFrameHandler3
