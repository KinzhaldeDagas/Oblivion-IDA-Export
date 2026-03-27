0x4821B0: mov     eax, [ecx+0Ch]
0x4821B3: imul    eax, [esp+arg_0]
0x4821B8: add     eax, [esp+arg_4]
0x4821BC: mov     ecx, [ecx+10h]
0x4821BF: lea     eax, [ecx+eax*8]
0x4821C2: mov     eax, [eax]
0x4821C4: test    eax, eax
0x4821C6: jz      short loc_4821D6
0x4821C8: xor     edx, edx
0x4821CA: cmp     byte ptr [eax+26h], 6
0x4821CE: setz    dl
0x4821D1: mov     al, dl
0x4821D3: retn    8
0x4821D6: xor     al, al
0x4821D8: retn    8
