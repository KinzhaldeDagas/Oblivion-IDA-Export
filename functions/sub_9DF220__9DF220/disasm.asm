0x9DF220: push    0FFFFFFFFh
0x9DF222: push    offset SEH_9DF220
0x9DF227: mov     eax, large fs:0
0x9DF22D: push    eax
0x9DF22E: mov     eax, ___security_cookie
0x9DF233: xor     eax, esp
0x9DF235: push    eax
0x9DF236: lea     eax, [esp+10h+var_C]
0x9DF23A: mov     large fs:0, eax
0x9DF240: push    offset bBlendLandscapeValue
0x9DF245: mov     ecx, offset INISettingCollection
0x9DF24A: mov     [esp+14h+var_4], 0
0x9DF252: call    SettingCollectionList_AddSetting
0x9DF257: push    offset sub_A19EC0; void (__cdecl *)()
0x9DF25C: call    _atexit
0x9DF261: add     esp, 4
0x9DF264: mov     ecx, [esp+10h+var_C]
0x9DF268: mov     large fs:0, ecx
0x9DF26F: pop     ecx
0x9DF270: add     esp, 0Ch
0x9DF273: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1810: mov     ecx, offset bBlendLandscapeValue
0x9B1815: jmp     loc_403BC0
0x9B181A: mov     edx, [esp+arg_4]
0x9B181E: lea     eax, [edx]
0x9B1820: mov     ecx, [edx-4]
0x9B1823: xor     ecx, eax
0x9B1825: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B182A: mov     eax, offset stru_ADD99C
0x9B182F: jmp     ___CxxFrameHandler3
