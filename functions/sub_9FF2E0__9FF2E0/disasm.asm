0x9FF2E0: push    0FFFFFFFFh
0x9FF2E2: push    offset SEH_9FF2E0
0x9FF2E7: mov     eax, large fs:0
0x9FF2ED: push    eax
0x9FF2EE: mov     eax, ___security_cookie
0x9FF2F3: xor     eax, esp
0x9FF2F5: push    eax
0x9FF2F6: lea     eax, [esp+10h+var_C]
0x9FF2FA: mov     large fs:0, eax
0x9FF300: push    offset dword_B161E0
0x9FF305: mov     ecx, offset INISettingCollection
0x9FF30A: mov     [esp+14h+var_4], 0
0x9FF312: call    SettingCollectionList_AddSetting
0x9FF317: push    offset sub_A26240; void (__cdecl *)()
0x9FF31C: call    _atexit
0x9FF321: add     esp, 4
0x9FF324: mov     ecx, [esp+10h+var_C]
0x9FF328: mov     large fs:0, ecx
0x9FF32F: pop     ecx
0x9FF330: add     esp, 0Ch
0x9FF333: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6890: mov     ecx, offset dword_B161E0
0x9C6895: jmp     loc_403BC0
0x9C689A: mov     edx, [esp+arg_4]
0x9C689E: lea     eax, [edx]
0x9C68A0: mov     ecx, [edx-4]
0x9C68A3: xor     ecx, eax
0x9C68A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C68AA: mov     eax, offset stru_AEED9C
0x9C68AF: jmp     ___CxxFrameHandler3
