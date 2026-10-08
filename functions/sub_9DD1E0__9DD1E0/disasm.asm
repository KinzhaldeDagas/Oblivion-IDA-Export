0x9DD1E0: push    0FFFFFFFFh
0x9DD1E2: push    offset SEH_9DD1E0
0x9DD1E7: mov     eax, large fs:0
0x9DD1ED: push    eax
0x9DD1EE: mov     eax, ___security_cookie
0x9DD1F3: xor     eax, esp
0x9DD1F5: push    eax
0x9DD1F6: lea     eax, [esp+10h+var_C]
0x9DD1FA: mov     large fs:0, eax
0x9DD200: push    offset g_bDoActorShadowsSetting
0x9DD205: mov     ecx, offset INISettingCollection
0x9DD20A: mov     [esp+14h+var_4], 0
0x9DD212: call    SettingCollectionList_AddSetting
0x9DD217: push    offset sub_A18EA0; void (__cdecl *)()
0x9DD21C: call    _atexit
0x9DD221: add     esp, 4
0x9DD224: mov     ecx, [esp+10h+var_C]
0x9DD228: mov     large fs:0, ecx
0x9DD22F: pop     ecx
0x9DD230: add     esp, 0Ch
0x9DD233: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B07F0: mov     ecx, offset g_bDoActorShadowsSetting
0x9B07F5: jmp     loc_403BC0
0x9B07FA: mov     edx, [esp+arg_4]
0x9B07FE: lea     eax, [edx]
0x9B0800: mov     ecx, [edx-4]
0x9B0803: xor     ecx, eax
0x9B0805: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B080A: mov     eax, offset stru_ADCAD4
0x9B080F: jmp     ___CxxFrameHandler3
