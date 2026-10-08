0x9F8950: push    0FFFFFFFFh
0x9F8952: push    offset SEH_9F8950
0x9F8957: mov     eax, large fs:0
0x9F895D: push    eax
0x9F895E: mov     eax, ___security_cookie
0x9F8963: xor     eax, esp
0x9F8965: push    eax
0x9F8966: lea     eax, [esp+10h+var_C]
0x9F896A: mov     large fs:0, eax
0x9F8970: push    offset useFaceGenHeads
0x9F8975: mov     ecx, offset INISettingCollection
0x9F897A: mov     [esp+14h+var_4], 0
0x9F8982: call    SettingCollectionList_AddSetting
0x9F8987: push    offset sub_A23310; void (__cdecl *)()
0x9F898C: call    _atexit
0x9F8991: add     esp, 4
0x9F8994: mov     ecx, [esp+10h+var_C]
0x9F8998: mov     large fs:0, ecx
0x9F899F: pop     ecx
0x9F89A0: add     esp, 0Ch
0x9F89A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BC370: mov     ecx, offset useFaceGenHeads
0x9BC375: jmp     loc_403BC0
0x9BC37A: mov     edx, [esp+arg_4]
0x9BC37E: lea     eax, [edx]
0x9BC380: mov     ecx, [edx-4]
0x9BC383: xor     ecx, eax
0x9BC385: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC38A: mov     eax, offset stru_AE5F60
0x9BC38F: jmp     ___CxxFrameHandler3
