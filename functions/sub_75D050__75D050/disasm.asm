0x75D050: push    ebx
0x75D051: push    esi
0x75D052: mov     esi, [esp+8+arg_0]
0x75D056: push    edi
0x75D057: push    esi
0x75D058: mov     edi, ecx
0x75D05A: call    sub_75EAA0
0x75D05F: mov     eax, ds:0B41B38h
0x75D064: push    eax; ArgList
0x75D065: call    TESOutput_PrintString
0x75D06A: movzx   ebx, word ptr [esi+0Ah]
0x75D06E: movzx   ecx, word ptr [esi+8]
0x75D072: add     esp, 4
0x75D075: cmp     ebx, ecx
0x75D077: mov     [esp+0Ch+arg_0], eax
0x75D07B: jb      short loc_75D08B
0x75D07D: movzx   edx, word ptr [esi+0Eh]
0x75D081: add     edx, ebx
0x75D083: push    edx
0x75D084: mov     ecx, esi
0x75D086: call    NiTArray_SetSize
0x75D08B: lea     eax, [esp+0Ch+arg_0]
0x75D08F: push    eax
0x75D090: push    ebx
0x75D091: mov     ecx, esi
0x75D093: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D098: push    offset aDirection_0; "Direction"
0x75D09D: lea     ecx, [edi+40h]
0x75D0A0: call    sub_707280
0x75D0A5: movzx   ebx, word ptr [esi+0Ah]
0x75D0A9: movzx   ecx, word ptr [esi+8]
0x75D0AD: cmp     ebx, ecx
0x75D0AF: mov     [esp+0Ch+arg_0], eax
0x75D0B3: jb      short loc_75D0C3
0x75D0B5: movzx   edx, word ptr [esi+0Eh]
0x75D0B9: add     edx, ebx
0x75D0BB: push    edx
0x75D0BC: mov     ecx, esi
0x75D0BE: call    NiTArray_SetSize
0x75D0C3: lea     eax, [esp+0Ch+arg_0]
0x75D0C7: push    eax
0x75D0C8: push    ebx
0x75D0C9: mov     ecx, esi
0x75D0CB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D0D0: push    offset aUnitDirection; "Unit Direction"
0x75D0D5: lea     ecx, [edi+4Ch]
0x75D0D8: call    sub_707280
0x75D0DD: movzx   ebx, word ptr [esi+0Ah]
0x75D0E1: movzx   ecx, word ptr [esi+8]
0x75D0E5: cmp     ebx, ecx
0x75D0E7: mov     [esp+0Ch+arg_0], eax
0x75D0EB: jb      short loc_75D0FB
0x75D0ED: movzx   edx, word ptr [esi+0Eh]
0x75D0F1: add     edx, ebx
0x75D0F3: push    edx
0x75D0F4: mov     ecx, esi
0x75D0F6: call    NiTArray_SetSize
0x75D0FB: lea     eax, [esp+0Ch+arg_0]
0x75D0FF: push    eax
0x75D100: push    ebx
0x75D101: mov     ecx, esi
0x75D103: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D108: fld     dword ptr [edi+58h]
0x75D10B: push    ecx
0x75D10C: fstp    [esp+10h+var_10]; float
0x75D10F: push    offset aAirfriction; "AirFriction"
0x75D114: call    TESOutput_PrintLabeledFloat
0x75D119: movzx   ebx, word ptr [esi+0Ah]
0x75D11D: movzx   ecx, word ptr [esi+8]
0x75D121: add     esp, 8
0x75D124: cmp     ebx, ecx
0x75D126: mov     [esp+0Ch+arg_0], eax
0x75D12A: jb      short loc_75D13A
0x75D12C: movzx   edx, word ptr [esi+0Eh]
0x75D130: add     edx, ebx
0x75D132: push    edx
0x75D133: mov     ecx, esi
0x75D135: call    NiTArray_SetSize
0x75D13A: lea     eax, [esp+0Ch+arg_0]
0x75D13E: push    eax
0x75D13F: push    ebx
0x75D140: mov     ecx, esi
0x75D142: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D147: fld     dword ptr [edi+5Ch]
0x75D14A: push    ecx
0x75D14B: fstp    [esp+10h+var_10]; float
0x75D14E: push    offset aInheritVelocit; "Inherit Velocity"
0x75D153: call    TESOutput_PrintLabeledFloat
0x75D158: movzx   ebx, word ptr [esi+0Ah]
0x75D15C: movzx   ecx, word ptr [esi+8]
0x75D160: add     esp, 8
0x75D163: cmp     ebx, ecx
0x75D165: mov     [esp+0Ch+arg_0], eax
0x75D169: jb      short loc_75D179
0x75D16B: movzx   edx, word ptr [esi+0Eh]
0x75D16F: add     edx, ebx
0x75D171: push    edx
0x75D172: mov     ecx, esi
0x75D174: call    NiTArray_SetSize
0x75D179: lea     eax, [esp+0Ch+arg_0]
0x75D17D: push    eax
0x75D17E: push    ebx
0x75D17F: mov     ecx, esi
0x75D181: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D186: movzx   ecx, byte ptr [edi+60h]
0x75D18A: push    ecx; char
0x75D18B: push    offset aInheritRotatio; "Inherit Rotation"
0x75D190: call    TESOutput_PrintLabeledBool
0x75D195: movzx   ebx, word ptr [esi+0Ah]
0x75D199: movzx   edx, word ptr [esi+8]
0x75D19D: add     esp, 8
0x75D1A0: cmp     ebx, edx
0x75D1A2: mov     [esp+0Ch+arg_0], eax
0x75D1A6: jb      short loc_75D1B6
0x75D1A8: movzx   eax, word ptr [esi+0Eh]
0x75D1AC: add     eax, ebx
0x75D1AE: push    eax
0x75D1AF: mov     ecx, esi
0x75D1B1: call    NiTArray_SetSize
0x75D1B6: lea     ecx, [esp+0Ch+arg_0]
0x75D1BA: push    ecx
0x75D1BB: push    ebx
0x75D1BC: mov     ecx, esi
0x75D1BE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D1C3: movzx   edx, byte ptr [edi+61h]
0x75D1C7: push    edx; char
0x75D1C8: push    offset aComponentOnly; "Component Only"
0x75D1CD: call    TESOutput_PrintLabeledBool
0x75D1D2: movzx   ebx, word ptr [esi+0Ah]
0x75D1D6: mov     [esp+14h+arg_0], eax
0x75D1DA: movzx   eax, word ptr [esi+8]
0x75D1DE: add     esp, 8
0x75D1E1: cmp     ebx, eax
0x75D1E3: jb      short loc_75D1F3
0x75D1E5: movzx   ecx, word ptr [esi+0Eh]
0x75D1E9: add     ecx, ebx
0x75D1EB: push    ecx
0x75D1EC: mov     ecx, esi
0x75D1EE: call    NiTArray_SetSize
0x75D1F3: lea     edx, [esp+0Ch+arg_0]
0x75D1F7: push    edx
0x75D1F8: push    ebx
0x75D1F9: mov     ecx, esi
0x75D1FB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D200: movzx   eax, byte ptr [edi+62h]
0x75D204: push    eax; char
0x75D205: push    offset aEnableSpread; "Enable Spread"
0x75D20A: call    TESOutput_PrintLabeledBool
0x75D20F: movzx   ebx, word ptr [esi+0Ah]
0x75D213: movzx   ecx, word ptr [esi+8]
0x75D217: add     esp, 8
0x75D21A: cmp     ebx, ecx
0x75D21C: mov     [esp+0Ch+arg_0], eax
0x75D220: jb      short loc_75D230
0x75D222: movzx   edx, word ptr [esi+0Eh]
0x75D226: add     edx, ebx
0x75D228: push    edx
0x75D229: mov     ecx, esi
0x75D22B: call    NiTArray_SetSize
0x75D230: lea     eax, [esp+0Ch+arg_0]
0x75D234: push    eax
0x75D235: push    ebx
0x75D236: mov     ecx, esi
0x75D238: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D23D: fld     dword ptr [edi+64h]
0x75D240: push    ecx
0x75D241: fstp    [esp+10h+var_10]; float
0x75D244: push    offset aSpread; "Spread"
0x75D249: call    TESOutput_PrintLabeledFloat
0x75D24E: movzx   edi, word ptr [esi+0Ah]
0x75D252: movzx   ecx, word ptr [esi+8]
0x75D256: add     esp, 8
0x75D259: cmp     edi, ecx
0x75D25B: mov     [esp+0Ch+arg_0], eax
0x75D25F: jb      short loc_75D26F
0x75D261: movzx   edx, word ptr [esi+0Eh]
0x75D265: add     edx, edi
0x75D267: push    edx
0x75D268: mov     ecx, esi
0x75D26A: call    NiTArray_SetSize
0x75D26F: lea     eax, [esp+0Ch+arg_0]
0x75D273: push    eax
0x75D274: push    edi
0x75D275: mov     ecx, esi
0x75D277: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D27C: pop     edi
0x75D27D: pop     esi
0x75D27E: pop     ebx
0x75D27F: retn    4
