0x9E4CF0: push    0FFFFFFFFh
0x9E4CF2: push    offset SEH_9E4CF0
0x9E4CF7: mov     eax, large fs:0
0x9E4CFD: push    eax
0x9E4CFE: mov     eax, ___security_cookie
0x9E4D03: xor     eax, esp
0x9E4D05: push    eax
0x9E4D06: lea     eax, [esp+10h+var_C]
0x9E4D0A: mov     large fs:0, eax
0x9E4D10: push    offset off_B11AD4; "1.0, 1.0"
0x9E4D15: mov     ecx, offset BlendSettingCollection
0x9E4D1A: mov     [esp+14h+var_4], 0
0x9E4D22: call    SettingCollectionList_AddSetting
0x9E4D27: push    offset sub_A1CAC0; void (__cdecl *)()
0x9E4D2C: call    _atexit
0x9E4D31: add     esp, 4
0x9E4D34: mov     ecx, [esp+10h+var_C]
0x9E4D38: mov     large fs:0, ecx
0x9E4D3F: pop     ecx
0x9E4D40: add     esp, 0Ch
0x9E4D43: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9A70: mov     ecx, offset off_B11AD4; "1.0, 1.0"
0x9B9A75: jmp     loc_403BC0
0x9B9A7A: mov     edx, [esp+arg_4]
0x9B9A7E: lea     eax, [edx]
0x9B9A80: mov     ecx, [edx-4]
0x9B9A83: xor     ecx, eax
0x9B9A85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9A8A: mov     eax, offset stru_AE3D30
0x9B9A8F: jmp     ___CxxFrameHandler3
