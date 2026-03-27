0x59CA70: mov     eax, ds:0B33398h
0x59CA75: sub     esp, 10h
0x59CA78: push    esi
0x59CA79: push    edi
0x59CA7A: mov     edi, [eax+20h]
0x59CA7D: push    1; a3
0x59CA7F: mov     esi, ecx
0x59CA81: push    0; a2
0x59CA83: mov     ecx, edi; this
0x59CA85: call    InputGlobals__QueryMouseKeyState
0x59CA8A: test    eax, eax
0x59CA8C: jnz     short loc_59CAAB
0x59CA8E: push    1; a3
0x59CA90: push    1Dh; a2
0x59CA92: mov     ecx, edi; this
0x59CA94: call    InputGlobals__QueryControlState
0x59CA99: test    eax, eax
0x59CA9B: jnz     short loc_59CAAB
0x59CA9D: push    9
0x59CA9F: mov     ecx, edi
0x59CAA1: call    sub_6DA150
0x59CAA6: cmp     eax, 2
0x59CAA9: jnz     short loc_59CAB0
0x59CAAB: call    sub_59C9F0
0x59CAB0: mov     eax, [esi+2Ch]
0x59CAB3: test    eax, eax
0x59CAB5: jz      short loc_59CB1C
0x59CAB7: fld     dword ptr ds:0B13FC4h
0x59CABD: mov     edi, [eax+5Ch]
0x59CAC0: fmul    dword ptr ds:0B33E9Ch
0x59CAC6: mov     ecx, [eax+54h]
0x59CAC9: mov     edx, [eax+58h]
0x59CACC: mov     [esp+18h+var_4], edi
0x59CAD0: fadd    [esp+18h+var_4]
0x59CAD4: mov     [eax+54h], ecx
0x59CAD7: mov     [eax+58h], edx
0x59CADA: push    1; a3
0x59CADC: fstp    [esp+1Ch+var_4]
0x59CAE0: mov     ecx, [esp+1Ch+var_4]
0x59CAE4: fldz
0x59CAE6: push    ecx
0x59CAE7: mov     [eax+5Ch], ecx
0x59CAEA: fstp    [esp+20h+a2]; a2
0x59CAED: mov     ecx, [esi+2Ch]; this
0x59CAF0: call    NiAVObject_UpdateNiAVObject
0x59CAF5: fld     [esp+18h+var_4]
0x59CAF9: mov     edx, [esi+2Ch]
0x59CAFC: fld     dword ptr [edx+2Ch]
0x59CAFF: fadd    st, st
0x59CB01: fstp    [esp+18h+var_10]
0x59CB05: fld     [esp+18h+var_10]
0x59CB09: fcompp
0x59CB0B: fnstsw  ax
0x59CB0D: test    ah, 5
0x59CB10: jp      short loc_59CB1C
0x59CB12: pop     edi
0x59CB13: pop     esi
0x59CB14: add     esp, 10h
0x59CB17: jmp     sub_59C9F0
0x59CB1C: pop     edi
0x59CB1D: pop     esi
0x59CB1E: add     esp, 10h
0x59CB21: retn
