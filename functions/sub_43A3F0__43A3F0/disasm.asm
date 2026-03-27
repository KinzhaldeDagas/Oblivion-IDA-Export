0x43A3F0: sub     esp, 0Ch
0x43A3F3: push    ebx
0x43A3F4: push    ebp
0x43A3F5: push    edi
0x43A3F6: mov     edi, ecx
0x43A3F8: mov     eax, [edi]
0x43A3FA: mov     ecx, [eax+14h]
0x43A3FD: mov     eax, [ecx]
0x43A3FF: lea     ebp, [eax+eax*2]
0x43A402: xor     ecx, ecx
0x43A404: mov     eax, ebp
0x43A406: mov     edx, 4
0x43A40B: mul     edx
0x43A40D: seto    cl
0x43A410: neg     ecx
0x43A412: or      ecx, eax
0x43A414: push    ecx; Size
0x43A415: call    FormHeapAlloc
0x43A41A: mov     ecx, [edi]
0x43A41C: mov     edx, [ecx+4]
0x43A41F: mov     ebx, eax
0x43A421: lea     eax, ds:0[ebp*4]
0x43A428: push    eax; Size
0x43A429: push    edx; Src
0x43A42A: push    ebx; Dst
0x43A42B: mov     [esp+28h+var_4], ebx
0x43A42F: call    _memcpy
0x43A434: xor     ecx, ecx
0x43A436: add     esp, 10h
0x43A439: cmp     [edi+1Ch], ecx
0x43A43C: mov     [esp+18h+var_C], ecx
0x43A440: mov     [esp+18h+var_8], ecx
0x43A444: jz      short loc_43A4A9
0x43A446: push    esi
0x43A447: mov     esi, [edi+1Ch]
0x43A44A: mov     eax, [esi+4]
0x43A44D: mov     [edi+1Ch], eax
0x43A450: xor     eax, eax
0x43A452: cmp     ebp, ecx
0x43A454: jbe     short loc_43A462
0x43A456: cmp     esi, [ebx+eax*4]
0x43A459: jz      short loc_43A4C7
0x43A45B: add     eax, 1
0x43A45E: cmp     eax, ebp
0x43A460: jb      short loc_43A456
0x43A462: mov     edx, [esi]
0x43A464: mov     [esi+4], ecx
0x43A467: mov     ecx, [edi]
0x43A469: mov     eax, [ecx]
0x43A46B: mov     eax, [eax+20h]
0x43A46E: push    edx
0x43A46F: call    eax
0x43A471: mov     ebx, [esi+4]
0x43A474: test    ebx, ebx
0x43A476: jz      short loc_43A494
0x43A478: lea     ecx, [ebx+8]
0x43A47B: push    ecx; lpAddend
0x43A47C: call    ds:InterlockedDecrement
0x43A482: test    eax, eax
0x43A484: jnz     short loc_43A494
0x43A486: test    ebx, ebx
0x43A488: jz      short loc_43A494
0x43A48A: mov     edx, [ebx]
0x43A48C: mov     eax, [edx]
0x43A48E: push    1
0x43A490: mov     ecx, ebx
0x43A492: call    eax
0x43A494: push    esi
0x43A495: call    FormHeapFree
0x43A49A: mov     ebx, [esp+20h+var_4]
0x43A49E: add     esp, 4
0x43A4A1: xor     ecx, ecx
0x43A4A3: cmp     [edi+1Ch], ecx
0x43A4A6: jnz     short loc_43A447
0x43A4A8: pop     esi
0x43A4A9: push    ebx
0x43A4AA: call    FormHeapFree
0x43A4AF: mov     ecx, [esp+1Ch+var_C]
0x43A4B3: mov     edx, [esp+1Ch+var_8]
0x43A4B7: add     esp, 4
0x43A4BA: mov     [edi+1Ch], ecx
0x43A4BD: mov     [edi+20h], edx
0x43A4C0: pop     edi
0x43A4C1: pop     ebp
0x43A4C2: pop     ebx
0x43A4C3: add     esp, 0Ch
0x43A4C6: retn
0x43A4C7: mov     edx, [esp+1Ch+var_C]
0x43A4CB: add     [esp+1Ch+var_8], 1
0x43A4D0: mov     [esi+4], edx
0x43A4D3: mov     [esp+1Ch+var_C], esi
0x43A4D7: jmp     short loc_43A4A3
