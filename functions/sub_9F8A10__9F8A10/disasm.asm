0x9F8A10: push    0FFFFFFFFh
0x9F8A12: push    offset SEH_9F8A10
0x9F8A17: mov     eax, large fs:0
0x9F8A1D: push    eax
0x9F8A1E: mov     eax, ___security_cookie
0x9F8A23: xor     eax, esp
0x9F8A25: push    eax
0x9F8A26: lea     eax, [esp+10h+var_C]
0x9F8A2A: mov     large fs:0, eax
0x9F8A30: push    offset useFaceGenLODF
0x9F8A35: mov     ecx, offset INISettingCollection
0x9F8A3A: mov     [esp+14h+var_4], 0
0x9F8A42: call    SettingCollectionList_AddSetting
0x9F8A47: push    offset sub_A23370; void (__cdecl *)()
0x9F8A4C: call    _atexit
0x9F8A51: add     esp, 4
0x9F8A54: mov     ecx, [esp+10h+var_C]
0x9F8A58: mov     large fs:0, ecx
0x9F8A5F: pop     ecx
0x9F8A60: add     esp, 0Ch
0x9F8A63: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BC3D0: mov     ecx, offset useFaceGenLODF
0x9BC3D5: jmp     loc_403BC0
0x9BC3DA: mov     edx, [esp+arg_4]
0x9BC3DE: lea     eax, [edx]
0x9BC3E0: mov     ecx, [edx-4]
0x9BC3E3: xor     ecx, eax
0x9BC3E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC3EA: mov     eax, offset stru_AE5FB8
0x9BC3EF: jmp     ___CxxFrameHandler3
