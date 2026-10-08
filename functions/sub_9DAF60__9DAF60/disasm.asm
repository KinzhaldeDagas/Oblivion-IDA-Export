0x9DAF60: push    0FFFFFFFFh
0x9DAF62: push    offset SEH_9DAF60
0x9DAF67: mov     eax, large fs:0
0x9DAF6D: push    eax
0x9DAF6E: mov     eax, ___security_cookie
0x9DAF73: xor     eax, esp
0x9DAF75: push    eax
0x9DAF76: lea     eax, [esp+10h+var_C]
0x9DAF7A: mov     large fs:0, eax
0x9DAF80: mov     ecx, uGridsToLoad
0x9DAF86: lea     eax, [ecx+2]
0x9DAF89: imul    eax, ecx
0x9DAF8C: add     eax, 1
0x9DAF8F: mov     uExteriorCellBuffer, eax
0x9DAF94: push    offset uExteriorCellBuffer
0x9DAF99: mov     ecx, offset INISettingCollection
0x9DAF9E: mov     [esp+14h+var_4], 0
0x9DAFA6: call    SettingCollectionList_AddSetting
0x9DAFAB: push    offset sub_A17D20; void (__cdecl *)()
0x9DAFB0: call    _atexit
0x9DAFB5: add     esp, 4
0x9DAFB8: mov     ecx, [esp+10h+var_C]
0x9DAFBC: mov     large fs:0, ecx
0x9DAFC3: pop     ecx
0x9DAFC4: add     esp, 0Ch
0x9DAFC7: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD2D0: mov     ecx, offset uExteriorCellBuffer
0x9AD2D5: jmp     loc_403BC0
0x9AD2DA: mov     edx, [esp+arg_4]
0x9AD2DE: lea     eax, [edx]
0x9AD2E0: mov     ecx, [edx-4]
0x9AD2E3: xor     ecx, eax
0x9AD2E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD2EA: mov     eax, offset stru_AD9E88
0x9AD2EF: jmp     ___CxxFrameHandler3
