0x8CE0D0: push    ebp
0x8CE0D1: mov     ebp, esp
0x8CE0D3: and     esp, 0FFFFFFF0h
0x8CE0D6: sub     esp, 8
0x8CE0D9: mov     eax, [ebp+arg_4]
0x8CE0DC: dec     eax
0x8CE0DD: push    esi
0x8CE0DE: push    edi
0x8CE0DF: js      short loc_8CE11E
0x8CE0E1: mov     edx, [ebp+arg_0]
0x8CE0E4: lea     esi, [eax+1]
0x8CE0E7: mov     eax, [ebp+arg_8]
0x8CE0EA: lea     ebx, [ebx+0]
0x8CE0F0: movzx   edi, word ptr [edx]
0x8CE0F3: movaps  xmm1, xmmword ptr [ecx+10h]
0x8CE0F7: shl     edi, 4
0x8CE0FA: add     edi, offset stru_A99C50
0x8CE100: movaps  xmm0, xmmword ptr [edi]
0x8CE103: mulps   xmm1, xmm0
0x8CE106: movaps  xmmword ptr [eax], xmm1
0x8CE109: movzx   edi, word ptr [edx]
0x8CE10C: or      edi, 3F000000h
0x8CE112: mov     [eax+0Ch], edi
0x8CE115: add     eax, 10h
0x8CE118: add     edx, 2
0x8CE11B: dec     esi
0x8CE11C: jnz     short loc_8CE0F0
0x8CE11E: pop     edi
0x8CE11F: pop     esi
0x8CE120: mov     esp, ebp
0x8CE122: pop     ebp
0x8CE123: retn    0Ch
