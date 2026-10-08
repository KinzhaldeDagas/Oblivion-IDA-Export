0x9D8950: push    0FFFFFFFFh
0x9D8952: push    offset SEH_9D8950
0x9D8957: mov     eax, large fs:0
0x9D895D: push    eax
0x9D895E: mov     eax, ___security_cookie
0x9D8963: xor     eax, esp
0x9D8965: push    eax
0x9D8966: lea     eax, [esp+10h+var_C]
0x9D896A: mov     large fs:0, eax
0x9D8970: push    offset bUSeThreadedMorhper
0x9D8975: mov     ecx, offset INISettingCollection
0x9D897A: mov     [esp+14h+var_4], 0
0x9D8982: call    SettingCollectionList_AddSetting
0x9D8987: push    offset sub_A16A60; void (__cdecl *)()
0x9D898C: call    _atexit
0x9D8991: add     esp, 4
0x9D8994: mov     ecx, [esp+10h+var_C]
0x9D8998: mov     large fs:0, ecx
0x9D899F: pop     ecx
0x9D89A0: add     esp, 0Ch
0x9D89A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA4E0: mov     ecx, offset bUSeThreadedMorhper
0x9AA4E5: jmp     loc_403BC0
0x9AA4EA: mov     edx, [esp+arg_4]
0x9AA4EE: lea     eax, [edx]
0x9AA4F0: mov     ecx, [edx-4]
0x9AA4F3: xor     ecx, eax
0x9AA4F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA4FA: mov     eax, offset stru_AD74BC
0x9AA4FF: jmp     ___CxxFrameHandler3
