0x83B670: push    0FFFFFFFFh
0x83B672: push    offset SEH_882120
0x83B677: mov     eax, large fs:0
0x83B67D: push    eax
0x83B67E: push    ebx
0x83B67F: push    ebp
0x83B680: push    esi
0x83B681: push    edi
0x83B682: mov     eax, ds:0B30AACh
0x83B687: xor     eax, esp
0x83B689: push    eax
0x83B68A: lea     eax, [esp+20h+var_C]
0x83B68E: mov     large fs:0, eax
0x83B694: mov     esi, ecx
0x83B696: mov     ebx, [esp+20h+arg_8]
0x83B69A: mov     eax, [ebx+10h]
0x83B69D: mov     edi, ds:0B45798h
0x83B6A3: push    eax
0x83B6A4: call    sub_848DA0
0x83B6A9: mov     ebx, [ebx+0Ch]
0x83B6AC: push    ebx
0x83B6AD: mov     ecx, esi
0x83B6AF: call    sub_848E50
0x83B6B4: mov     ecx, [esp+20h+arg_0]
0x83B6B8: mov     eax, [esi]
0x83B6BA: mov     edx, [eax+0BCh]
0x83B6C0: push    0
0x83B6C2: push    ebx
0x83B6C3: push    ecx
0x83B6C4: mov     ecx, esi
0x83B6C6: call    edx
0x83B6C8: mov     eax, [edi+24h]
0x83B6CB: mov     ebx, [esp+20h+arg_C]
0x83B6CF: mov     ebp, [eax]
0x83B6D1: mov     edx, [ebx]
0x83B6D3: mov     eax, [edx+88h]
0x83B6D9: push    0
0x83B6DB: mov     ecx, ebx
0x83B6DD: mov     [esp+24h+arg_8], ebp
0x83B6E1: call    eax
0x83B6E3: mov     ebp, [ebp+4]
0x83B6E6: cmp     ebp, eax
0x83B6E8: mov     [esp+20h+arg_0], eax
0x83B6EC: jz      short loc_83B728
0x83B6EE: test    ebp, ebp
0x83B6F0: jz      short loc_83B713
0x83B6F2: lea     ecx, [ebp+4]
0x83B6F5: push    ecx; lpAddend
0x83B6F6: call    dword ptr ds:0A2807Ch
0x83B6FC: test    eax, eax
0x83B6FE: jnz     short loc_83B70F
0x83B700: test    ebp, ebp
0x83B702: jz      short loc_83B70F
0x83B704: mov     edx, [ebp+0]
0x83B707: mov     eax, [edx]
0x83B709: push    1
0x83B70B: mov     ecx, ebp
0x83B70D: call    eax
0x83B70F: mov     eax, [esp+20h+arg_0]
0x83B713: test    eax, eax
0x83B715: mov     ecx, [esp+20h+arg_8]
0x83B719: mov     [ecx+4], eax
0x83B71C: jz      short loc_83B728
0x83B71E: add     eax, 4
0x83B721: push    eax; lpAddend
0x83B722: call    dword ptr ds:0A28078h
0x83B728: mov     edx, [esp+20h+arg_8]
0x83B72C: push    ebx
0x83B72D: push    edx
0x83B72E: mov     ecx, esi
0x83B730: call    sub_848FA0
0x83B735: mov     eax, [edi+24h]
0x83B738: mov     ebp, [eax+4]
0x83B73B: push    0
0x83B73D: push    ebx
0x83B73E: mov     ecx, esi
0x83B740: mov     [esp+28h+arg_8], ebp
0x83B744: call    sub_848FD0
0x83B749: mov     ebp, [ebp+4]
0x83B74C: cmp     ebp, eax
0x83B74E: mov     [esp+20h+arg_0], eax
0x83B752: jz      short loc_83B78E
0x83B754: test    ebp, ebp
0x83B756: jz      short loc_83B779
0x83B758: lea     ecx, [ebp+4]
0x83B75B: push    ecx; lpAddend
0x83B75C: call    dword ptr ds:0A2807Ch
0x83B762: test    eax, eax
0x83B764: jnz     short loc_83B775
0x83B766: test    ebp, ebp
0x83B768: jz      short loc_83B775
0x83B76A: mov     edx, [ebp+0]
0x83B76D: mov     eax, [edx]
0x83B76F: push    1
0x83B771: mov     ecx, ebp
0x83B773: call    eax
0x83B775: mov     eax, [esp+20h+arg_0]
0x83B779: test    eax, eax
0x83B77B: mov     ecx, [esp+20h+arg_8]
0x83B77F: mov     [ecx+4], eax
0x83B782: jz      short loc_83B78E
0x83B784: add     eax, 4
0x83B787: push    eax; lpAddend
0x83B788: call    dword ptr ds:0A28078h
0x83B78E: mov     edx, [esp+20h+arg_8]
0x83B792: push    ebx
0x83B793: push    edx
0x83B794: mov     ecx, esi
0x83B796: call    sub_848FA0
0x83B79B: mov     eax, [edi+24h]
0x83B79E: mov     ebp, [eax+10h]
0x83B7A1: mov     edx, [ebx]
0x83B7A3: mov     eax, [edx+90h]
0x83B7A9: push    0
0x83B7AB: mov     ecx, ebx
0x83B7AD: mov     [esp+24h+arg_8], ebp
0x83B7B1: call    eax
0x83B7B3: mov     ebp, [ebp+4]
0x83B7B6: cmp     ebp, eax
0x83B7B8: mov     [esp+20h+arg_0], eax
0x83B7BC: jz      short loc_83B7F8
0x83B7BE: test    ebp, ebp
0x83B7C0: jz      short loc_83B7E3
0x83B7C2: lea     ecx, [ebp+4]
0x83B7C5: push    ecx; lpAddend
0x83B7C6: call    dword ptr ds:0A2807Ch
0x83B7CC: test    eax, eax
0x83B7CE: jnz     short loc_83B7DF
0x83B7D0: test    ebp, ebp
0x83B7D2: jz      short loc_83B7DF
0x83B7D4: mov     edx, [ebp+0]
0x83B7D7: mov     eax, [edx]
0x83B7D9: push    1
0x83B7DB: mov     ecx, ebp
0x83B7DD: call    eax
0x83B7DF: mov     eax, [esp+20h+arg_0]
0x83B7E3: test    eax, eax
0x83B7E5: mov     ecx, [esp+20h+arg_8]
0x83B7E9: mov     [ecx+4], eax
0x83B7EC: jz      short loc_83B7F8
0x83B7EE: add     eax, 4
0x83B7F1: push    eax; lpAddend
0x83B7F2: call    dword ptr ds:0A28078h
0x83B7F8: mov     edx, [esp+20h+arg_8]
0x83B7FC: push    ebx
0x83B7FD: push    edx
0x83B7FE: mov     ecx, esi
0x83B800: call    sub_848FA0
0x83B805: mov     ebx, 1
0x83B80A: add     [edi+60h], ebx
0x83B80D: mov     [esp+20h+arg_8], edi
0x83B811: mov     ecx, [esi+38h]
0x83B814: lea     eax, [esp+20h+arg_8]
0x83B818: push    eax
0x83B819: push    ecx
0x83B81A: lea     ecx, [esi+40h]
0x83B81D: mov     [esp+28h+var_4], 0
0x83B825: call    sub_76CE40
0x83B82A: or      eax, 0FFFFFFFFh
0x83B82D: add     [edi+60h], eax
0x83B830: mov     [esp+20h+var_4], eax
0x83B834: jnz     short loc_83B83D
0x83B836: mov     ecx, edi
0x83B838: call    sub_7604D0
0x83B83D: add     [esi+38h], ebx
0x83B840: mov     ecx, [esp+20h+var_C]
0x83B844: mov     large fs:0, ecx
0x83B84B: pop     ecx
0x83B84C: pop     edi
0x83B84D: pop     esi
0x83B84E: pop     ebp
0x83B84F: pop     ebx
0x83B850: add     esp, 0Ch
0x83B853: retn    10h
