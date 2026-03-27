0x7E4700: push    ecx
0x7E4701: fld     [esp+4+arg_0]
0x7E4705: push    ebx
0x7E4706: push    ebp
0x7E4707: push    esi
0x7E4708: mov     esi, ecx
0x7E470A: fsub    dword ptr [esi+0F8h]
0x7E4710: push    edi
0x7E4711: fstp    [esp+14h+var_4]
0x7E4715: call    sub_7E2D60
0x7E471A: fld     [esp+14h+var_4]
0x7E471E: mov     ebx, eax
0x7E4720: fld     qword ptr ds:0A3A5B0h
0x7E4726: xor     ebp, ebp
0x7E4728: cmp     ebx, 4
0x7E472B: jl      loc_7E47B6
0x7E4731: lea     edi, [ebx-4]
0x7E4734: shr     edi, 2
0x7E4737: xor     ecx, ecx
0x7E4739: add     edi, 1
0x7E473C: lea     ebp, ds:0[edi*4]
0x7E4743: mov     eax, [esi+6Ch]
0x7E4746: fld     dword ptr [ecx+eax]
0x7E4749: lea     edx, [ecx+eax]
0x7E474C: fucomp  st(1)
0x7E474E: fnstsw  ax
0x7E4750: test    ah, 44h
0x7E4753: jnp     short loc_7E475D
0x7E4755: fld     st(1)
0x7E4757: fadd    dword ptr [edx+0Ch]
0x7E475A: fstp    dword ptr [edx+0Ch]
0x7E475D: mov     edx, [esi+6Ch]
0x7E4760: fld     dword ptr [edx+ecx+20h]
0x7E4764: add     edx, ecx
0x7E4766: fucomp  st(1)
0x7E4768: fnstsw  ax
0x7E476A: test    ah, 44h
0x7E476D: jnp     short loc_7E4777
0x7E476F: fld     st(1)
0x7E4771: fadd    dword ptr [edx+2Ch]
0x7E4774: fstp    dword ptr [edx+2Ch]
0x7E4777: mov     edx, [esi+6Ch]
0x7E477A: fld     dword ptr [ecx+edx+40h]
0x7E477E: fucomp  st(1)
0x7E4780: fnstsw  ax
0x7E4782: test    ah, 44h
0x7E4785: jnp     short loc_7E4791
0x7E4787: fld     st(1)
0x7E4789: fadd    dword ptr [ecx+edx+4Ch]
0x7E478D: fstp    dword ptr [ecx+edx+4Ch]
0x7E4791: mov     edx, [esi+6Ch]
0x7E4794: fld     dword ptr [ecx+edx+60h]
0x7E4798: fucomp  st(1)
0x7E479A: fnstsw  ax
0x7E479C: test    ah, 44h
0x7E479F: jnp     short loc_7E47AB
0x7E47A1: fld     st(1)
0x7E47A3: fadd    dword ptr [ecx+edx+6Ch]
0x7E47A7: fstp    dword ptr [ecx+edx+6Ch]
0x7E47AB: add     ecx, 80h ; '€'
0x7E47B1: sub     edi, 1
0x7E47B4: jnz     short loc_7E4743
0x7E47B6: cmp     ebp, ebx
0x7E47B8: jge     short loc_7E47E5
0x7E47BA: mov     ecx, ebp
0x7E47BC: shl     ecx, 5
0x7E47BF: sub     ebx, ebp
0x7E47C1: mov     edi, ebx
0x7E47C3: mov     eax, [esi+6Ch]
0x7E47C6: fld     dword ptr [ecx+eax]
0x7E47C9: lea     edx, [ecx+eax]
0x7E47CC: fucomp  st(1)
0x7E47CE: fnstsw  ax
0x7E47D0: test    ah, 44h
0x7E47D3: jnp     short loc_7E47DD
0x7E47D5: fld     dword ptr [edx+0Ch]
0x7E47D8: fadd    st, st(2)
0x7E47DA: fstp    dword ptr [edx+0Ch]
0x7E47DD: add     ecx, 20h ; ' '
0x7E47E0: sub     edi, 1
0x7E47E3: jnz     short loc_7E47C3
0x7E47E5: fstp    st(1)
0x7E47E7: pop     edi
0x7E47E8: fstp    st
0x7E47EA: fld     [esp+10h+arg_0]
0x7E47EE: fstp    dword ptr [esi+0F8h]
0x7E47F4: pop     esi
0x7E47F5: pop     ebp
0x7E47F6: pop     ebx
0x7E47F7: pop     ecx
0x7E47F8: retn    4
