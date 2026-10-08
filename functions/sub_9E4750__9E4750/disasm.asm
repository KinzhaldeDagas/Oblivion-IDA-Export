0x9E4750: push    0FFFFFFFFh
0x9E4752: push    offset SEH_9E4750
0x9E4757: mov     eax, large fs:0
0x9E475D: push    eax
0x9E475E: mov     eax, ___security_cookie
0x9E4763: xor     eax, esp
0x9E4765: push    eax
0x9E4766: lea     eax, [esp+10h+var_C]
0x9E476A: mov     large fs:0, eax
0x9E4770: push    offset flt_B11A5C
0x9E4775: mov     ecx, offset BlendSettingCollection
0x9E477A: mov     [esp+14h+var_4], 0
0x9E4782: call    SettingCollectionList_AddSetting
0x9E4787: push    offset sub_A1C7F0; void (__cdecl *)()
0x9E478C: call    _atexit
0x9E4791: add     esp, 4
0x9E4794: mov     ecx, [esp+10h+var_C]
0x9E4798: mov     large fs:0, ecx
0x9E479F: pop     ecx
0x9E47A0: add     esp, 0Ch
0x9E47A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B97A0: mov     ecx, offset flt_B11A5C
0x9B97A5: jmp     loc_403BC0
0x9B97AA: mov     edx, [esp+arg_4]
0x9B97AE: lea     eax, [edx]
0x9B97B0: mov     ecx, [edx-4]
0x9B97B3: xor     ecx, eax
0x9B97B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B97BA: mov     eax, offset stru_AE3A9C
0x9B97BF: jmp     ___CxxFrameHandler3
