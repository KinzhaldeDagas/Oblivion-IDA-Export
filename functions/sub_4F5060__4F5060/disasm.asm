0x4F5060: fldz
0x4F5062: push    esi
0x4F5063: mov     esi, [esp+4+arg_0]
0x4F5067: test    esi, esi
0x4F5069: push    edi
0x4F506A: mov     edi, [esp+8+arg_C]
0x4F506E: fstp    qword ptr [edi]
0x4F5070: jz      short loc_4F50B9
0x4F5072: mov     eax, [esi]
0x4F5074: mov     edx, [eax+190h]
0x4F507A: mov     ecx, esi
0x4F507C: call    edx
0x4F507E: test    al, al
0x4F5080: jz      short loc_4F50B9
0x4F5082: mov     ecx, esi
0x4F5084: call    Actor_IsAlerted
0x4F5089: movzx   eax, al
0x4F508C: mov     [esp+8+arg_C], eax
0x4F5090: fild    [esp+8+arg_C]
0x4F5094: fst     qword ptr [edi]
0x4F5096: cmp     byte ptr ds:0B361ACh, 0
0x4F509D: jz      short loc_4F50B7
0x4F509F: sub     esp, 8
0x4F50A2: fstp    [esp+10h+var_10]
0x4F50A5: push    offset aGetisalerted0_; "GetIsAlerted: %0.2f"
0x4F50AA: call    Interface_ConsolePrint
0x4F50AF: add     esp, 0Ch
0x4F50B2: pop     edi
0x4F50B3: mov     al, 1
0x4F50B5: pop     esi
0x4F50B6: retn
0x4F50B7: fstp    st
0x4F50B9: pop     edi
0x4F50BA: mov     al, 1
0x4F50BC: pop     esi
0x4F50BD: retn
