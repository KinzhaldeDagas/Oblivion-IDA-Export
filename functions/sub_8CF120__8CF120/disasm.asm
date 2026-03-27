0x8CF120: mov     eax, [ecx+30h]
0x8CF123: test    eax, eax
0x8CF125: mov     edx, [esp+arg_0]
0x8CF129: jz      short loc_8CF138
0x8CF12B: fld     dword ptr [edx+1Ch]
0x8CF12E: fcomp   dword ptr [ecx+2Ch]
0x8CF131: fnstsw  ax
0x8CF133: test    ah, 5
0x8CF136: jp      short locret_8CF18D
0x8CF138: movaps  xmm0, xmmword ptr [edx]
0x8CF13B: movaps  xmmword ptr [ecx+10h], xmm0
0x8CF13F: movaps  xmm0, xmmword ptr [edx+10h]
0x8CF143: movaps  xmmword ptr [ecx+20h], xmm0
0x8CF147: mov     eax, [edx+20h]
0x8CF14A: push    esi
0x8CF14B: mov     esi, [eax+0Ch]
0x8CF14E: test    esi, esi
0x8CF150: jz      short loc_8CF15B
0x8CF152: mov     eax, esi
0x8CF154: mov     esi, [eax+0Ch]
0x8CF157: test    esi, esi
0x8CF159: jnz     short loc_8CF152
0x8CF15B: mov     [ecx+30h], eax
0x8CF15E: mov     eax, [edx+20h]
0x8CF161: mov     eax, [eax+4]
0x8CF164: mov     [ecx+34h], eax
0x8CF167: mov     esi, [edx+24h]
0x8CF16A: mov     eax, [esi+0Ch]
0x8CF16D: test    eax, eax
0x8CF16F: jz      short loc_8CF17A
0x8CF171: mov     esi, eax
0x8CF173: mov     eax, [esi+0Ch]
0x8CF176: test    eax, eax
0x8CF178: jnz     short loc_8CF171
0x8CF17A: mov     [ecx+38h], esi
0x8CF17D: mov     eax, [edx+24h]
0x8CF180: mov     eax, [eax+4]
0x8CF183: mov     [ecx+3Ch], eax
0x8CF186: mov     edx, [edx+1Ch]
0x8CF189: mov     [ecx+4], edx
0x8CF18C: pop     esi
0x8CF18D: retn    4
