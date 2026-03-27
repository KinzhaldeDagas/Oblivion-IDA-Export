0x8ACDA0: push    ebp
0x8ACDA1: mov     ebp, [esp+4+arg_0]
0x8ACDA5: push    esi
0x8ACDA6: mov     esi, ecx
0x8ACDA8: lea     eax, [esi-8]
0x8ACDAB: neg     eax
0x8ACDAD: sbb     eax, eax
0x8ACDAF: push    edi
0x8ACDB0: and     eax, esi
0x8ACDB2: push    eax
0x8ACDB3: mov     ecx, ebp
0x8ACDB5: call    sub_8A6300
0x8ACDBA: mov     eax, [esi+70h]
0x8ACDBD: dec     eax
0x8ACDBE: js      short loc_8ACE33
0x8ACDC0: lea     edx, [eax+eax*2]
0x8ACDC3: shl     edx, 4
0x8ACDC6: lea     edi, [eax+1]
0x8ACDC9: lea     esp, [esp+0]
0x8ACDD0: mov     eax, [esi+6Ch]
0x8ACDD3: mov     eax, [eax+edx+28h]
0x8ACDD7: cmp     byte ptr [eax+18h], 1
0x8ACDDB: jnz     short loc_8ACDE4
0x8ACDDD: mov     ecx, [eax+10h]
0x8ACDE0: add     ecx, eax
0x8ACDE2: jmp     short loc_8ACDE6
0x8ACDE4: xor     ecx, ecx
0x8ACDE6: cmp     ecx, ebp
0x8ACDE8: jnz     short loc_8ACE2D
0x8ACDEA: mov     eax, [esi+70h]
0x8ACDED: mov     ecx, [esi+6Ch]
0x8ACDF0: dec     eax
0x8ACDF1: mov     [esi+70h], eax
0x8ACDF4: lea     eax, [eax+eax*2]
0x8ACDF7: shl     eax, 4
0x8ACDFA: movaps  xmm0, xmmword ptr [eax+ecx]
0x8ACDFE: add     eax, ecx
0x8ACE00: movaps  xmmword ptr [edx+ecx], xmm0
0x8ACE04: movaps  xmm0, xmmword ptr [eax+10h]
0x8ACE08: movaps  xmmword ptr [edx+ecx+10h], xmm0
0x8ACE0D: mov     ebp, [eax+20h]
0x8ACE10: mov     [edx+ecx+20h], ebp
0x8ACE14: mov     ebp, [eax+24h]
0x8ACE17: mov     [edx+ecx+24h], ebp
0x8ACE1B: mov     ebp, [eax+28h]
0x8ACE1E: mov     [edx+ecx+28h], ebp
0x8ACE22: mov     eax, [eax+2Ch]
0x8ACE25: mov     ebp, [esp+0Ch+arg_0]
0x8ACE29: mov     [edx+ecx+2Ch], eax
0x8ACE2D: sub     edx, 30h ; '0'
0x8ACE30: dec     edi
0x8ACE31: jnz     short loc_8ACDD0
0x8ACE33: mov     edx, [esi+88h]
0x8ACE39: xor     eax, eax
0x8ACE3B: test    edx, edx
0x8ACE3D: jle     short loc_8ACE51
0x8ACE3F: mov     ecx, [esi+84h]
0x8ACE45: cmp     [ecx], ebp
0x8ACE47: jz      short loc_8ACE54
0x8ACE49: inc     eax
0x8ACE4A: add     ecx, 4
0x8ACE4D: cmp     eax, edx
0x8ACE4F: jl      short loc_8ACE45
0x8ACE51: or      eax, 0FFFFFFFFh
0x8ACE54: mov     ecx, [esi+88h]
0x8ACE5A: dec     ecx
0x8ACE5B: mov     [esi+88h], ecx
0x8ACE61: mov     esi, [esi+84h]
0x8ACE67: mov     ecx, [esi+ecx*4]
0x8ACE6A: pop     edi
0x8ACE6B: mov     [esi+eax*4], ecx
0x8ACE6E: pop     esi
0x8ACE6F: pop     ebp
0x8ACE70: retn    4
