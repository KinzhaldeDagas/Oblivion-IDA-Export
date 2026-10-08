0x9E4AB0: push    0FFFFFFFFh
0x9E4AB2: push    offset SEH_9E4AB0
0x9E4AB7: mov     eax, large fs:0
0x9E4ABD: push    eax
0x9E4ABE: mov     eax, ___security_cookie
0x9E4AC3: xor     eax, esp
0x9E4AC5: push    eax
0x9E4AC6: lea     eax, [esp+10h+var_C]
0x9E4ACA: mov     large fs:0, eax
0x9E4AD0: push    offset off_B11AA4; "0.5, 0.7"
0x9E4AD5: mov     ecx, offset BlendSettingCollection
0x9E4ADA: mov     [esp+14h+var_4], 0
0x9E4AE2: call    SettingCollectionList_AddSetting
0x9E4AE7: push    offset sub_A1C9A0; void (__cdecl *)()
0x9E4AEC: call    _atexit
0x9E4AF1: add     esp, 4
0x9E4AF4: mov     ecx, [esp+10h+var_C]
0x9E4AF8: mov     large fs:0, ecx
0x9E4AFF: pop     ecx
0x9E4B00: add     esp, 0Ch
0x9E4B03: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9950: mov     ecx, offset off_B11AA4; "0.5, 0.7"
0x9B9955: jmp     loc_403BC0
0x9B995A: mov     edx, [esp+arg_4]
0x9B995E: lea     eax, [edx]
0x9B9960: mov     ecx, [edx-4]
0x9B9963: xor     ecx, eax
0x9B9965: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B996A: mov     eax, offset stru_AE3C28
0x9B996F: jmp     ___CxxFrameHandler3
