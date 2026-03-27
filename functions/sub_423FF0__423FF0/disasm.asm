0x423FF0: push    0FFFFFFFFh
0x423FF2: push    offset SEH_8C62B0
0x423FF7: mov     eax, large fs:0
0x423FFD: push    eax
0x423FFE: push    ecx
0x423FFF: push    esi
0x424000: mov     eax, ___security_cookie
0x424005: xor     eax, esp
0x424007: push    eax
0x424008: lea     eax, [esp+18h+var_C]
0x42400C: mov     large fs:0, eax
0x424012: mov     esi, ecx
0x424014: push    4; a2
0x424016: call    BaseExtraList_GetExtraData
0x42401B: fldz
0x42401D: fld     [esp+18h+arg_0]
0x424021: mov     ecx, eax
0x424023: fucom   st(1)
0x424025: fnstsw  ax
0x424027: fstp    st(1)
0x424029: test    ah, 44h
0x42402C: jp      short loc_424051
0x42402E: test    ecx, ecx
0x424030: fstp    st
0x424032: jz      short loc_4240AA
0x424034: push    1
0x424036: push    ecx
0x424037: mov     ecx, esi
0x424039: call    BaseExtraList_RemoveExtraByPtr
0x42403E: mov     ecx, [esp+18h+var_C]
0x424042: mov     large fs:0, ecx
0x424049: pop     ecx
0x42404A: pop     esi
0x42404B: add     esp, 10h
0x42404E: retn    4
0x424051: test    ecx, ecx
0x424053: jnz     short loc_4240A7
0x424055: push    10h; Size
0x424057: fstp    st
0x424059: call    FormHeapAlloc
0x42405E: add     esp, 4
0x424061: mov     [esp+18h+var_10], eax
0x424065: test    eax, eax
0x424067: mov     [esp+18h+var_4], 0
0x42406F: jz      short loc_424082
0x424071: fld     [esp+18h+arg_0]
0x424075: push    ecx
0x424076: mov     ecx, eax; this
0x424078: fstp    [esp+1Ch+var_1C]
0x42407B: call    ??0ExtraWaterHeight@@QAE@XZ; ExtraWaterHeight::ExtraWaterHeight(void)
0x424080: jmp     short loc_424084
0x424082: xor     eax, eax
0x424084: push    eax; BSExtraData *
0x424085: mov     ecx, esi; ExtraDataList *
0x424087: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42408F: call    BaseExtraList_AddExtra
0x424094: mov     ecx, [esp+18h+var_C]
0x424098: mov     large fs:0, ecx
0x42409F: pop     ecx
0x4240A0: pop     esi
0x4240A1: add     esp, 10h
0x4240A4: retn    4
0x4240A7: fstp    dword ptr [ecx+0Ch]
0x4240AA: mov     ecx, [esp+18h+var_C]
0x4240AE: mov     large fs:0, ecx
0x4240B5: pop     ecx
0x4240B6: pop     esi
0x4240B7: add     esp, 10h
0x4240BA: retn    4
