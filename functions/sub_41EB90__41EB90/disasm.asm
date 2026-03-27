0x41EB90: push    0FFFFFFFFh
0x41EB92: push    offset SEH_8C8970
0x41EB97: mov     eax, large fs:0
0x41EB9D: push    eax
0x41EB9E: push    ecx
0x41EB9F: push    esi
0x41EBA0: push    edi
0x41EBA1: mov     eax, ___security_cookie
0x41EBA6: xor     eax, esp
0x41EBA8: push    eax
0x41EBA9: lea     eax, [esp+1Ch+var_C]
0x41EBAD: mov     large fs:0, eax
0x41EBB3: mov     edi, ecx
0x41EBB5: push    13h; a2
0x41EBB7: call    BaseExtraList_GetExtraData
0x41EBBC: xor     esi, esi
0x41EBBE: cmp     eax, esi
0x41EBC0: jnz     short loc_41EBF3
0x41EBC2: push    14h; Size
0x41EBC4: call    FormHeapAlloc
0x41EBC9: add     esp, 4
0x41EBCC: mov     [esp+1Ch+var_10], eax
0x41EBD0: cmp     eax, esi
0x41EBD2: mov     [esp+1Ch+var_4], esi
0x41EBD6: jz      short loc_41EBE1
0x41EBD8: mov     ecx, eax
0x41EBDA: call    sub_429D30
0x41EBDF: mov     esi, eax
0x41EBE1: push    esi; BSExtraData *
0x41EBE2: mov     ecx, edi; ExtraDataList *
0x41EBE4: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41EBEC: call    BaseExtraList_AddExtra
0x41EBF1: mov     eax, esi
0x41EBF3: mov     ecx, [esp+1Ch+var_C]
0x41EBF7: mov     large fs:0, ecx
0x41EBFE: pop     ecx
0x41EBFF: pop     edi
0x41EC00: pop     esi
0x41EC01: add     esp, 10h
0x41EC04: retn
