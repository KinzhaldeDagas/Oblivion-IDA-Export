0x6922B0: push    esi
0x6922B1: push    edi
0x6922B2: mov     edi, ecx
0x6922B4: mov     ecx, [esp+8+arg_0]; this
0x6922B8: test    ecx, ecx
0x6922BA: jz      short loc_6922D2
0x6922BC: call    MagicTarget_GetParentActor
0x6922C1: mov     esi, eax
0x6922C3: test    esi, esi
0x6922C5: jz      short loc_6922D2
0x6922C7: mov     ecx, esi; this
0x6922C9: call    Actor_IsCreature
0x6922CE: test    al, al
0x6922D0: jnz     short loc_6922D9
0x6922D2: pop     edi
0x6922D3: xor     al, al
0x6922D5: pop     esi
0x6922D6: retn    4
0x6922D9: fld     dword ptr [edi+18h]
0x6922DC: push    ecx
0x6922DD: fstp    [esp+0Ch+arg_0]
0x6922E1: mov     ecx, esi
0x6922E3: fld     [esp+0Ch+arg_0]
0x6922E7: fstp    [esp+0Ch+var_C]; float
0x6922EA: call    Actor_GetLevel
0x6922EF: movzx   eax, ax
0x6922F2: push    eax; int
0x6922F3: call    Calc_MagnitudeAffectsLevel
0x6922F8: add     esp, 8
0x6922FB: pop     edi
0x6922FC: pop     esi
0x6922FD: retn    4
