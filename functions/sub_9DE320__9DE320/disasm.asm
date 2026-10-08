0x9DE320: push    0FFFFFFFFh
0x9DE322: push    offset SEH_9DE320
0x9DE327: mov     eax, large fs:0
0x9DE32D: push    eax
0x9DE32E: mov     eax, ___security_cookie
0x9DE333: xor     eax, esp
0x9DE335: push    eax
0x9DE336: lea     eax, [esp+10h+var_C]
0x9DE33A: mov     large fs:0, eax
0x9DE340: push    offset flt_B06E5C
0x9DE345: mov     ecx, offset INISettingCollection
0x9DE34A: mov     [esp+14h+var_4], 0
0x9DE352: call    SettingCollectionList_AddSetting
0x9DE357: push    offset sub_A19740; void (__cdecl *)()
0x9DE35C: call    _atexit
0x9DE361: add     esp, 4
0x9DE364: mov     ecx, [esp+10h+var_C]
0x9DE368: mov     large fs:0, ecx
0x9DE36F: pop     ecx
0x9DE370: add     esp, 0Ch
0x9DE373: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1090: mov     ecx, offset flt_B06E5C
0x9B1095: jmp     loc_403BC0
0x9B109A: mov     edx, [esp+arg_4]
0x9B109E: lea     eax, [edx]
0x9B10A0: mov     ecx, [edx-4]
0x9B10A3: xor     ecx, eax
0x9B10A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B10AA: mov     eax, offset stru_ADD2BC
0x9B10AF: jmp     ___CxxFrameHandler3
