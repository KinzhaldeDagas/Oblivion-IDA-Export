0x9DEF80: push    0FFFFFFFFh
0x9DEF82: push    offset SEH_9DEF80
0x9DEF87: mov     eax, large fs:0
0x9DEF8D: push    eax
0x9DEF8E: mov     eax, ___security_cookie
0x9DEF93: xor     eax, esp
0x9DEF95: push    eax
0x9DEF96: lea     eax, [esp+10h+var_C]
0x9DEF9A: mov     large fs:0, eax
0x9DEFA0: push    offset flt_B06F64; fGamma:Display INI value; requested render gamma at B06C2C is copied here by Renderer_ApplyPendingGammaRamp.
0x9DEFA5: mov     ecx, offset INISettingCollection
0x9DEFAA: mov     [esp+14h+var_4], 0
0x9DEFB2: call    SettingCollectionList_AddSetting
0x9DEFB7: push    offset sub_A19D70; void (__cdecl *)()
0x9DEFBC: call    _atexit
0x9DEFC1: add     esp, 4
0x9DEFC4: mov     ecx, [esp+10h+var_C]
0x9DEFC8: mov     large fs:0, ecx
0x9DEFCF: pop     ecx
0x9DEFD0: add     esp, 0Ch
0x9DEFD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B16C0: mov     ecx, offset flt_B06F64; fGamma:Display INI value; requested render gamma at B06C2C is copied here by Renderer_ApplyPendingGammaRamp.
0x9B16C5: jmp     loc_403BC0
0x9B16CA: mov     edx, [esp+arg_4]
0x9B16CE: lea     eax, [edx]
0x9B16D0: mov     ecx, [edx-4]
0x9B16D3: xor     ecx, eax
0x9B16D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B16DA: mov     eax, offset stru_ADD868
0x9B16DF: jmp     ___CxxFrameHandler3
