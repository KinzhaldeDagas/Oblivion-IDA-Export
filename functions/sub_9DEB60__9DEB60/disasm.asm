0x9DEB60: push    0FFFFFFFFh
0x9DEB62: push    offset SEH_9DEB60
0x9DEB67: mov     eax, large fs:0
0x9DEB6D: push    eax
0x9DEB6E: mov     eax, ___security_cookie
0x9DEB73: xor     eax, esp
0x9DEB75: push    eax
0x9DEB76: lea     eax, [esp+10h+var_C]
0x9DEB7A: mov     large fs:0, eax
0x9DEB80: push    offset g_bShadowSourceAsReceiverSetting
0x9DEB85: mov     ecx, offset INISettingCollection
0x9DEB8A: mov     [esp+14h+var_4], 0
0x9DEB92: call    SettingCollectionList_AddSetting
0x9DEB97: push    offset sub_A19B60; void (__cdecl *)()
0x9DEB9C: call    _atexit
0x9DEBA1: add     esp, 4
0x9DEBA4: mov     ecx, [esp+10h+var_C]
0x9DEBA8: mov     large fs:0, ecx
0x9DEBAF: pop     ecx
0x9DEBB0: add     esp, 0Ch
0x9DEBB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B14B0: mov     ecx, offset g_bShadowSourceAsReceiverSetting
0x9B14B5: jmp     loc_403BC0
0x9B14BA: mov     edx, [esp+arg_4]
0x9B14BE: lea     eax, [edx]
0x9B14C0: mov     ecx, [edx-4]
0x9B14C3: xor     ecx, eax
0x9B14C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B14CA: mov     eax, offset stru_ADD684
0x9B14CF: jmp     ___CxxFrameHandler3
