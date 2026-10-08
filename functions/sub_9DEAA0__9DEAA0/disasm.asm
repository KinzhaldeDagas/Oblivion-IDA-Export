0x9DEAA0: push    0FFFFFFFFh
0x9DEAA2: push    offset SEH_9DEAA0
0x9DEAA7: mov     eax, large fs:0
0x9DEAAD: push    eax
0x9DEAAE: mov     eax, ___security_cookie
0x9DEAB3: xor     eax, esp
0x9DEAB5: push    eax
0x9DEAB6: lea     eax, [esp+10h+var_C]
0x9DEABA: mov     large fs:0, eax
0x9DEAC0: push    offset g_iActorShadowCountExteriorSetting
0x9DEAC5: mov     ecx, offset INISettingCollection
0x9DEACA: mov     [esp+14h+var_4], 0
0x9DEAD2: call    SettingCollectionList_AddSetting
0x9DEAD7: push    offset sub_A19B00; void (__cdecl *)()
0x9DEADC: call    _atexit
0x9DEAE1: add     esp, 4
0x9DEAE4: mov     ecx, [esp+10h+var_C]
0x9DEAE8: mov     large fs:0, ecx
0x9DEAEF: pop     ecx
0x9DEAF0: add     esp, 0Ch
0x9DEAF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1450: mov     ecx, offset g_iActorShadowCountExteriorSetting
0x9B1455: jmp     loc_403BC0
0x9B145A: mov     edx, [esp+arg_4]
0x9B145E: lea     eax, [edx]
0x9B1460: mov     ecx, [edx-4]
0x9B1463: xor     ecx, eax
0x9B1465: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B146A: mov     eax, offset stru_ADD62C
0x9B146F: jmp     ___CxxFrameHandler3
