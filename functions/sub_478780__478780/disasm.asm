0x478780: push    ebx
0x478781: push    esi
0x478782: mov     esi, [esp+8+arg_0]
0x478786: mov     eax, [esi+8]
0x478789: test    eax, eax
0x47878B: mov     ebx, ecx
0x47878D: jz      loc_4788BF
0x478793: cmp     esi, offset unk_B33D60
0x478799: jz      short loc_4787A5
0x47879B: lea     ecx, [ebx+12Ch]
0x4787A1: cmp     esi, ecx
0x4787A3: jnz     short loc_4787AE
0x4787A5: push    eax
0x4787A6: call    sub_4DE1C0
0x4787AB: add     esp, 4
0x4787AE: mov     edx, [esi+8]
0x4787B1: push    edi
0x4787B2: push    edx
0x4787B3: push    0
0x4787B5: call    GetShadowSceneNode
0x4787BA: add     esp, 4
0x4787BD: mov     ecx, eax
0x4787BF: call    sub_7C5E70
0x4787C4: mov     eax, [esi+8]
0x4787C7: push    eax
0x4787C8: call    sub_481350
0x4787CD: mov     ecx, [esi+8]
0x4787D0: add     esp, 4
0x4787D3: cmp     dword ptr [ecx+1Ch], 0
0x4787D7: jz      short loc_478829
0x4787D9: push    3
0x4787DB: call    nullsub_returnTrue_0arg
0x4787E0: mov     eax, [esi+8]
0x4787E3: mov     ecx, [eax+1Ch]
0x4787E6: mov     edx, [ecx]
0x4787E8: mov     edx, [edx+88h]
0x4787EE: add     esp, 4
0x4787F1: push    eax
0x4787F2: lea     eax, [esp+10h+arg_0]
0x4787F6: push    eax
0x4787F7: call    edx
0x4787F9: mov     eax, [esp+0Ch+arg_0]
0x4787FD: test    eax, eax
0x4787FF: jz      short loc_47881F
0x478801: mov     edi, eax
0x478803: add     eax, 4
0x478806: push    eax; lpAddend
0x478807: call    dword ptr ds:0A2807Ch
0x47880D: test    eax, eax
0x47880F: jnz     short loc_47881F
0x478811: test    edi, edi
0x478813: jz      short loc_47881F
0x478815: mov     eax, [edi]
0x478817: mov     edx, [eax]
0x478819: push    1
0x47881B: mov     ecx, edi
0x47881D: call    edx
0x47881F: push    2
0x478821: call    nullsub_returnTrue_0arg
0x478826: add     esp, 4
0x478829: cmp     esi, offset unk_B33D10
0x47882F: jz      short loc_47883B
0x478831: lea     eax, [ebx+0DCh]
0x478837: cmp     esi, eax
0x478839: jnz     short loc_47889D
0x47883B: mov     edi, [ebx+28h]
0x47883E: test    edi, edi
0x478840: jz      short loc_478858
0x478842: push    0
0x478844: push    edi
0x478845: call    sub_897A90
0x47884A: add     esp, 8
0x47884D: lea     ecx, [edi+0ACh]
0x478853: call    sub_477EF0
0x478858: mov     edi, [ebx+30h]
0x47885B: test    edi, edi
0x47885D: jz      short loc_478875
0x47885F: push    0
0x478861: push    edi
0x478862: call    sub_897A90
0x478867: add     esp, 8
0x47886A: lea     ecx, [edi+0ACh]
0x478870: call    sub_477EF0
0x478875: mov     ecx, ds:0B333C4h
0x47887B: cmp     [ebx+150h], ecx
0x478881: jnz     short loc_47889D
0x478883: push    0
0x478885: call    sub_6600D0
0x47888A: cmp     ebx, eax
0x47888C: jnz     short loc_47889D
0x47888E: mov     ecx, ds:0B33D84h
0x478894: push    ecx
0x478895: call    sub_57B190
0x47889A: add     esp, 4
0x47889D: mov     ecx, [esi+4]
0x4788A0: mov     edx, [ecx]
0x4788A2: mov     eax, [edx+14h]
0x4788A5: call    eax
0x4788A7: mov     ecx, ds:0B33A1Ch
0x4788AD: push    1
0x4788AF: push    1
0x4788B1: push    eax
0x4788B2: call    QueuedModelLoader_RemoveModel
0x4788B7: mov     dword ptr [esi+8], 0
0x4788BE: pop     edi
0x4788BF: cmp     [esp+8+arg_4], 0
0x4788C4: jz      short loc_4788D3
0x4788C6: mov     ecx, [esp+8+arg_8]
0x4788CA: mov     dword ptr [esi], 0
0x4788D0: mov     [esi+4], ecx
0x4788D3: pop     esi
0x4788D4: pop     ebx
0x4788D5: retn    0Ch
