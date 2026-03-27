0x875630: push    0FFFFFFFFh
0x875632: push    offset SEH_879360
0x875637: mov     eax, large fs:0
0x87563D: push    eax
0x87563E: push    ecx
0x87563F: push    ebx
0x875640: push    ebp
0x875641: push    esi
0x875642: push    edi
0x875643: mov     eax, ds:0B30AACh
0x875648: xor     eax, esp
0x87564A: push    eax
0x87564B: lea     eax, [esp+24h+var_C]
0x87564F: mov     large fs:0, eax
0x875655: mov     ebx, ecx
0x875657: mov     [esp+24h+var_10], ebx
0x87565B: mov     eax, [esp+24h+arg_8]
0x87565F: mov     edi, [eax+0Ch]
0x875662: mov     esi, ds:0B4765Ch
0x875668: push    edi
0x875669: call    sub_848E50
0x87566E: mov     edx, [ebx]
0x875670: mov     eax, [esp+24h+arg_0]
0x875674: mov     edx, [edx+0BCh]
0x87567A: push    0
0x87567C: push    edi
0x87567D: push    eax
0x87567E: mov     ecx, ebx
0x875680: call    edx
0x875682: mov     eax, [esi+24h]
0x875685: mov     ebx, [esp+24h+arg_C]
0x875689: mov     edi, [eax]
0x87568B: mov     edx, [ebx]
0x87568D: mov     eax, [edx+88h]
0x875693: push    0
0x875695: mov     ecx, ebx
0x875697: mov     [esp+28h+arg_8], edi
0x87569B: call    eax
0x87569D: mov     edi, [edi+4]
0x8756A0: mov     ebp, eax
0x8756A2: cmp     edi, ebp
0x8756A4: jz      short loc_8756DB
0x8756A6: test    edi, edi
0x8756A8: jz      short loc_8756C6
0x8756AA: lea     ecx, [edi+4]
0x8756AD: push    ecx; lpAddend
0x8756AE: call    dword ptr ds:0A2807Ch
0x8756B4: test    eax, eax
0x8756B6: jnz     short loc_8756C6
0x8756B8: test    edi, edi
0x8756BA: jz      short loc_8756C6
0x8756BC: mov     edx, [edi]
0x8756BE: mov     eax, [edx]
0x8756C0: push    1
0x8756C2: mov     ecx, edi
0x8756C4: call    eax
0x8756C6: test    ebp, ebp
0x8756C8: mov     ecx, [esp+24h+arg_8]
0x8756CC: mov     [ecx+4], ebp
0x8756CF: jz      short loc_8756DB
0x8756D1: add     ebp, 4
0x8756D4: push    ebp; lpAddend
0x8756D5: call    dword ptr ds:0A28078h
0x8756DB: mov     edx, [esi+24h]
0x8756DE: mov     edi, [edx+4]
0x8756E1: mov     ecx, [esp+24h+var_10]
0x8756E5: push    0
0x8756E7: push    ebx
0x8756E8: mov     [esp+2Ch+arg_8], edi
0x8756EC: call    sub_848FD0
0x8756F1: mov     edi, [edi+4]
0x8756F4: mov     ebp, eax
0x8756F6: cmp     edi, ebp
0x8756F8: jz      short loc_87572F
0x8756FA: test    edi, edi
0x8756FC: jz      short loc_87571A
0x8756FE: lea     eax, [edi+4]
0x875701: push    eax; lpAddend
0x875702: call    dword ptr ds:0A2807Ch
0x875708: test    eax, eax
0x87570A: jnz     short loc_87571A
0x87570C: test    edi, edi
0x87570E: jz      short loc_87571A
0x875710: mov     edx, [edi]
0x875712: mov     eax, [edx]
0x875714: push    1
0x875716: mov     ecx, edi
0x875718: call    eax
0x87571A: test    ebp, ebp
0x87571C: mov     ecx, [esp+24h+arg_8]
0x875720: mov     [ecx+4], ebp
0x875723: jz      short loc_87572F
0x875725: add     ebp, 4
0x875728: push    ebp; lpAddend
0x875729: call    dword ptr ds:0A28078h
0x87572F: mov     edx, [esi+24h]
0x875732: mov     eax, [ebx]
0x875734: mov     ebp, [edx+0Ch]
0x875737: mov     edx, [eax+90h]
0x87573D: push    0
0x87573F: mov     ecx, ebx
0x875741: call    edx
0x875743: mov     edi, [ebp+4]
0x875746: mov     ebx, eax
0x875748: cmp     edi, ebx
0x87574A: jz      short loc_87577D
0x87574C: test    edi, edi
0x87574E: jz      short loc_87576C
0x875750: lea     eax, [edi+4]
0x875753: push    eax; lpAddend
0x875754: call    dword ptr ds:0A2807Ch
0x87575A: test    eax, eax
0x87575C: jnz     short loc_87576C
0x87575E: test    edi, edi
0x875760: jz      short loc_87576C
0x875762: mov     edx, [edi]
0x875764: mov     eax, [edx]
0x875766: push    1
0x875768: mov     ecx, edi
0x87576A: call    eax
0x87576C: test    ebx, ebx
0x87576E: mov     [ebp+4], ebx
0x875771: jz      short loc_87577D
0x875773: add     ebx, 4
0x875776: push    ebx; lpAddend
0x875777: call    dword ptr ds:0A28078h
0x87577D: mov     ecx, [esi+24h]
0x875780: mov     edi, [ecx+10h]
0x875783: mov     eax, ds:0B43110h
0x875788: mov     ebx, [edi+4]
0x87578B: add     edi, 4
0x87578E: cmp     ebx, eax
0x875790: mov     ebp, eax
0x875792: jz      short loc_8757C4
0x875794: test    ebx, ebx
0x875796: jz      short loc_8757B4
0x875798: lea     edx, [ebx+4]
0x87579B: push    edx; lpAddend
0x87579C: call    dword ptr ds:0A2807Ch
0x8757A2: test    eax, eax
0x8757A4: jnz     short loc_8757B4
0x8757A6: test    ebx, ebx
0x8757A8: jz      short loc_8757B4
0x8757AA: mov     eax, [ebx]
0x8757AC: mov     edx, [eax]
0x8757AE: push    1
0x8757B0: mov     ecx, ebx
0x8757B2: call    edx
0x8757B4: test    ebp, ebp
0x8757B6: mov     [edi], ebp
0x8757B8: jz      short loc_8757C4
0x8757BA: add     ebp, 4
0x8757BD: push    ebp; lpAddend
0x8757BE: call    dword ptr ds:0A28078h
0x8757C4: mov     ecx, [esi+24h]
0x8757C7: mov     edi, [ecx+14h]
0x8757CA: mov     eax, ds:0B43108h
0x8757CF: mov     ebx, [edi+4]
0x8757D2: add     edi, 4
0x8757D5: cmp     ebx, eax
0x8757D7: mov     ebp, eax
0x8757D9: jz      short loc_87580B
0x8757DB: test    ebx, ebx
0x8757DD: jz      short loc_8757FB
0x8757DF: lea     edx, [ebx+4]
0x8757E2: push    edx; lpAddend
0x8757E3: call    dword ptr ds:0A2807Ch
0x8757E9: test    eax, eax
0x8757EB: jnz     short loc_8757FB
0x8757ED: test    ebx, ebx
0x8757EF: jz      short loc_8757FB
0x8757F1: mov     eax, [ebx]
0x8757F3: mov     edx, [eax]
0x8757F5: push    1
0x8757F7: mov     ecx, ebx
0x8757F9: call    edx
0x8757FB: test    ebp, ebp
0x8757FD: mov     [edi], ebp
0x8757FF: jz      short loc_87580B
0x875801: add     ebp, 4
0x875804: push    ebp; lpAddend
0x875805: call    dword ptr ds:0A28078h
0x87580B: mov     eax, [esi+24h]
0x87580E: mov     ebx, [eax+18h]
0x875811: mov     eax, ds:0B4310Ch
0x875816: mov     edi, [ebx+4]
0x875819: cmp     edi, eax
0x87581B: mov     ebp, eax
0x87581D: jz      short loc_875850
0x87581F: test    edi, edi
0x875821: jz      short loc_87583F
0x875823: lea     ecx, [edi+4]
0x875826: push    ecx; lpAddend
0x875827: call    dword ptr ds:0A2807Ch
0x87582D: test    eax, eax
0x87582F: jnz     short loc_87583F
0x875831: test    edi, edi
0x875833: jz      short loc_87583F
0x875835: mov     edx, [edi]
0x875837: mov     eax, [edx]
0x875839: push    1
0x87583B: mov     ecx, edi
0x87583D: call    eax
0x87583F: test    ebp, ebp
0x875841: mov     [ebx+4], ebp
0x875844: jz      short loc_875850
0x875846: add     ebp, 4
0x875849: push    ebp; lpAddend
0x87584A: call    dword ptr ds:0A28078h
0x875850: mov     ebx, 1
0x875855: add     [esi+60h], ebx
0x875858: mov     [esp+24h+arg_8], esi
0x87585C: mov     edi, [esp+24h+var_10]
0x875860: mov     edx, [edi+38h]
0x875863: lea     ecx, [esp+24h+arg_8]
0x875867: push    ecx
0x875868: push    edx
0x875869: lea     ecx, [edi+40h]
0x87586C: mov     [esp+2Ch+var_4], 0
0x875874: call    sub_76CE40
0x875879: or      eax, 0FFFFFFFFh
0x87587C: add     [esi+60h], eax
0x87587F: mov     [esp+24h+var_4], eax
0x875883: jnz     short loc_87588C
0x875885: mov     ecx, esi
0x875887: call    sub_7604D0
0x87588C: add     [edi+38h], ebx
0x87588F: mov     ecx, [esp+24h+var_C]
0x875893: mov     large fs:0, ecx
0x87589A: pop     ecx
0x87589B: pop     edi
0x87589C: pop     esi
0x87589D: pop     ebp
0x87589E: pop     ebx
0x87589F: add     esp, 10h
0x8758A2: retn    10h
