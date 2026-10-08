0x9E3220: push    0FFFFFFFFh
0x9E3222: push    offset SEH_9E3220
0x9E3227: mov     eax, large fs:0
0x9E322D: push    eax
0x9E322E: mov     eax, ___security_cookie
0x9E3233: xor     eax, esp
0x9E3235: push    eax
0x9E3236: lea     eax, [esp+10h+var_C]
0x9E323A: mov     large fs:0, eax
0x9E3240: push    offset byte_B097E0
0x9E3245: mov     ecx, offset INISettingCollection
0x9E324A: mov     [esp+14h+var_4], 0
0x9E3252: call    SettingCollectionList_AddSetting
0x9E3257: push    offset sub_A1BBF0; void (__cdecl *)()
0x9E325C: call    _atexit
0x9E3261: add     esp, 4
0x9E3264: mov     ecx, [esp+10h+var_C]
0x9E3268: mov     large fs:0, ecx
0x9E326F: pop     ecx
0x9E3270: add     esp, 0Ch
0x9E3273: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B5A10: mov     ecx, offset byte_B097E0
0x9B5A15: jmp     loc_403BC0
0x9B5A1A: mov     edx, [esp+arg_4]
0x9B5A1E: lea     eax, [edx]
0x9B5A20: mov     ecx, [edx-4]
0x9B5A23: xor     ecx, eax
0x9B5A25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5A2A: mov     eax, offset stru_AE0A24
0x9B5A2F: jmp     ___CxxFrameHandler3
