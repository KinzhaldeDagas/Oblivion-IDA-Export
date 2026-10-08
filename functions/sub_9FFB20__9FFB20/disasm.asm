0x9FFB20: push    0FFFFFFFFh
0x9FFB22: push    offset SEH_9FFB20
0x9FFB27: mov     eax, large fs:0
0x9FFB2D: push    eax
0x9FFB2E: mov     eax, ___security_cookie
0x9FFB33: xor     eax, esp
0x9FFB35: push    eax
0x9FFB36: lea     eax, [esp+10h+var_C]
0x9FFB3A: mov     large fs:0, eax
0x9FFB40: push    offset byte_B162EC
0x9FFB45: mov     ecx, offset INISettingCollection
0x9FFB4A: mov     [esp+14h+var_4], 0
0x9FFB52: call    SettingCollectionList_AddSetting
0x9FFB57: push    offset sub_A26670; void (__cdecl *)()
0x9FFB5C: call    _atexit
0x9FFB61: add     esp, 4
0x9FFB64: mov     ecx, [esp+10h+var_C]
0x9FFB68: mov     large fs:0, ecx
0x9FFB6F: pop     ecx
0x9FFB70: add     esp, 0Ch
0x9FFB73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6D10: mov     ecx, offset byte_B162EC
0x9C6D15: jmp     loc_403BC0
0x9C6D1A: mov     edx, [esp+arg_4]
0x9C6D1E: lea     eax, [edx]
0x9C6D20: mov     ecx, [edx-4]
0x9C6D23: xor     ecx, eax
0x9C6D25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6D2A: mov     eax, offset stru_AEF1BC
0x9C6D2F: jmp     ___CxxFrameHandler3
