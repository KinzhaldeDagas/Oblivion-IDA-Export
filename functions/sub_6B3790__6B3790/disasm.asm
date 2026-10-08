0x6B3790: push    esi
0x6B3791: mov     esi, ecx
0x6B3793: call    sub_6B3200
0x6B3798: test    al, al
0x6B379A: jnz     short loc_6B37A0
0x6B37A0: add     dword ptr [esi+10h], 1
0x6B37A4: mov     eax, [esi+10h]
0x6B37A7: cmp     eax, [esi+0Ch]
0x6B37AA: ja      short def_6B37E0
0x6B37AC: mov     ecx, [esi+8]
0x6B37AF: mov     dl, [eax+ecx]
0x6B37B2: add     eax, 1
0x6B37B5: cmp     dl, 0FBh ; 'û'
0x6B37B8: mov     [esi+10h], eax
0x6B37BB: jnz     short loc_6B37C1
0x6B37BD: xor     eax, eax
0x6B37BF: jmp     short loc_6B37C6
0x6B37C1: mov     eax, 1
0x6B37C6: mov     ecx, [esi+4]
0x6B37C9: mov     [ecx], eax
0x6B37CB: mov     edx, [esi+10h]
0x6B37CE: mov     eax, [esi+8]
0x6B37D1: movzx   eax, byte ptr [edx+eax]
0x6B37D5: shr     eax, 4
0x6B37D8: add     eax, 0FFFFFFFFh; switch 5 cases
0x6B37DB: cmp     eax, 4
0x6B37DE: ja      short def_6B37E0
0x6B37E0: jmp     ds:jpt_6B37E0[eax*4]; switch jump
0x6B37E7: mov     ecx, [esi+4]; jumptable 006B37E0 case 5
0x6B37EA: mov     byte ptr [ecx+4], 40h ; '@'
0x6B37EE: jmp     short loc_6B3812
0x6B37F0: mov     edx, [esi+4]; jumptable 006B37E0 case 4
0x6B37F3: mov     byte ptr [edx+4], 38h ; '8'
0x6B37F7: jmp     short loc_6B3812
0x6B37F9: mov     eax, [esi+4]; jumptable 006B37E0 case 3
0x6B37FC: mov     byte ptr [eax+4], 30h ; '0'
0x6B3800: jmp     short loc_6B3812
0x6B3802: mov     ecx, [esi+4]; jumptable 006B37E0 case 2
0x6B3805: mov     byte ptr [ecx+4], 28h ; '('
0x6B3809: jmp     short loc_6B3812
0x6B380B: mov     edx, [esi+4]; jumptable 006B37E0 case 1
0x6B380E: mov     byte ptr [edx+4], 20h ; ' '
0x6B3812: mov     eax, [esi+10h]
0x6B3815: mov     ecx, [esi+8]
0x6B3818: movzx   eax, byte ptr [eax+ecx]
0x6B381C: shr     eax, 2
0x6B381F: and     eax, 3
0x6B3822: sub     eax, 0
0x6B3825: jz      short loc_6B384D
0x6B3827: sub     eax, 1
0x6B382A: jz      short loc_6B3841
0x6B382C: sub     eax, 1
0x6B382F: jnz     def_6B37E0
0x6B3835: mov     edx, [esi+4]
0x6B3838: mov     dword ptr [edx+8], 7D00h
0x6B383F: jmp     short loc_6B3857
0x6B3841: mov     eax, [esi+4]
0x6B3844: mov     dword ptr [eax+8], 0BB80h
0x6B384B: jmp     short loc_6B3857
0x6B384D: mov     ecx, [esi+4]
0x6B3850: mov     dword ptr [ecx+8], 0AC44h
0x6B3857: mov     eax, [esi+10h]
0x6B385A: mov     edx, [esi+8]
0x6B385D: test    byte ptr [eax+edx], 2
0x6B3861: lea     eax, [eax+1]
0x6B3864: push    edi
0x6B3865: mov     [esi+10h], eax
0x6B3868: jz      short loc_6B3871
0x6B386A: mov     edi, 1
0x6B386F: jmp     short loc_6B3873
0x6B3871: xor     edi, edi
0x6B3873: mov     ecx, [esi+4]
0x6B3876: movzx   eax, byte ptr [ecx+4]
0x6B387A: imul    eax, 23280h
0x6B3880: xor     edx, edx
0x6B3882: div     dword ptr [ecx+8]
0x6B3885: add     eax, edi
0x6B3887: mov     [ecx+0Ch], eax
0x6B388A: mov     eax, [esi+4]
0x6B388D: mov     ecx, [eax+0Ch]
0x6B3890: sub     ecx, 15h
0x6B3893: mov     [eax+10h], ecx
0x6B3896: mov     ecx, [esi+10h]
0x6B3899: mov     edx, [esi+8]
0x6B389C: mov     al, [ecx+edx]
0x6B389F: add     ecx, 1
0x6B38A2: and     al, 0C0h
0x6B38A4: cmp     al, 0C0h ; 'À'
0x6B38A6: mov     [esi+10h], ecx
0x6B38A9: jnz     loc_6B3ABA
0x6B38AF: push    9
0x6B38B1: mov     ecx, esi
0x6B38B3: call    sub_6B3240
0x6B38B8: mov     ecx, [esi+4]
0x6B38BB: mov     [ecx+14h], eax
0x6B38BE: push    5
0x6B38C0: mov     ecx, esi
0x6B38C2: call    sub_6B3240
0x6B38C7: mov     edx, [esi+4]
0x6B38CA: push    1
0x6B38CC: mov     ecx, esi
0x6B38CE: mov     [edx+18h], eax
0x6B38D1: call    sub_6B3240
0x6B38D6: mov     ecx, [esi+4]
0x6B38D9: mov     [ecx+1Ch], eax
0x6B38DC: push    1
0x6B38DE: mov     ecx, esi
0x6B38E0: call    sub_6B3240
0x6B38E5: mov     edx, [esi+4]
0x6B38E8: push    1
0x6B38EA: mov     ecx, esi
0x6B38EC: mov     [edx+20h], eax
0x6B38EF: call    sub_6B3240
0x6B38F4: mov     ecx, [esi+4]
0x6B38F7: mov     [ecx+24h], eax
0x6B38FA: push    1
0x6B38FC: mov     ecx, esi
0x6B38FE: call    sub_6B3240
0x6B3903: mov     edx, [esi+4]
0x6B3906: mov     [edx+28h], eax
0x6B3909: xor     edi, edi
0x6B390B: jmp     short loc_6B3910
0x6B3910: push    0Ch
0x6B3912: mov     ecx, esi
0x6B3914: call    sub_6B3240
0x6B3919: mov     ecx, [esi+4]
0x6B391C: mov     [edi+ecx+2Ch], eax
0x6B3920: push    9
0x6B3922: mov     ecx, esi
0x6B3924: call    sub_6B3240
0x6B3929: mov     edx, [esi+4]
0x6B392C: push    8
0x6B392E: mov     ecx, esi
0x6B3930: mov     [edi+edx+30h], eax
0x6B3934: call    sub_6B3240
0x6B3939: mov     ecx, [esi+4]
0x6B393C: mov     [edi+ecx+34h], eax
0x6B3940: push    4
0x6B3942: mov     ecx, esi
0x6B3944: call    sub_6B3240
0x6B3949: mov     edx, [esi+4]
0x6B394C: push    1
0x6B394E: mov     ecx, esi
0x6B3950: mov     [edi+edx+38h], eax
0x6B3954: call    sub_6B3240
0x6B3959: mov     ecx, [esi+4]
0x6B395C: mov     [edi+ecx+3Ch], eax
0x6B3960: mov     edx, [esi+4]
0x6B3963: cmp     dword ptr [edi+edx+3Ch], 0
0x6B3968: mov     ecx, esi
0x6B396A: jz      loc_6B3A1D
0x6B3970: push    2
0x6B3972: call    sub_6B3240
0x6B3977: mov     ecx, [esi+4]
0x6B397A: mov     [edi+ecx+40h], eax
0x6B397E: push    1
0x6B3980: mov     ecx, esi
0x6B3982: call    sub_6B3240
0x6B3987: mov     edx, [esi+4]
0x6B398A: push    5
0x6B398C: mov     ecx, esi
0x6B398E: mov     [edi+edx+44h], eax
0x6B3992: call    sub_6B3240
0x6B3997: mov     ecx, [esi+4]
0x6B399A: mov     [edi+ecx+48h], eax
0x6B399E: push    5
0x6B39A0: mov     ecx, esi
0x6B39A2: call    sub_6B3240
0x6B39A7: mov     edx, [esi+4]
0x6B39AA: push    3
0x6B39AC: mov     ecx, esi
0x6B39AE: mov     [edi+edx+4Ch], eax
0x6B39B2: call    sub_6B3240
0x6B39B7: mov     ecx, [esi+4]
0x6B39BA: mov     [edi+ecx+54h], eax
0x6B39BE: push    3
0x6B39C0: mov     ecx, esi
0x6B39C2: call    sub_6B3240
0x6B39C7: mov     edx, [esi+4]
0x6B39CA: push    3
0x6B39CC: mov     ecx, esi
0x6B39CE: mov     [edi+edx+58h], eax
0x6B39D2: call    sub_6B3240
0x6B39D7: mov     ecx, [esi+4]
0x6B39DA: mov     [edi+ecx+5Ch], eax
0x6B39DE: mov     edx, [esi+4]
0x6B39E1: mov     ecx, [edi+edx+40h]
0x6B39E5: test    ecx, ecx
0x6B39E7: lea     eax, [edi+edx]
0x6B39EA: jz      loc_6B3ABA
0x6B39F0: cmp     ecx, 2
0x6B39F3: jnz     short loc_6B3A04
0x6B39F5: cmp     dword ptr [eax+44h], 0
0x6B39F9: jnz     short loc_6B3A04
0x6B39FB: mov     dword ptr [eax+60h], 8
0x6B3A02: jmp     short loc_6B3A0B
0x6B3A04: mov     dword ptr [eax+60h], 7
0x6B3A0B: mov     eax, [esi+4]
0x6B3A0E: add     eax, edi
0x6B3A10: mov     ecx, 14h
0x6B3A15: sub     ecx, [eax+60h]
0x6B3A18: mov     [eax+64h], ecx
0x6B3A1B: jmp     short loc_6B3A76
0x6B3A1D: push    5
0x6B3A1F: call    sub_6B3240
0x6B3A24: mov     edx, [esi+4]
0x6B3A27: push    5
0x6B3A29: mov     ecx, esi
0x6B3A2B: mov     [edi+edx+48h], eax
0x6B3A2F: call    sub_6B3240
0x6B3A34: mov     ecx, [esi+4]
0x6B3A37: mov     [edi+ecx+4Ch], eax
0x6B3A3B: push    5
0x6B3A3D: mov     ecx, esi
0x6B3A3F: call    sub_6B3240
0x6B3A44: mov     edx, [esi+4]
0x6B3A47: push    4
0x6B3A49: mov     ecx, esi
0x6B3A4B: mov     [edi+edx+50h], eax
0x6B3A4F: call    sub_6B3240
0x6B3A54: mov     ecx, [esi+4]
0x6B3A57: mov     [edi+ecx+60h], eax
0x6B3A5B: push    3
0x6B3A5D: mov     ecx, esi
0x6B3A5F: call    sub_6B3240
0x6B3A64: mov     edx, [esi+4]
0x6B3A67: mov     [edi+edx+64h], eax
0x6B3A6B: mov     eax, [esi+4]
0x6B3A6E: mov     dword ptr [edi+eax+40h], 0
0x6B3A76: push    1
0x6B3A78: mov     ecx, esi
0x6B3A7A: call    sub_6B3240
0x6B3A7F: mov     ecx, [esi+4]
0x6B3A82: mov     [edi+ecx+68h], eax
0x6B3A86: push    1
0x6B3A88: mov     ecx, esi
0x6B3A8A: call    sub_6B3240
0x6B3A8F: mov     edx, [esi+4]
0x6B3A92: push    1
0x6B3A94: mov     ecx, esi
0x6B3A96: mov     [edi+edx+6Ch], eax
0x6B3A9A: call    sub_6B3240
0x6B3A9F: mov     ecx, [esi+4]
0x6B3AA2: mov     [edi+ecx+70h], eax
0x6B3AA6: add     edi, 48h ; 'H'
0x6B3AA9: cmp     edi, 90h
0x6B3AAF: jl      loc_6B3910
0x6B3AB5: pop     edi
0x6B3AB6: mov     al, 1
0x6B3AB8: pop     esi
0x6B3AB9: retn
0x6B3ABA: pop     edi
0x6B3ABB: xor     al, al
0x6B3ABD: pop     esi
0x6B3ABE: retn
