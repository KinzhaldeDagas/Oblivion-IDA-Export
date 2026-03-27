0x510A90: fldz
0x510A92: push    ebx
0x510A93: mov     ebx, [esp+4+arg_18]
0x510A97: fstp    qword ptr [ebx]
0x510A99: push    esi
0x510A9A: mov     esi, [esp+8+arg_8]
0x510A9E: test    esi, esi
0x510AA0: jz      loc_510B89
0x510AA6: mov     eax, [esi]
0x510AA8: mov     edx, [eax+164h]
0x510AAE: mov     ecx, esi
0x510AB0: call    edx
0x510AB2: test    eax, eax
0x510AB4: mov     eax, [esi]
0x510AB6: mov     ecx, esi
0x510AB8: jz      short loc_510AE5
0x510ABA: mov     edx, [eax+164h]
0x510AC0: push    edi
0x510AC1: call    edx
0x510AC3: mov     edi, eax
0x510AC5: xor     esi, esi
0x510AC7: push    esi
0x510AC8: mov     ecx, edi
0x510ACA: call    sub_4706E0
0x510ACF: test    eax, eax
0x510AD1: jz      short loc_510AD7
0x510AD3: fld1
0x510AD5: fstp    qword ptr [ebx]
0x510AD7: add     esi, 1
0x510ADA: cmp     esi, 5
0x510ADD: jl      short loc_510AC7
0x510ADF: pop     edi
0x510AE0: jmp     loc_510B6B
0x510AE5: mov     edx, [eax+154h]
0x510AEB: call    edx
0x510AED: test    eax, eax
0x510AEF: jz      short loc_510B6B
0x510AF1: mov     edx, [eax]
0x510AF3: mov     ecx, eax
0x510AF5: mov     eax, [edx+8]
0x510AF8: call    eax
0x510AFA: mov     esi, eax
0x510AFC: test    esi, esi
0x510AFE: jz      short loc_510B6B
0x510B00: cmp     word ptr [esi+0B6h], 0
0x510B08: jbe     short loc_510B6B
0x510B0A: mov     ecx, [esi+0B0h]
0x510B10: cmp     dword ptr [ecx], 0
0x510B13: jz      short loc_510B6B
0x510B15: push    0
0x510B17: mov     ecx, esi
0x510B19: call    sub_405790
0x510B1E: cmp     dword ptr [eax+0Ch], 0
0x510B22: jz      short loc_510B6B
0x510B24: push    0
0x510B26: mov     ecx, esi
0x510B28: call    sub_405790
0x510B2D: mov     eax, [eax+0Ch]
0x510B30: push    eax
0x510B31: push    offset stru_B3CAC0
0x510B36: call    NiRTTI_Cast
0x510B3B: add     esp, 8
0x510B3E: test    eax, eax
0x510B40: jz      short loc_510B6B
0x510B42: xor     ecx, ecx
0x510B44: cmp     [eax+46h], cx
0x510B48: jbe     short loc_510B6B
0x510B4A: fld1
0x510B4C: mov     edx, [eax+40h]
0x510B4F: mov     edx, [edx+ecx*4]
0x510B52: test    edx, edx
0x510B54: jz      short loc_510B5E
0x510B56: cmp     dword ptr [edx+44h], 0
0x510B5A: jz      short loc_510B5E
0x510B5C: fst     qword ptr [ebx]
0x510B5E: movzx   edx, word ptr [eax+46h]
0x510B62: add     ecx, 1
0x510B65: cmp     ecx, edx
0x510B67: jb      short loc_510B4C
0x510B69: fstp    st
0x510B6B: cmp     byte ptr ds:0B361ACh, 0
0x510B72: jz      short loc_510B89
0x510B74: fld     qword ptr [ebx]
0x510B76: sub     esp, 8
0x510B79: fstp    [esp+10h+var_10]
0x510B7C: push    offset aIsanimplaying1; "IsAnimPlaying -> %1.0f"
0x510B81: call    Interface_ConsolePrint
0x510B86: add     esp, 0Ch
0x510B89: pop     esi
0x510B8A: mov     al, 1
0x510B8C: pop     ebx
0x510B8D: retn
