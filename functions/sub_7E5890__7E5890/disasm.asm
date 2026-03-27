0x7E5890: push    0FFFFFFFFh
0x7E5892: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7E5897: mov     eax, large fs:0
0x7E589D: push    eax
0x7E589E: push    ecx
0x7E589F: push    ebx
0x7E58A0: push    esi
0x7E58A1: push    edi
0x7E58A2: mov     eax, ds:0B30AACh
0x7E58A7: xor     eax, esp
0x7E58A9: push    eax
0x7E58AA: lea     eax, [esp+20h+var_C]
0x7E58AE: mov     large fs:0, eax
0x7E58B4: mov     ebx, ecx
0x7E58B6: mov     eax, [ebx+34h]
0x7E58B9: test    eax, eax
0x7E58BB: jnz     short loc_7E5930
0x7E58BD: push    10h; Size
0x7E58BF: call    FormHeapAlloc
0x7E58C4: add     esp, 4
0x7E58C7: mov     [esp+20h+var_10], eax
0x7E58CB: test    eax, eax
0x7E58CD: mov     [esp+20h+var_4], 0
0x7E58D5: jz      short loc_7E58F4
0x7E58D7: mov     ecx, [esp+20h+arg_0]
0x7E58DB: push    0
0x7E58DD: push    0
0x7E58DF: push    1
0x7E58E1: push    17Eh
0x7E58E6: push    ecx
0x7E58E7: push    eax
0x7E58E8: call    sub_7E2370
0x7E58ED: add     esp, 18h
0x7E58F0: mov     edi, eax
0x7E58F2: jmp     short loc_7E58F6
0x7E58F4: xor     edi, edi
0x7E58F6: mov     edx, [ebx+28h]
0x7E58F9: mov     eax, [edx+4]
0x7E58FC: lea     esi, [ebx+28h]
0x7E58FF: mov     ecx, esi
0x7E5901: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E5909: call    eax
0x7E590B: mov     [eax+8], edi
0x7E590E: mov     dword ptr [eax+4], 0
0x7E5915: mov     ecx, [esi+4]
0x7E5918: mov     [eax], ecx
0x7E591A: mov     ecx, [esi+4]
0x7E591D: test    ecx, ecx
0x7E591F: jz      short loc_7E5926
0x7E5921: mov     [ecx+4], eax
0x7E5924: jmp     short loc_7E5929
0x7E5926: mov     [esi+8], eax
0x7E5929: add     dword ptr [esi+0Ch], 1
0x7E592D: mov     [esi+4], eax
0x7E5930: lea     eax, [ebx+28h]
0x7E5933: mov     ecx, [esp+20h+var_C]
0x7E5937: mov     large fs:0, ecx
0x7E593E: pop     ecx
0x7E593F: pop     edi
0x7E5940: pop     esi
0x7E5941: pop     ebx
0x7E5942: add     esp, 10h
0x7E5945: retn    10h
