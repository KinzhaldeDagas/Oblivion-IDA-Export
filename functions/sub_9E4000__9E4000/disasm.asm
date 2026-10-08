0x9E4000: push    0FFFFFFFFh
0x9E4002: push    offset SEH_9E4000
0x9E4007: mov     eax, large fs:0
0x9E400D: push    eax
0x9E400E: mov     eax, ___security_cookie
0x9E4013: xor     eax, esp
0x9E4015: push    eax
0x9E4016: lea     eax, [esp+10h+var_C]
0x9E401A: mov     large fs:0, eax
0x9E4020: push    offset mp3String
0x9E4025: mov     ecx, offset INISettingCollection
0x9E402A: mov     [esp+14h+var_4], 0
0x9E4032: call    SettingCollectionList_AddSetting
0x9E4037: push    offset sub_A1C3E0; void (__cdecl *)()
0x9E403C: call    _atexit
0x9E4041: add     esp, 4
0x9E4044: mov     ecx, [esp+10h+var_C]
0x9E4048: mov     large fs:0, ecx
0x9E404F: pop     ecx
0x9E4050: add     esp, 0Ch
0x9E4053: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B8990: mov     ecx, offset mp3String
0x9B8995: jmp     loc_403BC0
0x9B899A: mov     edx, [esp+arg_4]
0x9B899E: lea     eax, [edx]
0x9B89A0: mov     ecx, [edx-4]
0x9B89A3: xor     ecx, eax
0x9B89A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B89AA: mov     eax, offset stru_AE2E74
0x9B89AF: jmp     ___CxxFrameHandler3
