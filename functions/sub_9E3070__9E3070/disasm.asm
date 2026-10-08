0x9E3070: push    0FFFFFFFFh
0x9E3072: push    offset SEH_9E3070
0x9E3077: mov     eax, large fs:0
0x9E307D: push    eax
0x9E307E: mov     eax, ___security_cookie
0x9E3083: xor     eax, esp
0x9E3085: push    eax
0x9E3086: lea     eax, [esp+10h+var_C]
0x9E308A: mov     large fs:0, eax
0x9E3090: push    offset flt_B097C0
0x9E3095: mov     ecx, offset INISettingCollection
0x9E309A: mov     [esp+14h+var_4], 0
0x9E30A2: call    SettingCollectionList_AddSetting
0x9E30A7: push    offset sub_A1BB30; void (__cdecl *)()
0x9E30AC: call    _atexit
0x9E30B1: add     esp, 4
0x9E30B4: mov     ecx, [esp+10h+var_C]
0x9E30B8: mov     large fs:0, ecx
0x9E30BF: pop     ecx
0x9E30C0: add     esp, 0Ch
0x9E30C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B5950: mov     ecx, offset flt_B097C0
0x9B5955: jmp     loc_403BC0
0x9B595A: mov     edx, [esp+arg_4]
0x9B595E: lea     eax, [edx]
0x9B5960: mov     ecx, [edx-4]
0x9B5963: xor     ecx, eax
0x9B5965: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B596A: mov     eax, offset stru_AE0974
0x9B596F: jmp     ___CxxFrameHandler3
