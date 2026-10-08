0x9D96E0: push    0FFFFFFFFh
0x9D96E2: push    offset SEH_9D96E0
0x9D96E7: mov     eax, large fs:0
0x9D96ED: push    eax
0x9D96EE: mov     eax, ___security_cookie
0x9D96F3: xor     eax, esp
0x9D96F5: push    eax
0x9D96F6: lea     eax, [esp+10h+var_C]
0x9D96FA: mov     large fs:0, eax
0x9D9700: push    offset off_B030A4; "OblivionIntro.bik"
0x9D9705: mov     ecx, offset INISettingCollection
0x9D970A: mov     [esp+14h+var_4], 0
0x9D9712: call    SettingCollectionList_AddSetting
0x9D9717: push    offset sub_A17120; void (__cdecl *)()
0x9D971C: call    _atexit
0x9D9721: add     esp, 4
0x9D9724: mov     ecx, [esp+10h+var_C]
0x9D9728: mov     large fs:0, ecx
0x9D972F: pop     ecx
0x9D9730: add     esp, 0Ch
0x9D9733: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AABA0: mov     ecx, offset off_B030A4; "OblivionIntro.bik"
0x9AABA5: jmp     loc_403BC0
0x9AABAA: mov     edx, [esp+arg_4]
0x9AABAE: lea     eax, [edx]
0x9AABB0: mov     ecx, [edx-4]
0x9AABB3: xor     ecx, eax
0x9AABB5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AABBA: mov     eax, offset stru_AD7AEC
0x9AABBF: jmp     ___CxxFrameHandler3
