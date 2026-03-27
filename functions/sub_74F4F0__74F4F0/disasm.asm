0x74F4F0: push    ebx
0x74F4F1: push    esi
0x74F4F2: mov     esi, [esp+8+arg_0]
0x74F4F6: push    edi
0x74F4F7: push    esi
0x74F4F8: mov     edi, ecx
0x74F4FA: call    sub_752EC0
0x74F4FF: mov     eax, ds:0B40B50h
0x74F504: push    eax; ArgList
0x74F505: call    TESOutput_PrintString
0x74F50A: movzx   ebx, word ptr [esi+0Ah]
0x74F50E: movzx   ecx, word ptr [esi+8]
0x74F512: add     esp, 4
0x74F515: cmp     ebx, ecx
0x74F517: mov     [esp+0Ch+arg_0], eax
0x74F51B: jb      short loc_74F52B
0x74F51D: movzx   edx, word ptr [esi+0Eh]
0x74F521: add     edx, ebx
0x74F523: push    edx
0x74F524: mov     ecx, esi
0x74F526: call    NiTArray_SetSize
0x74F52B: lea     eax, [esp+0Ch+arg_0]
0x74F52F: push    eax
0x74F530: push    ebx
0x74F531: mov     ecx, esi
0x74F533: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F538: fld     dword ptr [edi+18h]
0x74F53B: push    ecx
0x74F53C: fstp    [esp+10h+var_10]; float
0x74F53F: push    offset aSpeed; "Speed"
0x74F544: call    TESOutput_PrintLabeledFloat
0x74F549: movzx   ebx, word ptr [esi+0Ah]
0x74F54D: movzx   ecx, word ptr [esi+8]
0x74F551: add     esp, 8
0x74F554: cmp     ebx, ecx
0x74F556: mov     [esp+0Ch+arg_0], eax
0x74F55A: jb      short loc_74F56A
0x74F55C: movzx   edx, word ptr [esi+0Eh]
0x74F560: add     edx, ebx
0x74F562: push    edx
0x74F563: mov     ecx, esi
0x74F565: call    NiTArray_SetSize
0x74F56A: lea     eax, [esp+0Ch+arg_0]
0x74F56E: push    eax
0x74F56F: push    ebx
0x74F570: mov     ecx, esi
0x74F572: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F577: fld     dword ptr [edi+1Ch]
0x74F57A: push    ecx
0x74F57B: fstp    [esp+10h+var_10]; float
0x74F57E: push    offset aSpeedVariation; "Speed Variation"
0x74F583: call    TESOutput_PrintLabeledFloat
0x74F588: movzx   ebx, word ptr [esi+0Ah]
0x74F58C: movzx   ecx, word ptr [esi+8]
0x74F590: add     esp, 8
0x74F593: cmp     ebx, ecx
0x74F595: mov     [esp+0Ch+arg_0], eax
0x74F599: jb      short loc_74F5A9
0x74F59B: movzx   edx, word ptr [esi+0Eh]
0x74F59F: add     edx, ebx
0x74F5A1: push    edx
0x74F5A2: mov     ecx, esi
0x74F5A4: call    NiTArray_SetSize
0x74F5A9: lea     eax, [esp+0Ch+arg_0]
0x74F5AD: push    eax
0x74F5AE: push    ebx
0x74F5AF: mov     ecx, esi
0x74F5B1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F5B6: fld     dword ptr [edi+20h]
0x74F5B9: push    ecx
0x74F5BA: fstp    [esp+10h+var_10]; float
0x74F5BD: push    offset aDeclination; "Declination"
0x74F5C2: call    TESOutput_PrintLabeledFloat
0x74F5C7: movzx   ebx, word ptr [esi+0Ah]
0x74F5CB: movzx   ecx, word ptr [esi+8]
0x74F5CF: add     esp, 8
0x74F5D2: cmp     ebx, ecx
0x74F5D4: mov     [esp+0Ch+arg_0], eax
0x74F5D8: jb      short loc_74F5E8
0x74F5DA: movzx   edx, word ptr [esi+0Eh]
0x74F5DE: add     edx, ebx
0x74F5E0: push    edx
0x74F5E1: mov     ecx, esi
0x74F5E3: call    NiTArray_SetSize
0x74F5E8: lea     eax, [esp+0Ch+arg_0]
0x74F5EC: push    eax
0x74F5ED: push    ebx
0x74F5EE: mov     ecx, esi
0x74F5F0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F5F5: fld     dword ptr [edi+24h]
0x74F5F8: push    ecx
0x74F5F9: fstp    [esp+10h+var_10]; float
0x74F5FC: push    offset aDeclinationVar; "Declination Variation"
0x74F601: call    TESOutput_PrintLabeledFloat
0x74F606: movzx   ebx, word ptr [esi+0Ah]
0x74F60A: movzx   ecx, word ptr [esi+8]
0x74F60E: add     esp, 8
0x74F611: cmp     ebx, ecx
0x74F613: mov     [esp+0Ch+arg_0], eax
0x74F617: jb      short loc_74F627
0x74F619: movzx   edx, word ptr [esi+0Eh]
0x74F61D: add     edx, ebx
0x74F61F: push    edx
0x74F620: mov     ecx, esi
0x74F622: call    NiTArray_SetSize
0x74F627: lea     eax, [esp+0Ch+arg_0]
0x74F62B: push    eax
0x74F62C: push    ebx
0x74F62D: mov     ecx, esi
0x74F62F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F634: fld     dword ptr [edi+28h]
0x74F637: push    ecx
0x74F638: fstp    [esp+10h+var_10]; float
0x74F63B: push    offset aPlanarAngle; "Planar Angle"
0x74F640: call    TESOutput_PrintLabeledFloat
0x74F645: movzx   ebx, word ptr [esi+0Ah]
0x74F649: movzx   ecx, word ptr [esi+8]
0x74F64D: add     esp, 8
0x74F650: cmp     ebx, ecx
0x74F652: mov     [esp+0Ch+arg_0], eax
0x74F656: jb      short loc_74F666
0x74F658: movzx   edx, word ptr [esi+0Eh]
0x74F65C: add     edx, ebx
0x74F65E: push    edx
0x74F65F: mov     ecx, esi
0x74F661: call    NiTArray_SetSize
0x74F666: lea     eax, [esp+0Ch+arg_0]
0x74F66A: push    eax
0x74F66B: push    ebx
0x74F66C: mov     ecx, esi
0x74F66E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F673: fld     dword ptr [edi+2Ch]
0x74F676: push    ecx
0x74F677: fstp    [esp+10h+var_10]; float
0x74F67A: push    offset aPlanarAngleVar; "Planar Angle Variation"
0x74F67F: call    TESOutput_PrintLabeledFloat
0x74F684: movzx   ebx, word ptr [esi+0Ah]
0x74F688: movzx   ecx, word ptr [esi+8]
0x74F68C: add     esp, 8
0x74F68F: cmp     ebx, ecx
0x74F691: mov     [esp+0Ch+arg_0], eax
0x74F695: jb      short loc_74F6A5
0x74F697: movzx   edx, word ptr [esi+0Eh]
0x74F69B: add     edx, ebx
0x74F69D: push    edx
0x74F69E: mov     ecx, esi
0x74F6A0: call    NiTArray_SetSize
0x74F6A5: lea     eax, [esp+0Ch+arg_0]
0x74F6A9: push    eax
0x74F6AA: push    ebx
0x74F6AB: mov     ecx, esi
0x74F6AD: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F6B2: push    offset aInitialColor; "Initial Color"
0x74F6B7: lea     ecx, [edi+30h]
0x74F6BA: call    sub_7093D0
0x74F6BF: movzx   ebx, word ptr [esi+0Ah]
0x74F6C3: movzx   ecx, word ptr [esi+8]
0x74F6C7: cmp     ebx, ecx
0x74F6C9: mov     [esp+0Ch+arg_0], eax
0x74F6CD: jb      short loc_74F6DD
0x74F6CF: movzx   edx, word ptr [esi+0Eh]
0x74F6D3: add     edx, ebx
0x74F6D5: push    edx
0x74F6D6: mov     ecx, esi
0x74F6D8: call    NiTArray_SetSize
0x74F6DD: lea     eax, [esp+0Ch+arg_0]
0x74F6E1: push    eax
0x74F6E2: push    ebx
0x74F6E3: mov     ecx, esi
0x74F6E5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F6EA: fld     dword ptr [edi+40h]
0x74F6ED: push    ecx
0x74F6EE: fstp    [esp+10h+var_10]; float
0x74F6F1: push    offset aInitialRadius; "Initial Radius"
0x74F6F6: call    TESOutput_PrintLabeledFloat
0x74F6FB: movzx   ebx, word ptr [esi+0Ah]
0x74F6FF: movzx   ecx, word ptr [esi+8]
0x74F703: add     esp, 8
0x74F706: cmp     ebx, ecx
0x74F708: mov     [esp+0Ch+arg_0], eax
0x74F70C: jb      short loc_74F71C
0x74F70E: movzx   edx, word ptr [esi+0Eh]
0x74F712: add     edx, ebx
0x74F714: push    edx
0x74F715: mov     ecx, esi
0x74F717: call    NiTArray_SetSize
0x74F71C: lea     eax, [esp+0Ch+arg_0]
0x74F720: push    eax
0x74F721: push    ebx
0x74F722: mov     ecx, esi
0x74F724: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F729: fld     dword ptr [edi+44h]
0x74F72C: push    ecx
0x74F72D: fstp    [esp+10h+var_10]; float
0x74F730: push    offset aRadiusVariatio; "Radius Variation"
0x74F735: call    TESOutput_PrintLabeledFloat
0x74F73A: movzx   ebx, word ptr [esi+0Ah]
0x74F73E: movzx   ecx, word ptr [esi+8]
0x74F742: add     esp, 8
0x74F745: cmp     ebx, ecx
0x74F747: mov     [esp+0Ch+arg_0], eax
0x74F74B: jb      short loc_74F75B
0x74F74D: movzx   edx, word ptr [esi+0Eh]
0x74F751: add     edx, ebx
0x74F753: push    edx
0x74F754: mov     ecx, esi
0x74F756: call    NiTArray_SetSize
0x74F75B: lea     eax, [esp+0Ch+arg_0]
0x74F75F: push    eax
0x74F760: push    ebx
0x74F761: mov     ecx, esi
0x74F763: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F768: fld     dword ptr [edi+48h]
0x74F76B: push    ecx
0x74F76C: fstp    [esp+10h+var_10]; float
0x74F76F: push    offset aLifeSpan; "Life Span"
0x74F774: call    TESOutput_PrintLabeledFloat
0x74F779: movzx   ebx, word ptr [esi+0Ah]
0x74F77D: movzx   ecx, word ptr [esi+8]
0x74F781: add     esp, 8
0x74F784: cmp     ebx, ecx
0x74F786: mov     [esp+0Ch+arg_0], eax
0x74F78A: jb      short loc_74F79A
0x74F78C: movzx   edx, word ptr [esi+0Eh]
0x74F790: add     edx, ebx
0x74F792: push    edx
0x74F793: mov     ecx, esi
0x74F795: call    NiTArray_SetSize
0x74F79A: lea     eax, [esp+0Ch+arg_0]
0x74F79E: push    eax
0x74F79F: push    ebx
0x74F7A0: mov     ecx, esi
0x74F7A2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F7A7: fld     dword ptr [edi+4Ch]
0x74F7AA: push    ecx
0x74F7AB: fstp    [esp+10h+var_10]; float
0x74F7AE: push    offset aLifeSpanVariat; "Life Span Variation"
0x74F7B3: call    TESOutput_PrintLabeledFloat
0x74F7B8: movzx   edi, word ptr [esi+0Ah]
0x74F7BC: movzx   ecx, word ptr [esi+8]
0x74F7C0: add     esp, 8
0x74F7C3: cmp     edi, ecx
0x74F7C5: mov     [esp+0Ch+arg_0], eax
0x74F7C9: jb      short loc_74F7D9
0x74F7CB: movzx   edx, word ptr [esi+0Eh]
0x74F7CF: add     edx, edi
0x74F7D1: push    edx
0x74F7D2: mov     ecx, esi
0x74F7D4: call    NiTArray_SetSize
0x74F7D9: lea     eax, [esp+0Ch+arg_0]
0x74F7DD: push    eax
0x74F7DE: push    edi
0x74F7DF: mov     ecx, esi
0x74F7E1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x74F7E6: pop     edi
0x74F7E7: pop     esi
0x74F7E8: pop     ebx
0x74F7E9: retn    4
