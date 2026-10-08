0x9FFC40: push    0FFFFFFFFh
0x9FFC42: push    offset SEH_9FFC40
0x9FFC47: mov     eax, large fs:0
0x9FFC4D: push    eax
0x9FFC4E: mov     eax, ___security_cookie
0x9FFC53: xor     eax, esp
0x9FFC55: push    eax
0x9FFC56: lea     eax, [esp+10h+var_C]
0x9FFC5A: mov     large fs:0, eax
0x9FFC60: push    offset dword_B16304
0x9FFC65: mov     ecx, offset INISettingCollection
0x9FFC6A: mov     [esp+14h+var_4], 0
0x9FFC72: call    SettingCollectionList_AddSetting
0x9FFC77: push    offset sub_A26700; void (__cdecl *)()
0x9FFC7C: call    _atexit
0x9FFC81: add     esp, 4
0x9FFC84: mov     ecx, [esp+10h+var_C]
0x9FFC88: mov     large fs:0, ecx
0x9FFC8F: pop     ecx
0x9FFC90: add     esp, 0Ch
0x9FFC93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6DA0: mov     ecx, offset dword_B16304
0x9C6DA5: jmp     loc_403BC0
0x9C6DAA: mov     edx, [esp+arg_4]
0x9C6DAE: lea     eax, [edx]
0x9C6DB0: mov     ecx, [edx-4]
0x9C6DB3: xor     ecx, eax
0x9C6DB5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6DBA: mov     eax, offset stru_AEF240
0x9C6DBF: jmp     ___CxxFrameHandler3
