0x6D3830: push    0FFFFFFFFh
0x6D3832: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x6D3837: mov     eax, large fs:0
0x6D383D: push    eax
0x6D383E: push    ecx
0x6D383F: push    ebx
0x6D3840: push    ebp
0x6D3841: push    esi
0x6D3842: push    edi
0x6D3843: mov     eax, ds:0B30AACh
0x6D3848: xor     eax, esp
0x6D384A: push    eax
0x6D384B: lea     eax, [esp+24h+var_C]
0x6D384F: mov     large fs:0, eax
0x6D3855: mov     ebp, ecx
0x6D3857: xor     ebx, ebx
0x6D3859: cmp     [esp+24h+arg_4], ebx
0x6D385D: jbe     short loc_6D38C7
0x6D385F: cmp     [ebp+10h], ebx
0x6D3862: lea     edi, [ebp+10h]
0x6D3865: jnz     short loc_6D38AC
0x6D3867: push    18h; Size
0x6D3869: call    FormHeapAlloc
0x6D386E: mov     esi, eax
0x6D3870: add     esp, 4
0x6D3873: mov     [esp+24h+var_10], esi
0x6D3877: cmp     esi, ebx
0x6D3879: mov     [esp+24h+var_4], ebx
0x6D387D: jz      short loc_6D389A
0x6D387F: mov     ecx, esi
0x6D3881: call    NiObject_constr
0x6D3886: mov     dword ptr [esi], offset ??_7NiFloatData@@6B@; const NiFloatData::`vftable'
0x6D388C: mov     [esi+8], ebx
0x6D388F: mov     [esi+0Ch], ebx
0x6D3892: mov     [esi+10h], ebx
0x6D3895: mov     [esi+14h], bl
0x6D3898: jmp     short loc_6D389C
0x6D389A: xor     esi, esi
0x6D389C: push    esi; a2
0x6D389D: mov     ecx, edi; this
0x6D389F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6D38A7: call    NiSmartPointer_Set??
0x6D38AC: mov     eax, [esp+24h+arg_8]
0x6D38B0: mov     ecx, [esp+24h+arg_4]
0x6D38B4: mov     edx, [esp+24h+arg_0]
0x6D38B8: push    eax
0x6D38B9: push    ecx
0x6D38BA: mov     ecx, [edi]
0x6D38BC: push    edx
0x6D38BD: call    sub_6E33B0
0x6D38C2: mov     [ebp+14h], ebx
0x6D38C5: jmp     short loc_6D38D6
0x6D38C7: mov     ecx, [ebp+10h]
0x6D38CA: cmp     ecx, ebx
0x6D38CC: jz      short loc_6D38D6
0x6D38CE: push    ebx
0x6D38CF: push    ebx
0x6D38D0: push    ebx
0x6D38D1: call    sub_6E33B0
0x6D38D6: mov     ecx, [esp+24h+var_C]
0x6D38DA: mov     large fs:0, ecx
0x6D38E1: pop     ecx
0x6D38E2: pop     edi
0x6D38E3: pop     esi
0x6D38E4: pop     ebp
0x6D38E5: pop     ebx
0x6D38E6: add     esp, 10h
0x6D38E9: retn    0Ch
