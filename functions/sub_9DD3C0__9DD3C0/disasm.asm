0x9DD3C0: push    0FFFFFFFFh
0x9DD3C2: push    offset SEH_9DD3C0
0x9DD3C7: mov     eax, large fs:0
0x9DD3CD: push    eax
0x9DD3CE: mov     eax, ___security_cookie
0x9DD3D3: xor     eax, esp
0x9DD3D5: push    eax
0x9DD3D6: lea     eax, [esp+10h+var_C]
0x9DD3DA: mov     large fs:0, eax
0x9DD3E0: push    offset bAllowScreenShot
0x9DD3E5: mov     ecx, offset INISettingCollection
0x9DD3EA: mov     [esp+14h+var_4], 0
0x9DD3F2: call    SettingCollectionList_AddSetting
0x9DD3F7: push    offset sub_A18F90; void (__cdecl *)()
0x9DD3FC: call    _atexit
0x9DD401: add     esp, 4
0x9DD404: mov     ecx, [esp+10h+var_C]
0x9DD408: mov     large fs:0, ecx
0x9DD40F: pop     ecx
0x9DD410: add     esp, 0Ch
0x9DD413: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B08E0: mov     ecx, offset bAllowScreenShot
0x9B08E5: jmp     loc_403BC0
0x9B08EA: mov     edx, [esp+arg_4]
0x9B08EE: lea     eax, [edx]
0x9B08F0: mov     ecx, [edx-4]
0x9B08F3: xor     ecx, eax
0x9B08F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B08FA: mov     eax, offset stru_ADCBB0
0x9B08FF: jmp     ___CxxFrameHandler3
