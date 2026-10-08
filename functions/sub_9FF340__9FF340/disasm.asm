0x9FF340: push    0FFFFFFFFh
0x9FF342: push    offset SEH_9FF340
0x9FF347: mov     eax, large fs:0
0x9FF34D: push    eax
0x9FF34E: mov     eax, ___security_cookie
0x9FF353: xor     eax, esp
0x9FF355: push    eax
0x9FF356: lea     eax, [esp+10h+var_C]
0x9FF35A: mov     large fs:0, eax
0x9FF360: push    offset dword_B16244
0x9FF365: mov     ecx, offset INISettingCollection
0x9FF36A: mov     [esp+14h+var_4], 0
0x9FF372: call    SettingCollectionList_AddSetting
0x9FF377: push    offset sub_A26280; void (__cdecl *)()
0x9FF37C: call    _atexit
0x9FF381: add     esp, 4
0x9FF384: mov     ecx, [esp+10h+var_C]
0x9FF388: mov     large fs:0, ecx
0x9FF38F: pop     ecx
0x9FF390: add     esp, 0Ch
0x9FF393: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6920: mov     ecx, offset dword_B16244
0x9C6925: jmp     loc_403BC0
0x9C692A: mov     edx, [esp+arg_4]
0x9C692E: lea     eax, [edx]
0x9C6930: mov     ecx, [edx-4]
0x9C6933: xor     ecx, eax
0x9C6935: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C693A: mov     eax, offset stru_AEEE20
0x9C693F: jmp     ___CxxFrameHandler3
