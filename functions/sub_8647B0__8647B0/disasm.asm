0x8647B0: push    0FFFFFFFFh
0x8647B2: push    offset SEH_8C8970
0x8647B7: mov     eax, large fs:0
0x8647BD: push    eax
0x8647BE: push    ecx
0x8647BF: push    esi
0x8647C0: push    edi
0x8647C1: mov     eax, ds:0B30AACh
0x8647C6: xor     eax, esp
0x8647C8: push    eax
0x8647C9: lea     eax, [esp+1Ch+var_C]
0x8647CD: mov     large fs:0, eax
0x8647D3: mov     edi, ecx
0x8647D5: push    9Ch ; 'œ'; Size
0x8647DA: call    FormHeapAlloc
0x8647DF: mov     esi, eax
0x8647E1: add     esp, 4
0x8647E4: mov     [esp+1Ch+var_10], esi
0x8647E8: test    esi, esi
0x8647EA: mov     [esp+1Ch+var_4], 0
0x8647F2: jz      short loc_864803
0x8647F4: mov     ecx, esi; this
0x8647F6: call    ??0BSShaderLightingProperty@@QAE@XZ; BSShaderLightingProperty::BSShaderLightingProperty(void)
0x8647FB: mov     dword ptr [esi], offset ??_7GeometryDecalShaderProperty@@6B@; const GeometryDecalShaderProperty::`vftable'
0x864801: jmp     short loc_864805
0x864803: xor     esi, esi
0x864805: mov     eax, [esp+1Ch+arg_0]
0x864809: push    eax
0x86480A: push    esi
0x86480B: mov     ecx, edi
0x86480D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x864815: call    sub_7ECB10
0x86481A: mov     eax, esi
0x86481C: mov     ecx, [esp+1Ch+var_C]
0x864820: mov     large fs:0, ecx
0x864827: pop     ecx
0x864828: pop     edi
0x864829: pop     esi
0x86482A: add     esp, 10h
0x86482D: retn    4
