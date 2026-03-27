0x4C46B0: sub     esp, 8
0x4C46B3: push    esi
0x4C46B4: mov     esi, ecx
0x4C46B6: mov     ecx, [esi+24h]
0x4C46B9: test    ecx, ecx
0x4C46BB: jnz     short loc_4C46D9
0x4C46BD: mov     eax, [esp+0Ch+arg_0]
0x4C46C1: fld     dword ptr ds:0A32048h
0x4C46C7: fstp    dword ptr [eax]
0x4C46C9: pop     esi
0x4C46CA: fld     dword ptr ds:0A3B888h
0x4C46D0: fstp    dword ptr [eax+4]
0x4C46D3: add     esp, 8
0x4C46D6: retn    4
0x4C46D9: fld     dword ptr [ecx+18h]
0x4C46DC: fcomp   qword ptr ds:0A3A5B0h
0x4C46E2: fnstsw  ax
0x4C46E4: test    ah, 44h
0x4C46E7: jnp     short loc_4C46F9
0x4C46E9: fld     dword ptr [ecx+1Ch]
0x4C46EC: fcomp   qword ptr ds:0A40398h
0x4C46F2: fnstsw  ax
0x4C46F4: test    ah, 44h
0x4C46F7: jp      short loc_4C476A
0x4C46F9: test    byte ptr [esi+1Ch], 1
0x4C46FD: jz      short loc_4C474E
0x4C46FF: push    edi
0x4C4700: xor     edi, edi
0x4C4702: push    edi
0x4C4703: lea     eax, [esp+14h+var_8]
0x4C4707: push    eax
0x4C4708: mov     ecx, esi
0x4C470A: call    sub_4C4630
0x4C470F: fld     [esp+10h+var_8]
0x4C4713: mov     ecx, [esi+24h]
0x4C4716: fld     dword ptr [ecx+18h]
0x4C4719: fcomp   st(1)
0x4C471B: fnstsw  ax
0x4C471D: test    ah, 41h
0x4C4720: jnz     short loc_4C4727
0x4C4722: fstp    dword ptr [ecx+18h]
0x4C4725: jmp     short loc_4C4729
0x4C4727: fstp    st
0x4C4729: mov     ecx, [esi+24h]
0x4C472C: fld     [esp+10h+var_4]
0x4C4730: fld     dword ptr [ecx+1Ch]
0x4C4733: fcomp   st(1)
0x4C4735: fnstsw  ax
0x4C4737: test    ah, 5
0x4C473A: jp      short loc_4C4741
0x4C473C: fstp    dword ptr [ecx+1Ch]
0x4C473F: jmp     short loc_4C4743
0x4C4741: fstp    st
0x4C4743: add     edi, 1
0x4C4746: cmp     edi, 4
0x4C4749: jl      short loc_4C4702
0x4C474B: pop     edi
0x4C474C: jmp     short loc_4C476A
0x4C474E: fld     dword ptr ds:0A37448h
0x4C4754: fst     [esp+0Ch+var_8]
0x4C4758: mov     edx, [esp+0Ch+var_8]
0x4C475C: fstp    [esp+0Ch+var_4]
0x4C4760: mov     eax, [esp+0Ch+var_4]
0x4C4764: mov     [ecx+18h], edx
0x4C4767: mov     [ecx+1Ch], eax
0x4C476A: mov     esi, [esi+24h]
0x4C476D: mov     ecx, [esi+18h]
0x4C4770: mov     eax, [esp+0Ch+arg_0]
0x4C4774: mov     edx, [esi+1Ch]
0x4C4777: mov     [eax], ecx
0x4C4779: mov     [eax+4], edx
0x4C477C: pop     esi
0x4C477D: add     esp, 8
0x4C4780: retn    4
