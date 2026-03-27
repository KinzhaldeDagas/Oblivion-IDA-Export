0x702FC0: cmp     dword ptr [ecx+28h], 0
0x702FC4: push    esi
0x702FC5: jz      short loc_703041
0x702FC7: mov     eax, [esp+4+arg_0]
0x702FCB: test    eax, eax
0x702FCD: jl      short loc_703041
0x702FCF: movzx   edx, word ptr [ecx+60h]
0x702FD3: cmp     eax, edx
0x702FD5: jge     short loc_703041
0x702FD7: mov     edx, [ecx+5Ch]
0x702FDA: movzx   eax, word ptr [edx+eax*2]
0x702FDE: cmp     ax, 0FFFFh
0x702FE2: jz      short loc_703041
0x702FE4: mov     edx, [ecx+58h]
0x702FE7: movzx   eax, ax
0x702FEA: cmp     word ptr [edx+eax*8], 4
0x702FEF: lea     esi, [edx+eax*8]
0x702FF2: jnz     short loc_703041
0x702FF4: movzx   edx, byte ptr [ecx+2Ch]
0x702FF8: mov     eax, dword ptr [esp+4+a2]
0x702FFC: and     edx, 3Fh
0x702FFF: cmp     ax, dx
0x703002: jnb     short loc_703041
0x703004: push    eax; a2
0x703005: call    sub_7282F0
0x70300A: fld     [esp+4+arg_8]
0x70300E: movzx   ecx, word ptr [esi+2]
0x703012: fst     dword ptr [eax+ecx*8]
0x703015: fld     [esp+4+arg_C]
0x703019: lea     eax, [eax+ecx*8]
0x70301C: pop     esi
0x70301D: fst     dword ptr [eax+4]
0x703020: fxch    st(1)
0x703022: fstp    dword ptr [eax+8]
0x703025: fld     [esp+arg_14]
0x703029: fst     dword ptr [eax+0Ch]
0x70302C: fld     [esp+arg_10]
0x703030: fst     dword ptr [eax+10h]
0x703033: fstp    dword ptr [eax+18h]
0x703036: fstp    dword ptr [eax+14h]
0x703039: fstp    dword ptr [eax+1Ch]
0x70303C: mov     al, 1
0x70303E: retn    18h
0x703041: xor     al, al
0x703043: pop     esi
0x703044: retn    18h
