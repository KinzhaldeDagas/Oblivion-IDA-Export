0x7B2940: push    0FFFFFFFFh
0x7B2942: push    offset SEH_8C8970
0x7B2947: mov     eax, large fs:0
0x7B294D: push    eax
0x7B294E: push    ecx
0x7B294F: push    ebx
0x7B2950: push    esi
0x7B2951: mov     eax, ds:0B30AACh
0x7B2956: xor     eax, esp
0x7B2958: push    eax
0x7B2959: lea     eax, [esp+1Ch+var_C]
0x7B295D: mov     large fs:0, eax
0x7B2963: mov     ebx, ecx
0x7B2965: push    0ACh ; '¬'; Size
0x7B296A: call    FormHeapAlloc
0x7B296F: mov     esi, eax
0x7B2971: add     esp, 4
0x7B2974: mov     [esp+1Ch+var_10], esi
0x7B2978: test    esi, esi
0x7B297A: mov     [esp+1Ch+var_4], 0
0x7B2982: jz      short loc_7B29A7
0x7B2984: mov     ecx, esi; this
0x7B2986: call    ??0BSShaderLightingProperty@@QAE@XZ; BSShaderLightingProperty::BSShaderLightingProperty(void)
0x7B298B: mov     dword ptr [esi], offset ??_7DistantLODShaderProperty@@6B@; const DistantLODShaderProperty::`vftable'
0x7B2991: mov     dword ptr [esi+0A0h], 0
0x7B299B: mov     dword ptr [esi+9Ch], 0
0x7B29A5: jmp     short loc_7B29A9
0x7B29A7: xor     esi, esi
0x7B29A9: mov     eax, [esp+1Ch+arg_0]
0x7B29AD: push    eax
0x7B29AE: push    esi
0x7B29AF: mov     ecx, ebx
0x7B29B1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7B29B9: call    sub_7B23C0
0x7B29BE: mov     eax, esi
0x7B29C0: mov     ecx, [esp+1Ch+var_C]
0x7B29C4: mov     large fs:0, ecx
0x7B29CB: pop     ecx
0x7B29CC: pop     esi
0x7B29CD: pop     ebx
0x7B29CE: add     esp, 10h
0x7B29D1: retn    4
