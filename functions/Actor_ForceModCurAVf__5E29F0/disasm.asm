0x5E29F0: push    esi
0x5E29F1: push    edi
0x5E29F2: mov     edi, [esp+8+arg_0]
0x5E29F6: cmp     edi, 0Ah
0x5E29F9: mov     esi, ecx
0x5E29FB: jnz     short loc_5E2A1C
0x5E29FD: fldz
0x5E29FF: fcomp   [esp+8+arg_4]
0x5E2A03: fnstsw  ax
0x5E2A05: test    ah, 41h
0x5E2A08: jnz     short loc_5E2A1C
0x5E2A0A: mov     eax, [esi]
0x5E2A0C: mov     edx, [eax+278h]
0x5E2A12: call    edx
0x5E2A14: test    al, al
0x5E2A16: jz      loc_5E2AA0
0x5E2A1C: fld     [esp+8+arg_4]
0x5E2A20: push    1
0x5E2A22: push    ecx
0x5E2A23: fstp    [esp+10h+var_10]
0x5E2A26: push    edi
0x5E2A27: lea     ecx, [esi+88h]
0x5E2A2D: call    AVCollection_ModAVLimited
0x5E2A32: cmp     edi, 8
0x5E2A35: jnz     short loc_5E2A61
0x5E2A37: fldz
0x5E2A39: fld     [esp+8+arg_4]
0x5E2A3D: fcom    st(1)
0x5E2A3F: fnstsw  ax
0x5E2A41: fstp    st(1)
0x5E2A43: test    ah, 5
0x5E2A46: jp      short loc_5E2A5F
0x5E2A48: mov     eax, [esi]
0x5E2A4A: mov     edx, [eax+3B8h]
0x5E2A50: push    ecx
0x5E2A51: mov     ecx, [esp+0Ch+arg_8]
0x5E2A55: fstp    [esp+0Ch+var_C]
0x5E2A58: push    ecx
0x5E2A59: mov     ecx, esi
0x5E2A5B: call    edx
0x5E2A5D: jmp     short loc_5E2A61
0x5E2A5F: fstp    st
0x5E2A61: mov     eax, [esi]
0x5E2A63: mov     edx, [eax+40h]
0x5E2A66: push    200000h
0x5E2A6B: mov     ecx, esi
0x5E2A6D: call    edx
0x5E2A6F: lea     eax, [edi-0Ch]
0x5E2A72: cmp     eax, 14h
0x5E2A75: ja      short loc_5E2AA0
0x5E2A77: cmp     edi, 12h
0x5E2A7A: jz      short loc_5E2A81
0x5E2A7C: cmp     edi, 1Bh
0x5E2A7F: jnz     short loc_5E2AA0
0x5E2A81: lea     ecx, [esi+44h]; this
0x5E2A84: call    ExtraDataList_GetContainerChanges
0x5E2A89: test    eax, eax
0x5E2A8B: jz      short loc_5E2A94
0x5E2A8D: mov     ecx, eax
0x5E2A8F: call    sub_484310
0x5E2A94: mov     edx, [esi]
0x5E2A96: mov     eax, [edx+2C0h]
0x5E2A9C: mov     ecx, esi
0x5E2A9E: call    eax
0x5E2AA0: pop     edi
0x5E2AA1: pop     esi
0x5E2AA2: retn    0Ch
