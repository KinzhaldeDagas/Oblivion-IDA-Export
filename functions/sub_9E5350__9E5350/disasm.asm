0x9E5350: push    0FFFFFFFFh
0x9E5352: push    offset SEH_9E5350
0x9E5357: mov     eax, large fs:0
0x9E535D: push    eax
0x9E535E: mov     eax, ___security_cookie
0x9E5363: xor     eax, esp
0x9E5365: push    eax
0x9E5366: lea     eax, [esp+10h+var_C]
0x9E536A: mov     large fs:0, eax
0x9E5370: push    offset off_B11B5C; "1.0, 1.0"
0x9E5375: mov     ecx, offset BlendSettingCollection
0x9E537A: mov     [esp+14h+var_4], 0
0x9E5382: call    SettingCollectionList_AddSetting
0x9E5387: push    offset sub_A1CDF0; void (__cdecl *)()
0x9E538C: call    _atexit
0x9E5391: add     esp, 4
0x9E5394: mov     ecx, [esp+10h+var_C]
0x9E5398: mov     large fs:0, ecx
0x9E539F: pop     ecx
0x9E53A0: add     esp, 0Ch
0x9E53A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9DA0: mov     ecx, offset off_B11B5C; "1.0, 1.0"
0x9B9DA5: jmp     loc_403BC0
0x9B9DAA: mov     edx, [esp+arg_4]
0x9B9DAE: lea     eax, [edx]
0x9B9DB0: mov     ecx, [edx-4]
0x9B9DB3: xor     ecx, eax
0x9B9DB5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9DBA: mov     eax, offset stru_AE401C
0x9B9DBF: jmp     ___CxxFrameHandler3
