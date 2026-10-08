0x9E40C0: push    0FFFFFFFFh
0x9E40C2: push    offset SEH_9E40C0
0x9E40C7: mov     eax, large fs:0
0x9E40CD: push    eax
0x9E40CE: mov     eax, ___security_cookie
0x9E40D3: xor     eax, esp
0x9E40D5: push    eax
0x9E40D6: lea     eax, [esp+10h+var_C]
0x9E40DA: mov     large fs:0, eax
0x9E40E0: push    offset off_B10D70
0x9E40E5: mov     ecx, offset INISettingCollection
0x9E40EA: mov     [esp+14h+var_4], 0
0x9E40F2: call    SettingCollectionList_AddSetting
0x9E40F7: push    offset sub_A1C440; void (__cdecl *)()
0x9E40FC: call    _atexit
0x9E4101: add     esp, 4
0x9E4104: mov     ecx, [esp+10h+var_C]
0x9E4108: mov     large fs:0, ecx
0x9E410F: pop     ecx
0x9E4110: add     esp, 0Ch
0x9E4113: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B89F0: mov     ecx, offset off_B10D70
0x9B89F5: jmp     loc_403BC0
0x9B89FA: mov     edx, [esp+arg_4]
0x9B89FE: lea     eax, [edx]
0x9B8A00: mov     ecx, [edx-4]
0x9B8A03: xor     ecx, eax
0x9B8A05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8A0A: mov     eax, offset stru_AE2ECC
0x9B8A0F: jmp     ___CxxFrameHandler3
