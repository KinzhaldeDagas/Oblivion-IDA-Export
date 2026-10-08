0x9FBA70: push    0FFFFFFFFh
0x9FBA72: push    offset SEH_9FBA70
0x9FBA77: mov     eax, large fs:0
0x9FBA7D: push    eax
0x9FBA7E: mov     eax, ___security_cookie
0x9FBA83: xor     eax, esp
0x9FBA85: push    eax
0x9FBA86: lea     eax, [esp+10h+var_C]
0x9FBA8A: mov     large fs:0, eax
0x9FBA90: push    offset dword_B13984
0x9FBA95: mov     ecx, offset INISettingCollection
0x9FBA9A: mov     [esp+14h+var_4], 0
0x9FBAA2: call    SettingCollectionList_AddSetting
0x9FBAA7: push    offset sub_A24950; void (__cdecl *)()
0x9FBAAC: call    _atexit
0x9FBAB1: add     esp, 4
0x9FBAB4: mov     ecx, [esp+10h+var_C]
0x9FBAB8: mov     large fs:0, ecx
0x9FBABF: pop     ecx
0x9FBAC0: add     esp, 0Ch
0x9FBAC3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BF3A0: mov     ecx, offset dword_B13984
0x9BF3A5: jmp     loc_403BC0
0x9BF3AA: mov     edx, [esp+arg_4]
0x9BF3AE: lea     eax, [edx]
0x9BF3B0: mov     ecx, [edx-4]
0x9BF3B3: xor     ecx, eax
0x9BF3B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF3BA: mov     eax, offset stru_AE8948
0x9BF3BF: jmp     ___CxxFrameHandler3
