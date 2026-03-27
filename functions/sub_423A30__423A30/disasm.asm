0x423A30: push    0FFFFFFFFh
0x423A32: push    offset SEH_8C62B0
0x423A37: mov     eax, large fs:0
0x423A3D: push    eax
0x423A3E: push    ecx
0x423A3F: push    esi
0x423A40: mov     eax, ___security_cookie
0x423A45: xor     eax, esp
0x423A47: push    eax
0x423A48: lea     eax, [esp+18h+var_C]
0x423A4C: mov     large fs:0, eax
0x423A52: mov     esi, ecx
0x423A54: push    37h ; '7'; a2
0x423A56: call    BaseExtraList_GetExtraData
0x423A5B: fld1
0x423A5D: mov     ecx, eax
0x423A5F: test    ecx, ecx
0x423A61: jz      short loc_423AA7
0x423A63: fld     [esp+18h+arg_0]
0x423A67: fucom   st(1)
0x423A69: fnstsw  ax
0x423A6B: fstp    st(1)
0x423A6D: test    ah, 44h
0x423A70: jp      short loc_423A91
0x423A72: push    1
0x423A74: fstp    st
0x423A76: push    ecx
0x423A77: mov     ecx, esi
0x423A79: call    BaseExtraList_RemoveExtraByPtr
0x423A7E: mov     ecx, [esp+18h+var_C]
0x423A82: mov     large fs:0, ecx
0x423A89: pop     ecx
0x423A8A: pop     esi
0x423A8B: add     esp, 10h
0x423A8E: retn    4
0x423A91: fstp    dword ptr [ecx+0Ch]
0x423A94: mov     ecx, [esp+18h+var_C]
0x423A98: mov     large fs:0, ecx
0x423A9F: pop     ecx
0x423AA0: pop     esi
0x423AA1: add     esp, 10h
0x423AA4: retn    4
0x423AA7: fcomp   [esp+18h+arg_0]
0x423AAB: fnstsw  ax
0x423AAD: test    ah, 44h
0x423AB0: jnp     short loc_423AEF
0x423AB2: push    10h; Size
0x423AB4: call    FormHeapAlloc
0x423AB9: add     esp, 4
0x423ABC: mov     [esp+18h+var_10], eax
0x423AC0: test    eax, eax
0x423AC2: mov     [esp+18h+var_4], 0
0x423ACA: jz      short loc_423ADD
0x423ACC: fld     [esp+18h+arg_0]
0x423AD0: push    ecx
0x423AD1: mov     ecx, eax
0x423AD3: fstp    [esp+1Ch+var_1C]; float
0x423AD6: call    sub_429FB0
0x423ADB: jmp     short loc_423ADF
0x423ADD: xor     eax, eax
0x423ADF: push    eax; BSExtraData *
0x423AE0: mov     ecx, esi; ExtraDataList *
0x423AE2: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x423AEA: call    BaseExtraList_AddExtra
0x423AEF: mov     ecx, [esp+18h+var_C]
0x423AF3: mov     large fs:0, ecx
0x423AFA: pop     ecx
0x423AFB: pop     esi
0x423AFC: add     esp, 10h
0x423AFF: retn    4
