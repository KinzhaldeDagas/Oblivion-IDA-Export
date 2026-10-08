0x9D8020: push    0FFFFFFFFh; [Controller decode 2026-07-09] Registers bUseJoystick:Controls with the INI setting collection.
0x9D8022: push    offset SEH_9D8020
0x9D8027: mov     eax, large fs:0
0x9D802D: push    eax
0x9D802E: mov     eax, ___security_cookie
0x9D8033: xor     eax, esp
0x9D8035: push    eax
0x9D8036: lea     eax, [esp+10h+var_C]
0x9D803A: mov     large fs:0, eax
0x9D8040: push    offset bUseJoystick
0x9D8045: mov     ecx, offset INISettingCollection
0x9D804A: mov     [esp+14h+var_4], 0
0x9D8052: call    SettingCollectionList_AddSetting
0x9D8057: push    offset INISetting_Destroy_bUseJoystick; void (__cdecl *)()
0x9D805C: call    _atexit
0x9D8061: add     esp, 4
0x9D8064: mov     ecx, [esp+10h+var_C]
0x9D8068: mov     large fs:0, ecx
0x9D806F: pop     ecx
0x9D8070: add     esp, 0Ch
0x9D8073: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9A9DF0: mov     ecx, offset bUseJoystick
0x9A9DF5: jmp     loc_403BC0
0x9A9DFA: mov     edx, [esp+arg_4]
0x9A9DFE: lea     eax, [edx]
0x9A9E00: mov     ecx, [edx-4]
0x9A9E03: xor     ecx, eax
0x9A9E05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A9E0A: mov     eax, offset stru_AD6E9C
0x9A9E0F: jmp     ___CxxFrameHandler3
