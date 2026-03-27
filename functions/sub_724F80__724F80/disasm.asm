0x724F80: push    0FFFFFFFFh
0x724F82: push    offset SEH_8C8970
0x724F87: mov     eax, large fs:0
0x724F8D: push    eax
0x724F8E: push    ecx
0x724F8F: push    esi
0x724F90: push    edi
0x724F91: mov     eax, ds:0B30AACh
0x724F96: xor     eax, esp
0x724F98: push    eax
0x724F99: lea     eax, [esp+1Ch+var_C]
0x724F9D: mov     large fs:0, eax
0x724FA3: mov     edi, ecx
0x724FA5: push    28h ; '('; Size
0x724FA7: call    FormHeapAlloc
0x724FAC: mov     esi, eax
0x724FAE: add     esp, 4
0x724FB1: mov     [esp+1Ch+var_10], esi
0x724FB5: test    esi, esi
0x724FB7: mov     [esp+1Ch+var_4], 0
0x724FBF: jz      short loc_724FF8
0x724FC1: mov     ecx, esi
0x724FC3: call    sub_738760
0x724FC8: mov     dword ptr [esi], offset ??_7NiRangeLODData@@6B@; const NiRangeLODData::`vftable'
0x724FCE: mov     eax, ds:0B3F9A8h
0x724FD3: mov     [esi+8], eax
0x724FD6: mov     ecx, ds:0B3F9ACh
0x724FDC: mov     [esi+0Ch], ecx
0x724FDF: mov     edx, ds:0B3F9B0h
0x724FE5: mov     [esi+10h], edx
0x724FE8: mov     dword ptr [esi+20h], 0
0x724FEF: mov     dword ptr [esi+24h], 0
0x724FF6: jmp     short loc_724FFA
0x724FF8: xor     esi, esi
0x724FFA: mov     eax, [edi+8]
0x724FFD: mov     [esi+8], eax
0x725000: mov     ecx, [edi+0Ch]
0x725003: mov     [esi+0Ch], ecx
0x725006: mov     edx, [edi+10h]
0x725009: mov     [esi+10h], edx
0x72500C: mov     eax, [edi+20h]
0x72500F: push    eax
0x725010: mov     ecx, esi
0x725012: mov     [esp+20h+var_4], 0FFFFFFFFh
0x72501A: call    sub_724AB0
0x72501F: mov     ecx, [edi+20h]
0x725022: mov     edx, [edi+24h]
0x725025: mov     eax, [esi+24h]
0x725028: shl     ecx, 4
0x72502B: push    ecx; Size
0x72502C: push    edx; Src
0x72502D: push    eax; Dst
0x72502E: call    _memcpy
0x725033: add     esp, 0Ch
0x725036: mov     eax, esi
0x725038: mov     ecx, [esp+1Ch+var_C]
0x72503C: mov     large fs:0, ecx
0x725043: pop     ecx
0x725044: pop     edi
0x725045: pop     esi
0x725046: add     esp, 10h
0x725049: retn
