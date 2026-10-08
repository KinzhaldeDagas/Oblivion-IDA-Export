0x6EF920: push    0FFFFFFFFh
0x6EF922: push    offset SEH_6EF920
0x6EF927: mov     eax, large fs:0
0x6EF92D: push    eax
0x6EF92E: sub     esp, 8
0x6EF931: push    ebx
0x6EF932: push    ebp
0x6EF933: push    esi
0x6EF934: push    edi
0x6EF935: mov     eax, ds:0B30AACh
0x6EF93A: xor     eax, esp
0x6EF93C: push    eax
0x6EF93D: lea     eax, [esp+28h+var_C]
0x6EF941: mov     large fs:0, eax
0x6EF947: mov     esi, ecx
0x6EF949: mov     ecx, [esi+4]
0x6EF94C: xor     ebx, ebx
0x6EF94E: cmp     ecx, ebx
0x6EF950: mov     [esp+28h+var_4], ebx
0x6EF954: jnz     short loc_6EF95A
0x6EF956: xor     eax, eax
0x6EF958: jmp     short loc_6EF962
0x6EF95A: mov     eax, [esi+8]
0x6EF95D: sub     eax, ecx
0x6EF95F: sar     eax, 6
0x6EF962: mov     edi, [esp+28h+arg_0]
0x6EF966: cmp     eax, edi
0x6EF968: jnb     short loc_6EF995
0x6EF96A: cmp     ecx, ebx
0x6EF96C: jz      short loc_6EF976
0x6EF96E: mov     ebx, [esi+8]
0x6EF971: sub     ebx, ecx
0x6EF973: sar     ebx, 6
0x6EF976: mov     ebp, [esi+8]
0x6EF979: cmp     ecx, ebp
0x6EF97B: jbe     short loc_6EF982
0x6EF97D: call    __invalid_parameter_noinfo
0x6EF982: lea     eax, [esp+28h+arg_4]
0x6EF986: push    eax
0x6EF987: sub     edi, ebx
0x6EF989: push    edi
0x6EF98A: push    ebp
0x6EF98B: push    esi
0x6EF98C: mov     ecx, esi
0x6EF98E: call    sub_6EF660
0x6EF993: jmp     short loc_6EF9E5
0x6EF995: cmp     ecx, ebx
0x6EF997: jz      short loc_6EF9E5
0x6EF999: mov     ebp, [esi+8]
0x6EF99C: mov     eax, ebp
0x6EF99E: sub     eax, ecx
0x6EF9A0: sar     eax, 6
0x6EF9A3: cmp     edi, eax
0x6EF9A5: jnb     short loc_6EF9E5
0x6EF9A7: cmp     ecx, ebp
0x6EF9A9: jbe     short loc_6EF9B0
0x6EF9AB: call    __invalid_parameter_noinfo
0x6EF9B0: mov     ebx, [esi+4]
0x6EF9B3: cmp     ebx, [esi+8]
0x6EF9B6: jbe     short loc_6EF9BD
0x6EF9B8: call    __invalid_parameter_noinfo
0x6EF9BD: shl     edi, 6
0x6EF9C0: add     edi, ebx
0x6EF9C2: cmp     edi, [esi+8]
0x6EF9C5: mov     [esp+28h+var_10], ebx
0x6EF9C9: ja      short loc_6EF9D0
0x6EF9CB: cmp     edi, [esi+4]
0x6EF9CE: jnb     short loc_6EF9D5
0x6EF9D0: call    __invalid_parameter_noinfo
0x6EF9D5: push    ebp
0x6EF9D6: push    esi
0x6EF9D7: push    edi
0x6EF9D8: push    esi
0x6EF9D9: lea     ecx, [esp+38h+var_14]
0x6EF9DD: push    ecx
0x6EF9DE: mov     ecx, esi
0x6EF9E0: call    sub_5592A0
0x6EF9E5: push    offset OB_stVector4_DestroyThiscall_010201A0; void (__thiscall *)(void *)
0x6EF9EA: push    3; int
0x6EF9EC: push    10h; unsigned int
0x6EF9EE: lea     edx, [esp+34h+arg_14]
0x6EF9F2: push    edx; void *
0x6EF9F3: mov     [esp+38h+var_4], 0FFFFFFFFh
0x6EF9FB: call    $LN21
0x6EFA00: mov     ecx, [esp+28h+var_C]
0x6EFA04: mov     large fs:0, ecx
0x6EFA0B: pop     ecx
0x6EFA0C: pop     edi
0x6EFA0D: pop     esi
0x6EFA0E: pop     ebp
0x6EFA0F: pop     ebx
0x6EFA10: add     esp, 14h
0x6EFA13: retn    44h ; 'D'
0x556E10: push    offset OB_stVector4_DestroyThiscall_010201A0; void (__thiscall *)(void *)
0x556E15: push    3; int
0x556E17: push    10h; unsigned int
0x556E19: add     ecx, 10h
0x556E1C: push    ecx; void *
0x556E1D: call    $LN21
0x556E22: retn
0x9C85F0: lea     ecx, [ebp+8]
0x9C85F3: jmp     loc_556E10
0x9C85F8: mov     edx, [esp+arg_4]
0x9C85FC: lea     eax, [edx-18h]
0x9C85FF: mov     ecx, [edx-1Ch]
0x9C8602: xor     ecx, eax
0x9C8604: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8609: mov     eax, offset stru_AF09E4
0x9C860E: jmp     ___CxxFrameHandler3
