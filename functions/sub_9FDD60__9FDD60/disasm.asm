0x9FDD60: push    0FFFFFFFFh
0x9FDD62: push    offset SEH_9FDD60
0x9FDD67: mov     eax, large fs:0
0x9FDD6D: push    eax
0x9FDD6E: mov     eax, ___security_cookie
0x9FDD73: xor     eax, esp
0x9FDD75: push    eax
0x9FDD76: lea     eax, [esp+10h+var_C]
0x9FDD7A: mov     large fs:0, eax
0x9FDD80: push    offset fCameraCasterSize
0x9FDD85: mov     ecx, offset INISettingCollection
0x9FDD8A: mov     [esp+14h+var_4], 0
0x9FDD92: call    SettingCollectionList_AddSetting
0x9FDD97: push    offset sub_A259B0; void (__cdecl *)()
0x9FDD9C: call    _atexit
0x9FDDA1: add     esp, 4
0x9FDDA4: mov     ecx, [esp+10h+var_C]
0x9FDDA8: mov     large fs:0, ecx
0x9FDDAF: pop     ecx
0x9FDDB0: add     esp, 0Ch
0x9FDDB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4420: mov     ecx, offset fCameraCasterSize
0x9C4425: jmp     loc_403BC0
0x9C442A: mov     edx, [esp+arg_4]
0x9C442E: lea     eax, [edx]
0x9C4430: mov     ecx, [edx-4]
0x9C4433: xor     ecx, eax
0x9C4435: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C443A: mov     eax, offset stru_AECDE8
0x9C443F: jmp     ___CxxFrameHandler3
