0x9DD4E0: push    0FFFFFFFFh
0x9DD4E2: push    offset SEH_9DD4E0
0x9DD4E7: mov     eax, large fs:0
0x9DD4ED: push    eax
0x9DD4EE: mov     eax, ___security_cookie
0x9DD4F3: xor     eax, esp
0x9DD4F5: push    eax
0x9DD4F6: lea     eax, [esp+10h+var_C]
0x9DD4FA: mov     large fs:0, eax
0x9DD500: push    offset dword_B06D2C
0x9DD505: mov     ecx, offset INISettingCollection
0x9DD50A: mov     [esp+14h+var_4], 0
0x9DD512: call    SettingCollectionList_AddSetting
0x9DD517: push    offset sub_A19020; void (__cdecl *)()
0x9DD51C: call    _atexit
0x9DD521: add     esp, 4
0x9DD524: mov     ecx, [esp+10h+var_C]
0x9DD528: mov     large fs:0, ecx
0x9DD52F: pop     ecx
0x9DD530: add     esp, 0Ch
0x9DD533: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0970: mov     ecx, offset dword_B06D2C
0x9B0975: jmp     loc_403BC0
0x9B097A: mov     edx, [esp+arg_4]
0x9B097E: lea     eax, [edx]
0x9B0980: mov     ecx, [edx-4]
0x9B0983: xor     ecx, eax
0x9B0985: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B098A: mov     eax, offset stru_ADCC34
0x9B098F: jmp     ___CxxFrameHandler3
