0x79BEE0: push    ebx
0x79BEE1: mov     ebx, [esp+4+arg_4]
0x79BEE5: push    esi
0x79BEE6: mov     esi, [esp+8+arg_0]
0x79BEEA: cmp     esi, ebx
0x79BEEC: jz      short loc_79BF33
0x79BEEE: push    edi
0x79BEEF: mov     edi, [esp+0Ch+arg_8]
0x79BEF3: push    edi
0x79BEF4: mov     ecx, esi
0x79BEF6: call    sub_79B160
0x79BEFB: fld     dword ptr [edi+10h]
0x79BEFE: fstp    dword ptr [esi+10h]
0x79BF01: add     esi, 30h ; '0'
0x79BF04: cmp     esi, ebx
0x79BF06: fld     dword ptr [edi+14h]
0x79BF09: fstp    dword ptr [esi-1Ch]
0x79BF0C: mov     al, [edi+18h]
0x79BF0F: mov     [esi-18h], al
0x79BF12: fld     dword ptr [edi+1Ch]
0x79BF15: fstp    dword ptr [esi-14h]
0x79BF18: fld     dword ptr [edi+20h]
0x79BF1B: fstp    dword ptr [esi-10h]
0x79BF1E: fld     dword ptr [edi+24h]
0x79BF21: fstp    dword ptr [esi-0Ch]
0x79BF24: mov     ecx, [edi+28h]
0x79BF27: mov     [esi-8], ecx
0x79BF2A: mov     edx, [edi+2Ch]
0x79BF2D: mov     [esi-4], edx
0x79BF30: jnz     short loc_79BEF3
0x79BF32: pop     edi
0x79BF33: pop     esi
0x79BF34: pop     ebx
0x79BF35: retn
