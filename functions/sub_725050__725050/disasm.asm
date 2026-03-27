0x725050: push    0FFFFFFFFh
0x725052: push    offset SEH_8C8970
0x725057: mov     eax, large fs:0
0x72505D: push    eax
0x72505E: push    ecx
0x72505F: push    ebx
0x725060: push    esi
0x725061: mov     eax, ds:0B30AACh
0x725066: xor     eax, esp
0x725068: push    eax
0x725069: lea     eax, [esp+1Ch+var_C]
0x72506D: mov     large fs:0, eax
0x725073: mov     ebx, ecx
0x725075: push    28h ; '('; Size
0x725077: call    FormHeapAlloc
0x72507C: mov     esi, eax
0x72507E: add     esp, 4
0x725081: mov     [esp+1Ch+var_10], esi
0x725085: test    esi, esi
0x725087: mov     [esp+1Ch+var_4], 0
0x72508F: jz      short loc_7250C8
0x725091: mov     ecx, esi
0x725093: call    sub_738760
0x725098: mov     dword ptr [esi], offset ??_7NiRangeLODData@@6B@; const NiRangeLODData::`vftable'
0x72509E: mov     eax, ds:0B3F9A8h
0x7250A3: mov     [esi+8], eax
0x7250A6: mov     ecx, ds:0B3F9ACh
0x7250AC: mov     [esi+0Ch], ecx
0x7250AF: mov     edx, ds:0B3F9B0h
0x7250B5: mov     [esi+10h], edx
0x7250B8: mov     dword ptr [esi+20h], 0
0x7250BF: mov     dword ptr [esi+24h], 0
0x7250C6: jmp     short loc_7250CA
0x7250C8: xor     esi, esi
0x7250CA: mov     eax, [esp+1Ch+arg_0]
0x7250CE: push    eax
0x7250CF: push    esi
0x7250D0: mov     ecx, ebx
0x7250D2: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7250DA: call    sub_724DD0
0x7250DF: mov     eax, esi
0x7250E1: mov     ecx, [esp+1Ch+var_C]
0x7250E5: mov     large fs:0, ecx
0x7250EC: pop     ecx
0x7250ED: pop     esi
0x7250EE: pop     ebx
0x7250EF: add     esp, 10h
0x7250F2: retn    4
