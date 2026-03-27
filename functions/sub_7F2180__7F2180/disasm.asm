0x7F2180: push    0FFFFFFFFh
0x7F2182: push    offset SEH_8C8970
0x7F2187: mov     eax, large fs:0
0x7F218D: push    eax
0x7F218E: push    ecx
0x7F218F: push    esi
0x7F2190: push    edi
0x7F2191: mov     eax, ds:0B30AACh
0x7F2196: xor     eax, esp
0x7F2198: push    eax
0x7F2199: lea     eax, [esp+1Ch+var_C]
0x7F219D: mov     large fs:0, eax
0x7F21A3: mov     edi, ecx
0x7F21A5: push    0F4h ; 'ô'; Size
0x7F21AA: call    FormHeapAlloc
0x7F21AF: mov     esi, eax
0x7F21B1: add     esp, 4
0x7F21B4: mov     [esp+1Ch+var_10], esi
0x7F21B8: test    esi, esi
0x7F21BA: mov     [esp+1Ch+var_4], 0
0x7F21C2: jz      short loc_7F21E0
0x7F21C4: mov     eax, [edi]
0x7F21C6: mov     edx, [eax+0A0h]
0x7F21CC: mov     ecx, edi
0x7F21CE: call    edx
0x7F21D0: push    eax
0x7F21D1: mov     ecx, esi; this
0x7F21D3: call    ??0SpeedTreeShaderPPLightingProperty@@QAE@XZ; SpeedTreeShaderPPLightingProperty::SpeedTreeShaderPPLightingProperty(void)
0x7F21D8: mov     dword ptr [esi], offset ??_7SpeedTreeBranchShaderProperty@@6B@; const SpeedTreeBranchShaderProperty::`vftable'
0x7F21DE: jmp     short loc_7F21E2
0x7F21E0: xor     esi, esi
0x7F21E2: mov     eax, [esp+1Ch+arg_0]
0x7F21E6: push    eax
0x7F21E7: push    esi
0x7F21E8: mov     ecx, edi
0x7F21EA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F21F2: call    sub_7D7AD0
0x7F21F7: mov     eax, esi
0x7F21F9: mov     ecx, [esp+1Ch+var_C]
0x7F21FD: mov     large fs:0, ecx
0x7F2204: pop     ecx
0x7F2205: pop     edi
0x7F2206: pop     esi
0x7F2207: add     esp, 10h
0x7F220A: retn    4
