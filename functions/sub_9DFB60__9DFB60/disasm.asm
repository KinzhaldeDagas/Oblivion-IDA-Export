0x9DFB60: push    0FFFFFFFFh
0x9DFB62: push    offset SEH_9DFB60
0x9DFB67: mov     eax, large fs:0
0x9DFB6D: push    eax
0x9DFB6E: mov     eax, ___security_cookie
0x9DFB73: xor     eax, esp
0x9DFB75: push    eax
0x9DFB76: lea     eax, [esp+10h+var_C]
0x9DFB7A: mov     large fs:0, eax
0x9DFB80: push    offset byte_B07090
0x9DFB85: mov     ecx, offset INISettingCollection
0x9DFB8A: mov     [esp+14h+var_4], 0
0x9DFB92: call    SettingCollectionList_AddSetting
0x9DFB97: push    offset sub_A1A3C0; void (__cdecl *)()
0x9DFB9C: call    _atexit
0x9DFBA1: add     esp, 4
0x9DFBA4: mov     ecx, [esp+10h+var_C]
0x9DFBA8: mov     large fs:0, ecx
0x9DFBAF: pop     ecx
0x9DFBB0: add     esp, 0Ch
0x9DFBB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1EB0: mov     ecx, offset byte_B07090
0x9B1EB5: jmp     loc_403BC0
0x9B1EBA: mov     edx, [esp+arg_4]
0x9B1EBE: lea     eax, [edx]
0x9B1EC0: mov     ecx, [edx-4]
0x9B1EC3: xor     ecx, eax
0x9B1EC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1ECA: mov     eax, offset stru_ADDF30
0x9B1ECF: jmp     ___CxxFrameHandler3
