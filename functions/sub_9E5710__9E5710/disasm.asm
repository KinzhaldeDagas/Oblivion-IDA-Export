0x9E5710: push    0FFFFFFFFh
0x9E5712: push    offset SEH_9E5710
0x9E5717: mov     eax, large fs:0
0x9E571D: push    eax
0x9E571E: mov     eax, ___security_cookie
0x9E5723: xor     eax, esp
0x9E5725: push    eax
0x9E5726: lea     eax, [esp+10h+var_C]
0x9E572A: mov     large fs:0, eax
0x9E5730: push    offset off_B11BAC; "1.0, 1.0"
0x9E5735: mov     ecx, offset BlendSettingCollection
0x9E573A: mov     [esp+14h+var_4], 0
0x9E5742: call    SettingCollectionList_AddSetting
0x9E5747: push    offset sub_A1CFD0; void (__cdecl *)()
0x9E574C: call    _atexit
0x9E5751: add     esp, 4
0x9E5754: mov     ecx, [esp+10h+var_C]
0x9E5758: mov     large fs:0, ecx
0x9E575F: pop     ecx
0x9E5760: add     esp, 0Ch
0x9E5763: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9F80: mov     ecx, offset off_B11BAC; "1.0, 1.0"
0x9B9F85: jmp     loc_403BC0
0x9B9F8A: mov     edx, [esp+arg_4]
0x9B9F8E: lea     eax, [edx]
0x9B9F90: mov     ecx, [edx-4]
0x9B9F93: xor     ecx, eax
0x9B9F95: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9F9A: mov     eax, offset stru_AE41D4
0x9B9F9F: jmp     ___CxxFrameHandler3
