0x7F2070: push    0FFFFFFFFh
0x7F2072: push    offset SEH_8C8970
0x7F2077: mov     eax, large fs:0
0x7F207D: push    eax
0x7F207E: push    ecx
0x7F207F: push    esi
0x7F2080: push    edi
0x7F2081: mov     eax, ds:0B30AACh
0x7F2086: xor     eax, esp
0x7F2088: push    eax
0x7F2089: lea     eax, [esp+1Ch+var_C]
0x7F208D: mov     large fs:0, eax
0x7F2093: mov     edi, ecx
0x7F2095: push    0F4h ; 'ô'; Size
0x7F209A: call    FormHeapAlloc
0x7F209F: mov     esi, eax
0x7F20A1: add     esp, 4
0x7F20A4: mov     [esp+1Ch+var_10], esi
0x7F20A8: xor     eax, eax
0x7F20AA: cmp     esi, eax
0x7F20AC: mov     [esp+1Ch+var_4], eax
0x7F20B0: jz      short loc_7F20CE
0x7F20B2: mov     eax, [edi]
0x7F20B4: mov     edx, [eax+0A0h]
0x7F20BA: mov     ecx, edi
0x7F20BC: call    edx
0x7F20BE: push    eax
0x7F20BF: mov     ecx, esi; this
0x7F20C1: call    ??0SpeedTreeShaderPPLightingProperty@@QAE@XZ; SpeedTreeShaderPPLightingProperty::SpeedTreeShaderPPLightingProperty(void)
0x7F20C6: mov     dword ptr [esi], offset ??_7SpeedTreeBranchShaderProperty@@6B@; const SpeedTreeBranchShaderProperty::`vftable'
0x7F20CC: mov     eax, esi
0x7F20CE: mov     ecx, [esp+1Ch+var_C]
0x7F20D2: mov     large fs:0, ecx
0x7F20D9: pop     ecx
0x7F20DA: pop     edi
0x7F20DB: pop     esi
0x7F20DC: add     esp, 10h
0x7F20DF: retn
