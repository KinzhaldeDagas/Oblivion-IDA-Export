0x9FAE00: push    0FFFFFFFFh
0x9FAE02: push    offset SEH_9FAE00
0x9FAE07: mov     eax, large fs:0
0x9FAE0D: push    eax
0x9FAE0E: mov     eax, ___security_cookie
0x9FAE13: xor     eax, esp
0x9FAE15: push    eax
0x9FAE16: lea     eax, [esp+10h+var_C]
0x9FAE1A: mov     large fs:0, eax
0x9FAE20: push    offset off_B12E2C; "Data\\Fonts\\Tahoma_Bold_Small.fnt"
0x9FAE25: mov     ecx, offset INISettingCollection
0x9FAE2A: mov     [esp+14h+var_4], 0
0x9FAE32: call    SettingCollectionList_AddSetting
0x9FAE37: push    offset sub_A24340; void (__cdecl *)()
0x9FAE3C: call    _atexit
0x9FAE41: add     esp, 4
0x9FAE44: mov     ecx, [esp+10h+var_C]
0x9FAE48: mov     large fs:0, ecx
0x9FAE4F: pop     ecx
0x9FAE50: add     esp, 0Ch
0x9FAE53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BE760: mov     ecx, offset off_B12E2C; "Data\\Fonts\\Tahoma_Bold_Small.fnt"
0x9BE765: jmp     loc_403BC0
0x9BE76A: mov     edx, [esp+arg_4]
0x9BE76E: lea     eax, [edx]
0x9BE770: mov     ecx, [edx-4]
0x9BE773: xor     ecx, eax
0x9BE775: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE77A: mov     eax, offset stru_AE7E6C
0x9BE77F: jmp     ___CxxFrameHandler3
