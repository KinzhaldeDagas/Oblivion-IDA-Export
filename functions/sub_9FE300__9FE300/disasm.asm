0x9FE300: push    0FFFFFFFFh
0x9FE302: push    offset SEH_9FE300
0x9FE307: mov     eax, large fs:0
0x9FE30D: push    eax
0x9FE30E: mov     eax, ___security_cookie
0x9FE313: xor     eax, esp
0x9FE315: push    eax
0x9FE316: lea     eax, [esp+10h+var_C]
0x9FE31A: mov     large fs:0, eax
0x9FE320: push    offset bInvertYValues
0x9FE325: mov     ecx, offset INISettingCollection
0x9FE32A: mov     [esp+14h+var_4], 0
0x9FE332: call    SettingCollectionList_AddSetting
0x9FE337: push    offset sub_A25C80; void (__cdecl *)()
0x9FE33C: call    _atexit
0x9FE341: add     esp, 4
0x9FE344: mov     ecx, [esp+10h+var_C]
0x9FE348: mov     large fs:0, ecx
0x9FE34F: pop     ecx
0x9FE350: add     esp, 0Ch
0x9FE353: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C46F0: mov     ecx, offset bInvertYValues
0x9C46F5: jmp     loc_403BC0
0x9C46FA: mov     edx, [esp+arg_4]
0x9C46FE: lea     eax, [edx]
0x9C4700: mov     ecx, [edx-4]
0x9C4703: xor     ecx, eax
0x9C4705: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C470A: mov     eax, offset stru_AED07C
0x9C470F: jmp     ___CxxFrameHandler3
