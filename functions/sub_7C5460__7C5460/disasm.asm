0x7C5460: push    0FFFFFFFFh
0x7C5462: push    offset SEH_8C8970
0x7C5467: mov     eax, large fs:0
0x7C546D: push    eax
0x7C546E: push    ecx
0x7C546F: push    esi
0x7C5470: push    edi
0x7C5471: mov     eax, ds:0B30AACh
0x7C5476: xor     eax, esp
0x7C5478: push    eax
0x7C5479: lea     eax, [esp+1Ch+var_C]
0x7C547D: mov     large fs:0, eax
0x7C5483: mov     edi, ecx
0x7C5485: push    8Ch ; 'Œ'; Size
0x7C548A: call    FormHeapAlloc
0x7C548F: add     esp, 4
0x7C5492: mov     [esp+1Ch+var_10], eax
0x7C5496: xor     esi, esi
0x7C5498: cmp     eax, esi
0x7C549A: mov     [esp+1Ch+var_4], esi
0x7C549E: jz      short loc_7C54A9
0x7C54A0: mov     ecx, eax; this
0x7C54A2: call    ??0SkyShaderProperty@@QAE@XZ; SkyShaderProperty::SkyShaderProperty(void)
0x7C54A7: mov     esi, eax
0x7C54A9: mov     eax, [esp+1Ch+arg_0]
0x7C54AD: push    eax
0x7C54AE: push    esi
0x7C54AF: mov     ecx, edi
0x7C54B1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C54B9: call    sub_7C5340
0x7C54BE: mov     eax, esi
0x7C54C0: mov     ecx, [esp+1Ch+var_C]
0x7C54C4: mov     large fs:0, ecx
0x7C54CB: pop     ecx
0x7C54CC: pop     edi
0x7C54CD: pop     esi
0x7C54CE: add     esp, 10h
0x7C54D1: retn    4
