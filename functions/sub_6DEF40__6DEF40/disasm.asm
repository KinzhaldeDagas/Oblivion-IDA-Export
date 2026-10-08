0x6DEF40: push    0FFFFFFFFh
0x6DEF42: push    offset SEH_8C62B0
0x6DEF47: mov     eax, large fs:0
0x6DEF4D: push    eax
0x6DEF4E: push    ecx
0x6DEF4F: push    esi
0x6DEF50: mov     eax, ds:0B30AACh
0x6DEF55: xor     eax, esp
0x6DEF57: push    eax
0x6DEF58: lea     eax, [esp+18h+var_C]
0x6DEF5C: mov     large fs:0, eax
0x6DEF62: push    44h ; 'D'; Size
0x6DEF64: call    FormHeapAlloc
0x6DEF69: mov     esi, eax
0x6DEF6B: add     esp, 4
0x6DEF6E: mov     [esp+18h+var_10], esi
0x6DEF72: test    esi, esi
0x6DEF74: mov     [esp+18h+var_4], 0
0x6DEF7C: jz      short loc_6DEFA4
0x6DEF7E: mov     ecx, esi
0x6DEF80: call    sub_6ECC00
0x6DEF85: mov     dword ptr [esi], offset ??_7NiMaterialColorController@@6B@; const NiMaterialColorController::`vftable'
0x6DEF8B: mov     word ptr [esi+40h], 0
0x6DEF91: mov     eax, esi
0x6DEF93: mov     ecx, [esp+18h+var_C]
0x6DEF97: mov     large fs:0, ecx
0x6DEF9E: pop     ecx
0x6DEF9F: pop     esi
0x6DEFA0: add     esp, 10h
0x6DEFA3: retn
0x6DEFA4: xor     eax, eax
0x6DEFA6: mov     ecx, [esp+18h+var_C]
0x6DEFAA: mov     large fs:0, ecx
0x6DEFB1: pop     ecx
0x6DEFB2: pop     esi
0x6DEFB3: add     esp, 10h
0x6DEFB6: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
