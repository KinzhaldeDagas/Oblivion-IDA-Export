0x531470: push    ebx
0x531471: mov     ebx, [esp+4+arg_0]
0x531475: test    ebx, ebx
0x531477: push    edi
0x531478: mov     edi, ecx
0x53147A: jz      short loc_5314CA
0x53147C: push    esi
0x53147D: call    sub_531290
0x531482: mov     esi, eax
0x531484: call    sub_4F9FA0
0x531489: test    al, al
0x53148B: jz      short loc_5314AC
0x53148D: test    esi, esi
0x53148F: jz      short loc_5314AC
0x531491: cmp     dword ptr [esi+20h], 0
0x531495: jz      short loc_5314AC
0x531497: push    1; ArgList
0x531499: push    0; int
0x53149B: lea     ecx, [ebx+44h]; this
0x53149E: call    ExtraDataList_GetExtraScriptEventList
0x5314A3: push    eax; int
0x5314A4: push    ebx; int
0x5314A5: mov     ecx, esi; int
0x5314A7: call    Script_Run
0x5314AC: movzx   eax, byte ptr [edi+25h]
0x5314B0: shr     eax, 4
0x5314B3: test    al, 1
0x5314B5: pop     esi
0x5314B6: jnz     short loc_5314CA
0x5314B8: mov     edx, [edi]
0x5314BA: mov     eax, [edx+40h]
0x5314BD: push    10000000h
0x5314C2: mov     ecx, edi
0x5314C4: mov     byte ptr [edi+22h], 1
0x5314C8: call    eax
0x5314CA: pop     edi
0x5314CB: pop     ebx
0x5314CC: retn    4
