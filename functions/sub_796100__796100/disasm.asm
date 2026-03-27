0x796100: push    esi
0x796101: mov     esi, ecx
0x796103: mov     ecx, [esi+3Ch]
0x796106: test    ecx, ecx
0x796108: push    edi
0x796109: movzx   edi, [esp+8+arg_0]
0x79610E: jz      short loc_79611C
0x796110: mov     eax, [esi+40h]
0x796113: sub     eax, ecx
0x796115: sar     eax, 4
0x796118: cmp     edi, eax
0x79611A: jb      short loc_796121
0x79611C: call    __invalid_parameter_noinfo
0x796121: movzx   eax, word ptr [esi+26h]
0x796125: mov     ecx, edi
0x796127: shl     ecx, 4
0x79612A: add     ecx, [esi+3Ch]; int
0x79612D: push    0; int
0x79612F: add     eax, 1
0x796132: push    eax; int
0x796133: call    sub_795990
0x796138: mov     ecx, [esi+3Ch]
0x79613B: test    ecx, ecx
0x79613D: jz      short loc_79614B
0x79613F: mov     eax, [esi+40h]
0x796142: sub     eax, ecx
0x796144: sar     eax, 4
0x796147: cmp     edi, eax
0x796149: jb      short loc_796150
0x79614B: call    __invalid_parameter_noinfo
0x796150: push    ebx
0x796151: mov     ebx, edi
0x796153: shl     ebx, 4
0x796156: add     ebx, [esi+3Ch]
0x796159: push    ebp
0x79615A: mov     ecx, [ebx+4]
0x79615D: test    ecx, ecx
0x79615F: movzx   ebp, word ptr [esi+26h]
0x796163: jz      short loc_796170
0x796165: mov     eax, [ebx+8]
0x796168: sub     eax, ecx
0x79616A: sar     eax, 1
0x79616C: cmp     ebp, eax
0x79616E: jb      short loc_796175
0x796170: call    __invalid_parameter_noinfo
0x796175: mov     ecx, [ebx+4]
0x796178: mov     dx, [esp+10h+arg_8]
0x79617D: mov     [ecx+ebp*2], dx
0x796181: mov     ecx, [esi+4Ch]
0x796184: test    ecx, ecx
0x796186: jz      short loc_796194
0x796188: mov     eax, [esi+50h]
0x79618B: sub     eax, ecx
0x79618D: sar     eax, 4
0x796190: cmp     edi, eax
0x796192: jb      short loc_796199
0x796194: call    __invalid_parameter_noinfo
0x796199: movzx   eax, word ptr [esi+26h]
0x79619D: mov     ecx, edi
0x79619F: shl     ecx, 4
0x7961A2: add     ecx, [esi+4Ch]; int
0x7961A5: push    0; char
0x7961A7: add     eax, 1
0x7961AA: push    eax; int
0x7961AB: call    sub_7958D0
0x7961B0: mov     ecx, [esi+4Ch]
0x7961B3: test    ecx, ecx
0x7961B5: jz      short loc_7961C3
0x7961B7: mov     eax, [esi+50h]
0x7961BA: sub     eax, ecx
0x7961BC: sar     eax, 4
0x7961BF: cmp     edi, eax
0x7961C1: jb      short loc_7961C8
0x7961C3: call    __invalid_parameter_noinfo
0x7961C8: movzx   ebp, word ptr [esi+26h]
0x7961CC: mov     ebx, edi
0x7961CE: shl     ebx, 4
0x7961D1: add     ebx, [esi+4Ch]
0x7961D4: mov     ecx, [ebx+4]
0x7961D7: test    ecx, ecx
0x7961D9: jz      short loc_7961E7
0x7961DB: mov     eax, [ebx+8]
0x7961DE: sub     eax, ecx
0x7961E0: sar     eax, 2
0x7961E3: cmp     ebp, eax
0x7961E5: jb      short loc_7961EC
0x7961E7: call    __invalid_parameter_noinfo
0x7961EC: mov     ecx, [ebx+4]
0x7961EF: mov     edx, [esp+10h+arg_4]
0x7961F3: mov     [ecx+ebp*4], edx
0x7961F6: mov     ecx, [esi+2Ch]
0x7961F9: test    ecx, ecx
0x7961FB: pop     ebp
0x7961FC: pop     ebx
0x7961FD: jz      short loc_79620B
0x7961FF: mov     eax, [esi+30h]
0x796202: sub     eax, ecx
0x796204: sar     eax, 2
0x796207: cmp     edi, eax
0x796209: jb      short loc_796210
0x79620B: call    __invalid_parameter_noinfo
0x796210: mov     eax, [esi+2Ch]
0x796213: movzx   ecx, [esp+8+arg_8]
0x796218: lea     eax, [eax+edi*4]
0x79621B: sub     ecx, 2
0x79621E: add     [eax], ecx
0x796220: pop     edi
0x796221: pop     esi
0x796222: retn    0Ch
