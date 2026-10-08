0x9E36A0: push    0FFFFFFFFh
0x9E36A2: push    offset SEH_9E36A0
0x9E36A7: mov     eax, large fs:0
0x9E36AD: push    eax
0x9E36AE: mov     eax, ___security_cookie
0x9E36B3: xor     eax, esp
0x9E36B5: push    eax
0x9E36B6: lea     eax, [esp+10h+var_C]
0x9E36BA: mov     large fs:0, eax
0x9E36C0: push    offset SettingGrassWindMagnitudeMin
0x9E36C5: mov     ecx, offset INISettingCollection
0x9E36CA: mov     [esp+14h+var_4], 0
0x9E36D2: call    SettingCollectionList_AddSetting
0x9E36D7: push    offset sub_A1BEE0; void (__cdecl *)()
0x9E36DC: call    _atexit
0x9E36E1: add     esp, 4
0x9E36E4: mov     ecx, [esp+10h+var_C]
0x9E36E8: mov     large fs:0, ecx
0x9E36EF: pop     ecx
0x9E36F0: add     esp, 0Ch
0x9E36F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6370: mov     ecx, offset SettingGrassWindMagnitudeMin
0x9B6375: jmp     loc_403BC0
0x9B637A: mov     edx, [esp+arg_4]
0x9B637E: lea     eax, [edx]
0x9B6380: mov     ecx, [edx-4]
0x9B6383: xor     ecx, eax
0x9B6385: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B638A: mov     eax, offset stru_AE1284
0x9B638F: jmp     ___CxxFrameHandler3
