0x9E50B0: push    0FFFFFFFFh
0x9E50B2: push    offset SEH_9E50B0
0x9E50B7: mov     eax, large fs:0
0x9E50BD: push    eax
0x9E50BE: mov     eax, ___security_cookie
0x9E50C3: xor     eax, esp
0x9E50C5: push    eax
0x9E50C6: lea     eax, [esp+10h+var_C]
0x9E50CA: mov     large fs:0, eax
0x9E50D0: push    offset off_B11B24; "1.0, 1.0"
0x9E50D5: mov     ecx, offset BlendSettingCollection
0x9E50DA: mov     [esp+14h+var_4], 0
0x9E50E2: call    SettingCollectionList_AddSetting
0x9E50E7: push    offset sub_A1CCA0; void (__cdecl *)()
0x9E50EC: call    _atexit
0x9E50F1: add     esp, 4
0x9E50F4: mov     ecx, [esp+10h+var_C]
0x9E50F8: mov     large fs:0, ecx
0x9E50FF: pop     ecx
0x9E5100: add     esp, 0Ch
0x9E5103: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9C50: mov     ecx, offset off_B11B24; "1.0, 1.0"
0x9B9C55: jmp     loc_403BC0
0x9B9C5A: mov     edx, [esp+arg_4]
0x9B9C5E: lea     eax, [edx]
0x9B9C60: mov     ecx, [edx-4]
0x9B9C63: xor     ecx, eax
0x9B9C65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9C6A: mov     eax, offset stru_AE3EE8
0x9B9C6F: jmp     ___CxxFrameHandler3
