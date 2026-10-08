0x9E3ED0: push    0FFFFFFFFh
0x9E3ED2: push    offset SEH_9E3ED0
0x9E3ED7: mov     eax, large fs:0
0x9E3EDD: push    eax
0x9E3EDE: mov     eax, ___security_cookie
0x9E3EE3: xor     eax, esp
0x9E3EE5: push    eax
0x9E3EE6: lea     eax, [esp+10h+var_C]
0x9E3EEA: mov     large fs:0, eax
0x9E3EF0: push    offset byte_B10D3C
0x9E3EF5: mov     ecx, offset INISettingCollection
0x9E3EFA: mov     [esp+14h+var_4], 0
0x9E3F02: call    SettingCollectionList_AddSetting
0x9E3F07: push    offset sub_A1C3B0; void (__cdecl *)()
0x9E3F0C: call    _atexit
0x9E3F11: add     esp, 4
0x9E3F14: mov     ecx, [esp+10h+var_C]
0x9E3F18: mov     large fs:0, ecx
0x9E3F1F: pop     ecx
0x9E3F20: add     esp, 0Ch
0x9E3F23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B8900: mov     ecx, offset byte_B10D3C
0x9B8905: jmp     loc_403BC0
0x9B890A: mov     edx, [esp+arg_4]
0x9B890E: lea     eax, [edx]
0x9B8910: mov     ecx, [edx-4]
0x9B8913: xor     ecx, eax
0x9B8915: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B891A: mov     eax, offset stru_AE2DE8
0x9B891F: jmp     ___CxxFrameHandler3
