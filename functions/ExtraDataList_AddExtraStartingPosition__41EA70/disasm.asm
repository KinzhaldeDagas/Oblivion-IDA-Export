0x41EA70: push    0FFFFFFFFh
0x41EA72: push    offset SEH_8C8970
0x41EA77: mov     eax, large fs:0
0x41EA7D: push    eax
0x41EA7E: push    ecx
0x41EA7F: push    esi
0x41EA80: push    edi
0x41EA81: mov     eax, ___security_cookie
0x41EA86: xor     eax, esp
0x41EA88: push    eax
0x41EA89: lea     eax, [esp+1Ch+var_C]
0x41EA8D: mov     large fs:0, eax
0x41EA93: mov     edi, ecx
0x41EA95: push    14h; a2
0x41EA97: call    BaseExtraList_GetExtraData
0x41EA9C: xor     esi, esi
0x41EA9E: cmp     eax, esi
0x41EAA0: jnz     short loc_41EAD8
0x41EAA2: push    24h ; '$'; Size
0x41EAA4: call    FormHeapAlloc
0x41EAA9: add     esp, 4
0x41EAAC: mov     [esp+1Ch+var_10], eax
0x41EAB0: cmp     eax, esi
0x41EAB2: mov     [esp+1Ch+var_4], esi
0x41EAB6: jz      short loc_41EAC6
0x41EAB8: mov     ecx, [esp+1Ch+arg_0]
0x41EABC: push    ecx
0x41EABD: mov     ecx, eax
0x41EABF: call    ExtraStartingPosition_constr
0x41EAC4: mov     esi, eax
0x41EAC6: push    esi; BSExtraData *
0x41EAC7: mov     ecx, edi; ExtraDataList *
0x41EAC9: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41EAD1: call    BaseExtraList_AddExtra
0x41EAD6: mov     eax, esi
0x41EAD8: mov     ecx, [esp+1Ch+var_C]
0x41EADC: mov     large fs:0, ecx
0x41EAE3: pop     ecx
0x41EAE4: pop     edi
0x41EAE5: pop     esi
0x41EAE6: add     esp, 10h
0x41EAE9: retn    4
