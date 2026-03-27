0x882FC0: push    ebx
0x882FC1: push    esi
0x882FC2: mov     esi, dword ptr [esp+8+arg_0]
0x882FC6: push    edi
0x882FC7: push    esi
0x882FC8: mov     edi, ecx
0x882FCA: call    sub_7D9890
0x882FCF: mov     eax, ds:0B478A0h
0x882FD4: push    eax; ArgList
0x882FD5: call    TESOutput_PrintString
0x882FDA: movzx   ebx, word ptr [esi+0Ah]
0x882FDE: movzx   ecx, word ptr [esi+8]
0x882FE2: add     esp, 4
0x882FE5: cmp     ebx, ecx
0x882FE7: mov     dword ptr [esp+0Ch+arg_0], eax
0x882FEB: jb      short loc_882FFB
0x882FED: movzx   edx, word ptr [esi+0Eh]
0x882FF1: add     edx, ebx
0x882FF3: push    edx
0x882FF4: mov     ecx, esi
0x882FF6: call    NiTArray_SetSize
0x882FFB: lea     eax, [esp+0Ch+arg_0]
0x882FFF: push    eax
0x883000: push    ebx
0x883001: mov     ecx, esi
0x883003: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x883008: mov     eax, [edi+168h]
0x88300E: push    eax; int
0x88300F: push    offset aHeightMap; "height map"
0x883014: call    TESOutput_PrintLabeledPointer
0x883019: movzx   ebx, word ptr [esi+0Ah]
0x88301D: movzx   ecx, word ptr [esi+8]
0x883021: add     esp, 8
0x883024: cmp     ebx, ecx
0x883026: mov     dword ptr [esp+0Ch+arg_0], eax
0x88302A: jb      short loc_88303A
0x88302C: movzx   edx, word ptr [esi+0Eh]
0x883030: add     edx, ebx
0x883032: push    edx
0x883033: mov     ecx, esi
0x883035: call    NiTArray_SetSize
0x88303A: lea     eax, [esp+0Ch+arg_0]
0x88303E: push    eax
0x88303F: push    ebx
0x883040: mov     ecx, esi
0x883042: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x883047: test    dword ptr [edi+1Ch], 400h
0x88304E: setnbe  cl
0x883051: mov     [esp+0Ch+arg_0], cl
0x883055: mov     edx, dword ptr [esp+0Ch+arg_0]
0x883059: push    edx; char
0x88305A: push    offset aPrimaryLightIs; "primary light is point"
0x88305F: call    TESOutput_PrintLabeledBool
0x883064: movzx   ebx, word ptr [esi+0Ah]
0x883068: mov     dword ptr [esp+14h+arg_0], eax
0x88306C: movzx   eax, word ptr [esi+8]
0x883070: add     esp, 8
0x883073: cmp     ebx, eax
0x883075: jb      short loc_883085
0x883077: movzx   ecx, word ptr [esi+0Eh]
0x88307B: add     ecx, ebx
0x88307D: push    ecx
0x88307E: mov     ecx, esi
0x883080: call    NiTArray_SetSize
0x883085: lea     edx, [esp+0Ch+arg_0]
0x883089: push    edx
0x88308A: push    ebx
0x88308B: mov     ecx, esi
0x88308D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x883092: test    dword ptr [edi+1Ch], 800h
0x883099: setnbe  al
0x88309C: mov     [esp+0Ch+arg_0], al
0x8830A0: mov     ecx, dword ptr [esp+0Ch+arg_0]
0x8830A4: push    ecx; char
0x8830A5: push    offset aSecondLight; "second light"
0x8830AA: call    TESOutput_PrintLabeledBool
0x8830AF: movzx   ebx, word ptr [esi+0Ah]
0x8830B3: movzx   edx, word ptr [esi+8]
0x8830B7: add     esp, 8
0x8830BA: cmp     ebx, edx
0x8830BC: mov     dword ptr [esp+0Ch+arg_0], eax
0x8830C0: jb      short loc_8830D0
0x8830C2: movzx   eax, word ptr [esi+0Eh]
0x8830C6: add     eax, ebx
0x8830C8: push    eax
0x8830C9: mov     ecx, esi
0x8830CB: call    NiTArray_SetSize
0x8830D0: lea     ecx, [esp+0Ch+arg_0]
0x8830D4: push    ecx
0x8830D5: push    ebx
0x8830D6: mov     ecx, esi
0x8830D8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8830DD: test    dword ptr [edi+1Ch], 1000h
0x8830E4: setnbe  dl
0x8830E7: mov     [esp+0Ch+arg_0], dl
0x8830EB: mov     eax, dword ptr [esp+0Ch+arg_0]
0x8830EF: push    eax; char
0x8830F0: push    offset aThirdLight; "third light"
0x8830F5: call    TESOutput_PrintLabeledBool
0x8830FA: movzx   edi, word ptr [esi+0Ah]
0x8830FE: movzx   ecx, word ptr [esi+8]
0x883102: add     esp, 8
0x883105: cmp     edi, ecx
0x883107: mov     dword ptr [esp+0Ch+arg_0], eax
0x88310B: jb      short loc_88311B
0x88310D: movzx   edx, word ptr [esi+0Eh]
0x883111: add     edx, edi
0x883113: push    edx
0x883114: mov     ecx, esi
0x883116: call    NiTArray_SetSize
0x88311B: lea     eax, [esp+0Ch+arg_0]
0x88311F: push    eax
0x883120: push    edi
0x883121: mov     ecx, esi
0x883123: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x883128: pop     edi
0x883129: pop     esi
0x88312A: pop     ebx
0x88312B: retn    4
