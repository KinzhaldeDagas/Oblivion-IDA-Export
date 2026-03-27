0x8CE130: push    ebp
0x8CE131: mov     ebp, esp
0x8CE133: and     esp, 0FFFFFFF0h
0x8CE136: sub     esp, 18h
0x8CE139: lea     eax, [ecx+10h]
0x8CE13C: mov     edx, [eax]
0x8CE13E: mov     ecx, [ecx+0Ch]
0x8CE141: mov     dword ptr [esp+18h+var_10], edx
0x8CE145: mov     edx, [eax+4]
0x8CE148: mov     dword ptr [esp+18h+var_10+4], edx
0x8CE14C: mov     edx, [eax+8]
0x8CE14F: mov     eax, [eax+0Ch]
0x8CE152: mov     dword ptr [esp+18h+var_10+0Ch], eax
0x8CE156: mov     eax, [ebp+arg_0]
0x8CE159: push    esi
0x8CE15A: mov     dword ptr [esp+1Ch+var_10+0Ch], ecx
0x8CE15E: mov     dword ptr [esp+1Ch+var_10+8], edx
0x8CE162: movaps  xmm1, [esp+1Ch+var_10]
0x8CE167: mov     ecx, offset unk_A99CD0
0x8CE16C: mov     esi, eax
0x8CE16E: push    edi
0x8CE16F: lea     edx, [eax+10h]
0x8CE172: sub     esi, ecx
0x8CE174: mov     edi, 4
0x8CE179: lea     esp, [esp+0]
0x8CE180: movaps  xmm2, xmmword ptr [ecx+10h]
0x8CE184: movaps  xmm0, xmm1
0x8CE187: mulps   xmm0, xmm2
0x8CE18A: movaps  xmm2, xmmword ptr [ecx]
0x8CE18D: movaps  xmm3, xmm1
0x8CE190: mulps   xmm3, xmm2
0x8CE193: movaps  xmmword ptr [esi+ecx], xmm3
0x8CE197: movaps  xmmword ptr [edx], xmm0
0x8CE19A: add     ecx, 20h ; ' '
0x8CE19D: add     edx, 20h ; ' '
0x8CE1A0: dec     edi
0x8CE1A1: jnz     short loc_8CE180
0x8CE1A3: pop     edi
0x8CE1A4: pop     esi
0x8CE1A5: mov     esp, ebp
0x8CE1A7: pop     ebp
0x8CE1A8: retn    4
