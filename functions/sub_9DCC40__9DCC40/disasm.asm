0x9DCC40: push    0FFFFFFFFh
0x9DCC42: push    offset SEH_9DCC40
0x9DCC47: mov     eax, large fs:0
0x9DCC4D: push    eax
0x9DCC4E: mov     eax, ___security_cookie
0x9DCC53: xor     eax, esp
0x9DCC55: push    eax
0x9DCC56: lea     eax, [esp+10h+var_C]
0x9DCC5A: mov     large fs:0, eax
0x9DCC60: push    offset g_bFullScreen
0x9DCC65: mov     ecx, offset INISettingCollection
0x9DCC6A: mov     [esp+14h+var_4], 0
0x9DCC72: call    SettingCollectionList_AddSetting
0x9DCC77: push    offset sub_A18BD0; void (__cdecl *)()
0x9DCC7C: call    _atexit
0x9DCC81: add     esp, 4
0x9DCC84: mov     ecx, [esp+10h+var_C]
0x9DCC88: mov     large fs:0, ecx
0x9DCC8F: pop     ecx
0x9DCC90: add     esp, 0Ch
0x9DCC93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0520: mov     ecx, offset g_bFullScreen
0x9B0525: jmp     loc_403BC0
0x9B052A: mov     edx, [esp+arg_4]
0x9B052E: lea     eax, [edx]
0x9B0530: mov     ecx, [edx-4]
0x9B0533: xor     ecx, eax
0x9B0535: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B053A: mov     eax, offset stru_ADC840
0x9B053F: jmp     ___CxxFrameHandler3
