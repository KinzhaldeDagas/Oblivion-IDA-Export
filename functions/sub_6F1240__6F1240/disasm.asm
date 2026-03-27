0x6F1240: mov     ecx, [esp+arg_0]
0x6F1244: push    esi
0x6F1245: mov     esi, [esp+4+arg_4]
0x6F1249: mov     edx, esi
0x6F124B: sub     edx, ecx
0x6F124D: mov     eax, 2AAAAAABh
0x6F1252: imul    edx
0x6F1254: sar     edx, 1
0x6F1256: mov     eax, edx
0x6F1258: shr     eax, 1Fh
0x6F125B: add     eax, edx
0x6F125D: cmp     ecx, esi
0x6F125F: mov     edx, [esp+4+arg_8]
0x6F1263: lea     eax, [eax+eax*2]
0x6F1266: lea     eax, [edx+eax*4]
0x6F1269: jz      short loc_6F128B
0x6F126B: sub     edx, ecx
0x6F126D: push    edi
0x6F126E: mov     edi, edi
0x6F1270: mov     edi, [ecx]
0x6F1272: mov     [edx+ecx], edi
0x6F1275: mov     edi, [ecx+4]
0x6F1278: mov     [edx+ecx+4], edi
0x6F127C: mov     edi, [ecx+8]
0x6F127F: mov     [edx+ecx+8], edi
0x6F1283: add     ecx, 0Ch
0x6F1286: cmp     ecx, esi
0x6F1288: jnz     short loc_6F1270
0x6F128A: pop     edi
0x6F128B: pop     esi
0x6F128C: retn
