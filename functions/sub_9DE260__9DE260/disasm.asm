0x9DE260: push    0FFFFFFFFh
0x9DE262: push    offset SEH_9DE260
0x9DE267: mov     eax, large fs:0
0x9DE26D: push    eax
0x9DE26E: mov     eax, ___security_cookie
0x9DE273: xor     eax, esp
0x9DE275: push    eax
0x9DE276: lea     eax, [esp+10h+var_C]
0x9DE27A: mov     large fs:0, eax
0x9DE280: push    offset OB_INI_fTreeDimmer_BlurShaderHDR_010201A0
0x9DE285: mov     ecx, offset INISettingCollection
0x9DE28A: mov     [esp+14h+var_4], 0
0x9DE292: call    SettingCollectionList_AddSetting
0x9DE297: push    offset sub_A196E0; void (__cdecl *)()
0x9DE29C: call    _atexit
0x9DE2A1: add     esp, 4
0x9DE2A4: mov     ecx, [esp+10h+var_C]
0x9DE2A8: mov     large fs:0, ecx
0x9DE2AF: pop     ecx
0x9DE2B0: add     esp, 0Ch
0x9DE2B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1030: mov     ecx, offset OB_INI_fTreeDimmer_BlurShaderHDR_010201A0
0x9B1035: jmp     loc_403BC0
0x9B103A: mov     edx, [esp+arg_4]
0x9B103E: lea     eax, [edx]
0x9B1040: mov     ecx, [edx-4]
0x9B1043: xor     ecx, eax
0x9B1045: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B104A: mov     eax, offset stru_ADD264
0x9B104F: jmp     ___CxxFrameHandler3
