0x9D8710: push    0FFFFFFFFh
0x9D8712: push    offset SEH_9D8710
0x9D8717: mov     eax, large fs:0
0x9D871D: push    eax
0x9D871E: mov     eax, ___security_cookie
0x9D8723: xor     eax, esp
0x9D8725: push    eax
0x9D8726: lea     eax, [esp+10h+var_C]
0x9D872A: mov     large fs:0, eax
0x9D8730: push    offset right
0x9D8735: mov     ecx, offset INISettingCollection
0x9D873A: mov     [esp+14h+var_4], 0
0x9D8742: call    SettingCollectionList_AddSetting
0x9D8747: push    offset sub_A16940; void (__cdecl *)()
0x9D874C: call    _atexit
0x9D8751: add     esp, 4
0x9D8754: mov     ecx, [esp+10h+var_C]
0x9D8758: mov     large fs:0, ecx
0x9D875F: pop     ecx
0x9D8760: add     esp, 0Ch
0x9D8763: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA3C0: mov     ecx, offset right
0x9AA3C5: jmp     loc_403BC0
0x9AA3CA: mov     edx, [esp+arg_4]
0x9AA3CE: lea     eax, [edx]
0x9AA3D0: mov     ecx, [edx-4]
0x9AA3D3: xor     ecx, eax
0x9AA3D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA3DA: mov     eax, offset stru_AD73B4
0x9AA3DF: jmp     ___CxxFrameHandler3
