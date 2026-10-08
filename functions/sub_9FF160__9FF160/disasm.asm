0x9FF160: push    0FFFFFFFFh
0x9FF162: push    offset SEH_9FF160
0x9FF167: mov     eax, large fs:0
0x9FF16D: push    eax
0x9FF16E: mov     eax, ___security_cookie
0x9FF173: xor     eax, esp
0x9FF175: push    eax
0x9FF176: lea     eax, [esp+10h+var_C]
0x9FF17A: mov     large fs:0, eax
0x9FF180: push    offset useSoundDebugInfo
0x9FF185: mov     ecx, offset INISettingCollection
0x9FF18A: mov     [esp+14h+var_4], 0
0x9FF192: call    SettingCollectionList_AddSetting
0x9FF197: push    offset sub_A26180; void (__cdecl *)()
0x9FF19C: call    _atexit
0x9FF1A1: add     esp, 4
0x9FF1A4: mov     ecx, [esp+10h+var_C]
0x9FF1A8: mov     large fs:0, ecx
0x9FF1AF: pop     ecx
0x9FF1B0: add     esp, 0Ch
0x9FF1B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C67D0: mov     ecx, offset useSoundDebugInfo
0x9C67D5: jmp     loc_403BC0
0x9C67DA: mov     edx, [esp+arg_4]
0x9C67DE: lea     eax, [edx]
0x9C67E0: mov     ecx, [edx-4]
0x9C67E3: xor     ecx, eax
0x9C67E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C67EA: mov     eax, offset stru_AEECEC
0x9C67EF: jmp     ___CxxFrameHandler3
