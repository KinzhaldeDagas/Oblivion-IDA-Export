0x9DD000: push    0FFFFFFFFh
0x9DD002: push    offset SEH_9DD000
0x9DD007: mov     eax, large fs:0
0x9DD00D: push    eax
0x9DD00E: mov     eax, ___security_cookie
0x9DD013: xor     eax, esp
0x9DD015: push    eax
0x9DD016: lea     eax, [esp+10h+var_C]
0x9DD01A: mov     large fs:0, eax
0x9DD020: push    offset bDoImageSpaceEffect
0x9DD025: mov     ecx, offset INISettingCollection
0x9DD02A: mov     [esp+14h+var_4], 0
0x9DD032: call    SettingCollectionList_AddSetting
0x9DD037: push    offset sub_A18DB0; void (__cdecl *)()
0x9DD03C: call    _atexit
0x9DD041: add     esp, 4
0x9DD044: mov     ecx, [esp+10h+var_C]
0x9DD048: mov     large fs:0, ecx
0x9DD04F: pop     ecx
0x9DD050: add     esp, 0Ch
0x9DD053: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0700: mov     ecx, offset bDoImageSpaceEffect
0x9B0705: jmp     loc_403BC0
0x9B070A: mov     edx, [esp+arg_4]
0x9B070E: lea     eax, [edx]
0x9B0710: mov     ecx, [edx-4]
0x9B0713: xor     ecx, eax
0x9B0715: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B071A: mov     eax, offset stru_ADC9F8
0x9B071F: jmp     ___CxxFrameHandler3
