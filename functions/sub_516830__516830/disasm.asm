0x516830: push    ecx
0x516831: mov     eax, [esp+4+a8]
0x516835: push    ebp
0x516836: mov     ebp, [esp+8+a6]
0x51683A: mov     dword ptr [eax], 0
0x516840: push    esi
0x516841: mov     esi, [esp+0Ch+a7]
0x516845: push    edi
0x516846: mov     edi, [esp+10h+a5]
0x51684A: mov     eax, [edi+30h]
0x51684D: mov     edx, ecx
0x51684F: mov     ecx, [esi]
0x516851: movsx   ecx, word ptr [ecx+eax]
0x516855: mov     [ebp+0], ecx
0x516858: add     dword ptr [esi], 2
0x51685B: cmp     dword ptr [ebp+0], 1Ch
0x51685F: mov     eax, [esi]
0x516861: mov     [esp+10h+var_4], edx
0x516865: jnz     loc_51694B
0x51686B: mov     ecx, [edi+30h]
0x51686E: movsx   ecx, word ptr [ecx+eax]
0x516872: push    ebx
0x516873: mov     bl, [esp+14h+a10]
0x516877: add     eax, 2
0x51687A: test    bl, bl
0x51687C: mov     byte ptr [esp+14h+a5], 0
0x516881: mov     [esi], eax
0x516883: jnz     short loc_5168C2
0x516885: mov     edx, [edx+8]
0x516888: push    edx; int
0x516889: push    ecx; int
0x51688A: mov     ecx, edi; int
0x51688C: call    Script_GetRefVariableByIndex
0x516891: test    eax, eax
0x516893: jz      short loc_5168C2
0x516895: cmp     dword ptr [eax+0Ch], 0
0x516899: mov     eax, [eax+8]
0x51689C: setnbe  byte ptr [esp+14h+a5]
0x5168A1: test    eax, eax
0x5168A3: jz      short loc_5168C2
0x5168A5: push    0; int
0x5168A7: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x5168AC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5168B1: push    0; int
0x5168B3: push    eax; void *
0x5168B4: call    OblivionDynamicCast
0x5168B9: mov     ecx, [esp+28h+a9]
0x5168BD: add     esp, 14h
0x5168C0: mov     [ecx], eax
0x5168C2: mov     edx, [esi]
0x5168C4: mov     eax, [edi+30h]
0x5168C7: movsx   ecx, word ptr [edx+eax]
0x5168CB: mov     [ebp+0], ecx
0x5168CE: add     dword ptr [esi], 2
0x5168D1: test    bl, bl
0x5168D3: pop     ebx
0x5168D4: jnz     short loc_516955
0x5168D6: mov     edx, [esp+10h+a9]
0x5168DA: cmp     dword ptr [edx], 0
0x5168DD: jnz     short loc_516955
0x5168DF: cmp     byte ptr [esp+10h+a5], 0
0x5168E4: jnz     short loc_516955
0x5168E6: mov     eax, [ebp+0]
0x5168E9: push    eax; a1
0x5168EA: call    ScriptRunner_LookupCommandByOpcode
0x5168EF: mov     esi, eax
0x5168F1: add     esp, 4
0x5168F4: test    esi, esi
0x5168F6: mov     ecx, edi
0x5168F8: jz      short loc_516924
0x5168FA: mov     edx, [edi]
0x5168FC: mov     eax, [edx+0D4h]
0x516902: call    eax
0x516904: mov     ecx, [esi]
0x516906: mov     edx, [esp+10h+var_4]
0x51690A: push    eax
0x51690B: push    ecx
0x51690C: push    offset aUnknownReferen; "Unknown reference object for function '"...
0x516911: push    edi
0x516912: push    edx
0x516913: call    sub_5167A0
0x516918: add     esp, 14h
0x51691B: pop     edi
0x51691C: pop     esi
0x51691D: xor     al, al
0x51691F: pop     ebp
0x516920: pop     ecx
0x516921: retn    18h
0x516924: mov     eax, [edi]
0x516926: mov     edx, [eax+0D4h]
0x51692C: call    edx
0x51692E: push    eax
0x51692F: mov     eax, [esp+14h+var_4]
0x516933: push    offset aUnknownRefer_0; "Unknown reference object.  Execution of"...
0x516938: push    edi
0x516939: push    eax
0x51693A: call    sub_5167A0
0x51693F: add     esp, 10h
0x516942: pop     edi
0x516943: pop     esi
0x516944: xor     al, al
0x516946: pop     ebp
0x516947: pop     ecx
0x516948: retn    18h
0x51694B: mov     ecx, [esp+10h+a9]
0x51694F: mov     dword ptr [ecx], 0
0x516955: mov     edx, [esi]
0x516957: mov     eax, [edi+30h]
0x51695A: movsx   ecx, word ptr [edx+eax]
0x51695E: mov     edx, [esp+10h+a8]
0x516962: pop     edi
0x516963: mov     [edx], ecx
0x516965: add     dword ptr [esi], 2
0x516968: pop     esi
0x516969: mov     al, 1
0x51696B: pop     ebp
0x51696C: pop     ecx
0x51696D: retn    18h
