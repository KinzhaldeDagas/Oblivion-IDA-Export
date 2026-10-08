0x9E2A50: push    0FFFFFFFFh
0x9E2A52: push    offset SEH_9E2A50
0x9E2A57: mov     eax, large fs:0
0x9E2A5D: push    eax
0x9E2A5E: mov     eax, ___security_cookie
0x9E2A63: xor     eax, esp
0x9E2A65: push    eax
0x9E2A66: lea     eax, [esp+10h+var_C]
0x9E2A6A: mov     large fs:0, eax
0x9E2A70: push    offset byte_B08960
0x9E2A75: mov     ecx, offset INISettingCollection
0x9E2A7A: mov     [esp+14h+var_4], 0
0x9E2A82: call    SettingCollectionList_AddSetting
0x9E2A87: push    offset sub_A1B7E0; void (__cdecl *)()
0x9E2A8C: call    _atexit
0x9E2A91: add     esp, 4
0x9E2A94: mov     ecx, [esp+10h+var_C]
0x9E2A98: mov     large fs:0, ecx
0x9E2A9F: pop     ecx
0x9E2AA0: add     esp, 0Ch
0x9E2AA3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B4590: mov     ecx, offset byte_B08960
0x9B4595: jmp     loc_403BC0
0x9B459A: mov     edx, [esp+arg_4]
0x9B459E: lea     eax, [edx]
0x9B45A0: mov     ecx, [edx-4]
0x9B45A3: xor     ecx, eax
0x9B45A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B45AA: mov     eax, offset stru_ADFC2C
0x9B45AF: jmp     ___CxxFrameHandler3
