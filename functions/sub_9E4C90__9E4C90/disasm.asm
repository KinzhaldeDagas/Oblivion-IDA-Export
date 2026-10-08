0x9E4C90: push    0FFFFFFFFh
0x9E4C92: push    offset SEH_9E4C90
0x9E4C97: mov     eax, large fs:0
0x9E4C9D: push    eax
0x9E4C9E: mov     eax, ___security_cookie
0x9E4CA3: xor     eax, esp
0x9E4CA5: push    eax
0x9E4CA6: lea     eax, [esp+10h+var_C]
0x9E4CAA: mov     large fs:0, eax
0x9E4CB0: push    offset off_B11ACC; "Bip01 Head"
0x9E4CB5: mov     ecx, offset BlendSettingCollection
0x9E4CBA: mov     [esp+14h+var_4], 0
0x9E4CC2: call    SettingCollectionList_AddSetting
0x9E4CC7: push    offset sub_A1CA90; void (__cdecl *)()
0x9E4CCC: call    _atexit
0x9E4CD1: add     esp, 4
0x9E4CD4: mov     ecx, [esp+10h+var_C]
0x9E4CD8: mov     large fs:0, ecx
0x9E4CDF: pop     ecx
0x9E4CE0: add     esp, 0Ch
0x9E4CE3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9A40: mov     ecx, offset off_B11ACC; "Bip01 Head"
0x9B9A45: jmp     loc_403BC0
0x9B9A4A: mov     edx, [esp+arg_4]
0x9B9A4E: lea     eax, [edx]
0x9B9A50: mov     ecx, [edx-4]
0x9B9A53: xor     ecx, eax
0x9B9A55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9A5A: mov     eax, offset stru_AE3D04
0x9B9A5F: jmp     ___CxxFrameHandler3
