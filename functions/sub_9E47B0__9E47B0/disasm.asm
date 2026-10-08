0x9E47B0: push    0FFFFFFFFh
0x9E47B2: push    offset SEH_9E47B0
0x9E47B7: mov     eax, large fs:0
0x9E47BD: push    eax
0x9E47BE: mov     eax, ___security_cookie
0x9E47C3: xor     eax, esp
0x9E47C5: push    eax
0x9E47C6: lea     eax, [esp+10h+var_C]
0x9E47CA: mov     large fs:0, eax
0x9E47D0: push    offset off_B11A64; "Bip01 Spine2"
0x9E47D5: mov     ecx, offset BlendSettingCollection
0x9E47DA: mov     [esp+14h+var_4], 0
0x9E47E2: call    SettingCollectionList_AddSetting
0x9E47E7: push    offset sub_A1C820; void (__cdecl *)()
0x9E47EC: call    _atexit
0x9E47F1: add     esp, 4
0x9E47F4: mov     ecx, [esp+10h+var_C]
0x9E47F8: mov     large fs:0, ecx
0x9E47FF: pop     ecx
0x9E4800: add     esp, 0Ch
0x9E4803: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B97D0: mov     ecx, offset off_B11A64; "Bip01 Spine2"
0x9B97D5: jmp     loc_403BC0
0x9B97DA: mov     edx, [esp+arg_4]
0x9B97DE: lea     eax, [edx]
0x9B97E0: mov     ecx, [edx-4]
0x9B97E3: xor     ecx, eax
0x9B97E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B97EA: mov     eax, offset stru_AE3AC8
0x9B97EF: jmp     ___CxxFrameHandler3
