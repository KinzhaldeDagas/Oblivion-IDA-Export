0x721230: push    0FFFFFFFFh
0x721232: push    offset SEH_8C8970
0x721237: mov     eax, large fs:0
0x72123D: push    eax
0x72123E: push    ecx
0x72123F: push    esi
0x721240: push    edi
0x721241: mov     eax, ds:0B30AACh
0x721246: xor     eax, esp
0x721248: push    eax
0x721249: lea     eax, [esp+1Ch+var_C]
0x72124D: mov     large fs:0, eax
0x721253: mov     edi, ecx
0x721255: push    10h; Size
0x721257: call    FormHeapAlloc
0x72125C: mov     esi, eax
0x72125E: add     esp, 4
0x721261: mov     [esp+1Ch+var_10], esi
0x721265: test    esi, esi
0x721267: mov     [esp+1Ch+var_4], 0
0x72126F: jz      short loc_721285
0x721271: mov     ecx, esi
0x721273: call    sub_721350
0x721278: fldz
0x72127A: fstp    dword ptr [esi+0Ch]
0x72127D: mov     dword ptr [esi], offset ??_7NiFloatExtraData@@6B@; const NiFloatExtraData::`vftable'
0x721283: jmp     short loc_721287
0x721285: xor     esi, esi
0x721287: mov     eax, [esp+1Ch+arg_0]
0x72128B: push    eax
0x72128C: push    esi
0x72128D: mov     ecx, edi
0x72128F: mov     [esp+24h+var_4], 0FFFFFFFFh
0x721297: call    sub_7214A0
0x72129C: fld     dword ptr [edi+0Ch]
0x72129F: fstp    dword ptr [esi+0Ch]
0x7212A2: mov     eax, esi
0x7212A4: mov     ecx, [esp+1Ch+var_C]
0x7212A8: mov     large fs:0, ecx
0x7212AF: pop     ecx
0x7212B0: pop     edi
0x7212B1: pop     esi
0x7212B2: add     esp, 10h
0x7212B5: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
