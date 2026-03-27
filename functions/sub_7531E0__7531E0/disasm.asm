0x7531E0: push    ebx
0x7531E1: push    esi
0x7531E2: mov     esi, [esp+8+arg_0]
0x7531E6: push    edi
0x7531E7: push    esi
0x7531E8: mov     ebx, ecx
0x7531EA: call    sub_74F4F0
0x7531EF: mov     eax, ds:0B40D60h
0x7531F4: push    eax; ArgList
0x7531F5: call    TESOutput_PrintString
0x7531FA: movzx   edi, word ptr [esi+0Ah]
0x7531FE: movzx   ecx, word ptr [esi+8]
0x753202: add     esp, 4
0x753205: cmp     edi, ecx
0x753207: mov     [esp+0Ch+arg_0], eax
0x75320B: jb      short loc_75321B
0x75320D: movzx   edx, word ptr [esi+0Eh]
0x753211: add     edx, edi
0x753213: push    edx
0x753214: mov     ecx, esi
0x753216: call    NiTArray_SetSize
0x75321B: lea     eax, [esp+0Ch+arg_0]
0x75321F: push    eax
0x753220: push    edi
0x753221: mov     ecx, esi
0x753223: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x753228: mov     eax, [ebx+50h]
0x75322B: test    eax, eax
0x75322D: jz      short loc_75326B
0x75322F: mov     eax, [eax+8]
0x753232: push    eax; int
0x753233: push    offset aEmitterObject; "Emitter Object"
0x753238: call    TESOutput_PrintLabeledString
0x75323D: movzx   edi, word ptr [esi+0Ah]
0x753241: movzx   ecx, word ptr [esi+8]
0x753245: add     esp, 8
0x753248: cmp     edi, ecx
0x75324A: mov     [esp+0Ch+arg_0], eax
0x75324E: jb      short loc_75325E
0x753250: movzx   edx, word ptr [esi+0Eh]
0x753254: add     edx, edi
0x753256: push    edx
0x753257: mov     ecx, esi
0x753259: call    NiTArray_SetSize
0x75325E: lea     eax, [esp+0Ch+arg_0]
0x753262: push    eax
0x753263: push    edi
0x753264: mov     ecx, esi
0x753266: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75326B: pop     edi
0x75326C: pop     esi
0x75326D: pop     ebx
0x75326E: retn    4
