0x9DE020: push    0FFFFFFFFh
0x9DE022: push    offset SEH_9DE020
0x9DE027: mov     eax, large fs:0
0x9DE02D: push    eax
0x9DE02E: mov     eax, ___security_cookie
0x9DE033: xor     eax, esp
0x9DE035: push    eax
0x9DE036: lea     eax, [esp+10h+var_C]
0x9DE03A: mov     large fs:0, eax
0x9DE040: push    offset flt_B06E1C
0x9DE045: mov     ecx, offset INISettingCollection
0x9DE04A: mov     [esp+14h+var_4], 0
0x9DE052: call    SettingCollectionList_AddSetting
0x9DE057: push    offset sub_A195C0; void (__cdecl *)()
0x9DE05C: call    _atexit
0x9DE061: add     esp, 4
0x9DE064: mov     ecx, [esp+10h+var_C]
0x9DE068: mov     large fs:0, ecx
0x9DE06F: pop     ecx
0x9DE070: add     esp, 0Ch
0x9DE073: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0F10: mov     ecx, offset flt_B06E1C
0x9B0F15: jmp     loc_403BC0
0x9B0F1A: mov     edx, [esp+arg_4]
0x9B0F1E: lea     eax, [edx]
0x9B0F20: mov     ecx, [edx-4]
0x9B0F23: xor     ecx, eax
0x9B0F25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0F2A: mov     eax, offset stru_ADD15C
0x9B0F2F: jmp     ___CxxFrameHandler3
