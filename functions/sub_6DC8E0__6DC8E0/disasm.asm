0x6DC8E0: mov     eax, [ecx+48h]
0x6DC8E3: test    eax, eax
0x6DC8E5: push    ebx
0x6DC8E6: push    esi
0x6DC8E7: push    edi
0x6DC8E8: jz      short loc_6DC8F5
0x6DC8EA: mov     edx, [eax+10h]
0x6DC8ED: mov     bl, [eax+14h]
0x6DC8F0: mov     ecx, [eax+0Ch]
0x6DC8F3: jmp     short loc_6DC8FB
0x6DC8F5: xor     edx, edx
0x6DC8F7: xor     ecx, ecx
0x6DC8F9: xor     bl, bl
0x6DC8FB: mov     esi, [esp+0Ch+arg_0]
0x6DC8FF: fld     [esp+0Ch+arg_C]
0x6DC903: movzx   eax, bl
0x6DC906: mov     edi, eax
0x6DC908: imul    eax, [esp+0Ch+arg_4]
0x6DC90D: imul    edi, [esp+0Ch+arg_8]
0x6DC912: push    esi
0x6DC913: add     edi, ecx
0x6DC915: add     eax, ecx
0x6DC917: push    edi
0x6DC918: push    eax
0x6DC919: mov     eax, ds:0B3D010h[edx*4]
0x6DC920: push    ecx
0x6DC921: fstp    [esp+1Ch+var_1C]
0x6DC924: call    eax
0x6DC926: add     esp, 10h
0x6DC929: pop     edi
0x6DC92A: mov     eax, esi
0x6DC92C: pop     esi
0x6DC92D: pop     ebx
0x6DC92E: retn    10h
