0x552160: push    0FFFFFFFFh
0x552162: push    offset SEH_552160
0x552167: mov     eax, large fs:0
0x55216D: push    eax
0x55216E: push    ecx
0x55216F: push    ebx
0x552170: push    ebp
0x552171: push    esi
0x552172: push    edi
0x552173: mov     eax, ds:0B30AACh
0x552178: xor     eax, esp
0x55217A: push    eax
0x55217B: lea     eax, [esp+24h+var_C]
0x55217F: mov     large fs:0, eax
0x552185: mov     edi, ecx
0x552187: mov     [esp+24h+var_10], edi
0x55218B: mov     ebx, [esp+24h+arg_0]
0x55218F: mov     eax, [ebx]
0x552191: mov     [edi], eax
0x552193: mov     ecx, [ebx+4]
0x552196: lea     esi, [edi+8]
0x552199: xor     ebp, ebp
0x55219B: mov     [edi+4], ecx
0x55219E: mov     [esi+4], ebp
0x5521A1: mov     [esi+8], ebp
0x5521A4: mov     [esi+0Ch], ebp
0x5521A7: fldz
0x5521A9: mov     edx, [edi]
0x5521AB: imul    edx, [edi+4]
0x5521AF: push    ecx
0x5521B0: mov     ecx, esi; int
0x5521B2: mov     [esp+28h+var_4], ebp
0x5521B6: fstp    [esp+28h+var_28]; int
0x5521B9: push    edx; int
0x5521BA: call    sub_527160
0x5521BF: mov     eax, [esi+4]
0x5521C2: cmp     eax, ebp
0x5521C4: jz      short loc_552225
0x5521C6: mov     ecx, [esi+8]
0x5521C9: sub     ecx, eax
0x5521CB: sar     ecx, 2
0x5521CE: jz      short loc_552225
0x5521D0: mov     eax, [ebx+0Ch]
0x5521D3: cmp     eax, ebp
0x5521D5: jz      short loc_552225
0x5521D7: mov     edx, [ebx+10h]
0x5521DA: sub     edx, eax
0x5521DC: sar     edx, 2
0x5521DF: jz      short loc_552225
0x5521E1: cmp     eax, ebp
0x5521E3: jz      short loc_5521EF
0x5521E5: mov     ecx, [ebx+10h]
0x5521E8: sub     ecx, eax
0x5521EA: sar     ecx, 2
0x5521ED: jnz     short loc_5521F4
0x5521EF: call    __invalid_parameter_noinfo
0x5521F4: mov     eax, [esi+4]
0x5521F7: cmp     eax, ebp
0x5521F9: mov     ebx, [ebx+0Ch]
0x5521FC: jz      short loc_552208
0x5521FE: mov     edx, [esi+8]
0x552201: sub     edx, eax
0x552203: sar     edx, 2
0x552206: jnz     short loc_55220D
0x552208: call    __invalid_parameter_noinfo
0x55220D: mov     eax, [edi]
0x55220F: imul    eax, [edi+4]
0x552213: mov     ecx, [esi+4]
0x552216: add     eax, eax
0x552218: add     eax, eax
0x55221A: push    eax; Size
0x55221B: push    ebx; Src
0x55221C: push    ecx; Dst
0x55221D: call    _memcpy
0x552222: add     esp, 0Ch
0x552225: mov     eax, edi
0x552227: mov     ecx, [esp+24h+var_C]
0x55222B: mov     large fs:0, ecx
0x552232: pop     ecx
0x552233: pop     edi
0x552234: pop     esi
0x552235: pop     ebp
0x552236: pop     ebx
0x552237: add     esp, 10h
0x55223A: retn    4
