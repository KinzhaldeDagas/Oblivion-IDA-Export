0x9DB510: push    0FFFFFFFFh
0x9DB512: push    offset SEH_9DB510
0x9DB517: mov     eax, large fs:0
0x9DB51D: push    eax
0x9DB51E: mov     eax, ___security_cookie
0x9DB523: xor     eax, esp
0x9DB525: push    eax
0x9DB526: lea     eax, [esp+10h+var_C]
0x9DB52A: mov     large fs:0, eax
0x9DB530: push    offset unk_B0524C
0x9DB535: mov     ecx, offset INISettingCollection
0x9DB53A: mov     [esp+14h+var_4], 0
0x9DB542: call    SettingCollectionList_AddSetting
0x9DB547: push    offset sub_A17FE0; void (__cdecl *)()
0x9DB54C: call    _atexit
0x9DB551: add     esp, 4
0x9DB554: mov     ecx, [esp+10h+var_C]
0x9DB558: mov     large fs:0, ecx
0x9DB55F: pop     ecx
0x9DB560: add     esp, 0Ch
0x9DB563: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD570: mov     ecx, offset unk_B0524C
0x9AD575: jmp     loc_403BC0
0x9AD57A: mov     edx, [esp+arg_4]
0x9AD57E: lea     eax, [edx]
0x9AD580: mov     ecx, [edx-4]
0x9AD583: xor     ecx, eax
0x9AD585: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD58A: mov     eax, offset stru_ADA0F0
0x9AD58F: jmp     ___CxxFrameHandler3
