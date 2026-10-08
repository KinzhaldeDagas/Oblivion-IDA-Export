0x9FF760: push    0FFFFFFFFh
0x9FF762: push    offset SEH_9FF760
0x9FF767: mov     eax, large fs:0
0x9FF76D: push    eax
0x9FF76E: mov     eax, ___security_cookie
0x9FF773: xor     eax, esp
0x9FF775: push    eax
0x9FF776: lea     eax, [esp+10h+var_C]
0x9FF77A: mov     large fs:0, eax
0x9FF780: push    offset dword_B1629C
0x9FF785: mov     ecx, offset INISettingCollection
0x9FF78A: mov     [esp+14h+var_4], 0
0x9FF792: call    SettingCollectionList_AddSetting
0x9FF797: push    offset sub_A26490; void (__cdecl *)()
0x9FF79C: call    _atexit
0x9FF7A1: add     esp, 4
0x9FF7A4: mov     ecx, [esp+10h+var_C]
0x9FF7A8: mov     large fs:0, ecx
0x9FF7AF: pop     ecx
0x9FF7B0: add     esp, 0Ch
0x9FF7B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6B30: mov     ecx, offset dword_B1629C
0x9C6B35: jmp     loc_403BC0
0x9C6B3A: mov     edx, [esp+arg_4]
0x9C6B3E: lea     eax, [edx]
0x9C6B40: mov     ecx, [edx-4]
0x9C6B43: xor     ecx, eax
0x9C6B45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6B4A: mov     eax, offset stru_AEF004
0x9C6B4F: jmp     ___CxxFrameHandler3
