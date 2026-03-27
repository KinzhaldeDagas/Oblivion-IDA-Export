0x863720: push    0FFFFFFFFh
0x863722: push    offset SEH_8C8970
0x863727: mov     eax, large fs:0
0x86372D: push    eax
0x86372E: push    ecx
0x86372F: push    ebx
0x863730: push    esi
0x863731: mov     eax, ds:0B30AACh
0x863736: xor     eax, esp
0x863738: push    eax
0x863739: lea     eax, [esp+1Ch+var_C]
0x86373D: mov     large fs:0, eax
0x863743: mov     ebx, ecx
0x863745: push    108h; Size
0x86374A: call    FormHeapAlloc
0x86374F: mov     esi, eax
0x863751: add     esp, 4
0x863754: mov     [esp+1Ch+var_10], esi
0x863758: test    esi, esi
0x86375A: mov     [esp+1Ch+var_4], 0
0x863762: jz      short loc_863797
0x863764: mov     ecx, esi; this
0x863766: call    ??0BSShaderPPLightingProperty@@QAE@XZ; BSShaderPPLightingProperty::BSShaderPPLightingProperty(void)
0x86376B: fldz
0x86376D: mov     dword ptr [esi], offset ??_7Lighting30ShaderProperty@@6B@; const Lighting30ShaderProperty::`vftable'
0x863773: fst     dword ptr [esi+0F0h]
0x863779: fst     dword ptr [esi+0F4h]
0x86377F: fst     dword ptr [esi+0F8h]
0x863785: fstp    dword ptr [esi+0FCh]
0x86378B: mov     dword ptr [esi+104h], 0
0x863795: jmp     short loc_863799
0x863797: xor     esi, esi
0x863799: mov     eax, [esp+1Ch+arg_0]
0x86379D: push    eax
0x86379E: push    esi
0x86379F: mov     ecx, ebx
0x8637A1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8637A9: call    sub_863540
0x8637AE: mov     eax, esi
0x8637B0: mov     ecx, [esp+1Ch+var_C]
0x8637B4: mov     large fs:0, ecx
0x8637BB: pop     ecx
0x8637BC: pop     esi
0x8637BD: pop     ebx
0x8637BE: add     esp, 10h
0x8637C1: retn    4
