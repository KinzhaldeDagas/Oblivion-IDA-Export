0x6A8BD0: push    edi
0x6A8BD1: mov     edi, ecx
0x6A8BD3: mov     ecx, [edi+20h]; this
0x6A8BD6: test    ecx, ecx
0x6A8BD8: jz      loc_6A8C60
0x6A8BDE: push    esi
0x6A8BDF: call    MagicTarget_GetParentActor
0x6A8BE4: mov     esi, eax
0x6A8BE6: test    esi, esi
0x6A8BE8: jz      short loc_6A8C5F
0x6A8BEA: cmp     esi, ds:0B333C4h
0x6A8BF0: jnz     short loc_6A8C09
0x6A8BF2: fld     dword ptr [edi+18h]
0x6A8BF5: mov     eax, [esi]
0x6A8BF7: mov     edx, [eax+2ACh]
0x6A8BFD: fchs
0x6A8BFF: push    ecx
0x6A8C00: fstp    [esp+0Ch+var_C]
0x6A8C03: push    45h ; 'E'
0x6A8C05: mov     ecx, esi
0x6A8C07: call    edx
0x6A8C09: mov     ecx, esi; this
0x6A8C0B: call    TESObjectREFR_GetParentCell
0x6A8C10: test    eax, eax
0x6A8C12: jz      short loc_6A8C5F
0x6A8C14: mov     al, [eax+26h]
0x6A8C17: cmp     al, 6
0x6A8C19: jz      short loc_6A8C27
0x6A8C1B: cmp     al, 3
0x6A8C1D: jz      short loc_6A8C27
0x6A8C1F: cmp     al, 5
0x6A8C21: jz      short loc_6A8C27
0x6A8C23: cmp     al, 2
0x6A8C25: jnz     short loc_6A8C5F
0x6A8C27: fldz
0x6A8C29: push    ecx
0x6A8C2A: mov     ecx, esi
0x6A8C2C: fstp    [esp+0Ch+var_C]; float
0x6A8C2F: call    sub_60E2E0
0x6A8C34: mov     byte ptr ds:0B33D80h, 1
0x6A8C3B: mov     ecx, [esi+58h]
0x6A8C3E: mov     eax, [ecx]
0x6A8C40: mov     edx, [eax+31Ch]
0x6A8C46: push    1
0x6A8C48: call    edx
0x6A8C4A: mov     ecx, [esi+58h]
0x6A8C4D: mov     eax, [ecx]
0x6A8C4F: mov     edx, [eax+318h]
0x6A8C55: push    esi
0x6A8C56: call    edx
0x6A8C58: mov     byte ptr ds:0B33D80h, 0
0x6A8C5F: pop     esi
0x6A8C60: pop     edi
0x6A8C61: retn
