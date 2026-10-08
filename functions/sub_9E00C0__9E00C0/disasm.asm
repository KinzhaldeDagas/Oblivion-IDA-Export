0x9E00C0: push    0FFFFFFFFh
0x9E00C2: push    offset SEH_9E00C0
0x9E00C7: mov     eax, large fs:0
0x9E00CD: push    eax
0x9E00CE: mov     eax, ___security_cookie
0x9E00D3: xor     eax, esp
0x9E00D5: push    eax
0x9E00D6: lea     eax, [esp+10h+var_C]
0x9E00DA: mov     large fs:0, eax
0x9E00E0: push    offset dword_B07280
0x9E00E5: mov     ecx, offset INISettingCollection
0x9E00EA: mov     [esp+14h+var_4], 0
0x9E00F2: call    SettingCollectionList_AddSetting
0x9E00F7: push    offset sub_A1A6C0; void (__cdecl *)()
0x9E00FC: call    _atexit
0x9E0101: add     esp, 4
0x9E0104: mov     ecx, [esp+10h+var_C]
0x9E0108: mov     large fs:0, ecx
0x9E010F: pop     ecx
0x9E0110: add     esp, 0Ch
0x9E0113: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2250: mov     ecx, offset dword_B07280
0x9B2255: jmp     loc_403BC0
0x9B225A: mov     edx, [esp+arg_4]
0x9B225E: lea     eax, [edx]
0x9B2260: mov     ecx, [edx-4]
0x9B2263: xor     ecx, eax
0x9B2265: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B226A: mov     eax, offset stru_ADE270
0x9B226F: jmp     ___CxxFrameHandler3
