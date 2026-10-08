0x9DB210: push    0FFFFFFFFh
0x9DB212: push    offset SEH_9DB210
0x9DB217: mov     eax, large fs:0
0x9DB21D: push    eax
0x9DB21E: mov     eax, ___security_cookie
0x9DB223: xor     eax, esp
0x9DB225: push    eax
0x9DB226: lea     eax, [esp+10h+var_C]
0x9DB22A: mov     large fs:0, eax
0x9DB230: push    offset fMoveMassLimit
0x9DB235: mov     ecx, offset INISettingCollection
0x9DB23A: mov     [esp+14h+var_4], 0
0x9DB242: call    SettingCollectionList_AddSetting
0x9DB247: push    offset sub_A17E70; void (__cdecl *)()
0x9DB24C: call    _atexit
0x9DB251: add     esp, 4
0x9DB254: mov     ecx, [esp+10h+var_C]
0x9DB258: mov     large fs:0, ecx
0x9DB25F: pop     ecx
0x9DB260: add     esp, 0Ch
0x9DB263: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD420: mov     ecx, offset fMoveMassLimit
0x9AD425: jmp     loc_403BC0
0x9AD42A: mov     edx, [esp+arg_4]
0x9AD42E: lea     eax, [edx]
0x9AD430: mov     ecx, [edx-4]
0x9AD433: xor     ecx, eax
0x9AD435: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD43A: mov     eax, offset stru_AD9FBC
0x9AD43F: jmp     ___CxxFrameHandler3
