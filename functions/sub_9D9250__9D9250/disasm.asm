0x9D9250: push    0FFFFFFFFh
0x9D9252: push    offset SEH_9D9250
0x9D9257: mov     eax, large fs:0
0x9D925D: push    eax
0x9D925E: mov     eax, ___security_cookie
0x9D9263: xor     eax, esp
0x9D9265: push    eax
0x9D9266: lea     eax, [esp+10h+var_C]
0x9D926A: mov     large fs:0, eax
0x9D9270: push    offset lpText
0x9D9275: mov     ecx, offset INISettingCollection
0x9D927A: mov     [esp+14h+var_4], 0
0x9D9282: call    SettingCollectionList_AddSetting
0x9D9287: push    offset sub_A16EE0; void (__cdecl *)()
0x9D928C: call    _atexit
0x9D9291: add     esp, 4
0x9D9294: mov     ecx, [esp+10h+var_C]
0x9D9298: mov     large fs:0, ecx
0x9D929F: pop     ecx
0x9D92A0: add     esp, 0Ch
0x9D92A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA960: mov     ecx, offset lpText
0x9AA965: jmp     loc_403BC0
0x9AA96A: mov     edx, [esp+arg_4]
0x9AA96E: lea     eax, [edx]
0x9AA970: mov     ecx, [edx-4]
0x9AA973: xor     ecx, eax
0x9AA975: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA97A: mov     eax, offset stru_AD78DC
0x9AA97F: jmp     ___CxxFrameHandler3
