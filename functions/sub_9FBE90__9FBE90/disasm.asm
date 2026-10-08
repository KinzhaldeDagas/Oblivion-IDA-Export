0x9FBE90: push    0FFFFFFFFh; [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
0x9FBE92: push    offset SEH_9FBE90
0x9FBE97: mov     eax, large fs:0
0x9FBE9D: push    eax
0x9FBE9E: mov     eax, ___security_cookie
0x9FBEA3: xor     eax, esp
0x9FBEA5: push    eax
0x9FBEA6: lea     eax, [esp+10h+var_C]
0x9FBEAA: mov     large fs:0, eax
0x9FBEB0: push    offset fXenonMenuStickSpeedPlayerRotMod
0x9FBEB5: mov     ecx, offset INISettingCollection
0x9FBEBA: mov     [esp+14h+var_4], 0
0x9FBEC2: call    SettingCollectionList_AddSetting
0x9FBEC7: push    offset INISetting_Destroy_fXenonMenuStickSpeedPlayerRotMod; void (__cdecl *)()
0x9FBECC: call    _atexit
0x9FBED1: add     esp, 4
0x9FBED4: mov     ecx, [esp+10h+var_C]
0x9FBED8: mov     large fs:0, ecx
0x9FBEDF: pop     ecx
0x9FBEE0: add     esp, 0Ch
0x9FBEE3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C0420: mov     ecx, offset fXenonMenuStickSpeedPlayerRotMod
0x9C0425: jmp     loc_403BC0
0x9C042A: mov     edx, [esp+arg_4]
0x9C042E: lea     eax, [edx]
0x9C0430: mov     ecx, [edx-4]
0x9C0433: xor     ecx, eax
0x9C0435: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C043A: mov     eax, offset stru_AE970C
0x9C043F: jmp     ___CxxFrameHandler3
