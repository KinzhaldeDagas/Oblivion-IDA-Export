0x6A52B0: push    0FFFFFFFFh
0x6A52B2: push    offset SEH_8C8970
0x6A52B7: mov     eax, large fs:0
0x6A52BD: push    eax
0x6A52BE: push    ecx
0x6A52BF: push    esi
0x6A52C0: push    edi
0x6A52C1: mov     eax, ds:0B30AACh
0x6A52C6: xor     eax, esp
0x6A52C8: push    eax
0x6A52C9: lea     eax, [esp+1Ch+var_C]
0x6A52CD: mov     large fs:0, eax
0x6A52D3: mov     esi, ecx
0x6A52D5: push    64h ; 'd'; Size
0x6A52D7: call    FormHeapAlloc
0x6A52DC: add     esp, 4
0x6A52DF: mov     [esp+1Ch+var_10], eax
0x6A52E3: test    eax, eax
0x6A52E5: mov     [esp+1Ch+var_4], 0
0x6A52ED: jz      short loc_6A5306
0x6A52EF: mov     ecx, [esi+0Ch]
0x6A52F2: mov     edx, [esi+8]
0x6A52F5: push    ecx
0x6A52F6: mov     ecx, [esi+24h]
0x6A52F9: push    edx
0x6A52FA: push    ecx
0x6A52FB: mov     ecx, eax; this
0x6A52FD: call    ??0SummonCreatureEffect@@QAE@XZ; SummonCreatureEffect::SummonCreatureEffect(void)
0x6A5302: mov     edi, eax
0x6A5304: jmp     short loc_6A5308
0x6A5306: xor     edi, edi
0x6A5308: push    edi
0x6A5309: mov     ecx, esi
0x6A530B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A5313: call    AssociatedItemEffect_CopyTo
0x6A5318: mov     edx, [esi+3Ch]
0x6A531B: mov     [edi+3Ch], edx
0x6A531E: mov     al, [esi+40h]
0x6A5321: mov     [edi+40h], al
0x6A5324: fld     dword ptr [esi+44h]
0x6A5327: fstp    dword ptr [edi+44h]
0x6A532A: mov     ecx, [esi+48h]
0x6A532D: mov     [edi+48h], ecx
0x6A5330: mov     edx, [esi+4Ch]
0x6A5333: mov     [edi+4Ch], edx
0x6A5336: mov     eax, [esi+50h]
0x6A5339: mov     [edi+50h], eax
0x6A533C: mov     ecx, [esi+54h]
0x6A533F: mov     [edi+54h], ecx
0x6A5342: mov     edx, [esi+58h]
0x6A5345: mov     [edi+58h], edx
0x6A5348: mov     eax, [esi+5Ch]
0x6A534B: mov     [edi+5Ch], eax
0x6A534E: mov     cl, [esi+60h]
0x6A5351: mov     [edi+60h], cl
0x6A5354: cmp     byte ptr [esi+61h], 0
0x6A5358: jz      short loc_6A536E
0x6A535A: cmp     byte ptr [edi+61h], 0
0x6A535E: jnz     short loc_6A536E
0x6A5360: mov     ecx, [esi+8]
0x6A5363: test    ecx, ecx
0x6A5365: jz      short loc_6A536E
0x6A5367: push    0
0x6A5369: call    sub_41A610
0x6A536E: mov     dl, [esi+61h]
0x6A5371: mov     [edi+61h], dl
0x6A5374: mov     eax, edi
0x6A5376: mov     ecx, [esp+1Ch+var_C]
0x6A537A: mov     large fs:0, ecx
0x6A5381: pop     ecx
0x6A5382: pop     edi
0x6A5383: pop     esi
0x6A5384: add     esp, 10h
0x6A5387: retn
