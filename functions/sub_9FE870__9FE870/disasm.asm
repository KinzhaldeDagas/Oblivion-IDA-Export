0x9FE870: push    0FFFFFFFFh
0x9FE872: push    offset SEH_9FE870
0x9FE877: mov     eax, large fs:0
0x9FE87D: push    eax
0x9FE87E: mov     eax, ___security_cookie
0x9FE883: xor     eax, esp
0x9FE885: push    eax
0x9FE886: lea     eax, [esp+10h+var_C]
0x9FE88A: mov     large fs:0, eax
0x9FE890: push    offset bDebugSmoothing
0x9FE895: mov     ecx, offset INISettingCollection
0x9FE89A: mov     [esp+14h+var_4], 0
0x9FE8A2: call    SettingCollectionList_AddSetting
0x9FE8A7: push    offset sub_A25EA0; void (__cdecl *)()
0x9FE8AC: call    _atexit
0x9FE8B1: add     esp, 4
0x9FE8B4: mov     ecx, [esp+10h+var_C]
0x9FE8B8: mov     large fs:0, ecx
0x9FE8BF: pop     ecx
0x9FE8C0: add     esp, 0Ch
0x9FE8C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C51C0: mov     ecx, offset bDebugSmoothing
0x9C51C5: jmp     loc_403BC0
0x9C51CA: mov     edx, [esp+arg_4]
0x9C51CE: lea     eax, [edx]
0x9C51D0: mov     ecx, [edx-4]
0x9C51D3: xor     ecx, eax
0x9C51D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C51DA: mov     eax, offset stru_AED9E0
0x9C51DF: jmp     ___CxxFrameHandler3
