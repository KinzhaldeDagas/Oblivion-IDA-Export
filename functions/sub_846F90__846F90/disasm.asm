0x846F90: push    0FFFFFFFFh
0x846F92: push    offset SEH_846F90
0x846F97: mov     eax, large fs:0
0x846F9D: push    eax
0x846F9E: sub     esp, 18h
0x846FA1: push    ebx
0x846FA2: push    ebp
0x846FA3: push    esi
0x846FA4: push    edi
0x846FA5: mov     eax, ds:0B30AACh
0x846FAA: xor     eax, esp
0x846FAC: push    eax
0x846FAD: lea     eax, [esp+38h+var_C]
0x846FB1: mov     large fs:0, eax
0x846FB7: mov     [esp+38h+var_20], ecx
0x846FBB: mov     eax, ds:0B42EB8h
0x846FC0: fld1
0x846FC2: movzx   ebx, byte ptr [eax+9]
0x846FC6: mov     esi, [esp+38h+arg_C]
0x846FCA: mov     eax, [esi+0C8h]
0x846FD0: movzx   eax, byte ptr [eax+ebx]
0x846FD4: mov     ecx, ds:0B25AD0h
0x846FDA: mov     edx, ds:0B25AD8h
0x846FE0: mov     edi, ds:0B45B50h
0x846FE6: mov     [esp+38h+var_1C], ecx
0x846FEA: mov     ecx, ds:0B25AD4h
0x846FF0: mov     [esp+38h+arg_C], eax
0x846FF4: fstp    [esp+38h+var_1C]
0x846FF8: mov     ebp, [esp+38h+var_1C]
0x846FFC: sub     esp, 10h
0x846FFF: fild    [esp+48h+arg_C]
0x847003: mov     eax, esp
0x847005: mov     [eax], ebp
0x847007: mov     [esp+48h+var_14], edx
0x84700B: mov     edx, ds:0B25ADCh
0x847011: mov     [eax+4], ecx
0x847014: fstp    [esp+48h+var_14]
0x847018: mov     ecx, [esp+48h+var_14]
0x84701C: mov     [eax+8], ecx
0x84701F: push    1Fh
0x847021: mov     [eax+0Ch], edx
0x847024: call    sub_7ECAE0
0x847029: mov     edx, [edi+24h]
0x84702C: mov     ebp, [edx]
0x84702E: mov     eax, [esi]
0x847030: mov     edx, [eax+88h]
0x847036: add     esp, 14h
0x847039: push    ebx
0x84703A: mov     ecx, esi
0x84703C: mov     [esp+3Ch+arg_C], ebp
0x847040: call    edx
0x847042: mov     ebp, [ebp+4]
0x847045: cmp     ebp, eax
0x847047: mov     [esp+38h+var_24], eax
0x84704B: jz      short loc_847087
0x84704D: test    ebp, ebp
0x84704F: jz      short loc_847072
0x847051: lea     eax, [ebp+4]
0x847054: push    eax; lpAddend
0x847055: call    dword ptr ds:0A2807Ch
0x84705B: test    eax, eax
0x84705D: jnz     short loc_84706E
0x84705F: test    ebp, ebp
0x847061: jz      short loc_84706E
0x847063: mov     edx, [ebp+0]
0x847066: mov     eax, [edx]
0x847068: push    1
0x84706A: mov     ecx, ebp
0x84706C: call    eax
0x84706E: mov     eax, [esp+38h+var_24]
0x847072: test    eax, eax
0x847074: mov     ecx, [esp+38h+arg_C]
0x847078: mov     [ecx+4], eax
0x84707B: jz      short loc_847087
0x84707D: add     eax, 4
0x847080: push    eax; lpAddend
0x847081: call    dword ptr ds:0A28078h
0x847087: mov     edx, [esp+38h+arg_C]
0x84708B: mov     ebp, [esp+38h+var_20]
0x84708F: push    esi
0x847090: push    edx
0x847091: mov     ecx, ebp
0x847093: call    sub_848FA0
0x847098: mov     eax, [edi+24h]
0x84709B: mov     ecx, [eax+4]
0x84709E: push    ebx
0x84709F: mov     [esp+3Ch+arg_C], ecx
0x8470A3: push    esi
0x8470A4: mov     ecx, ebp
0x8470A6: call    sub_848FD0
0x8470AB: mov     edx, [esp+38h+arg_C]
0x8470AF: mov     ebx, [edx+4]
0x8470B2: cmp     ebx, eax
0x8470B4: mov     [esp+38h+var_24], eax
0x8470B8: jz      short loc_8470F3
0x8470BA: test    ebx, ebx
0x8470BC: jz      short loc_8470DE
0x8470BE: lea     eax, [ebx+4]
0x8470C1: push    eax; lpAddend
0x8470C2: call    dword ptr ds:0A2807Ch
0x8470C8: test    eax, eax
0x8470CA: jnz     short loc_8470DA
0x8470CC: test    ebx, ebx
0x8470CE: jz      short loc_8470DA
0x8470D0: mov     edx, [ebx]
0x8470D2: mov     eax, [edx]
0x8470D4: push    1
0x8470D6: mov     ecx, ebx
0x8470D8: call    eax
0x8470DA: mov     eax, [esp+38h+var_24]
0x8470DE: test    eax, eax
0x8470E0: mov     ecx, [esp+38h+arg_C]
0x8470E4: mov     [ecx+4], eax
0x8470E7: jz      short loc_8470F3
0x8470E9: add     eax, 4
0x8470EC: push    eax; lpAddend
0x8470ED: call    dword ptr ds:0A28078h
0x8470F3: mov     edx, [esp+38h+arg_C]
0x8470F7: push    esi
0x8470F8: push    edx
0x8470F9: mov     ecx, ebp
0x8470FB: call    sub_848FA0
0x847100: cmp     byte ptr [esp+38h+arg_10], 0
0x847105: jz      short loc_847142
0x847107: mov     esi, 1
0x84710C: add     [edi+60h], esi
0x84710F: mov     [esp+38h+arg_10], edi
0x847113: mov     ecx, [ebp+38h]
0x847116: lea     eax, [esp+38h+arg_10]
0x84711A: push    eax
0x84711B: push    ecx
0x84711C: lea     ecx, [ebp+40h]
0x84711F: mov     [esp+40h+var_4], 0
0x847127: call    sub_76CE40
0x84712C: or      eax, 0FFFFFFFFh
0x84712F: add     [edi+60h], eax
0x847132: mov     [esp+38h+var_4], eax
0x847136: jnz     short loc_84713F
0x847138: mov     ecx, edi
0x84713A: call    sub_7604D0
0x84713F: add     [ebp+38h], esi
0x847142: mov     ecx, dword ptr [esp+38h+var_C]
0x847146: mov     large fs:0, ecx
0x84714D: pop     ecx
0x84714E: pop     edi
0x84714F: pop     esi
0x847150: pop     ebp
0x847151: pop     ebx
0x847152: add     esp, 24h
0x847155: retn    14h
