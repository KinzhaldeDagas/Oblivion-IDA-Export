0x4F5650: fldz
0x4F5652: push    ebx
0x4F5653: mov     ebx, [esp+4+arg_C]
0x4F5657: fst     qword ptr [ebx]
0x4F5659: push    esi
0x4F565A: mov     esi, [esp+8+arg_0]
0x4F565E: test    esi, esi
0x4F5660: jz      short loc_4F56C9
0x4F5662: mov     eax, [esi]
0x4F5664: fstp    qword ptr [ebx]
0x4F5666: mov     edx, [eax+190h]
0x4F566C: mov     ecx, esi
0x4F566E: call    edx
0x4F5670: test    al, al
0x4F5672: jz      short loc_4F56BC
0x4F5674: push    edi
0x4F5675: mov     edi, [esp+0Ch+arg_4]
0x4F5679: test    edi, edi
0x4F567B: jz      short loc_4F56BB
0x4F567D: push    edi
0x4F567E: mov     ecx, esi
0x4F5680: call    sub_5E10A0
0x4F5685: mov     [esp+0Ch+arg_C], eax
0x4F5689: fild    [esp+0Ch+arg_C]
0x4F568D: fst     qword ptr [ebx]
0x4F568F: cmp     byte ptr ds:0B361ACh, 0
0x4F5696: jz      short loc_4F56C1
0x4F5698: sub     esp, 8
0x4F569B: mov     ecx, edi; this
0x4F569D: fstp    [esp+14h+var_14]
0x4F56A0: call    TESObjectREFR_GetName
0x4F56A5: push    eax
0x4F56A6: mov     ecx, esi; this
0x4F56A8: call    TESObjectREFR_GetName
0x4F56AD: push    eax
0x4F56AE: push    offset aSDetectsSAtLev; "%s detects %s at level %.02f"
0x4F56B3: call    Interface_ConsolePrint
0x4F56B8: add     esp, 14h
0x4F56BB: pop     edi
0x4F56BC: pop     esi
0x4F56BD: mov     al, 1
0x4F56BF: pop     ebx
0x4F56C0: retn
0x4F56C1: pop     edi
0x4F56C2: fstp    st
0x4F56C4: pop     esi
0x4F56C5: mov     al, 1
0x4F56C7: pop     ebx
0x4F56C8: retn
0x4F56C9: pop     esi
0x4F56CA: fstp    st
0x4F56CC: mov     al, 1
0x4F56CE: pop     ebx
0x4F56CF: retn
