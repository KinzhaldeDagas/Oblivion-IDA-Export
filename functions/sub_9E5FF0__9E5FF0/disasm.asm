0x9E5FF0: push    0FFFFFFFFh
0x9E5FF2: push    offset SEH_9E5FF0
0x9E5FF7: mov     eax, large fs:0
0x9E5FFD: push    eax
0x9E5FFE: mov     eax, ___security_cookie
0x9E6003: xor     eax, esp
0x9E6005: push    eax
0x9E6006: lea     eax, [esp+10h+var_C]
0x9E600A: mov     large fs:0, eax
0x9E6010: push    offset byte_B11DE4
0x9E6015: mov     ecx, offset INISettingCollection
0x9E601A: mov     [esp+14h+var_4], 0
0x9E6022: call    SettingCollectionList_AddSetting
0x9E6027: push    offset sub_A1D3B0; void (__cdecl *)()
0x9E602C: call    _atexit
0x9E6031: add     esp, 4
0x9E6034: mov     ecx, [esp+10h+var_C]
0x9E6038: mov     large fs:0, ecx
0x9E603F: pop     ecx
0x9E6040: add     esp, 0Ch
0x9E6043: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA620: mov     ecx, offset byte_B11DE4
0x9BA625: jmp     loc_403BC0
0x9BA62A: mov     edx, [esp+arg_4]
0x9BA62E: lea     eax, [edx]
0x9BA630: mov     ecx, [edx-4]
0x9BA633: xor     ecx, eax
0x9BA635: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA63A: mov     eax, offset stru_AE4754
0x9BA63F: jmp     ___CxxFrameHandler3
