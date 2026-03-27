0x6CBAD0: push    ecx
0x6CBAD1: push    ebx
0x6CBAD2: push    esi
0x6CBAD3: push    edi
0x6CBAD4: push    offset aNiquattransfor; "NiQuatTransform"
0x6CBAD9: mov     edi, ecx
0x6CBADB: call    TESOutput_PrintString
0x6CBAE0: mov     esi, [esp+14h+arg_0]
0x6CBAE4: movzx   ebx, word ptr [esi+0Ah]
0x6CBAE8: mov     [esp+14h+var_4], eax
0x6CBAEC: movzx   eax, word ptr [esi+8]
0x6CBAF0: add     esp, 4
0x6CBAF3: cmp     ebx, eax
0x6CBAF5: jb      short loc_6CBB05
0x6CBAF7: movzx   ecx, word ptr [esi+0Eh]
0x6CBAFB: add     ecx, ebx
0x6CBAFD: push    ecx
0x6CBAFE: mov     ecx, esi
0x6CBB00: call    NiTArray_SetSize
0x6CBB05: lea     edx, [esp+10h+var_4]
0x6CBB09: push    edx
0x6CBB0A: push    ebx
0x6CBB0B: mov     ecx, esi
0x6CBB0D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CBB12: fld     dword ptr [edi]
0x6CBB14: fld     dword ptr ds:0A7DEB4h
0x6CBB1A: fchs
0x6CBB1C: fucompp
0x6CBB1E: fnstsw  ax
0x6CBB20: test    ah, 44h
0x6CBB23: jnp     short loc_6CBB5C
0x6CBB25: push    offset aM_ktranslate; "m_kTranslate"
0x6CBB2A: mov     ecx, edi
0x6CBB2C: call    sub_707280
0x6CBB31: movzx   ebx, word ptr [esi+0Ah]
0x6CBB35: mov     [esp+10h+arg_0], eax
0x6CBB39: movzx   eax, word ptr [esi+8]
0x6CBB3D: cmp     ebx, eax
0x6CBB3F: jb      short loc_6CBB4F
0x6CBB41: movzx   ecx, word ptr [esi+0Eh]
0x6CBB45: add     ecx, ebx
0x6CBB47: push    ecx
0x6CBB48: mov     ecx, esi
0x6CBB4A: call    NiTArray_SetSize
0x6CBB4F: lea     edx, [esp+10h+arg_0]
0x6CBB53: push    edx
0x6CBB54: push    ebx
0x6CBB55: mov     ecx, esi
0x6CBB57: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CBB5C: fld     dword ptr [edi+10h]
0x6CBB5F: fld     dword ptr ds:0A7DEB4h
0x6CBB65: fchs
0x6CBB67: fucompp
0x6CBB69: fnstsw  ax
0x6CBB6B: test    ah, 44h
0x6CBB6E: jnp     short loc_6CBBA8
0x6CBB70: push    offset aM_krotate; "m_kRotate"
0x6CBB75: lea     ecx, [edi+0Ch]
0x6CBB78: call    sub_7153C0
0x6CBB7D: movzx   ebx, word ptr [esi+0Ah]
0x6CBB81: mov     [esp+10h+arg_0], eax
0x6CBB85: movzx   eax, word ptr [esi+8]
0x6CBB89: cmp     ebx, eax
0x6CBB8B: jb      short loc_6CBB9B
0x6CBB8D: movzx   ecx, word ptr [esi+0Eh]
0x6CBB91: add     ecx, ebx
0x6CBB93: push    ecx
0x6CBB94: mov     ecx, esi
0x6CBB96: call    NiTArray_SetSize
0x6CBB9B: lea     edx, [esp+10h+arg_0]
0x6CBB9F: push    edx
0x6CBBA0: push    ebx
0x6CBBA1: mov     ecx, esi
0x6CBBA3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CBBA8: fld     dword ptr [edi+1Ch]
0x6CBBAB: fld     dword ptr ds:0A7DEB4h
0x6CBBB1: fchs
0x6CBBB3: fucompp
0x6CBBB5: fnstsw  ax
0x6CBBB7: test    ah, 44h
0x6CBBBA: jnp     short loc_6CBBFB
0x6CBBBC: fld     dword ptr [edi+1Ch]
0x6CBBBF: push    ecx
0x6CBBC0: fstp    [esp+14h+var_14]; float
0x6CBBC3: push    offset aM_fscale; "m_fScale"
0x6CBBC8: call    TESOutput_PrintLabeledFloat
0x6CBBCD: movzx   edi, word ptr [esi+0Ah]
0x6CBBD1: mov     [esp+18h+arg_0], eax
0x6CBBD5: movzx   eax, word ptr [esi+8]
0x6CBBD9: add     esp, 8
0x6CBBDC: cmp     edi, eax
0x6CBBDE: jb      short loc_6CBBEE
0x6CBBE0: movzx   ecx, word ptr [esi+0Eh]
0x6CBBE4: add     ecx, edi
0x6CBBE6: push    ecx
0x6CBBE7: mov     ecx, esi
0x6CBBE9: call    NiTArray_SetSize
0x6CBBEE: lea     edx, [esp+10h+arg_0]
0x6CBBF2: push    edx
0x6CBBF3: push    edi
0x6CBBF4: mov     ecx, esi
0x6CBBF6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CBBFB: pop     edi
0x6CBBFC: pop     esi
0x6CBBFD: pop     ebx
0x6CBBFE: pop     ecx
0x6CBBFF: retn    4
