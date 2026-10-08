0x9DFC20: push    0FFFFFFFFh
0x9DFC22: push    offset SEH_9DFC20
0x9DFC27: mov     eax, large fs:0
0x9DFC2D: push    eax
0x9DFC2E: mov     eax, ___security_cookie
0x9DFC33: xor     eax, esp
0x9DFC35: push    eax
0x9DFC36: lea     eax, [esp+10h+var_C]
0x9DFC3A: mov     large fs:0, eax
0x9DFC40: push    offset useWaterDepth
0x9DFC45: mov     ecx, offset INISettingCollection
0x9DFC4A: mov     [esp+14h+var_4], 0
0x9DFC52: call    SettingCollectionList_AddSetting
0x9DFC57: push    offset sub_A1A420; void (__cdecl *)()
0x9DFC5C: call    _atexit
0x9DFC61: add     esp, 4
0x9DFC64: mov     ecx, [esp+10h+var_C]
0x9DFC68: mov     large fs:0, ecx
0x9DFC6F: pop     ecx
0x9DFC70: add     esp, 0Ch
0x9DFC73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1F10: mov     ecx, offset useWaterDepth
0x9B1F15: jmp     loc_403BC0
0x9B1F1A: mov     edx, [esp+arg_4]
0x9B1F1E: lea     eax, [edx]
0x9B1F20: mov     ecx, [edx-4]
0x9B1F23: xor     ecx, eax
0x9B1F25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1F2A: mov     eax, offset stru_ADDF88
0x9B1F2F: jmp     ___CxxFrameHandler3
