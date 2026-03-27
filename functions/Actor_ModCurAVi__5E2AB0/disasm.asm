0x5E2AB0: push    ebx
0x5E2AB1: mov     ebx, [esp+4+arg_0]
0x5E2AB5: cmp     ebx, 0Ah
0x5E2AB8: push    esi
0x5E2AB9: mov     esi, ecx
0x5E2ABB: jnz     short loc_5E2AD6
0x5E2ABD: cmp     [esp+8+arg_4], 0
0x5E2AC2: jge     short loc_5E2AD6
0x5E2AC4: mov     eax, [esi]
0x5E2AC6: mov     edx, [eax+278h]
0x5E2ACC: call    edx
0x5E2ACE: test    al, al
0x5E2AD0: jz      loc_5E2BD3
0x5E2AD6: fild    [esp+8+arg_4]
0x5E2ADA: fstp    [esp+8+arg_4]
0x5E2ADE: fld     [esp+8+arg_4]
0x5E2AE2: fld     st
0x5E2AE4: call    Double_To_SInt32
0x5E2AE9: mov     [esp+8+arg_4], eax
0x5E2AED: fild    [esp+8+arg_4]
0x5E2AF1: fstp    [esp+8+arg_4]
0x5E2AF5: fld     [esp+8+arg_4]
0x5E2AF9: fld     st
0x5E2AFB: fsubp   st(2), st
0x5E2AFD: fxch    st(1)
0x5E2AFF: fcomp   qword ptr ds:0A2FC68h
0x5E2B05: fnstsw  ax
0x5E2B07: test    ah, 1
0x5E2B0A: jz      short loc_5E2B12
0x5E2B0C: fsub    qword ptr ds:0A2F928h
0x5E2B12: fstp    [esp+8+arg_4]
0x5E2B16: push    edi
0x5E2B17: fld     [esp+0Ch+arg_4]
0x5E2B1B: call    Double_To_SInt32
0x5E2B20: mov     edi, [esi+58h]
0x5E2B23: test    edi, edi
0x5E2B25: mov     [esp+0Ch+arg_4], eax
0x5E2B29: jz      short loc_5E2B6E
0x5E2B2B: mov     eax, [esi]
0x5E2B2D: mov     edx, [eax+170h]
0x5E2B33: push    ebp
0x5E2B34: mov     ecx, esi
0x5E2B36: xor     ebx, ebx
0x5E2B38: call    edx
0x5E2B3A: mov     ebp, eax
0x5E2B3C: test    ebp, ebp
0x5E2B3E: jz      short loc_5E2B52
0x5E2B40: mov     eax, [esi]
0x5E2B42: mov     edx, [eax+190h]
0x5E2B48: mov     ecx, esi
0x5E2B4A: call    edx
0x5E2B4C: test    al, al
0x5E2B4E: jz      short loc_5E2B52
0x5E2B50: mov     ebx, ebp
0x5E2B52: mov     ecx, [esp+8+arg_C]
0x5E2B56: mov     edx, [esp+8+arg_8]
0x5E2B5A: mov     eax, [edi]
0x5E2B5C: mov     eax, [eax+28Ch]
0x5E2B62: push    ecx
0x5E2B63: push    edx
0x5E2B64: push    ebx
0x5E2B65: mov     ecx, edi
0x5E2B67: call    eax
0x5E2B69: mov     ebx, [esp+10h+arg_0]
0x5E2B6D: pop     ebp
0x5E2B6E: cmp     ebx, 8
0x5E2B71: pop     edi
0x5E2B72: jnz     short loc_5E2B94
0x5E2B74: cmp     [esp+8+arg_4], 0
0x5E2B79: jge     short loc_5E2B94
0x5E2B7B: fild    [esp+8+arg_4]
0x5E2B7F: mov     edx, [esi]
0x5E2B81: mov     eax, [esp+8+arg_8]
0x5E2B85: mov     edx, [edx+3B8h]
0x5E2B8B: push    ecx
0x5E2B8C: fstp    [esp+0Ch+var_C]
0x5E2B8F: push    eax
0x5E2B90: mov     ecx, esi
0x5E2B92: call    edx
0x5E2B94: mov     eax, [esi]
0x5E2B96: mov     edx, [eax+40h]
0x5E2B99: push    400000h
0x5E2B9E: mov     ecx, esi
0x5E2BA0: call    edx
0x5E2BA2: lea     eax, [ebx-0Ch]
0x5E2BA5: cmp     eax, 14h
0x5E2BA8: ja      short loc_5E2BD3
0x5E2BAA: cmp     ebx, 12h
0x5E2BAD: jz      short loc_5E2BB4
0x5E2BAF: cmp     ebx, 1Bh
0x5E2BB2: jnz     short loc_5E2BD3
0x5E2BB4: lea     ecx, [esi+44h]; this
0x5E2BB7: call    ExtraDataList_GetContainerChanges
0x5E2BBC: test    eax, eax
0x5E2BBE: jz      short loc_5E2BC7
0x5E2BC0: mov     ecx, eax
0x5E2BC2: call    sub_484310
0x5E2BC7: mov     edx, [esi]
0x5E2BC9: mov     eax, [edx+2C0h]
0x5E2BCF: mov     ecx, esi
0x5E2BD1: call    eax
0x5E2BD3: pop     esi
0x5E2BD4: pop     ebx
0x5E2BD5: retn    0Ch
