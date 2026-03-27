0x5520E0: push    esi
0x5520E1: push    edi
0x5520E2: mov     edi, [esp+8+arg_0]
0x5520E6: mov     esi, ecx
0x5520E8: cmp     esi, edi
0x5520EA: jz      short loc_552155
0x5520EC: mov     eax, [edi]
0x5520EE: fldz
0x5520F0: push    ebx
0x5520F1: push    ecx
0x5520F2: mov     [esi], eax
0x5520F4: fstp    [esp+10h+var_10]; int
0x5520F7: mov     eax, [edi+4]
0x5520FA: mov     ecx, [esi]
0x5520FC: imul    ecx, eax
0x5520FF: lea     ebx, [esi+8]
0x552102: push    ecx; int
0x552103: mov     ecx, ebx; int
0x552105: mov     [esi+4], eax
0x552108: call    sub_527160
0x55210D: mov     eax, [edi+0Ch]
0x552110: test    eax, eax
0x552112: jz      short loc_55211E
0x552114: mov     edx, [edi+10h]
0x552117: sub     edx, eax
0x552119: sar     edx, 2
0x55211C: jnz     short loc_552123
0x55211E: call    __invalid_parameter_noinfo
0x552123: mov     eax, [ebx+4]
0x552126: test    eax, eax
0x552128: mov     edi, [edi+0Ch]
0x55212B: jz      short loc_552137
0x55212D: mov     ecx, [ebx+8]
0x552130: sub     ecx, eax
0x552132: sar     ecx, 2
0x552135: jnz     short loc_55213C
0x552137: call    __invalid_parameter_noinfo
0x55213C: mov     edx, [esi+4]
0x55213F: imul    edx, [esi]
0x552142: mov     eax, [ebx+4]
0x552145: add     edx, edx
0x552147: add     edx, edx
0x552149: push    edx; Size
0x55214A: push    edi; Src
0x55214B: push    eax; Dst
0x55214C: call    _memcpy
0x552151: add     esp, 0Ch
0x552154: pop     ebx
0x552155: pop     edi
0x552156: mov     eax, esi
0x552158: pop     esi
0x552159: retn    4
