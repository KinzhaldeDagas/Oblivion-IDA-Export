0x41ECB0: push    0FFFFFFFFh
0x41ECB2: push    offset SEH_8C62B0
0x41ECB7: mov     eax, large fs:0
0x41ECBD: push    eax
0x41ECBE: push    ecx
0x41ECBF: push    esi
0x41ECC0: mov     eax, ___security_cookie
0x41ECC5: xor     eax, esp
0x41ECC7: push    eax
0x41ECC8: lea     eax, [esp+18h+var_C]
0x41ECCC: mov     large fs:0, eax
0x41ECD2: mov     esi, ecx
0x41ECD4: push    2Bh ; '+'; a2
0x41ECD6: call    BaseExtraList_GetExtraData
0x41ECDB: test    eax, eax
0x41ECDD: jz      short loc_41ECF9
0x41ECDF: fld     [esp+18h+arg_0]
0x41ECE3: fstp    dword ptr [eax+0Ch]
0x41ECE6: mov     ecx, [esp+18h+var_C]
0x41ECEA: mov     large fs:0, ecx
0x41ECF1: pop     ecx
0x41ECF2: pop     esi
0x41ECF3: add     esp, 10h
0x41ECF6: retn    4
0x41ECF9: push    10h; Size
0x41ECFB: call    FormHeapAlloc
0x41ED00: add     esp, 4
0x41ED03: mov     [esp+18h+var_10], eax
0x41ED07: test    eax, eax
0x41ED09: mov     [esp+18h+var_4], 0
0x41ED11: jz      short loc_41ED24
0x41ED13: fld     [esp+18h+arg_0]
0x41ED17: push    ecx
0x41ED18: mov     ecx, eax
0x41ED1A: fstp    [esp+1Ch+var_1C]; float
0x41ED1D: call    ExtraHealth_costr
0x41ED22: jmp     short loc_41ED26
0x41ED24: xor     eax, eax
0x41ED26: push    eax; BSExtraData *
0x41ED27: mov     ecx, esi; ExtraDataList *
0x41ED29: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41ED31: call    BaseExtraList_AddExtra
0x41ED36: mov     ecx, [esp+18h+var_C]
0x41ED3A: mov     large fs:0, ecx
0x41ED41: pop     ecx
0x41ED42: pop     esi
0x41ED43: add     esp, 10h
0x41ED46: retn    4
