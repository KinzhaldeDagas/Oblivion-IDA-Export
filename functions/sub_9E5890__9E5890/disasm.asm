0x9E5890: push    0FFFFFFFFh
0x9E5892: push    offset SEH_9E5890
0x9E5897: mov     eax, large fs:0
0x9E589D: push    eax
0x9E589E: mov     eax, ___security_cookie
0x9E58A3: xor     eax, esp
0x9E58A5: push    eax
0x9E58A6: lea     eax, [esp+10h+var_C]
0x9E58AA: mov     large fs:0, eax
0x9E58B0: push    offset off_B11BCC; "1.0, 1.0"
0x9E58B5: mov     ecx, offset BlendSettingCollection
0x9E58BA: mov     [esp+14h+var_4], 0
0x9E58C2: call    SettingCollectionList_AddSetting
0x9E58C7: push    offset sub_A1D090; void (__cdecl *)()
0x9E58CC: call    _atexit
0x9E58D1: add     esp, 4
0x9E58D4: mov     ecx, [esp+10h+var_C]
0x9E58D8: mov     large fs:0, ecx
0x9E58DF: pop     ecx
0x9E58E0: add     esp, 0Ch
0x9E58E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA040: mov     ecx, offset off_B11BCC; "1.0, 1.0"
0x9BA045: jmp     loc_403BC0
0x9BA04A: mov     edx, [esp+arg_4]
0x9BA04E: lea     eax, [edx]
0x9BA050: mov     ecx, [edx-4]
0x9BA053: xor     ecx, eax
0x9BA055: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA05A: mov     eax, offset stru_AE4284
0x9BA05F: jmp     ___CxxFrameHandler3
