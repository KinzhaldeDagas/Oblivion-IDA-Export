0x9E43C0: push    0FFFFFFFFh
0x9E43C2: push    offset SEH_9E43C0
0x9E43C7: mov     eax, large fs:0
0x9E43CD: push    eax
0x9E43CE: mov     eax, ___security_cookie
0x9E43D3: xor     eax, esp
0x9E43D5: push    eax
0x9E43D6: lea     eax, [esp+10h+var_C]
0x9E43DA: mov     large fs:0, eax
0x9E43E0: push    offset dword_B11918
0x9E43E5: mov     ecx, offset INISettingCollection
0x9E43EA: mov     [esp+14h+var_4], 0
0x9E43F2: call    SettingCollectionList_AddSetting
0x9E43F7: push    offset sub_A1C640; void (__cdecl *)()
0x9E43FC: call    _atexit
0x9E4401: add     esp, 4
0x9E4404: mov     ecx, [esp+10h+var_C]
0x9E4408: mov     large fs:0, ecx
0x9E440F: pop     ecx
0x9E4410: add     esp, 0Ch
0x9E4413: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9500: mov     ecx, offset dword_B11918
0x9B9505: jmp     loc_403BC0
0x9B950A: mov     edx, [esp+arg_4]
0x9B950E: lea     eax, [edx]
0x9B9510: mov     ecx, [edx-4]
0x9B9513: xor     ecx, eax
0x9B9515: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B951A: mov     eax, offset stru_AE386C
0x9B951F: jmp     ___CxxFrameHandler3
