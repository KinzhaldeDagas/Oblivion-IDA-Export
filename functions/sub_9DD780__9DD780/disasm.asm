0x9DD780: push    0FFFFFFFFh
0x9DD782: push    offset SEH_9DD780
0x9DD787: mov     eax, large fs:0
0x9DD78D: push    eax
0x9DD78E: mov     eax, ___security_cookie
0x9DD793: xor     eax, esp
0x9DD795: push    eax
0x9DD796: lea     eax, [esp+10h+var_C]
0x9DD79A: mov     large fs:0, eax
0x9DD7A0: push    offset flt_B06D64
0x9DD7A5: mov     ecx, offset INISettingCollection
0x9DD7AA: mov     [esp+14h+var_4], 0
0x9DD7B2: call    SettingCollectionList_AddSetting
0x9DD7B7: push    offset sub_A19170; void (__cdecl *)()
0x9DD7BC: call    _atexit
0x9DD7C1: add     esp, 4
0x9DD7C4: mov     ecx, [esp+10h+var_C]
0x9DD7C8: mov     large fs:0, ecx
0x9DD7CF: pop     ecx
0x9DD7D0: add     esp, 0Ch
0x9DD7D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0AC0: mov     ecx, offset flt_B06D64
0x9B0AC5: jmp     loc_403BC0
0x9B0ACA: mov     edx, [esp+arg_4]
0x9B0ACE: lea     eax, [edx]
0x9B0AD0: mov     ecx, [edx-4]
0x9B0AD3: xor     ecx, eax
0x9B0AD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0ADA: mov     eax, offset stru_ADCD68
0x9B0ADF: jmp     ___CxxFrameHandler3
