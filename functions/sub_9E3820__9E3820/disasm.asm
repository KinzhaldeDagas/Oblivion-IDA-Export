0x9E3820: push    0FFFFFFFFh
0x9E3822: push    offset SEH_9E3820
0x9E3827: mov     eax, large fs:0
0x9E382D: push    eax
0x9E382E: mov     eax, ___security_cookie
0x9E3833: xor     eax, esp
0x9E3835: push    eax
0x9E3836: lea     eax, [esp+10h+var_C]
0x9E383A: mov     large fs:0, eax
0x9E3840: push    offset bForceHideLODLand
0x9E3845: mov     ecx, offset INISettingCollection
0x9E384A: mov     [esp+14h+var_4], 0
0x9E3852: call    SettingCollectionList_AddSetting
0x9E3857: push    offset bForceHideLODLand_UnregisterSetting; void (__cdecl *)()
0x9E385C: call    _atexit
0x9E3861: add     esp, 4
0x9E3864: mov     ecx, [esp+10h+var_C]
0x9E3868: mov     large fs:0, ecx
0x9E386F: pop     ecx
0x9E3870: add     esp, 0Ch
0x9E3873: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6430: mov     ecx, offset bForceHideLODLand
0x9B6435: jmp     loc_403BC0
0x9B643A: mov     edx, [esp+arg_4]
0x9B643E: lea     eax, [edx]
0x9B6440: mov     ecx, [edx-4]
0x9B6443: xor     ecx, eax
0x9B6445: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B644A: mov     eax, offset stru_AE1334
0x9B644F: jmp     ___CxxFrameHandler3
