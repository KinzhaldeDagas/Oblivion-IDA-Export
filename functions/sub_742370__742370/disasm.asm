0x742370: mov     edx, [esp+arg_0]
0x742374: xor     ecx, ecx
0x742376: cmp     edx, ecx
0x742378: jz      short loc_7423B3
0x74237A: mov     eax, [edx+1Ch]
0x74237D: cmp     eax, ecx
0x74237F: jz      short loc_7423B3
0x742381: mov     [eax+18h], ecx
0x742384: mov     [edx+14h], ecx
0x742387: mov     [edx+8], ecx
0x74238A: mov     [edx+18h], ecx
0x74238D: mov     [eax], ecx
0x74238F: mov     [eax+4], ecx
0x742392: mov     [eax+0Ch], ecx
0x742395: mov     [eax+20h], ecx
0x742398: mov     [eax+24h], ecx
0x74239B: mov     [eax+30h], ecx
0x74239E: mov     [eax+34h], ecx
0x7423A1: lea     ecx, [eax+528h]
0x7423A7: mov     [eax+64h], ecx
0x7423AA: mov     [eax+48h], ecx
0x7423AD: mov     [eax+44h], ecx
0x7423B0: xor     eax, eax
0x7423B2: retn
0x7423B3: mov     eax, 0FFFFFFFEh
0x7423B8: retn
