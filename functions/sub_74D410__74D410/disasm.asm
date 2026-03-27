0x74D410: push    ebx
0x74D411: push    esi
0x74D412: mov     esi, [esp+8+arg_0]
0x74D416: push    edi
0x74D417: push    esi
0x74D418: mov     edi, ecx
0x74D41A: call    sub_7531E0
0x74D41F: mov     eax, ds:0B409ECh
0x74D424: push    eax; ArgList
0x74D425: call    TESOutput_PrintString
0x74D42A: movzx   ebx, word ptr [esi+0Ah]
0x74D42E: movzx   ecx, word ptr [esi+8]
0x74D432: add     esp, 4
0x74D435: cmp     ebx, ecx
0x74D437: mov     [esp+0Ch+arg_0], eax
0x74D43B: jb      short loc_74D44B
0x74D43D: movzx   edx, word ptr [esi+0Eh]
0x74D441: add     edx, ebx
0x74D443: push    edx
0x74D444: mov     ecx, esi
0x74D446: call    NiTArray_SetSize
0x74D44B: lea     eax, [esp+0Ch+arg_0]
0x74D44F: push    eax
0x74D450: push    ebx
0x74D451: mov     ecx, esi
0x74D453: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74D458: fld     dword ptr [edi+54h]
0x74D45B: push    ecx
0x74D45C: fstp    [esp+10h+var_10]; float
0x74D45F: push    offset aWidth_1; "Width"
0x74D464: call    TESOutput_PrintLabeledFloat
0x74D469: movzx   ebx, word ptr [esi+0Ah]
0x74D46D: movzx   ecx, word ptr [esi+8]
0x74D471: add     esp, 8
0x74D474: cmp     ebx, ecx
0x74D476: mov     [esp+0Ch+arg_0], eax
0x74D47A: jb      short loc_74D48A
0x74D47C: movzx   edx, word ptr [esi+0Eh]
0x74D480: add     edx, ebx
0x74D482: push    edx
0x74D483: mov     ecx, esi
0x74D485: call    NiTArray_SetSize
0x74D48A: lea     eax, [esp+0Ch+arg_0]
0x74D48E: push    eax
0x74D48F: push    ebx
0x74D490: mov     ecx, esi
0x74D492: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74D497: fld     dword ptr [edi+58h]
0x74D49A: push    ecx
0x74D49B: fstp    [esp+10h+var_10]; float
0x74D49E: push    offset aHeight_1; "Height"
0x74D4A3: call    TESOutput_PrintLabeledFloat
0x74D4A8: movzx   ebx, word ptr [esi+0Ah]
0x74D4AC: movzx   ecx, word ptr [esi+8]
0x74D4B0: add     esp, 8
0x74D4B3: cmp     ebx, ecx
0x74D4B5: mov     [esp+0Ch+arg_0], eax
0x74D4B9: jb      short loc_74D4C9
0x74D4BB: movzx   edx, word ptr [esi+0Eh]
0x74D4BF: add     edx, ebx
0x74D4C1: push    edx
0x74D4C2: mov     ecx, esi
0x74D4C4: call    NiTArray_SetSize
0x74D4C9: lea     eax, [esp+0Ch+arg_0]
0x74D4CD: push    eax
0x74D4CE: push    ebx
0x74D4CF: mov     ecx, esi
0x74D4D1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74D4D6: fld     dword ptr [edi+5Ch]
0x74D4D9: push    ecx
0x74D4DA: fstp    [esp+10h+var_10]; float
0x74D4DD: push    offset aDepth_1; "Depth"
0x74D4E2: call    TESOutput_PrintLabeledFloat
0x74D4E7: movzx   edi, word ptr [esi+0Ah]
0x74D4EB: movzx   ecx, word ptr [esi+8]
0x74D4EF: add     esp, 8
0x74D4F2: cmp     edi, ecx
0x74D4F4: mov     [esp+0Ch+arg_0], eax
0x74D4F8: jb      short loc_74D508
0x74D4FA: movzx   edx, word ptr [esi+0Eh]
0x74D4FE: add     edx, edi
0x74D500: push    edx
0x74D501: mov     ecx, esi
0x74D503: call    NiTArray_SetSize
0x74D508: lea     eax, [esp+0Ch+arg_0]
0x74D50C: push    eax
0x74D50D: push    edi
0x74D50E: mov     ecx, esi
0x74D510: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74D515: pop     edi
0x74D516: pop     esi
0x74D517: pop     ebx
0x74D518: retn    4
