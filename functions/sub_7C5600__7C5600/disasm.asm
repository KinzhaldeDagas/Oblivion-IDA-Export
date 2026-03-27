0x7C5600: push    ebx
0x7C5601: push    esi
0x7C5602: mov     esi, [esp+8+arg_0]
0x7C5606: push    edi
0x7C5607: push    esi
0x7C5608: mov     ebx, ecx
0x7C560A: call    sub_7E28E0
0x7C560F: mov     eax, ds:0B4335Ch
0x7C5614: push    eax; ArgList
0x7C5615: call    TESOutput_PrintString
0x7C561A: movzx   edi, word ptr [esi+0Ah]
0x7C561E: movzx   ecx, word ptr [esi+8]
0x7C5622: add     esp, 4
0x7C5625: cmp     edi, ecx
0x7C5627: mov     [esp+0Ch+arg_0], eax
0x7C562B: jb      short loc_7C563B
0x7C562D: movzx   edx, word ptr [esi+0Eh]
0x7C5631: add     edx, edi
0x7C5633: push    edx
0x7C5634: mov     ecx, esi
0x7C5636: call    NiTArray_SetSize
0x7C563B: lea     eax, [esp+0Ch+arg_0]
0x7C563F: push    eax
0x7C5640: push    edi
0x7C5641: mov     ecx, esi
0x7C5643: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7C5648: mov     ecx, [ebx+88h]
0x7C564E: push    ecx; int
0x7C564F: push    offset aSotype; "SOType"
0x7C5654: call    TESOutput_PrintLabeledSignedInt
0x7C5659: movzx   edi, word ptr [esi+0Ah]
0x7C565D: movzx   edx, word ptr [esi+8]
0x7C5661: add     esp, 8
0x7C5664: cmp     edi, edx
0x7C5666: mov     [esp+0Ch+arg_0], eax
0x7C566A: jb      short loc_7C567A
0x7C566C: movzx   eax, word ptr [esi+0Eh]
0x7C5670: add     eax, edi
0x7C5672: push    eax
0x7C5673: mov     ecx, esi
0x7C5675: call    NiTArray_SetSize
0x7C567A: lea     ecx, [esp+0Ch+arg_0]
0x7C567E: push    ecx
0x7C567F: push    edi
0x7C5680: mov     ecx, esi
0x7C5682: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7C5687: mov     eax, [ebx+7Ch]
0x7C568A: test    eax, eax
0x7C568C: jz      short loc_7C5695
0x7C568E: mov     eax, [eax+8]
0x7C5691: test    eax, eax
0x7C5693: jnz     short loc_7C569A
0x7C5695: mov     eax, offset EmptyString
0x7C569A: push    eax; int
0x7C569B: push    offset aBlendTexture; "Blend Texture"
0x7C56A0: call    TESOutput_PrintLabeledString
0x7C56A5: movzx   edi, word ptr [esi+0Ah]
0x7C56A9: movzx   edx, word ptr [esi+8]
0x7C56AD: add     esp, 8
0x7C56B0: cmp     edi, edx
0x7C56B2: mov     [esp+0Ch+arg_0], eax
0x7C56B6: jb      short loc_7C56C6
0x7C56B8: movzx   eax, word ptr [esi+0Eh]
0x7C56BC: add     eax, edi
0x7C56BE: push    eax
0x7C56BF: mov     ecx, esi
0x7C56C1: call    NiTArray_SetSize
0x7C56C6: lea     ecx, [esp+0Ch+arg_0]
0x7C56CA: push    ecx
0x7C56CB: push    edi
0x7C56CC: mov     ecx, esi
0x7C56CE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7C56D3: fld     dword ptr [ebx+80h]
0x7C56D9: push    ecx
0x7C56DA: fstp    [esp+10h+var_10]; float
0x7C56DD: push    offset aBlendValue; "Blend Value"
0x7C56E2: call    TESOutput_PrintLabeledFloat
0x7C56E7: movzx   edi, word ptr [esi+0Ah]
0x7C56EB: movzx   edx, word ptr [esi+8]
0x7C56EF: add     esp, 8
0x7C56F2: cmp     edi, edx
0x7C56F4: mov     [esp+0Ch+arg_0], eax
0x7C56F8: jb      short loc_7C5708
0x7C56FA: movzx   eax, word ptr [esi+0Eh]
0x7C56FE: add     eax, edi
0x7C5700: push    eax
0x7C5701: mov     ecx, esi
0x7C5703: call    NiTArray_SetSize
0x7C5708: lea     ecx, [esp+0Ch+arg_0]
0x7C570C: push    ecx
0x7C570D: push    edi
0x7C570E: mov     ecx, esi
0x7C5710: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7C5715: pop     edi
0x7C5716: pop     esi
0x7C5717: pop     ebx
0x7C5718: retn    4
