0x4F45D0: push    esi
0x4F45D1: mov     esi, [esp+4+arg_0]
0x4F45D5: test    esi, esi
0x4F45D7: jz      short loc_4F4630
0x4F45D9: mov     eax, [esi]
0x4F45DB: mov     edx, [eax+190h]
0x4F45E1: mov     ecx, esi
0x4F45E3: call    edx
0x4F45E5: test    al, al
0x4F45E7: jz      short loc_4F4630
0x4F45E9: push    edi
0x4F45EA: mov     edi, [esp+8+arg_4]
0x4F45EE: push    edi
0x4F45EF: mov     ecx, esi
0x4F45F1: call    Actor_GetBaseCalcAVi
0x4F45F6: mov     [esp+8+arg_0], eax
0x4F45FA: fild    [esp+8+arg_0]
0x4F45FE: mov     eax, [esp+8+arg_C]
0x4F4602: fst     qword ptr [eax]
0x4F4604: cmp     byte ptr ds:0B361ACh, 0
0x4F460B: jz      short loc_4F462D
0x4F460D: mov     ecx, ds:0B0A1A8h[edi*4]
0x4F4614: sub     esp, 8
0x4F4617: fstp    [esp+10h+var_10]
0x4F461A: push    ecx
0x4F461B: push    offset aGetbaseactorva; "GetBaseActorValue: %s >> %0.2f"
0x4F4620: call    Interface_ConsolePrint
0x4F4625: add     esp, 10h
0x4F4628: pop     edi
0x4F4629: mov     al, 1
0x4F462B: pop     esi
0x4F462C: retn
0x4F462D: fstp    st
0x4F462F: pop     edi
0x4F4630: mov     al, 1
0x4F4632: pop     esi
0x4F4633: retn
