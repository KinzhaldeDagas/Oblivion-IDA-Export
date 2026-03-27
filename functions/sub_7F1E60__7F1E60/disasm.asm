0x7F1E60: push    0FFFFFFFFh
0x7F1E62: push    offset SEH_8C8970
0x7F1E67: mov     eax, large fs:0
0x7F1E6D: push    eax
0x7F1E6E: push    ecx
0x7F1E6F: push    esi
0x7F1E70: push    edi
0x7F1E71: mov     eax, ds:0B30AACh
0x7F1E76: xor     eax, esp
0x7F1E78: push    eax
0x7F1E79: lea     eax, [esp+1Ch+var_C]
0x7F1E7D: mov     large fs:0, eax
0x7F1E83: mov     esi, ecx
0x7F1E85: push    0B0h ; '°'; Size
0x7F1E8A: call    FormHeapAlloc
0x7F1E8F: mov     edi, eax
0x7F1E91: add     esp, 4
0x7F1E94: mov     [esp+1Ch+var_10], edi
0x7F1E98: test    edi, edi
0x7F1E9A: mov     [esp+1Ch+var_4], 0
0x7F1EA2: jz      short loc_7F1ED3
0x7F1EA4: mov     eax, [esi]
0x7F1EA6: mov     edx, [eax+9Ch]
0x7F1EAC: mov     ecx, esi
0x7F1EAE: call    edx
0x7F1EB0: push    eax
0x7F1EB1: mov     eax, [esi]
0x7F1EB3: mov     edx, [eax+68h]
0x7F1EB6: mov     ecx, esi
0x7F1EB8: call    edx
0x7F1EBA: push    eax
0x7F1EBB: mov     eax, [esi]
0x7F1EBD: mov     edx, [eax+98h]
0x7F1EC3: mov     ecx, esi
0x7F1EC5: call    edx
0x7F1EC7: mov     ecx, edi; this
0x7F1EC9: push    eax
0x7F1ECA: call    ??0SpeedTreeLeafShaderProperty@@QAE@XZ; SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty(void)
0x7F1ECF: mov     edi, eax
0x7F1ED1: jmp     short loc_7F1ED5
0x7F1ED3: xor     edi, edi
0x7F1ED5: mov     eax, [esp+1Ch+arg_0]
0x7F1ED9: push    eax
0x7F1EDA: push    edi
0x7F1EDB: mov     ecx, esi
0x7F1EDD: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F1EE5: call    sub_7F1C30
0x7F1EEA: mov     eax, edi
0x7F1EEC: mov     ecx, [esp+1Ch+var_C]
0x7F1EF0: mov     large fs:0, ecx
0x7F1EF7: pop     ecx
0x7F1EF8: pop     edi
0x7F1EF9: pop     esi
0x7F1EFA: add     esp, 10h
0x7F1EFD: retn    4
