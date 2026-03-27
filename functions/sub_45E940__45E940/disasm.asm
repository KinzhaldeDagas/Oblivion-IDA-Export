0x45E940: push    ecx
0x45E941: push    esi
0x45E942: push    edi
0x45E943: mov     edi, [esp+0Ch+arg_0]
0x45E947: test    edi, edi
0x45E949: mov     esi, ecx
0x45E94B: mov     [esp+0Ch+Src], 0
0x45E950: jz      short loc_45E966
0x45E952: mov     eax, edi
0x45E954: lea     edx, [eax+1]
0x45E957: mov     cl, [eax]
0x45E959: add     eax, 1
0x45E95C: test    cl, cl
0x45E95E: jnz     short loc_45E957
0x45E960: sub     eax, edx
0x45E962: mov     [esp+0Ch+Src], al
0x45E966: push    1; Size
0x45E968: lea     eax, [esp+10h+Src]
0x45E96C: push    eax; Src
0x45E96D: mov     ecx, esi
0x45E96F: call    SaveLoad_SaveData
0x45E974: mov     al, [esp+0Ch+Src]
0x45E978: test    al, al
0x45E97A: jz      short loc_45E988
0x45E97C: movzx   ecx, al
0x45E97F: push    ecx; Size
0x45E980: push    edi; Src
0x45E981: mov     ecx, esi
0x45E983: call    SaveLoad_SaveData
0x45E988: pop     edi
0x45E989: pop     esi
0x45E98A: pop     ecx
0x45E98B: retn    4
