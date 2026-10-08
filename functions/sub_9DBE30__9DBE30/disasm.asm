0x9DBE30: push    0FFFFFFFFh
0x9DBE32: push    offset SEH_9DBE30
0x9DBE37: mov     eax, large fs:0
0x9DBE3D: push    eax
0x9DBE3E: mov     eax, ___security_cookie
0x9DBE43: xor     eax, esp
0x9DBE45: push    eax
0x9DBE46: lea     eax, [esp+10h+var_C]
0x9DBE4A: mov     large fs:0, eax
0x9DBE50: push    offset dword_B05BC4
0x9DBE55: mov     ecx, offset INISettingCollection
0x9DBE5A: mov     [esp+14h+var_4], 0
0x9DBE62: call    SettingCollectionList_AddSetting
0x9DBE67: push    offset sub_A18470; void (__cdecl *)()
0x9DBE6C: call    _atexit
0x9DBE71: add     esp, 4
0x9DBE74: mov     ecx, [esp+10h+var_C]
0x9DBE78: mov     large fs:0, ecx
0x9DBE7F: pop     ecx
0x9DBE80: add     esp, 0Ch
0x9DBE83: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AE8C0: mov     ecx, offset dword_B05BC4
0x9AE8C5: jmp     loc_403BC0
0x9AE8CA: mov     edx, [esp+arg_4]
0x9AE8CE: lea     eax, [edx]
0x9AE8D0: mov     ecx, [edx-4]
0x9AE8D3: xor     ecx, eax
0x9AE8D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE8DA: mov     eax, offset stru_ADB050
0x9AE8DF: jmp     ___CxxFrameHandler3
