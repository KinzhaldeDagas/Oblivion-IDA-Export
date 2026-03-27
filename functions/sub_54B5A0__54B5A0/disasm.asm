0x54B5A0: sub     esp, 0ECh
0x54B5A6: push    esi
0x54B5A7: mov     esi, ecx
0x54B5A9: cmp     byte ptr [esi+1DAh], 0
0x54B5B0: push    edi
0x54B5B1: jz      short loc_54B5BD
0x54B5B3: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x54B5B8: jmp     loc_54B8A3
0x54B5BD: fld     dword ptr [esi+1B8h]
0x54B5C3: fsub    dword ptr [esi+184h]
0x54B5C9: fstp    [esp+0F4h+var_E8]
0x54B5CD: fld     dword ptr [esi+1BCh]
0x54B5D3: fsub    dword ptr [esi+188h]
0x54B5D9: fstp    [esp+0F4h+var_EC]
0x54B5DD: fld     [esp+0F4h+var_E8]
0x54B5E1: fld     qword ptr ds:0A3D5B8h
0x54B5E7: fcom    st(1)
0x54B5E9: fnstsw  ax
0x54B5EB: fld     qword ptr ds:0A3D5B0h
0x54B5F1: test    ah, 5
0x54B5F4: jp      short loc_54B604
0x54B5F6: fsub    st(2), st
0x54B5F8: fxch    st(2)
0x54B5FA: fstp    [esp+0F4h+var_E8]
0x54B5FE: fld     [esp+0F4h+var_E8]
0x54B602: fxch    st(2)
0x54B604: fld     qword ptr ds:0A491E0h
0x54B60A: fcom    st(3)
0x54B60C: fnstsw  ax
0x54B60E: test    ah, 41h
0x54B611: jnz     short loc_54B621
0x54B613: fxch    st(3)
0x54B615: fadd    st, st(1)
0x54B617: fstp    [esp+0F4h+var_E8]
0x54B61B: fld     [esp+0F4h+var_E8]
0x54B61F: fxch    st(3)
0x54B621: fld     [esp+0F4h+var_EC]
0x54B625: fcom    st(3)
0x54B627: fnstsw  ax
0x54B629: fstp    st(3)
0x54B62B: test    ah, 41h
0x54B62E: jnz     short loc_54B63E
0x54B630: fxch    st(2)
0x54B632: fsub    st, st(1)
0x54B634: fstp    [esp+0F4h+var_EC]
0x54B638: fld     [esp+0F4h+var_EC]
0x54B63C: fxch    st(2)
0x54B63E: fcomp   st(2)
0x54B640: fnstsw  ax
0x54B642: test    ah, 41h
0x54B645: jnz     short loc_54B653
0x54B647: faddp   st(1), st
0x54B649: fstp    [esp+0F4h+var_EC]
0x54B64D: fld     [esp+0F4h+var_EC]
0x54B651: jmp     short loc_54B655
0x54B653: fstp    st
0x54B655: fld     dword ptr [esi+1A4h]
0x54B65B: fld     [esp+0F4h+arg_4]
0x54B662: fld     st
0x54B664: fmulp   st(2), st
0x54B666: fxch    st(1)
0x54B668: fstp    [esp+0F4h+var_EC]
0x54B66C: fmul    dword ptr [esi+1A8h]
0x54B672: fstp    [esp+0F4h+var_E8]
0x54B676: fld     [esp+0F4h+var_EC]
0x54B67A: fld     st
0x54B67C: fchs
0x54B67E: fstp    [esp+0F4h+var_EC]
0x54B682: fcom    st(2)
0x54B684: fnstsw  ax
0x54B686: test    ah, 5
0x54B689: jp      short loc_54B68F
0x54B68B: fstp    st(2)
0x54B68D: jmp     short loc_54B6A4
0x54B68F: fstp    st
0x54B691: fld     [esp+0F4h+var_EC]
0x54B695: fcom    st(2)
0x54B697: fnstsw  ax
0x54B699: test    ah, 41h
0x54B69C: jnz     short loc_54B6A2
0x54B69E: fstp    st(2)
0x54B6A0: jmp     short loc_54B6A4
0x54B6A2: fstp    st
0x54B6A4: fxch    st(1)
0x54B6A6: fstp    [esp+0F4h+var_EC]
0x54B6AA: fld     [esp+0F4h+var_E8]
0x54B6AE: fld     st
0x54B6B0: fchs
0x54B6B2: fstp    [esp+0F4h+var_E8]
0x54B6B6: fcom    st(1)
0x54B6B8: fnstsw  ax
0x54B6BA: test    ah, 5
0x54B6BD: jp      short loc_54B6C3
0x54B6BF: fstp    st(1)
0x54B6C1: jmp     short loc_54B6D8
0x54B6C3: fstp    st
0x54B6C5: fld     [esp+0F4h+var_E8]
0x54B6C9: fcom    st(1)
0x54B6CB: fnstsw  ax
0x54B6CD: test    ah, 41h
0x54B6D0: jnz     short loc_54B6D6
0x54B6D2: fstp    st(1)
0x54B6D4: jmp     short loc_54B6D8
0x54B6D6: fstp    st
0x54B6D8: fstp    [esp+0F4h+var_E8]
0x54B6DC: lea     eax, [esp+0F4h+var_E8]
0x54B6E0: fld     dword ptr [esi+184h]
0x54B6E6: push    eax
0x54B6E7: fadd    [esp+0F8h+var_EC]
0x54B6EB: lea     ecx, [esp+0F8h+var_EC]
0x54B6EF: push    ecx
0x54B6F0: fstp    dword ptr [esi+184h]
0x54B6F6: fld     dword ptr [esi+188h]
0x54B6FC: fadd    [esp+0FCh+var_E8]
0x54B700: fstp    dword ptr [esi+188h]
0x54B706: call    sub_54A450
0x54B70B: lea     edx, [esp+0FCh+var_E4]
0x54B70F: lea     eax, [esp+0FCh+var_E0]
0x54B713: push    edx
0x54B714: push    eax
0x54B715: call    sub_54A4B0
0x54B71A: fld     [esp+104h+var_EC]
0x54B71E: fld     qword ptr ds:0A31C70h
0x54B724: add     esp, 10h
0x54B727: fmul    st(1), st
0x54B729: fld     dword ptr [esi+17Ch]
0x54B72F: faddp   st(2), st
0x54B731: fxch    st(1)
0x54B733: fstp    [esp+0F4h+var_DC]
0x54B737: fmul    [esp+0F4h+var_E8]
0x54B73B: fadd    dword ptr [esi+17Ch]
0x54B741: fstp    [esp+0F4h+var_EC]
0x54B745: fld     dword ptr [esi+184h]
0x54B74B: fld     [esp+0F4h+var_EC]
0x54B74F: fcom    st(1)
0x54B751: fnstsw  ax
0x54B753: fstp    st(1)
0x54B755: test    ah, 5
0x54B758: jp      short loc_54B762
0x54B75A: fstp    dword ptr [esi+184h]
0x54B760: jmp     short loc_54B783
0x54B762: fstp    st
0x54B764: fld     dword ptr [esi+184h]
0x54B76A: fld     [esp+0F4h+var_DC]
0x54B76E: fcom    st(1)
0x54B770: fnstsw  ax
0x54B772: fstp    st(1)
0x54B774: test    ah, 41h
0x54B777: jnz     short loc_54B781
0x54B779: fstp    dword ptr [esi+184h]
0x54B77F: jmp     short loc_54B783
0x54B781: fstp    st
0x54B783: fld     [esp+0F4h+var_E0]
0x54B787: fld     qword ptr ds:0A2FAA0h
0x54B78D: fmul    st(1), st
0x54B78F: fld     dword ptr [esi+180h]
0x54B795: faddp   st(2), st
0x54B797: fxch    st(1)
0x54B799: fstp    [esp+0F4h+var_E0]
0x54B79D: fmul    [esp+0F4h+var_E4]
0x54B7A1: fadd    dword ptr [esi+180h]
0x54B7A7: fstp    [esp+0F4h+var_E4]
0x54B7AB: fld     dword ptr [esi+188h]
0x54B7B1: fld     [esp+0F4h+var_E4]
0x54B7B5: fcom    st(1)
0x54B7B7: fnstsw  ax
0x54B7B9: fstp    st(1)
0x54B7BB: test    ah, 5
0x54B7BE: jp      short loc_54B7C8
0x54B7C0: fstp    dword ptr [esi+188h]
0x54B7C6: jmp     short loc_54B7E1
0x54B7C8: fstp    st
0x54B7CA: fld     dword ptr [esi+188h]
0x54B7D0: fld     [esp+0F4h+var_E0]
0x54B7D4: fcom    st(1)
0x54B7D6: fnstsw  ax
0x54B7D8: fstp    st(1)
0x54B7DA: test    ah, 41h
0x54B7DD: jz      short loc_54B7C0
0x54B7DF: fstp    st
0x54B7E1: fld     dword ptr ds:0A641F8h
0x54B7E7: sub     esp, 0Ch
0x54B7EA: fstp    [esp+100h+var_F8]; float
0x54B7EE: lea     ecx, [esp+100h+var_D8]
0x54B7F2: fld     dword ptr ds:0A641F4h
0x54B7F8: fstp    [esp+100h+var_FC]; float
0x54B7FC: fld     dword ptr ds:0A641F0h
0x54B802: fstp    [esp+100h+var_100]; float
0x54B805: call    sub_711580
0x54B80A: fld     dword ptr [esi+188h]
0x54B810: sub     esp, 0Ch
0x54B813: fstp    [esp+100h+var_F8]; float
0x54B817: lea     ecx, [esp+100h+var_90]
0x54B81B: fldz
0x54B81D: fstp    [esp+100h+var_FC]; float
0x54B821: fld     dword ptr [esi+184h]
0x54B827: fstp    [esp+100h+var_100]; float
0x54B82A: call    sub_7117C0
0x54B82F: lea     ecx, [esp+0F4h+var_D8]
0x54B833: push    ecx
0x54B834: lea     edx, [esp+0F8h+var_48]
0x54B83B: push    edx
0x54B83C: lea     ecx, [esp+0FCh+var_90]
0x54B840: call    NiMAtrix33_Multiply
0x54B845: mov     edi, [esp+0F4h+arg_8]
0x54B84C: push    edi
0x54B84D: mov     ecx, esi
0x54B84F: call    sub_54B560
0x54B854: add     edi, 64h ; 'd'
0x54B857: push    edi
0x54B858: lea     ecx, [esp+0F8h+var_B4]
0x54B85C: push    ecx
0x54B85D: lea     edx, [esp+0FCh+var_24]
0x54B864: push    edx
0x54B865: lea     ecx, [eax+64h]
0x54B868: call    sub_7103C0
0x54B86D: mov     ecx, eax
0x54B86F: call    NiMAtrix33_Multiply
0x54B874: lea     eax, [esp+0F4h+var_48]
0x54B87B: push    eax
0x54B87C: lea     ecx, [esp+0F8h+var_6C]
0x54B883: push    ecx
0x54B884: lea     edx, [esp+0FCh+var_24]
0x54B88B: push    edx
0x54B88C: lea     ecx, [esp+100h+var_B4]
0x54B890: call    sub_7103C0
0x54B895: mov     ecx, eax
0x54B897: call    NiMAtrix33_Multiply
0x54B89C: lea     esi, [esp+0F4h+var_6C]
0x54B8A3: mov     eax, [esp+0F4h+arg_0]
0x54B8AA: mov     ecx, 9
0x54B8AF: mov     edi, eax
0x54B8B1: rep movsd
0x54B8B3: pop     edi
0x54B8B4: pop     esi
0x54B8B5: add     esp, 0ECh
0x54B8BB: retn    0Ch
