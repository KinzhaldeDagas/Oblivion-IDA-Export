0x9E3460: push    0FFFFFFFFh
0x9E3462: push    offset SEH_9E3460
0x9E3467: mov     eax, large fs:0
0x9E346D: push    eax
0x9E346E: mov     eax, ___security_cookie
0x9E3473: xor     eax, esp
0x9E3475: push    eax
0x9E3476: lea     eax, [esp+10h+var_C]
0x9E347A: mov     large fs:0, eax
0x9E3480: push    offset fLODQuadMinLoadDistance
0x9E3485: mov     ecx, offset INISettingCollection
0x9E348A: mov     [esp+14h+var_4], 0
0x9E3492: call    SettingCollectionList_AddSetting
0x9E3497: push    offset fLODQuadMinLoadDistance_UnregisterSetting; void (__cdecl *)()
0x9E349C: call    _atexit
0x9E34A1: add     esp, 4
0x9E34A4: mov     ecx, [esp+10h+var_C]
0x9E34A8: mov     large fs:0, ecx
0x9E34AF: pop     ecx
0x9E34B0: add     esp, 0Ch
0x9E34B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6250: mov     ecx, offset fLODQuadMinLoadDistance
0x9B6255: jmp     loc_403BC0
0x9B625A: mov     edx, [esp+arg_4]
0x9B625E: lea     eax, [edx]
0x9B6260: mov     ecx, [edx-4]
0x9B6263: xor     ecx, eax
0x9B6265: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B626A: mov     eax, offset stru_AE117C
0x9B626F: jmp     ___CxxFrameHandler3
