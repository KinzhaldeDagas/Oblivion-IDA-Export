0x9D9310: push    0FFFFFFFFh
0x9D9312: push    offset SEH_9D9310
0x9D9317: mov     eax, large fs:0
0x9D931D: push    eax
0x9D931E: mov     eax, ___security_cookie
0x9D9323: xor     eax, esp
0x9D9325: push    eax
0x9D9326: lea     eax, [esp+10h+var_C]
0x9D932A: mov     large fs:0, eax
0x9D9330: push    offset off_B02DF0; "Insert the Oblivion Disc."
0x9D9335: mov     ecx, offset INISettingCollection
0x9D933A: mov     [esp+14h+var_4], 0
0x9D9342: call    SettingCollectionList_AddSetting
0x9D9347: push    offset sub_A16F40; void (__cdecl *)()
0x9D934C: call    _atexit
0x9D9351: add     esp, 4
0x9D9354: mov     ecx, [esp+10h+var_C]
0x9D9358: mov     large fs:0, ecx
0x9D935F: pop     ecx
0x9D9360: add     esp, 0Ch
0x9D9363: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA9C0: mov     ecx, offset off_B02DF0; "Insert the Oblivion Disc."
0x9AA9C5: jmp     loc_403BC0
0x9AA9CA: mov     edx, [esp+arg_4]
0x9AA9CE: lea     eax, [edx]
0x9AA9D0: mov     ecx, [edx-4]
0x9AA9D3: xor     ecx, eax
0x9AA9D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA9DA: mov     eax, offset stru_AD7934
0x9AA9DF: jmp     ___CxxFrameHandler3
