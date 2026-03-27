0x4D7DD0: push    ecx
0x4D7DD1: push    ebx
0x4D7DD2: push    esi
0x4D7DD3: mov     esi, ecx
0x4D7DD5: mov     eax, [esi]
0x4D7DD7: mov     edx, [eax+190h]
0x4D7DDD: xor     bl, bl
0x4D7DDF: call    edx
0x4D7DE1: test    al, al
0x4D7DE3: jz      short TESObjectREFR_IsDead___Return_0
0x4D7DE5: cmp     dword ptr [esi+0Ch], 7
0x4D7DE9: jz      short TESObjectREFR_IsDead___Return_0
0x4D7DEB: mov     eax, [esi]
0x4D7DED: mov     edx, [eax+170h]
0x4D7DF3: mov     ecx, esi
0x4D7DF5: call    edx
0x4D7DF7: push    eax
0x4D7DF8: call    TESHealthForm_GetHealthForForm
0x4D7DFD: add     esp, 4
0x4D7E00: test    eax, eax
0x4D7E02: mov     [esp+0Ch+var_4], eax
0x4D7E06: fild    [esp+0Ch+var_4]
0x4D7E0A: jge     short loc_4D7E12
0x4D7E0C: fadd    dword ptr ds:0A2FC78h
0x4D7E12: fcomp   dword ptr ds:0A2FAA8h
0x4D7E18: fnstsw  ax
0x4D7E1A: mov     al, 1
0x4D7E1C: test    ah, 41h
0x4D7E1F: jnp     short TESObjectREFR_IsDead___Done
0x4D7E21: mov     al, bl
0x4D7E23: pop     esi
0x4D7E24: pop     ebx
0x4D7E25: pop     ecx
0x4D7E26: retn    4
