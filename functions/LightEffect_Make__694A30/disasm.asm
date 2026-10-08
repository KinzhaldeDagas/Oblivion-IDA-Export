0x694A30: push    0FFFFFFFFh
0x694A32: push    offset SEH_8C8900
0x694A37: mov     eax, large fs:0
0x694A3D: push    eax
0x694A3E: push    ecx
0x694A3F: mov     eax, ds:0B30AACh
0x694A44: xor     eax, esp
0x694A46: push    eax
0x694A47: lea     eax, [esp+14h+var_C]
0x694A4B: mov     large fs:0, eax
0x694A51: push    3Ch ; '<'; Size
0x694A53: call    FormHeapAlloc
0x694A58: add     esp, 4
0x694A5B: mov     [esp+14h+var_10], eax
0x694A5F: test    eax, eax
0x694A61: mov     [esp+14h+var_4], 0
0x694A69: jz      short loc_694A91
0x694A6B: mov     ecx, [esp+14h+effectItem]
0x694A6F: mov     edx, [esp+14h+item]
0x694A73: push    ecx; effectItem
0x694A74: mov     ecx, [esp+18h+caster]
0x694A78: push    edx; item
0x694A79: push    ecx; caster
0x694A7A: mov     ecx, eax; self
0x694A7C: call    LightEffect_constr
0x694A81: mov     ecx, [esp+14h+var_C]
0x694A85: mov     large fs:0, ecx
0x694A8C: pop     ecx
0x694A8D: add     esp, 10h
0x694A90: retn
0x694A91: xor     eax, eax
0x694A93: mov     ecx, [esp+14h+var_C]
0x694A97: mov     large fs:0, ecx
0x694A9E: pop     ecx
0x694A9F: add     esp, 10h
0x694AA2: retn
0x9C74D0: mov     eax, [ebp-10h]
0x9C74D3: push    eax
0x9C74D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C74D9: pop     ecx
0x9C74DA: retn
0x9C74DB: mov     edx, [esp+arg_4]
0x9C74DF: lea     eax, [edx-4]
0x9C74E2: mov     ecx, [edx-8]
0x9C74E5: xor     ecx, eax
0x9C74E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C74EC: mov     eax, offset stru_AEF928
0x9C74F1: jmp     ___CxxFrameHandler3
