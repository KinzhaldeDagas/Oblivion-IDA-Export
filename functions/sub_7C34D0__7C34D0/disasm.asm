0x7C34D0: push    0FFFFFFFFh
0x7C34D2: push    offset SEH_8C8970
0x7C34D7: mov     eax, large fs:0
0x7C34DD: push    eax
0x7C34DE: push    ecx
0x7C34DF: push    esi
0x7C34E0: push    edi
0x7C34E1: mov     eax, ds:0B30AACh
0x7C34E6: xor     eax, esp
0x7C34E8: push    eax
0x7C34E9: lea     eax, [esp+1Ch+var_C]
0x7C34ED: mov     large fs:0, eax
0x7C34F3: mov     edi, ecx
0x7C34F5: push    0B0h ; '°'; Size
0x7C34FA: call    FormHeapAlloc
0x7C34FF: add     esp, 4
0x7C3502: mov     [esp+1Ch+var_10], eax
0x7C3506: xor     esi, esi
0x7C3508: cmp     eax, esi
0x7C350A: mov     [esp+1Ch+var_4], esi
0x7C350E: jz      short loc_7C3519
0x7C3510: mov     ecx, eax; this
0x7C3512: call    ??0TallGrassShaderProperty@@QAE@XZ; TallGrassShaderProperty::TallGrassShaderProperty(void)
0x7C3517: mov     esi, eax
0x7C3519: mov     eax, [esp+1Ch+arg_0]
0x7C351D: push    eax
0x7C351E: push    esi
0x7C351F: mov     ecx, edi
0x7C3521: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C3529: call    sub_7C2DF0
0x7C352E: mov     eax, esi
0x7C3530: mov     ecx, [esp+1Ch+var_C]
0x7C3534: mov     large fs:0, ecx
0x7C353B: pop     ecx
0x7C353C: pop     edi
0x7C353D: pop     esi
0x7C353E: add     esp, 10h
0x7C3541: retn    4
