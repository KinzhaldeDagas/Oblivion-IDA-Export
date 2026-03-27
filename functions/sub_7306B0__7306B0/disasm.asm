0x7306B0: push    0FFFFFFFFh
0x7306B2: push    offset SEH_8C8970
0x7306B7: mov     eax, large fs:0
0x7306BD: push    eax
0x7306BE: push    ecx
0x7306BF: push    esi
0x7306C0: push    edi
0x7306C1: mov     eax, ds:0B30AACh
0x7306C6: xor     eax, esp
0x7306C8: push    eax
0x7306C9: lea     eax, [esp+1Ch+var_C]
0x7306CD: mov     large fs:0, eax
0x7306D3: mov     edi, ecx
0x7306D5: push    1Ch; Size
0x7306D7: call    FormHeapAlloc
0x7306DC: mov     esi, eax
0x7306DE: add     esp, 4
0x7306E1: mov     [esp+1Ch+var_10], esi
0x7306E5: test    esi, esi
0x7306E7: mov     [esp+1Ch+var_4], 0
0x7306EF: jz      short loc_730730
0x7306F1: mov     ecx, esi
0x7306F3: call    sub_721350
0x7306F8: fldz
0x7306FA: mov     dword ptr [esi], offset ??_7NiColorExtraData@@6B@; const NiColorExtraData::`vftable'
0x730700: fst     dword ptr [esi+0Ch]
0x730703: fst     dword ptr [esi+10h]
0x730706: fst     dword ptr [esi+14h]
0x730709: fstp    dword ptr [esi+18h]
0x73070C: mov     eax, ds:0B25AD0h
0x730711: mov     [esi+0Ch], eax
0x730714: mov     ecx, ds:0B25AD4h
0x73071A: mov     [esi+10h], ecx
0x73071D: mov     edx, ds:0B25AD8h
0x730723: mov     [esi+14h], edx
0x730726: mov     eax, ds:0B25ADCh
0x73072B: mov     [esi+18h], eax
0x73072E: jmp     short loc_730732
0x730730: xor     esi, esi
0x730732: mov     ecx, [esp+1Ch+arg_0]
0x730736: push    ecx
0x730737: push    esi
0x730738: mov     ecx, edi
0x73073A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x730742: call    sub_7214A0
0x730747: mov     edx, [edi+0Ch]
0x73074A: lea     eax, [edi+0Ch]
0x73074D: mov     [esi+0Ch], edx
0x730750: mov     ecx, [eax+4]
0x730753: mov     [esi+10h], ecx
0x730756: mov     edx, [eax+8]
0x730759: mov     [esi+14h], edx
0x73075C: mov     eax, [eax+0Ch]
0x73075F: mov     [esi+18h], eax
0x730762: mov     eax, esi
0x730764: mov     ecx, [esp+1Ch+var_C]
0x730768: mov     large fs:0, ecx
0x73076F: pop     ecx
0x730770: pop     edi
0x730771: pop     esi
0x730772: add     esp, 10h
0x730775: retn    4
