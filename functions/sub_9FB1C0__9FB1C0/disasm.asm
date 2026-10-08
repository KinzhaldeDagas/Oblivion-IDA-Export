0x9FB1C0: push    0FFFFFFFFh
0x9FB1C2: push    offset SEH_9FB1C0
0x9FB1C7: mov     eax, large fs:0
0x9FB1CD: push    eax
0x9FB1CE: mov     eax, ___security_cookie
0x9FB1D3: xor     eax, esp
0x9FB1D5: push    eax
0x9FB1D6: lea     eax, [esp+10h+var_C]
0x9FB1DA: mov     large fs:0, eax
0x9FB1E0: push    offset byte_B13238
0x9FB1E5: mov     ecx, offset INISettingCollection
0x9FB1EA: mov     [esp+14h+var_4], 0
0x9FB1F2: call    SettingCollectionList_AddSetting
0x9FB1F7: push    offset sub_A24520; void (__cdecl *)()
0x9FB1FC: call    _atexit
0x9FB201: add     esp, 4
0x9FB204: mov     ecx, [esp+10h+var_C]
0x9FB208: mov     large fs:0, ecx
0x9FB20F: pop     ecx
0x9FB210: add     esp, 0Ch
0x9FB213: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BE970: mov     ecx, offset byte_B13238
0x9BE975: jmp     loc_403BC0
0x9BE97A: mov     edx, [esp+arg_4]
0x9BE97E: lea     eax, [edx]
0x9BE980: mov     ecx, [edx-4]
0x9BE983: xor     ecx, eax
0x9BE985: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE98A: mov     eax, offset stru_AE8050
0x9BE98F: jmp     ___CxxFrameHandler3
