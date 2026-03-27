0x77D890: mov     eax, ecx
0x77D892: xor     edx, edx
0x77D894: mov     dword ptr [eax+1Ch], offset ??_7?$NiTArray@PAVNiVBBlock@@@@6B@; const NiTArray<NiVBBlock *>::`vftable'
0x77D89B: mov     [eax+24h], dx
0x77D89F: mov     word ptr [eax+2Ah], 1
0x77D8A5: mov     [eax+26h], dx
0x77D8A9: mov     [eax+28h], dx
0x77D8AD: mov     [eax+20h], edx
0x77D8B0: mov     ecx, ds:0B2AD4Ch
0x77D8B6: mov     [eax+0Ch], ecx
0x77D8B9: mov     [eax+4], edx
0x77D8BC: mov     [eax+8], edx
0x77D8BF: mov     [eax], edx
0x77D8C1: mov     [eax+10h], edx
0x77D8C4: mov     [eax+14h], edx
0x77D8C7: mov     [eax+18h], edx
0x77D8CA: xor     ecx, ecx
0x77D8CC: cmp     [eax+26h], dx
0x77D8D0: jbe     short loc_77D8E8
0x77D8D2: push    esi
0x77D8D3: push    edi
0x77D8D4: mov     edi, [eax+20h]
0x77D8D7: movzx   esi, cx
0x77D8DA: add     ecx, 1
0x77D8DD: mov     [edi+esi*4], edx
0x77D8E0: cmp     cx, [eax+26h]
0x77D8E4: jb      short loc_77D8D4
0x77D8E6: pop     edi
0x77D8E7: pop     esi
0x77D8E8: mov     [eax+26h], dx
0x77D8EC: mov     [eax+28h], dx
0x77D8F0: mov     [eax+2Ch], edx
0x77D8F3: mov     edx, ds:0B2AD50h
0x77D8F9: mov     [eax+30h], edx
0x77D8FC: retn
