0x7F27E0: push    0FFFFFFFFh
0x7F27E2: push    offset ??0BoltShaderProperty@@QAE@XZ_SEH
0x7F27E7: mov     eax, large fs:0
0x7F27ED: push    eax
0x7F27EE: sub     esp, 10h
0x7F27F1: push    ebx
0x7F27F2: push    ebp
0x7F27F3: push    esi
0x7F27F4: push    edi
0x7F27F5: mov     eax, ds:0B30AACh
0x7F27FA: xor     eax, esp
0x7F27FC: push    eax
0x7F27FD: lea     eax, [esp+30h+var_C]
0x7F2801: mov     large fs:0, eax
0x7F2807: mov     esi, ecx
0x7F2809: mov     [esp+30h+var_1C], esi
0x7F280D: call    ??0BSShaderProperty@@QAE@XZ; BSShaderProperty::BSShaderProperty(void)
0x7F2812: fldz
0x7F2814: mov     dword ptr [esi], offset ??_7BoltShaderProperty@@6B@; const BoltShaderProperty::`vftable'
0x7F281A: fst     dword ptr [esi+160h]
0x7F2820: fst     dword ptr [esi+164h]
0x7F2826: xor     ebx, ebx
0x7F2828: fst     dword ptr [esi+168h]
0x7F282E: mov     [esp+30h+var_4], ebx
0x7F2832: fst     dword ptr [esi+16Ch]
0x7F2838: fst     dword ptr [esi+170h]
0x7F283E: fst     dword ptr [esi+174h]
0x7F2844: fst     dword ptr [esi+178h]
0x7F284A: fst     dword ptr [esi+17Ch]
0x7F2850: fst     dword ptr [esi+90h]
0x7F2856: mov     [esi+8Ch], ebx
0x7F285C: fst     dword ptr [esi+18Ch]
0x7F2862: mov     [esi+190h], ebx
0x7F2868: fst     dword ptr [esi+7Ch]
0x7F286B: mov     [esi+84h], ebx
0x7F2871: fst     [esp+30h+var_18]
0x7F2875: mov     [esi+88h], ebx
0x7F287B: fld     dword ptr [esi+138h]
0x7F2881: mov     eax, [esp+30h+var_18]
0x7F2885: fstp    [esp+30h+var_14]
0x7F2889: mov     [esi+70h], eax
0x7F288C: mov     ecx, [esp+30h+var_14]
0x7F2890: mov     [esi+74h], ecx
0x7F2893: fstp    [esp+30h+var_10]
0x7F2897: mov     edx, [esp+30h+var_10]
0x7F289B: mov     [esi+180h], bl
0x7F28A1: mov     byte ptr [esi+182h], 1
0x7F28A8: mov     byte ptr [esi+183h], 1
0x7F28AF: mov     [esi+78h], edx
0x7F28B2: mov     dword ptr [esi+80h], 4
0x7F28BC: call    sub_7F3760
0x7F28C1: fld1
0x7F28C3: fst     dword ptr [esi+150h]
0x7F28C9: mov     [esi+14Ch], eax
0x7F28CF: fst     dword ptr [esi+154h]
0x7F28D5: mov     eax, ds:0B2DC90h
0x7F28DA: fst     dword ptr [esi+15Ch]
0x7F28E0: fld     dword ptr ds:0A2FF44h
0x7F28E6: mov     [esi+158h], eax
0x7F28EC: fstp    dword ptr [esi+138h]
0x7F28F2: mov     dword ptr [esi+134h], 1
0x7F28FC: fld     dword ptr ds:0A2FE7Ch
0x7F2902: mov     [esi+194h], ebx
0x7F2908: fstp    dword ptr [esi+13Ch]
0x7F290E: fld     dword ptr ds:0A46C30h
0x7F2914: fst     dword ptr [esi+140h]
0x7F291A: fstp    dword ptr [esi+144h]
0x7F2920: fstp    dword ptr [esi+148h]
0x7F2926: mov     ecx, ds:0B25AE0h
0x7F292C: mov     [esi+160h], ecx
0x7F2932: mov     edx, ds:0B25AE4h
0x7F2938: mov     [esi+164h], edx
0x7F293E: mov     eax, ds:0B25AE8h
0x7F2943: mov     [esi+168h], eax
0x7F2949: mov     ecx, ds:0B25AECh
0x7F294F: mov     [esi+16Ch], ecx
0x7F2955: mov     edx, ds:0B25AE0h
0x7F295B: mov     [esi+170h], edx
0x7F2961: mov     eax, ds:0B25AE4h
0x7F2966: mov     [esi+174h], eax
0x7F296C: mov     ecx, ds:0B25AE8h
0x7F2972: mov     [esi+178h], ecx
0x7F2978: mov     edx, ds:0B25AECh
0x7F297E: mov     [esi+17Ch], edx
0x7F2984: mov     byte ptr [esi+181h], 1
0x7F298B: call    sub_7F3790
0x7F2990: mov     [esi+184h], ebx
0x7F2996: call    sub_7F3760
0x7F299B: xor     ecx, ecx
0x7F299D: mov     edx, 10h
0x7F29A2: mov     edi, eax
0x7F29A4: mul     edx
0x7F29A6: seto    cl
0x7F29A9: neg     ecx
0x7F29AB: or      ecx, eax
0x7F29AD: push    ecx; Size
0x7F29AE: call    FormHeapAlloc
0x7F29B3: shl     edi, 4
0x7F29B6: push    edi
0x7F29B7: push    ebx
0x7F29B8: push    eax
0x7F29B9: mov     [esi+6Ch], eax
0x7F29BC: call    __memset
0x7F29C1: add     esp, 10h
0x7F29C4: lea     edi, [esi+94h]
0x7F29CA: mov     ebp, 28h ; '('
0x7F29CF: nop
0x7F29D0: call    _rand
0x7F29D5: mov     [esp+30h+var_1C], eax
0x7F29D9: fild    [esp+30h+var_1C]
0x7F29DD: add     edi, 4
0x7F29E0: sub     ebp, 1
0x7F29E3: fdiv    qword ptr ds:0A3D5A8h
0x7F29E9: fstp    dword ptr [edi-4]
0x7F29EC: jnz     short loc_7F29D0
0x7F29EE: fld1
0x7F29F0: add     dword ptr ds:0B468E8h, 1
0x7F29F7: fstp    dword ptr [esi+198h]
0x7F29FD: mov     [esi+194h], ebx
0x7F2A03: mov     eax, esi
0x7F2A05: mov     ecx, [esp+30h+var_C]
0x7F2A09: mov     large fs:0, ecx
0x7F2A10: pop     ecx
0x7F2A11: pop     edi
0x7F2A12: pop     esi
0x7F2A13: pop     ebp
0x7F2A14: pop     ebx
0x7F2A15: add     esp, 1Ch
0x7F2A18: retn
