0x9FAC60: push    0FFFFFFFFh
0x9FAC62: push    offset SEH_9FAC60
0x9FAC67: mov     eax, large fs:0
0x9FAC6D: push    eax
0x9FAC6E: mov     eax, ___security_cookie
0x9FAC73: xor     eax, esp
0x9FAC75: push    eax
0x9FAC76: lea     eax, [esp+10h+var_C]
0x9FAC7A: mov     large fs:0, eax
0x9FAC80: push    offset rDebugTextColor_Menu
0x9FAC85: mov     ecx, offset INISettingCollection
0x9FAC8A: mov     [esp+14h+var_4], 0
0x9FAC92: call    SettingCollectionList_AddSetting
0x9FAC97: push    offset sub_A24280; void (__cdecl *)()
0x9FAC9C: call    _atexit
0x9FACA1: add     esp, 4
0x9FACA4: mov     ecx, [esp+10h+var_C]
0x9FACA8: mov     large fs:0, ecx
0x9FACAF: pop     ecx
0x9FACB0: add     esp, 0Ch
0x9FACB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BDFE0: mov     ecx, offset rDebugTextColor_Menu
0x9BDFE5: jmp     loc_403BC0
0x9BDFEA: mov     edx, [esp+arg_4]
0x9BDFEE: lea     eax, [edx]
0x9BDFF0: mov     ecx, [edx-4]
0x9BDFF3: xor     ecx, eax
0x9BDFF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BDFFA: mov     eax, offset stru_AE77F8
0x9BDFFF: jmp     ___CxxFrameHandler3
