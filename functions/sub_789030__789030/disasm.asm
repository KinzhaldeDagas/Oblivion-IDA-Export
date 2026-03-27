0x789030: sub     esp, 8
0x789033: push    ebx
0x789034: push    esi
0x789035: push    edi
0x789036: mov     edi, ecx
0x789038: mov     esi, [edi+50h]
0x78903B: xor     ebx, ebx
0x78903D: cmp     esi, ebx
0x78903F: jz      short loc_78906C
0x789041: cmp     dword ptr [esi+3Ch], 10h
0x789045: jb      short loc_789053
0x789047: mov     eax, [esi+28h]
0x78904A: push    eax
0x78904B: call    FormHeapFree
0x789050: add     esp, 4
0x789053: mov     dword ptr [esi+3Ch], 0Fh
0x78905A: mov     [esi+38h], ebx
0x78905D: push    esi
0x78905E: mov     [esi+28h], bl
0x789061: call    FormHeapFree
0x789066: add     esp, 4
0x789069: mov     [edi+50h], ebx
0x78906C: mov     eax, [edi+4]
0x78906F: cmp     eax, ebx
0x789071: jz      short loc_7890A5
0x789073: lea     esi, [eax+0E8h]
0x789079: push    ebp
0x78907A: mov     ebp, [esi+8]
0x78907D: cmp     [esi+4], ebp
0x789080: jbe     short loc_789087
0x789082: call    __invalid_parameter_noinfo
0x789087: mov     ebx, [esi+4]
0x78908A: cmp     ebx, [esi+8]
0x78908D: jbe     short loc_789094
0x78908F: call    __invalid_parameter_noinfo
0x789094: push    ebp; Src
0x789095: push    esi; int
0x789096: push    ebx; Dst
0x789097: push    esi; int
0x789098: lea     ecx, [esp+28h+var_8]
0x78909C: push    ecx; int
0x78909D: mov     ecx, esi
0x78909F: call    sub_439050
0x7890A4: pop     ebp
0x7890A5: mov     edi, [edi+60h]
0x7890A8: test    edi, edi
0x7890AA: jz      short loc_7890DC
0x7890AC: lea     esi, [edi+0E8h]
0x7890B2: mov     edi, [esi+8]
0x7890B5: cmp     [esi+4], edi
0x7890B8: jbe     short loc_7890BF
0x7890BA: call    __invalid_parameter_noinfo
0x7890BF: mov     ebx, [esi+4]
0x7890C2: cmp     ebx, [esi+8]
0x7890C5: jbe     short loc_7890CC
0x7890C7: call    __invalid_parameter_noinfo
0x7890CC: push    edi; Src
0x7890CD: push    esi; int
0x7890CE: push    ebx; Dst
0x7890CF: push    esi; int
0x7890D0: lea     edx, [esp+24h+var_8]
0x7890D4: push    edx; int
0x7890D5: mov     ecx, esi
0x7890D7: call    sub_439050
0x7890DC: pop     edi
0x7890DD: pop     esi
0x7890DE: pop     ebx
0x7890DF: add     esp, 8
0x7890E2: retn
