0x9FF4C0: push    0FFFFFFFFh
0x9FF4C2: push    offset SEH_9FF4C0
0x9FF4C7: mov     eax, large fs:0
0x9FF4CD: push    eax
0x9FF4CE: mov     eax, ___security_cookie
0x9FF4D3: xor     eax, esp
0x9FF4D5: push    eax
0x9FF4D6: lea     eax, [esp+10h+var_C]
0x9FF4DA: mov     large fs:0, eax
0x9FF4E0: push    offset dword_B16264
0x9FF4E5: mov     ecx, offset INISettingCollection
0x9FF4EA: mov     [esp+14h+var_4], 0
0x9FF4F2: call    SettingCollectionList_AddSetting
0x9FF4F7: push    offset sub_A26340; void (__cdecl *)()
0x9FF4FC: call    _atexit
0x9FF501: add     esp, 4
0x9FF504: mov     ecx, [esp+10h+var_C]
0x9FF508: mov     large fs:0, ecx
0x9FF50F: pop     ecx
0x9FF510: add     esp, 0Ch
0x9FF513: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C69E0: mov     ecx, offset dword_B16264
0x9C69E5: jmp     loc_403BC0
0x9C69EA: mov     edx, [esp+arg_4]
0x9C69EE: lea     eax, [edx]
0x9C69F0: mov     ecx, [edx-4]
0x9C69F3: xor     ecx, eax
0x9C69F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C69FA: mov     eax, offset stru_AEEED0
0x9C69FF: jmp     ___CxxFrameHandler3
