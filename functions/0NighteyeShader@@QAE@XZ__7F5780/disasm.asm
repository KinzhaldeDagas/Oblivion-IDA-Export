0x7F5780: push    0FFFFFFFFh
0x7F5782: push    offset ??0NighteyeShader@@QAE@XZ_SEH
0x7F5787: mov     eax, large fs:0
0x7F578D: push    eax
0x7F578E: push    ecx
0x7F578F: push    ebx
0x7F5790: push    ebp
0x7F5791: push    esi
0x7F5792: push    edi
0x7F5793: mov     eax, ds:0B30AACh
0x7F5798: xor     eax, esp
0x7F579A: push    eax
0x7F579B: lea     eax, [esp+24h+var_C]
0x7F579F: mov     large fs:0, eax
0x7F57A5: mov     esi, ecx
0x7F57A7: mov     [esp+24h+var_10], esi
0x7F57AB: call    ??0BSImageSpaceShader@@QAE@XZ; BSImageSpaceShader::BSImageSpaceShader(void)
0x7F57B0: push    offset sub_7016A0; a5
0x7F57B5: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7F57BA: push    1; size
0x7F57BC: push    4; a2
0x7F57BE: lea     edi, [esi+90h]
0x7F57C4: xor     ebp, ebp
0x7F57C6: push    edi; a1
0x7F57C7: mov     [esp+38h+var_4], ebp
0x7F57CB: mov     dword ptr [esi], offset ??_7NighteyeShader@@6B@; const NighteyeShader::`vftable'
0x7F57D1: call    ArrayConstructor
0x7F57D6: push    offset sub_7016A0; a5
0x7F57DB: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7F57E0: push    1; size
0x7F57E2: push    4; a2
0x7F57E4: lea     ebx, [esi+94h]
0x7F57EA: push    ebx; a1
0x7F57EB: mov     byte ptr [esp+38h+var_4], 1
0x7F57F0: call    ArrayConstructor
0x7F57F5: push    offset sub_4027D0; a5
0x7F57FA: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7F57FF: push    1; size
0x7F5801: lea     eax, [esi+9Ch]
0x7F5807: push    4; a2
0x7F5809: push    eax; a1
0x7F580A: mov     byte ptr [esp+38h+var_4], 2
0x7F580F: call    ArrayConstructor
0x7F5814: mov     [esi+98h], ebp
0x7F581A: mov     ebp, [edi]
0x7F581C: test    ebp, ebp
0x7F581E: mov     byte ptr [esp+24h+var_4], 3
0x7F5823: jz      short loc_7F5848
0x7F5825: lea     eax, [ebp+4]
0x7F5828: push    eax; lpAddend
0x7F5829: call    dword ptr ds:0A2807Ch
0x7F582F: test    eax, eax
0x7F5831: jnz     short loc_7F5842
0x7F5833: test    ebp, ebp
0x7F5835: jz      short loc_7F5842
0x7F5837: mov     edx, [ebp+0]
0x7F583A: mov     eax, [edx]
0x7F583C: push    1
0x7F583E: mov     ecx, ebp
0x7F5840: call    eax
0x7F5842: mov     dword ptr [edi], 0
0x7F5848: mov     edi, [ebx]
0x7F584A: test    edi, edi
0x7F584C: jz      short loc_7F5870
0x7F584E: lea     ecx, [edi+4]
0x7F5851: push    ecx; lpAddend
0x7F5852: call    dword ptr ds:0A2807Ch
0x7F5858: test    eax, eax
0x7F585A: jnz     short loc_7F586A
0x7F585C: test    edi, edi
0x7F585E: jz      short loc_7F586A
0x7F5860: mov     edx, [edi]
0x7F5862: mov     eax, [edx]
0x7F5864: push    1
0x7F5866: mov     ecx, edi
0x7F5868: call    eax
0x7F586A: mov     dword ptr [ebx], 0
0x7F5870: mov     ecx, [esi+9Ch]
0x7F5876: test    ecx, ecx
0x7F5878: jz      short loc_7F588F
0x7F587A: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7F587E: jnz     short loc_7F5885
0x7F5880: call    sub_7604D0
0x7F5885: mov     dword ptr [esi+9Ch], 0
0x7F588F: mov     eax, esi
0x7F5891: mov     byte ptr [esi+20h], 1
0x7F5895: mov     ecx, dword ptr [esp+24h+var_C]
0x7F5899: mov     large fs:0, ecx
0x7F58A0: pop     ecx
0x7F58A1: pop     edi
0x7F58A2: pop     esi
0x7F58A3: pop     ebp
0x7F58A4: pop     ebx
0x7F58A5: add     esp, 10h
0x7F58A8: retn
