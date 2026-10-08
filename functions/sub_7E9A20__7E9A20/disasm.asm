0x7E9A20: push    0FFFFFFFFh
0x7E9A22: push    offset SEH_7E9A20
0x7E9A27: mov     eax, large fs:0
0x7E9A2D: push    eax
0x7E9A2E: sub     esp, 0Ch
0x7E9A31: push    ebx
0x7E9A32: push    esi
0x7E9A33: push    edi
0x7E9A34: mov     eax, ds:0B30AACh
0x7E9A39: xor     eax, esp
0x7E9A3B: push    eax
0x7E9A3C: lea     eax, [esp+28h+var_C]
0x7E9A40: mov     large fs:0, eax
0x7E9A46: mov     [esp+28h+var_10], ecx
0x7E9A4A: lea     edi, [ecx+7Ch]
0x7E9A4D: mov     [esp+28h+var_18], 3
0x7E9A55: or      ebx, 0FFFFFFFFh
0x7E9A58: jmp     short loc_7E9A60
0x7E9A60: lea     eax, [esp+28h+var_14]
0x7E9A64: push    eax
0x7E9A65: call    NiD3DPassPool_Acquire; Acquire a renderer-owned NiD3DPass from the global pass pool and return it with a reference.
0x7E9A6A: add     esp, 4
0x7E9A6D: mov     esi, eax
0x7E9A6F: mov     ecx, [edi]
0x7E9A71: cmp     ecx, [esi]
0x7E9A73: mov     [esp+28h+var_4], 0
0x7E9A7B: jz      short loc_7E9A97
0x7E9A7D: test    ecx, ecx
0x7E9A7F: jz      short loc_7E9A8B
0x7E9A81: add     [ecx+60h], ebx
0x7E9A84: jnz     short loc_7E9A8B
0x7E9A86: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7E9A8B: mov     eax, [esi]
0x7E9A8D: test    eax, eax
0x7E9A8F: mov     [edi], eax
0x7E9A91: jz      short loc_7E9A97
0x7E9A93: add     dword ptr [eax+60h], 1
0x7E9A97: mov     eax, [esp+28h+var_14]
0x7E9A9B: test    eax, eax
0x7E9A9D: mov     [esp+28h+var_4], ebx
0x7E9AA1: jz      short loc_7E9AB5
0x7E9AA3: add     [eax+60h], ebx
0x7E9AA6: mov     ecx, eax
0x7E9AA8: add     eax, 60h ; '`'
0x7E9AAB: cmp     dword ptr [eax], 0
0x7E9AAE: jnz     short loc_7E9AB5
0x7E9AB0: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7E9AB5: add     edi, 4
0x7E9AB8: sub     [esp+28h+var_18], 1
0x7E9ABD: jnz     short loc_7E9A60
0x7E9ABF: mov     ecx, [esp+28h+var_10]
0x7E9AC3: call    sub_7E7F70
0x7E9AC8: mov     al, 1
0x7E9ACA: mov     ecx, [esp+28h+var_C]
0x7E9ACE: mov     large fs:0, ecx
0x7E9AD5: pop     ecx
0x7E9AD6: pop     edi
0x7E9AD7: pop     esi
0x7E9AD8: pop     ebx
0x7E9AD9: add     esp, 18h
0x7E9ADC: retn
0x9D0AC0: lea     ecx, [ebp-14h]; void *
0x9D0AC3: jmp     sub_4027D0
0x9D0AC8: mov     edx, [esp+arg_4]
0x9D0ACC: lea     eax, [edx-18h]
0x9D0ACF: mov     ecx, [edx-1Ch]
0x9D0AD2: xor     ecx, eax
0x9D0AD4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0AD9: mov     eax, offset stru_AF9368
0x9D0ADE: jmp     ___CxxFrameHandler3
