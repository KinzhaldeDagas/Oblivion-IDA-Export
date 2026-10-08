0x9DE440: push    0FFFFFFFFh
0x9DE442: push    offset SEH_9DE440
0x9DE447: mov     eax, large fs:0
0x9DE44D: push    eax
0x9DE44E: mov     eax, ___security_cookie
0x9DE453: xor     eax, esp
0x9DE455: push    eax
0x9DE456: lea     eax, [esp+10h+var_C]
0x9DE45A: mov     large fs:0, eax
0x9DE460: push    offset flt_B06E74
0x9DE465: mov     ecx, offset INISettingCollection
0x9DE46A: mov     [esp+14h+var_4], 0
0x9DE472: call    SettingCollectionList_AddSetting
0x9DE477: push    offset sub_A197D0; void (__cdecl *)()
0x9DE47C: call    _atexit
0x9DE481: add     esp, 4
0x9DE484: mov     ecx, [esp+10h+var_C]
0x9DE488: mov     large fs:0, ecx
0x9DE48F: pop     ecx
0x9DE490: add     esp, 0Ch
0x9DE493: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1120: mov     ecx, offset flt_B06E74
0x9B1125: jmp     loc_403BC0
0x9B112A: mov     edx, [esp+arg_4]
0x9B112E: lea     eax, [edx]
0x9B1130: mov     ecx, [edx-4]
0x9B1133: xor     ecx, eax
0x9B1135: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B113A: mov     eax, offset stru_ADD340
0x9B113F: jmp     ___CxxFrameHandler3
