0x9DEF20: push    0FFFFFFFFh
0x9DEF22: push    offset SEH_9DEF20
0x9DEF27: mov     eax, large fs:0
0x9DEF2D: push    eax
0x9DEF2E: mov     eax, ___security_cookie
0x9DEF33: xor     eax, esp
0x9DEF35: push    eax
0x9DEF36: lea     eax, [esp+10h+var_C]
0x9DEF3A: mov     large fs:0, eax
0x9DEF40: push    offset g_bDecalsOnSkinnedGeometry_Display
0x9DEF45: mov     ecx, offset INISettingCollection
0x9DEF4A: mov     [esp+14h+var_4], 0
0x9DEF52: call    SettingCollectionList_AddSetting
0x9DEF57: push    offset sub_A19D40; void (__cdecl *)()
0x9DEF5C: call    _atexit
0x9DEF61: add     esp, 4
0x9DEF64: mov     ecx, [esp+10h+var_C]
0x9DEF68: mov     large fs:0, ecx
0x9DEF6F: pop     ecx
0x9DEF70: add     esp, 0Ch
0x9DEF73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1690: mov     ecx, offset g_bDecalsOnSkinnedGeometry_Display
0x9B1695: jmp     loc_403BC0
0x9B169A: mov     edx, [esp+arg_4]
0x9B169E: lea     eax, [edx]
0x9B16A0: mov     ecx, [edx-4]
0x9B16A3: xor     ecx, eax
0x9B16A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B16AA: mov     eax, offset stru_ADD83C
0x9B16AF: jmp     ___CxxFrameHandler3
