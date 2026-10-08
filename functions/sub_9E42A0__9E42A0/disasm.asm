0x9E42A0: push    0FFFFFFFFh
0x9E42A2: push    offset SEH_9E42A0
0x9E42A7: mov     eax, large fs:0
0x9E42AD: push    eax
0x9E42AE: mov     eax, ___security_cookie
0x9E42B3: xor     eax, esp
0x9E42B5: push    eax
0x9E42B6: lea     eax, [esp+10h+var_C]
0x9E42BA: mov     large fs:0, eax
0x9E42C0: push    offset iSimTypeHavok
0x9E42C5: mov     ecx, offset INISettingCollection
0x9E42CA: mov     [esp+14h+var_4], 0
0x9E42D2: call    SettingCollectionList_AddSetting
0x9E42D7: push    offset sub_A1C5B0; void (__cdecl *)()
0x9E42DC: call    _atexit
0x9E42E1: add     esp, 4
0x9E42E4: mov     ecx, [esp+10h+var_C]
0x9E42E8: mov     large fs:0, ecx
0x9E42EF: pop     ecx
0x9E42F0: add     esp, 0Ch
0x9E42F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9230: mov     ecx, offset iSimTypeHavok
0x9B9235: jmp     loc_403BC0
0x9B923A: mov     edx, [esp+arg_4]
0x9B923E: lea     eax, [edx]
0x9B9240: mov     ecx, [edx-4]
0x9B9243: xor     ecx, eax
0x9B9245: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B924A: mov     eax, offset stru_AE35F8
0x9B924F: jmp     ___CxxFrameHandler3
