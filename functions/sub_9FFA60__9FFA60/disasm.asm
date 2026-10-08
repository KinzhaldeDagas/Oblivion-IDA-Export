0x9FFA60: push    0FFFFFFFFh
0x9FFA62: push    offset SEH_9FFA60
0x9FFA67: mov     eax, large fs:0
0x9FFA6D: push    eax
0x9FFA6E: mov     eax, ___security_cookie
0x9FFA73: xor     eax, esp
0x9FFA75: push    eax
0x9FFA76: lea     eax, [esp+10h+var_C]
0x9FFA7A: mov     large fs:0, eax
0x9FFA80: push    offset fMediumWeaponSpeedMax_Audio
0x9FFA85: mov     ecx, offset INISettingCollection
0x9FFA8A: mov     [esp+14h+var_4], 0
0x9FFA92: call    SettingCollectionList_AddSetting
0x9FFA97: push    offset sub_A26610; void (__cdecl *)()
0x9FFA9C: call    _atexit
0x9FFAA1: add     esp, 4
0x9FFAA4: mov     ecx, [esp+10h+var_C]
0x9FFAA8: mov     large fs:0, ecx
0x9FFAAF: pop     ecx
0x9FFAB0: add     esp, 0Ch
0x9FFAB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6CB0: mov     ecx, offset fMediumWeaponSpeedMax_Audio
0x9C6CB5: jmp     loc_403BC0
0x9C6CBA: mov     edx, [esp+arg_4]
0x9C6CBE: lea     eax, [edx]
0x9C6CC0: mov     ecx, [edx-4]
0x9C6CC3: xor     ecx, eax
0x9C6CC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6CCA: mov     eax, offset stru_AEF164
0x9C6CCF: jmp     ___CxxFrameHandler3
