0x9E5950: push    0FFFFFFFFh
0x9E5952: push    offset SEH_9E5950
0x9E5957: mov     eax, large fs:0
0x9E595D: push    eax
0x9E595E: mov     eax, ___security_cookie
0x9E5963: xor     eax, esp
0x9E5965: push    eax
0x9E5966: lea     eax, [esp+10h+var_C]
0x9E596A: mov     large fs:0, eax
0x9E5970: push    offset off_B11BDC; "1.0, 1.0"
0x9E5975: mov     ecx, offset BlendSettingCollection
0x9E597A: mov     [esp+14h+var_4], 0
0x9E5982: call    SettingCollectionList_AddSetting
0x9E5987: push    offset sub_A1D0F0; void (__cdecl *)()
0x9E598C: call    _atexit
0x9E5991: add     esp, 4
0x9E5994: mov     ecx, [esp+10h+var_C]
0x9E5998: mov     large fs:0, ecx
0x9E599F: pop     ecx
0x9E59A0: add     esp, 0Ch
0x9E59A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA0A0: mov     ecx, offset off_B11BDC; "1.0, 1.0"
0x9BA0A5: jmp     loc_403BC0
0x9BA0AA: mov     edx, [esp+arg_4]
0x9BA0AE: lea     eax, [edx]
0x9BA0B0: mov     ecx, [edx-4]
0x9BA0B3: xor     ecx, eax
0x9BA0B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA0BA: mov     eax, offset stru_AE42DC
0x9BA0BF: jmp     ___CxxFrameHandler3
