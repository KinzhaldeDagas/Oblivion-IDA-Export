0x7F1CE0: push    0FFFFFFFFh
0x7F1CE2: push    offset SEH_8C8970
0x7F1CE7: mov     eax, large fs:0
0x7F1CED: push    eax
0x7F1CEE: push    ecx
0x7F1CEF: push    esi
0x7F1CF0: push    edi
0x7F1CF1: mov     eax, ds:0B30AACh
0x7F1CF6: xor     eax, esp
0x7F1CF8: push    eax
0x7F1CF9: lea     eax, [esp+1Ch+var_C]
0x7F1CFD: mov     large fs:0, eax
0x7F1D03: mov     esi, ecx
0x7F1D05: push    0B0h ; '°'; Size
0x7F1D0A: call    FormHeapAlloc
0x7F1D0F: mov     edi, eax
0x7F1D11: add     esp, 4
0x7F1D14: mov     [esp+1Ch+var_10], edi
0x7F1D18: test    edi, edi
0x7F1D1A: mov     [esp+1Ch+var_4], 0
0x7F1D22: jz      short loc_7F1D53
0x7F1D24: mov     eax, [esi]
0x7F1D26: mov     edx, [eax+9Ch]
0x7F1D2C: mov     ecx, esi
0x7F1D2E: call    edx
0x7F1D30: push    eax
0x7F1D31: mov     eax, [esi]
0x7F1D33: mov     edx, [eax+68h]
0x7F1D36: mov     ecx, esi
0x7F1D38: call    edx
0x7F1D3A: push    eax
0x7F1D3B: mov     eax, [esi]
0x7F1D3D: mov     edx, [eax+98h]
0x7F1D43: mov     ecx, esi
0x7F1D45: call    edx
0x7F1D47: mov     ecx, edi; this
0x7F1D49: push    eax
0x7F1D4A: call    ??0SpeedTreeLeafShaderProperty@@QAE@XZ; SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty(void)
0x7F1D4F: mov     edi, eax
0x7F1D51: jmp     short loc_7F1D55
0x7F1D53: xor     edi, edi
0x7F1D55: mov     ecx, [esi+9Ch]
0x7F1D5B: mov     eax, [edi]
0x7F1D5D: mov     edx, [eax+7Ch]
0x7F1D60: push    ecx
0x7F1D61: mov     ecx, edi
0x7F1D63: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F1D6B: call    edx
0x7F1D6D: mov     eax, edi
0x7F1D6F: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7F1D73: mov     large fs:0, ecx
0x7F1D7A: pop     ecx
0x7F1D7B: pop     edi
0x7F1D7C: pop     esi
0x7F1D7D: add     esp, 10h
0x7F1D80: retn
