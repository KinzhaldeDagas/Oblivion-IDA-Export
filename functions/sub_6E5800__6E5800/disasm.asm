0x6E5800: push    ebx
0x6E5801: push    esi
0x6E5802: mov     esi, [esp+8+arg_0]
0x6E5806: push    edi
0x6E5807: push    esi
0x6E5808: mov     ebx, ecx
0x6E580A: call    sub_6ED580
0x6E580F: mov     eax, ds:0B3E49Ch
0x6E5814: push    eax; ArgList
0x6E5815: call    TESOutput_PrintString
0x6E581A: movzx   edi, word ptr [esi+0Ah]
0x6E581E: movzx   ecx, word ptr [esi+8]
0x6E5822: add     esp, 4
0x6E5825: cmp     edi, ecx
0x6E5827: mov     [esp+0Ch+arg_0], eax
0x6E582B: jb      short loc_6E583B
0x6E582D: movzx   edx, word ptr [esi+0Eh]
0x6E5831: add     edx, edi
0x6E5833: push    edx
0x6E5834: mov     ecx, esi
0x6E5836: call    NiTArray_SetSize
0x6E583B: lea     eax, [esp+0Ch+arg_0]
0x6E583F: push    eax
0x6E5840: push    edi
0x6E5841: mov     ecx, esi
0x6E5843: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E5848: fld     dword ptr [ebx+1Ch]
0x6E584B: push    ecx
0x6E584C: fstp    [esp+10h+var_10]; float
0x6E584F: push    offset aM_ffloatvalue; "m_fFloatValue"
0x6E5854: call    TESOutput_PrintLabeledFloat
0x6E5859: movzx   edi, word ptr [esi+0Ah]
0x6E585D: movzx   ecx, word ptr [esi+8]
0x6E5861: add     esp, 8
0x6E5864: cmp     edi, ecx
0x6E5866: mov     [esp+0Ch+arg_0], eax
0x6E586A: jb      short loc_6E587A
0x6E586C: movzx   edx, word ptr [esi+0Eh]
0x6E5870: add     edx, edi
0x6E5872: push    edx
0x6E5873: mov     ecx, esi
0x6E5875: call    NiTArray_SetSize
0x6E587A: lea     eax, [esp+0Ch+arg_0]
0x6E587E: push    eax
0x6E587F: push    edi
0x6E5880: mov     ecx, esi
0x6E5882: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E5887: mov     ecx, [ebx+20h]
0x6E588A: push    ecx; int
0x6E588B: push    offset aM_kfloatcphand; "m_kFloatCPHandle"
0x6E5890: call    TESOutput_PrintLabeledUnsignedInt
0x6E5895: movzx   edi, word ptr [esi+0Ah]
0x6E5899: movzx   edx, word ptr [esi+8]
0x6E589D: add     esp, 8
0x6E58A0: cmp     edi, edx
0x6E58A2: mov     [esp+0Ch+arg_0], eax
0x6E58A6: jb      short loc_6E58B6
0x6E58A8: movzx   eax, word ptr [esi+0Eh]
0x6E58AC: add     eax, edi
0x6E58AE: push    eax
0x6E58AF: mov     ecx, esi
0x6E58B1: call    NiTArray_SetSize
0x6E58B6: lea     ecx, [esp+0Ch+arg_0]
0x6E58BA: push    ecx
0x6E58BB: push    edi
0x6E58BC: mov     ecx, esi
0x6E58BE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E58C3: pop     edi
0x6E58C4: pop     esi
0x6E58C5: pop     ebx
0x6E58C6: retn    4
