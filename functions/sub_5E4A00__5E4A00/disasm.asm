0x5E4A00: push    esi
0x5E4A01: mov     esi, ecx
0x5E4A03: lea     ecx, [esi+44h]; this
0x5E4A06: call    ExtraDataList_GetContainerChanges
0x5E4A0B: test    eax, eax
0x5E4A0D: jz      short loc_5E4A34
0x5E4A0F: mov     ecx, [esp+4+arg_C]
0x5E4A13: mov     edx, [esp+4+arg_10]
0x5E4A17: push    esi
0x5E4A18: push    ecx
0x5E4A19: mov     ecx, [esp+0Ch+arg_8]
0x5E4A1D: push    edx
0x5E4A1E: mov     edx, [esp+10h+arg_4]
0x5E4A22: push    ecx
0x5E4A23: mov     ecx, [esp+14h+arg_0]
0x5E4A27: push    edx
0x5E4A28: push    ecx
0x5E4A29: mov     ecx, eax
0x5E4A2B: call    sub_487930
0x5E4A30: pop     esi
0x5E4A31: retn    14h
0x5E4A34: xor     al, al
0x5E4A36: pop     esi
0x5E4A37: retn    14h
