0x9DE3E0: push    0FFFFFFFFh
0x9DE3E2: push    offset SEH_9DE3E0
0x9DE3E7: mov     eax, large fs:0
0x9DE3ED: push    eax
0x9DE3EE: mov     eax, ___security_cookie
0x9DE3F3: xor     eax, esp
0x9DE3F5: push    eax
0x9DE3F6: lea     eax, [esp+10h+var_C]
0x9DE3FA: mov     large fs:0, eax
0x9DE400: push    offset dword_B06E6C
0x9DE405: mov     ecx, offset INISettingCollection
0x9DE40A: mov     [esp+14h+var_4], 0
0x9DE412: call    SettingCollectionList_AddSetting
0x9DE417: push    offset sub_A197A0; void (__cdecl *)()
0x9DE41C: call    _atexit
0x9DE421: add     esp, 4
0x9DE424: mov     ecx, [esp+10h+var_C]
0x9DE428: mov     large fs:0, ecx
0x9DE42F: pop     ecx
0x9DE430: add     esp, 0Ch
0x9DE433: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B10F0: mov     ecx, offset dword_B06E6C
0x9B10F5: jmp     loc_403BC0
0x9B10FA: mov     edx, [esp+arg_4]
0x9B10FE: lea     eax, [edx]
0x9B1100: mov     ecx, [edx-4]
0x9B1103: xor     ecx, eax
0x9B1105: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B110A: mov     eax, offset stru_ADD314
0x9B110F: jmp     ___CxxFrameHandler3
