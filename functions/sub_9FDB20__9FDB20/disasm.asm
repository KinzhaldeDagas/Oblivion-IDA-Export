0x9FDB20: push    0FFFFFFFFh
0x9FDB22: push    offset SEH_9FDB20
0x9FDB27: mov     eax, large fs:0
0x9FDB2D: push    eax
0x9FDB2E: mov     eax, ___security_cookie
0x9FDB33: xor     eax, esp
0x9FDB35: push    eax
0x9FDB36: lea     eax, [esp+10h+var_C]
0x9FDB3A: mov     large fs:0, eax
0x9FDB40: push    offset bHealthBarShowing_Gameplay
0x9FDB45: mov     ecx, offset INISettingCollection
0x9FDB4A: mov     [esp+14h+var_4], 0
0x9FDB52: call    SettingCollectionList_AddSetting
0x9FDB57: push    offset sub_A25890; void (__cdecl *)()
0x9FDB5C: call    _atexit
0x9FDB61: add     esp, 4
0x9FDB64: mov     ecx, [esp+10h+var_C]
0x9FDB68: mov     large fs:0, ecx
0x9FDB6F: pop     ecx
0x9FDB70: add     esp, 0Ch
0x9FDB73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4300: mov     ecx, offset bHealthBarShowing_Gameplay
0x9C4305: jmp     loc_403BC0
0x9C430A: mov     edx, [esp+arg_4]
0x9C430E: lea     eax, [edx]
0x9C4310: mov     ecx, [edx-4]
0x9C4313: xor     ecx, eax
0x9C4315: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C431A: mov     eax, offset stru_AECCE0
0x9C431F: jmp     ___CxxFrameHandler3
