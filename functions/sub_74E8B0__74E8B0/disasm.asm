0x74E8B0: push    ebx
0x74E8B1: mov     bl, [esp+4+arg_4]
0x74E8B5: push    ebp
0x74E8B6: xor     ebp, ebp
0x74E8B8: test    bl, bl
0x74E8BA: push    edi
0x74E8BB: mov     edi, ecx
0x74E8BD: jz      loc_74E954
0x74E8C3: push    esi
0x74E8C4: mov     esi, [edi+9Ch]
0x74E8CA: test    esi, esi
0x74E8CC: jz      short loc_74E8F4
0x74E8CE: mov     edi, edi
0x74E8D0: mov     ecx, [esi+8]
0x74E8D3: test    ecx, ecx
0x74E8D5: lea     eax, [esi+8]
0x74E8D8: mov     esi, [esi]
0x74E8DA: jz      short loc_74E8F0
0x74E8DC: cmp     [ecx+0Ch], ebp
0x74E8DF: jz      short loc_74E8F0
0x74E8E1: mov     eax, [ecx]
0x74E8E3: fld     [esp+10h+arg_0]
0x74E8E7: mov     edx, [eax+50h]
0x74E8EA: push    ecx
0x74E8EB: fstp    [esp+14h+var_14]
0x74E8EE: call    edx
0x74E8F0: test    esi, esi
0x74E8F2: jnz     short loc_74E8D0
0x74E8F4: mov     esi, [edi+0Ch]
0x74E8F7: test    esi, esi
0x74E8F9: jz      short loc_74E92E
0x74E8FB: mov     eax, [esi]
0x74E8FD: mov     edx, [eax+4]
0x74E900: mov     ecx, esi
0x74E902: call    edx
0x74E904: test    eax, eax
0x74E906: jz      short loc_74E916
0x74E908: cmp     eax, offset dword_B40DFC
0x74E90D: jz      short loc_74E950
0x74E90F: mov     eax, [eax+4]
0x74E912: test    eax, eax
0x74E914: jnz     short loc_74E908
0x74E916: mov     eax, [esi]
0x74E918: fld     [esp+10h+arg_0]
0x74E91C: mov     edx, [eax+54h]
0x74E91F: push    ecx
0x74E920: mov     ecx, esi
0x74E922: fstp    [esp+14h+var_14]
0x74E925: call    edx
0x74E927: mov     esi, [esi+34h]
0x74E92A: test    esi, esi
0x74E92C: jnz     short loc_74E8FB
0x74E92E: mov     eax, [edi]
0x74E930: mov     edx, [eax+74h]
0x74E933: mov     ecx, edi
0x74E935: call    edx
0x74E937: test    ebp, ebp
0x74E939: pop     esi
0x74E93A: jz      short loc_74E95B
0x74E93C: mov     eax, [ebp+0]
0x74E93F: fld     [esp+0Ch+arg_0]
0x74E943: mov     edx, [eax+54h]
0x74E946: push    ecx
0x74E947: mov     ecx, ebp
0x74E949: fstp    [esp+10h+var_10]
0x74E94C: call    edx
0x74E94E: jmp     short loc_74E95B
0x74E950: mov     ebp, esi
0x74E952: jmp     short loc_74E927
0x74E954: mov     eax, [edi]
0x74E956: mov     edx, [eax+74h]
0x74E959: call    edx
0x74E95B: mov     eax, [edi]
0x74E95D: mov     edx, [eax+78h]
0x74E960: mov     ecx, edi
0x74E962: call    edx
0x74E964: fld     [esp+0Ch+arg_0]
0x74E968: mov     [edi+0F4h], bl
0x74E96E: fstp    dword ptr [edi+0F0h]
0x74E974: pop     edi
0x74E975: pop     ebp
0x74E976: pop     ebx
0x74E977: retn    8
