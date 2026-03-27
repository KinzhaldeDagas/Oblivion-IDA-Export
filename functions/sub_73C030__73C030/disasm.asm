0x73C030: push    0FFFFFFFFh
0x73C032: push    offset SEH_8C8970
0x73C037: mov     eax, large fs:0
0x73C03D: push    eax
0x73C03E: push    ecx
0x73C03F: push    esi
0x73C040: push    edi
0x73C041: mov     eax, ds:0B30AACh
0x73C046: xor     eax, esp
0x73C048: push    eax
0x73C049: lea     eax, [esp+1Ch+var_C]
0x73C04D: mov     large fs:0, eax
0x73C053: mov     edi, ecx
0x73C055: push    174h; Size
0x73C05A: call    FormHeapAlloc
0x73C05F: add     esp, 4
0x73C062: mov     [esp+1Ch+var_10], eax
0x73C066: xor     esi, esi
0x73C068: cmp     eax, esi
0x73C06A: mov     [esp+1Ch+var_4], esi
0x73C06E: jz      short loc_73C079
0x73C070: mov     ecx, eax; this
0x73C072: call    ??0NiTextureEffect@@QAE@XZ; NiTextureEffect::NiTextureEffect(void)
0x73C077: mov     esi, eax
0x73C079: mov     eax, [esp+1Ch+arg_0]
0x73C07D: push    eax
0x73C07E: push    esi
0x73C07F: mov     ecx, edi
0x73C081: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73C089: call    sub_73BD30
0x73C08E: mov     eax, esi
0x73C090: mov     ecx, [esp+1Ch+var_C]
0x73C094: mov     large fs:0, ecx
0x73C09B: pop     ecx
0x73C09C: pop     edi
0x73C09D: pop     esi
0x73C09E: add     esp, 10h
0x73C0A1: retn    4
