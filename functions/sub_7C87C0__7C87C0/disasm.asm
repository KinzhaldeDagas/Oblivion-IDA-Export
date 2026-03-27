0x7C87C0: sub     esp, 0Ch
0x7C87C3: push    esi
0x7C87C4: mov     esi, [esp+10h+arg_0]
0x7C87C8: test    esi, esi
0x7C87CA: jz      loc_7C8890
0x7C87D0: push    edi
0x7C87D1: mov     edi, [esp+14h+arg_8]
0x7C87D5: lea     eax, [edi-160h]
0x7C87DB: cmp     eax, 2
0x7C87DE: ja      loc_7C888F
0x7C87E4: cmp     byte ptr [esi+0E4h], 0
0x7C87EB: jz      short loc_7C884E
0x7C87ED: cmp     edi, 162h
0x7C87F3: mov     eax, [esp+14h+arg_4]
0x7C87F7: mov     ecx, [eax+40h]
0x7C87FA: mov     edx, [eax+44h]
0x7C87FD: mov     eax, [eax+48h]
0x7C8800: mov     [esp+14h+var_C], ecx
0x7C8804: fld     [esp+14h+var_C]
0x7C8808: fmul    qword ptr ds:0A90628h
0x7C880E: mov     [esp+14h+var_8], edx
0x7C8812: mov     [esp+14h+var_4], eax
0x7C8816: fstp    dword ptr ds:0B44EDCh
0x7C881C: jnz     short loc_7C888F
0x7C881E: push    1
0x7C8820: push    0
0x7C8822: call    GetTimer
0x7C8827: fdiv    qword ptr ds:0A2F938h
0x7C882D: add     esp, 8
0x7C8830: pop     edi
0x7C8831: pop     esi
0x7C8832: fmul    qword ptr ds:0A56E20h
0x7C8838: fmul    [esp+0Ch+var_8]
0x7C883C: fmul    qword ptr ds:0A3DDD8h
0x7C8842: fstp    dword ptr ds:0B44EE0h
0x7C8848: add     esp, 0Ch
0x7C884B: retn    0Ch
0x7C884E: mov     ecx, esi
0x7C8850: call    sub_7C8480
0x7C8855: fstp    dword ptr ds:0B44EDCh
0x7C885B: cmp     edi, 162h
0x7C8861: jnz     short loc_7C888F
0x7C8863: mov     ecx, [esi+0ECh]
0x7C8869: push    1
0x7C886B: push    0
0x7C886D: mov     [esp+1Ch+arg_0], ecx
0x7C8871: call    GetTimer
0x7C8876: fdiv    qword ptr ds:0A2F938h
0x7C887C: add     esp, 8
0x7C887F: fmul    qword ptr ds:0A56E20h
0x7C8885: fimul   [esp+14h+arg_0]
0x7C8889: fstp    dword ptr ds:0B44EE0h
0x7C888F: pop     edi
0x7C8890: pop     esi
0x7C8891: add     esp, 0Ch
0x7C8894: retn    0Ch
