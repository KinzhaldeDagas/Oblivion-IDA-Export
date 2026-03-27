0x4269E0: push    0FFFFFFFFh
0x4269E2: push    offset SEH_8C8970
0x4269E7: mov     eax, large fs:0
0x4269ED: push    eax
0x4269EE: push    ecx
0x4269EF: push    esi
0x4269F0: push    edi
0x4269F1: mov     eax, ___security_cookie
0x4269F6: xor     eax, esp
0x4269F8: push    eax
0x4269F9: lea     eax, [esp+1Ch+var_C]
0x4269FD: mov     large fs:0, eax
0x426A03: mov     edi, ecx
0x426A05: push    3Dh ; '='; a2
0x426A07: call    BaseExtraList_GetExtraData
0x426A0C: mov     esi, eax
0x426A0E: test    esi, esi
0x426A10: jnz     short loc_426A4F
0x426A12: push    10h; Size
0x426A14: call    FormHeapAlloc
0x426A19: add     esp, 4
0x426A1C: mov     [esp+1Ch+var_10], eax
0x426A20: test    eax, eax
0x426A22: mov     [esp+1Ch+var_4], esi
0x426A26: jz      short loc_426A39
0x426A28: fld     [esp+1Ch+arg_0]
0x426A2C: push    ecx
0x426A2D: mov     ecx, eax
0x426A2F: fstp    [esp+20h+var_20]; float
0x426A32: call    sub_42A290
0x426A37: jmp     short loc_426A3B
0x426A39: xor     eax, eax
0x426A3B: push    eax; BSExtraData *
0x426A3C: mov     ecx, edi; ExtraDataList *
0x426A3E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x426A46: mov     esi, eax
0x426A48: call    BaseExtraList_AddExtra
0x426A4D: jmp     short loc_426A59
0x426A4F: fld     dword ptr [esi+0Ch]
0x426A52: fadd    [esp+1Ch+arg_0]
0x426A56: fstp    dword ptr [esi+0Ch]
0x426A59: fldz
0x426A5B: fcomp   dword ptr [esi+0Ch]
0x426A5E: fnstsw  ax
0x426A60: test    ah, 1
0x426A63: jnz     short loc_426A7C
0x426A65: push    3Dh ; '='; a2
0x426A67: mov     ecx, edi; this
0x426A69: call    BaseExtraList_GetExtraData
0x426A6E: test    eax, eax
0x426A70: jz      short loc_426A7C
0x426A72: push    1
0x426A74: push    eax
0x426A75: mov     ecx, edi
0x426A77: call    BaseExtraList_RemoveExtraByPtr
0x426A7C: mov     ecx, [esp+1Ch+var_C]
0x426A80: mov     large fs:0, ecx
0x426A87: pop     ecx
0x426A88: pop     edi
0x426A89: pop     esi
0x426A8A: add     esp, 10h
0x426A8D: retn    4
