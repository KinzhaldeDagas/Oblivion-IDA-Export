0x6D3100: push    ebx
0x6D3101: push    esi
0x6D3102: push    edi
0x6D3103: mov     esi, ecx
0x6D3105: call    sub_6BE490
0x6D310A: mov     eax, [esp+0Ch+arg_4]
0x6D310E: mov     edx, [esp+0Ch+arg_8]
0x6D3112: mov     ecx, [esp+0Ch+arg_0]
0x6D3116: mov     [esi+14h], eax
0x6D3119: lea     eax, [esi+20h]
0x6D311C: mov     [eax], edx
0x6D311E: mov     edx, [esp+0Ch+arg_C]
0x6D3122: mov     [esi+30h], ecx
0x6D3125: mov     ecx, [esp+0Ch+arg_10]
0x6D3129: mov     [esi+34h], edx
0x6D312C: mov     edx, [esp+0Ch+arg_1C]
0x6D3130: mov     [esi+18h], ecx
0x6D3133: mov     ecx, [esp+0Ch+arg_14]
0x6D3137: mov     [esi+1Ch], edx
0x6D313A: mov     edx, [esp+0Ch+arg_20]
0x6D313E: mov     [esi+24h], ecx
0x6D3141: mov     ecx, [esp+0Ch+arg_18]
0x6D3145: mov     [esi+28h], edx
0x6D3148: xor     edx, edx
0x6D314A: mov     [esi+38h], ecx
0x6D314D: mov     [esi+3Ch], edx
0x6D3150: mov     [esi+40h], edx
0x6D3153: mov     [esi+44h], edx
0x6D3156: lea     ecx, [esi+2Ch]
0x6D3159: mov     esi, 3
0x6D315E: mov     edi, edi
0x6D3160: cmp     [eax-0Ch], edx
0x6D3163: jz      short loc_6D3171
0x6D3165: mov     edi, [eax]
0x6D3167: mov     bl, ds:byte_B3D3E8[edi]
0x6D316D: mov     [ecx], bl
0x6D316F: jmp     short loc_6D3173
0x6D3171: mov     [ecx], dl
0x6D3173: add     eax, 4
0x6D3176: add     ecx, 1
0x6D3179: sub     esi, 1
0x6D317C: jnz     short loc_6D3160
0x6D317E: pop     edi
0x6D317F: pop     esi
0x6D3180: pop     ebx
0x6D3181: retn    24h ; '$'
