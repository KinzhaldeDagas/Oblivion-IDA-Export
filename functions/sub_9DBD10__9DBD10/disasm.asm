0x9DBD10: push    0FFFFFFFFh
0x9DBD12: push    offset SEH_9DBD10
0x9DBD17: mov     eax, large fs:0
0x9DBD1D: push    eax
0x9DBD1E: mov     eax, ___security_cookie
0x9DBD23: xor     eax, esp
0x9DBD25: push    eax
0x9DBD26: lea     eax, [esp+10h+var_C]
0x9DBD2A: mov     large fs:0, eax
0x9DBD30: push    offset Global_DebugSaveBuffer
0x9DBD35: mov     ecx, offset INISettingCollection
0x9DBD3A: mov     [esp+14h+var_4], 0
0x9DBD42: call    SettingCollectionList_AddSetting
0x9DBD47: push    offset sub_A183E0; void (__cdecl *)()
0x9DBD4C: call    _atexit
0x9DBD51: add     esp, 4
0x9DBD54: mov     ecx, [esp+10h+var_C]
0x9DBD58: mov     large fs:0, ecx
0x9DBD5F: pop     ecx
0x9DBD60: add     esp, 0Ch
0x9DBD63: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AE830: mov     ecx, offset Global_DebugSaveBuffer
0x9AE835: jmp     loc_403BC0
0x9AE83A: mov     edx, [esp+arg_4]
0x9AE83E: lea     eax, [edx]
0x9AE840: mov     ecx, [edx-4]
0x9AE843: xor     ecx, eax
0x9AE845: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE84A: mov     eax, offset stru_ADAFCC
0x9AE84F: jmp     ___CxxFrameHandler3
