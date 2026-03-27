0x6A36A0: push    0FFFFFFFFh
0x6A36A2: push    offset SEH_8C8970
0x6A36A7: mov     eax, large fs:0
0x6A36AD: push    eax
0x6A36AE: push    ecx
0x6A36AF: push    esi
0x6A36B0: push    edi
0x6A36B1: mov     eax, ds:0B30AACh
0x6A36B6: xor     eax, esp
0x6A36B8: push    eax
0x6A36B9: lea     eax, [esp+1Ch+var_C]
0x6A36BD: mov     large fs:0, eax
0x6A36C3: mov     esi, ecx
0x6A36C5: push    3Ch ; '<'; Size
0x6A36C7: call    FormHeapAlloc
0x6A36CC: mov     edi, eax
0x6A36CE: add     esp, 4
0x6A36D1: mov     [esp+1Ch+var_10], edi
0x6A36D5: test    edi, edi
0x6A36D7: mov     [esp+1Ch+var_4], 0
0x6A36DF: jz      short loc_6A36FC
0x6A36E1: mov     eax, [esi+0Ch]
0x6A36E4: mov     ecx, [esi+8]
0x6A36E7: mov     edx, [esi+24h]
0x6A36EA: push    eax; int
0x6A36EB: push    ecx; int
0x6A36EC: push    edx; int
0x6A36ED: mov     ecx, edi; this
0x6A36EF: call    ValueModifierEffect_constr
0x6A36F4: mov     dword ptr [edi], offset ??_7ParalysisEffect@@6B@; const ParalysisEffect::`vftable'
0x6A36FA: jmp     short loc_6A36FE
0x6A36FC: xor     edi, edi
0x6A36FE: mov     eax, [esi]
0x6A3700: mov     edx, [eax+2Ch]
0x6A3703: push    edi
0x6A3704: mov     ecx, esi
0x6A3706: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A370E: call    edx
0x6A3710: mov     eax, edi
0x6A3712: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A3716: mov     large fs:0, ecx
0x6A371D: pop     ecx
0x6A371E: pop     edi
0x6A371F: pop     esi
0x6A3720: add     esp, 10h
0x6A3723: retn
