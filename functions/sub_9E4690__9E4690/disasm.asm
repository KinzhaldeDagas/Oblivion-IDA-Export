0x9E4690: push    0FFFFFFFFh
0x9E4692: push    offset SEH_9E4690
0x9E4697: mov     eax, large fs:0
0x9E469D: push    eax
0x9E469E: mov     eax, ___security_cookie
0x9E46A3: xor     eax, esp
0x9E46A5: push    eax
0x9E46A6: lea     eax, [esp+10h+var_C]
0x9E46AA: mov     large fs:0, eax
0x9E46B0: push    offset flt_B11A4C
0x9E46B5: mov     ecx, offset BlendSettingCollection
0x9E46BA: mov     [esp+14h+var_4], 0
0x9E46C2: call    SettingCollectionList_AddSetting
0x9E46C7: push    offset sub_A1C790; void (__cdecl *)()
0x9E46CC: call    _atexit
0x9E46D1: add     esp, 4
0x9E46D4: mov     ecx, [esp+10h+var_C]
0x9E46D8: mov     large fs:0, ecx
0x9E46DF: pop     ecx
0x9E46E0: add     esp, 0Ch
0x9E46E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9740: mov     ecx, offset flt_B11A4C
0x9B9745: jmp     loc_403BC0
0x9B974A: mov     edx, [esp+arg_4]
0x9B974E: lea     eax, [edx]
0x9B9750: mov     ecx, [edx-4]
0x9B9753: xor     ecx, eax
0x9B9755: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B975A: mov     eax, offset stru_AE3A44
0x9B975F: jmp     ___CxxFrameHandler3
