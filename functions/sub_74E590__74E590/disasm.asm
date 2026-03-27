0x74E590: push    ebx
0x74E591: push    esi
0x74E592: mov     esi, [esp+8+arg_0]
0x74E596: push    edi
0x74E597: push    esi
0x74E598: mov     edi, ecx
0x74E59A: call    sub_752EC0
0x74E59F: mov     eax, ds:0B40AA4h
0x74E5A4: push    eax; ArgList
0x74E5A5: call    TESOutput_PrintString
0x74E5AA: movzx   ebx, word ptr [esi+0Ah]
0x74E5AE: movzx   ecx, word ptr [esi+8]
0x74E5B2: add     esp, 4
0x74E5B5: cmp     ebx, ecx
0x74E5B7: mov     [esp+0Ch+arg_0], eax
0x74E5BB: jb      short loc_74E5CB
0x74E5BD: movzx   edx, word ptr [esi+0Eh]
0x74E5C1: add     edx, ebx
0x74E5C3: push    edx
0x74E5C4: mov     ecx, esi
0x74E5C6: call    NiTArray_SetSize
0x74E5CB: lea     eax, [esp+0Ch+arg_0]
0x74E5CF: push    eax
0x74E5D0: push    ebx
0x74E5D1: mov     ecx, esi
0x74E5D3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74E5D8: fld     dword ptr [edi+18h]
0x74E5DB: push    ecx
0x74E5DC: fstp    [esp+10h+var_10]; float
0x74E5DF: push    offset aInitialRotatio; "Initial Rotation Speed"
0x74E5E4: call    TESOutput_PrintLabeledFloat
0x74E5E9: movzx   ebx, word ptr [esi+0Ah]
0x74E5ED: movzx   ecx, word ptr [esi+8]
0x74E5F1: add     esp, 8
0x74E5F4: cmp     ebx, ecx
0x74E5F6: mov     [esp+0Ch+arg_0], eax
0x74E5FA: jb      short loc_74E60A
0x74E5FC: movzx   edx, word ptr [esi+0Eh]
0x74E600: add     edx, ebx
0x74E602: push    edx
0x74E603: mov     ecx, esi
0x74E605: call    NiTArray_SetSize
0x74E60A: lea     eax, [esp+0Ch+arg_0]
0x74E60E: push    eax
0x74E60F: push    ebx
0x74E610: mov     ecx, esi
0x74E612: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74E617: fld     dword ptr [edi+1Ch]
0x74E61A: push    ecx
0x74E61B: fstp    [esp+10h+var_10]; float
0x74E61E: push    offset aInitialRotat_0; "Initial Rotation Speed Variation"
0x74E623: call    TESOutput_PrintLabeledFloat
0x74E628: movzx   ebx, word ptr [esi+0Ah]
0x74E62C: movzx   ecx, word ptr [esi+8]
0x74E630: add     esp, 8
0x74E633: cmp     ebx, ecx
0x74E635: mov     [esp+0Ch+arg_0], eax
0x74E639: jb      short loc_74E649
0x74E63B: movzx   edx, word ptr [esi+0Eh]
0x74E63F: add     edx, ebx
0x74E641: push    edx
0x74E642: mov     ecx, esi
0x74E644: call    NiTArray_SetSize
0x74E649: lea     eax, [esp+0Ch+arg_0]
0x74E64D: push    eax
0x74E64E: push    ebx
0x74E64F: mov     ecx, esi
0x74E651: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74E656: movzx   ecx, byte ptr [edi+35h]
0x74E65A: push    ecx; char
0x74E65B: push    offset aRandomRotSpeed; "Random Rot Speed Sign"
0x74E660: call    TESOutput_PrintLabeledBool
0x74E665: movzx   ebx, word ptr [esi+0Ah]
0x74E669: movzx   edx, word ptr [esi+8]
0x74E66D: add     esp, 8
0x74E670: cmp     ebx, edx
0x74E672: mov     [esp+0Ch+arg_0], eax
0x74E676: jb      short loc_74E686
0x74E678: movzx   eax, word ptr [esi+0Eh]
0x74E67C: add     eax, ebx
0x74E67E: push    eax
0x74E67F: mov     ecx, esi
0x74E681: call    NiTArray_SetSize
0x74E686: lea     ecx, [esp+0Ch+arg_0]
0x74E68A: push    ecx
0x74E68B: push    ebx
0x74E68C: mov     ecx, esi
0x74E68E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74E693: fld     dword ptr [edi+20h]
0x74E696: push    ecx
0x74E697: fstp    [esp+10h+var_10]; float
0x74E69A: push    offset aInitialRotat_1; "Initial Rotation Angle"
0x74E69F: call    TESOutput_PrintLabeledFloat
0x74E6A4: movzx   ebx, word ptr [esi+0Ah]
0x74E6A8: movzx   edx, word ptr [esi+8]
0x74E6AC: add     esp, 8
0x74E6AF: cmp     ebx, edx
0x74E6B1: mov     [esp+0Ch+arg_0], eax
0x74E6B5: jb      short loc_74E6C5
0x74E6B7: movzx   eax, word ptr [esi+0Eh]
0x74E6BB: add     eax, ebx
0x74E6BD: push    eax
0x74E6BE: mov     ecx, esi
0x74E6C0: call    NiTArray_SetSize
0x74E6C5: lea     ecx, [esp+0Ch+arg_0]
0x74E6C9: push    ecx
0x74E6CA: push    ebx
0x74E6CB: mov     ecx, esi
0x74E6CD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74E6D2: fld     dword ptr [edi+24h]
0x74E6D5: push    ecx
0x74E6D6: fstp    [esp+10h+var_10]; float
0x74E6D9: push    offset aInitialRotat_2; "Initial Rotation Angle Variation"
0x74E6DE: call    TESOutput_PrintLabeledFloat
0x74E6E3: movzx   ebx, word ptr [esi+0Ah]
0x74E6E7: movzx   edx, word ptr [esi+8]
0x74E6EB: add     esp, 8
0x74E6EE: cmp     ebx, edx
0x74E6F0: mov     [esp+0Ch+arg_0], eax
0x74E6F4: jb      short loc_74E704
0x74E6F6: movzx   eax, word ptr [esi+0Eh]
0x74E6FA: add     eax, ebx
0x74E6FC: push    eax
0x74E6FD: mov     ecx, esi
0x74E6FF: call    NiTArray_SetSize
0x74E704: lea     ecx, [esp+0Ch+arg_0]
0x74E708: push    ecx
0x74E709: push    ebx
0x74E70A: mov     ecx, esi
0x74E70C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74E711: movzx   edx, byte ptr [edi+34h]
0x74E715: push    edx; char
0x74E716: push    offset aRandomInitialA; "Random Initial Axis"
0x74E71B: call    TESOutput_PrintLabeledBool
0x74E720: movzx   ebx, word ptr [esi+0Ah]
0x74E724: mov     [esp+14h+arg_0], eax
0x74E728: movzx   eax, word ptr [esi+8]
0x74E72C: add     esp, 8
0x74E72F: cmp     ebx, eax
0x74E731: jb      short loc_74E741
0x74E733: movzx   ecx, word ptr [esi+0Eh]
0x74E737: add     ecx, ebx
0x74E739: push    ecx
0x74E73A: mov     ecx, esi
0x74E73C: call    NiTArray_SetSize
0x74E741: lea     edx, [esp+0Ch+arg_0]
0x74E745: push    edx
0x74E746: push    ebx
0x74E747: mov     ecx, esi
0x74E749: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74E74E: push    offset aInitialAxis; "Initial Axis"
0x74E753: lea     ecx, [edi+28h]
0x74E756: call    sub_707280
0x74E75B: movzx   edi, word ptr [esi+0Ah]
0x74E75F: mov     [esp+0Ch+arg_0], eax
0x74E763: movzx   eax, word ptr [esi+8]
0x74E767: cmp     edi, eax
0x74E769: jb      short loc_74E779
0x74E76B: movzx   ecx, word ptr [esi+0Eh]
0x74E76F: add     ecx, edi
0x74E771: push    ecx
0x74E772: mov     ecx, esi
0x74E774: call    NiTArray_SetSize
0x74E779: lea     edx, [esp+0Ch+arg_0]
0x74E77D: push    edx
0x74E77E: push    edi
0x74E77F: mov     ecx, esi
0x74E781: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74E786: pop     edi
0x74E787: pop     esi
0x74E788: pop     ebx
0x74E789: retn    4
