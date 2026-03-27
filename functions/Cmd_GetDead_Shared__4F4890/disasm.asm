0x4F4890: fldz
0x4F4892: push    esi
0x4F4893: mov     esi, [esp+4+arg_0]
0x4F4897: test    esi, esi
0x4F4899: push    edi
0x4F489A: mov     edi, [esp+8+arg_C]
0x4F489E: fstp    qword ptr [edi]
0x4F48A0: jz      short loc_4F48C8
0x4F48A2: mov     eax, [esi]
0x4F48A4: mov     edx, [eax+190h]
0x4F48AA: mov     ecx, esi
0x4F48AC: call    edx
0x4F48AE: test    al, al
0x4F48B0: jz      short loc_4F48C8
0x4F48B2: mov     eax, [esi]
0x4F48B4: mov     edx, [eax+198h]
0x4F48BA: push    1
0x4F48BC: mov     ecx, esi
0x4F48BE: call    edx
0x4F48C0: test    al, al
0x4F48C2: jz      short loc_4F48C8
0x4F48C4: fld1
0x4F48C6: fstp    qword ptr [edi]
0x4F48C8: cmp     byte ptr ds:0B361ACh, 0
0x4F48CF: jz      short loc_4F48E6
0x4F48D1: fld     qword ptr [edi]
0x4F48D3: sub     esp, 8
0x4F48D6: fstp    [esp+10h+var_14+4]
0x4F48D9: push    offset aGetdead0_2f; "GetDead >> %0.2f"
0x4F48DE: call    Interface_ConsolePrint
0x4F48E3: add     esp, 0Ch
0x4F48E6: pop     edi
0x4F48E7: mov     al, 1
0x4F48E9: pop     esi
0x4F48EA: retn
