0x413BE0: push    0FFFFFFFFh
0x413BE2: push    offset EffectItem_BuildDisplayString_SEH
0x413BE7: mov     eax, large fs:0
0x413BED: push    eax
0x413BEE: sub     esp, 78h
0x413BF1: mov     eax, ___security_cookie
0x413BF6: xor     eax, esp
0x413BF8: mov     [esp+84h+var_10], eax
0x413BFC: push    ebx
0x413BFD: push    ebp
0x413BFE: push    esi
0x413BFF: push    edi
0x413C00: mov     eax, ___security_cookie
0x413C05: xor     eax, esp
0x413C07: push    eax
0x413C08: lea     eax, [esp+98h+var_C]
0x413C0F: mov     large fs:0, eax
0x9AB0F0: mov     eax, [ebp-7Ch]
0x9AB0F3: and     eax, 1
0x9AB0F6: jz      locret_9AB108
0x9AB0FC: and     dword ptr [ebp-7Ch], 0FFFFFFFEh
0x9AB100: mov     ecx, [ebp-78h]; void *
0x9AB103: jmp     BSStringT_Clear
0x9AB108: retn
0x9AB109: lea     ecx, [ebp-84h]; void *
0x9AB10F: jmp     BSStringT_Clear
0x9AB114: lea     ecx, [ebp-84h]; void *
0x9AB11A: jmp     BSStringT_Clear
0x9AB11F: mov     edx, [esp+arg_4]
0x9AB123: lea     eax, [edx-88h]
0x9AB129: mov     ecx, [edx-8Ch]
0x9AB12F: xor     ecx, eax
0x9AB131: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB136: add     eax, 10h
0x9AB139: mov     ecx, [edx-4]
0x9AB13C: xor     ecx, eax
0x9AB13E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB143: mov     eax, offset stru_AD8060
0x9AB148: jmp     ___CxxFrameHandler3
