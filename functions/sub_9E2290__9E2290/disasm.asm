0x9E2290: push    0FFFFFFFFh
0x9E2292: push    offset SEH_9E2290
0x9E2297: mov     eax, large fs:0
0x9E229D: push    eax
0x9E229E: mov     eax, ___security_cookie
0x9E22A3: xor     eax, esp
0x9E22A5: push    eax
0x9E22A6: lea     eax, [esp+10h+var_C]
0x9E22AA: mov     large fs:0, eax
0x9E22B0: push    offset bUSeLinear
0x9E22B5: mov     ecx, offset INISettingCollection
0x9E22BA: mov     [esp+14h+var_4], 0
0x9E22C2: call    SettingCollectionList_AddSetting
0x9E22C7: push    offset sub_A1B3F0; void (__cdecl *)()
0x9E22CC: call    _atexit
0x9E22D1: add     esp, 4
0x9E22D4: mov     ecx, [esp+10h+var_C]
0x9E22D8: mov     large fs:0, ecx
0x9E22DF: pop     ecx
0x9E22E0: add     esp, 0Ch
0x9E22E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B3100: mov     ecx, offset bUSeLinear
0x9B3105: jmp     loc_403BC0
0x9B310A: mov     edx, [esp+arg_4]
0x9B310E: lea     eax, [edx]
0x9B3110: mov     ecx, [edx-4]
0x9B3113: xor     ecx, eax
0x9B3115: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B311A: mov     eax, offset stru_ADEE70
0x9B311F: jmp     ___CxxFrameHandler3
