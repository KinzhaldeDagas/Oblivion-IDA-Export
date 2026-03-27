0x69E810: sub     esp, 8
0x69E813: push    esi
0x69E814: mov     esi, ecx
0x69E816: mov     eax, [esi+1Ch]
0x69E819: mov     ecx, [eax+0Ch]
0x69E81C: push    4
0x69E81E: lea     edx, [esp+10h+var_4]
0x69E822: mov     [esp+10h+var_4], ecx
0x69E826: mov     ecx, ds:0B33B00h
0x69E82C: push    edx
0x69E82D: call    SaveLoad_SaveFormID
0x69E832: mov     eax, [esi+2Ch]
0x69E835: lea     edx, [eax+1]
0x69E838: mov     cl, [eax]
0x69E83A: add     eax, 1
0x69E83D: test    cl, cl
0x69E83F: jnz     short loc_69E838
0x69E841: mov     ecx, ds:0B33B00h
0x69E847: sub     eax, edx
0x69E849: mov     [esp+0Ch+Src], al
0x69E84D: push    1; Size
0x69E84F: lea     eax, [esp+10h+Src]
0x69E853: push    eax; Src
0x69E854: call    SaveLoad_SaveData
0x69E859: movzx   ecx, [esp+0Ch+Src]
0x69E85E: mov     edx, [esi+2Ch]
0x69E861: push    ecx; Size
0x69E862: mov     ecx, ds:0B33B00h
0x69E868: push    edx; Src
0x69E869: call    SaveLoad_SaveData
0x69E86E: mov     ecx, [esi+1Ch]
0x69E871: mov     eax, [esi]
0x69E873: mov     edx, [eax+78h]
0x69E876: push    ecx
0x69E877: push    0
0x69E879: mov     ecx, esi
0x69E87B: call    edx
0x69E87D: pop     esi
0x69E87E: add     esp, 8
0x69E881: retn
