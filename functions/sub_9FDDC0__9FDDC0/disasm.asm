0x9FDDC0: push    0FFFFFFFFh
0x9FDDC2: push    offset SEH_9FDDC0
0x9FDDC7: mov     eax, large fs:0
0x9FDDCD: push    eax
0x9FDDCE: mov     eax, ___security_cookie
0x9FDDD3: xor     eax, esp
0x9FDDD5: push    eax
0x9FDDD6: lea     eax, [esp+10h+var_C]
0x9FDDDA: mov     large fs:0, eax
0x9FDDE0: push    offset iJoystickMoveFrontBack
0x9FDDE5: mov     ecx, offset INISettingCollection
0x9FDDEA: mov     [esp+14h+var_4], 0
0x9FDDF2: call    SettingCollectionList_AddSetting
0x9FDDF7: push    offset sub_A259E0; void (__cdecl *)()
0x9FDDFC: call    _atexit
0x9FDE01: add     esp, 4
0x9FDE04: mov     ecx, [esp+10h+var_C]
0x9FDE08: mov     large fs:0, ecx
0x9FDE0F: pop     ecx
0x9FDE10: add     esp, 0Ch
0x9FDE13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4450: mov     ecx, offset iJoystickMoveFrontBack
0x9C4455: jmp     loc_403BC0
0x9C445A: mov     edx, [esp+arg_4]
0x9C445E: lea     eax, [edx]
0x9C4460: mov     ecx, [edx-4]
0x9C4463: xor     ecx, eax
0x9C4465: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C446A: mov     eax, offset stru_AECE14
0x9C446F: jmp     ___CxxFrameHandler3
