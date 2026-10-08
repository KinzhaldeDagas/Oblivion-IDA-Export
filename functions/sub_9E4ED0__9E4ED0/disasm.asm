0x9E4ED0: push    0FFFFFFFFh
0x9E4ED2: push    offset SEH_9E4ED0
0x9E4ED7: mov     eax, large fs:0
0x9E4EDD: push    eax
0x9E4EDE: mov     eax, ___security_cookie
0x9E4EE3: xor     eax, esp
0x9E4EE5: push    eax
0x9E4EE6: lea     eax, [esp+10h+var_C]
0x9E4EEA: mov     large fs:0, eax
0x9E4EF0: push    offset off_B11AFC; "1.0, 1.0"
0x9E4EF5: mov     ecx, offset BlendSettingCollection
0x9E4EFA: mov     [esp+14h+var_4], 0
0x9E4F02: call    SettingCollectionList_AddSetting
0x9E4F07: push    offset sub_A1CBB0; void (__cdecl *)()
0x9E4F0C: call    _atexit
0x9E4F11: add     esp, 4
0x9E4F14: mov     ecx, [esp+10h+var_C]
0x9E4F18: mov     large fs:0, ecx
0x9E4F1F: pop     ecx
0x9E4F20: add     esp, 0Ch
0x9E4F23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9B60: mov     ecx, offset off_B11AFC; "1.0, 1.0"
0x9B9B65: jmp     loc_403BC0
0x9B9B6A: mov     edx, [esp+arg_4]
0x9B9B6E: lea     eax, [edx]
0x9B9B70: mov     ecx, [edx-4]
0x9B9B73: xor     ecx, eax
0x9B9B75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9B7A: mov     eax, offset stru_AE3E0C
0x9B9B7F: jmp     ___CxxFrameHandler3
