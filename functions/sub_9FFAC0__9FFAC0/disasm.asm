0x9FFAC0: push    0FFFFFFFFh
0x9FFAC2: push    offset SEH_9FFAC0
0x9FFAC7: mov     eax, large fs:0
0x9FFACD: push    eax
0x9FFACE: mov     eax, ___security_cookie
0x9FFAD3: xor     eax, esp
0x9FFAD5: push    eax
0x9FFAD6: lea     eax, [esp+10h+var_C]
0x9FFADA: mov     large fs:0, eax
0x9FFAE0: push    offset fLargeWeaponSpeedMax_Audio
0x9FFAE5: mov     ecx, offset INISettingCollection
0x9FFAEA: mov     [esp+14h+var_4], 0
0x9FFAF2: call    SettingCollectionList_AddSetting
0x9FFAF7: push    offset sub_A26640; void (__cdecl *)()
0x9FFAFC: call    _atexit
0x9FFB01: add     esp, 4
0x9FFB04: mov     ecx, [esp+10h+var_C]
0x9FFB08: mov     large fs:0, ecx
0x9FFB0F: pop     ecx
0x9FFB10: add     esp, 0Ch
0x9FFB13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6CE0: mov     ecx, offset fLargeWeaponSpeedMax_Audio
0x9C6CE5: jmp     loc_403BC0
0x9C6CEA: mov     edx, [esp+arg_4]
0x9C6CEE: lea     eax, [edx]
0x9C6CF0: mov     ecx, [edx-4]
0x9C6CF3: xor     ecx, eax
0x9C6CF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6CFA: mov     eax, offset stru_AEF190
0x9C6CFF: jmp     ___CxxFrameHandler3
