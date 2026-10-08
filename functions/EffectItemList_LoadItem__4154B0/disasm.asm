0x4154B0: push    0FFFFFFFFh
0x4154B2: push    offset EffectItemList_LoadItem_SEH
0x4154B7: mov     eax, large fs:0
0x4154BD: push    eax
0x4154BE: sub     esp, 14h
0x4154C1: push    ebx
0x4154C2: push    ebp
0x4154C3: push    esi
0x4154C4: push    edi
0x4154C5: mov     eax, ___security_cookie
0x4154CA: xor     eax, esp
0x4154CC: push    eax
0x4154CD: lea     eax, [esp+34h+var_C]
0x4154D1: mov     large fs:0, eax
0x9AB240: mov     eax, [ebp-1Ch]
0x9AB243: push    eax
0x9AB244: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB249: pop     ecx
0x9AB24A: retn
0x9AB24B: lea     ecx, [ebp-14h]; void *
0x9AB24E: jmp     BSStringT_Clear
0x9AB253: lea     ecx, [ebp-1Ch]; void *
0x9AB256: jmp     BSStringT_Clear
0x9AB25B: mov     edx, [esp+arg_4]
0x9AB25F: lea     eax, [edx-24h]
0x9AB262: mov     ecx, [edx-28h]
0x9AB265: xor     ecx, eax
0x9AB267: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB26C: mov     eax, offset stru_AD81A4
0x9AB271: jmp     ___CxxFrameHandler3
