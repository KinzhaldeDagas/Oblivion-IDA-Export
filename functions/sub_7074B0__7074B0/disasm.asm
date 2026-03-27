0x7074B0: push    ecx
0x7074B1: push    esi
0x7074B2: mov     esi, ecx
0x7074B4: mov     ecx, [esi+1Ch]
0x7074B7: test    ecx, ecx
0x7074B9: jz      short loc_707517
0x7074BB: mov     eax, [ecx]
0x7074BD: mov     eax, [eax+88h]
0x7074C3: push    edi
0x7074C4: push    esi
0x7074C5: lea     edx, [esp+10h+var_4]
0x7074C9: push    edx
0x7074CA: call    eax
0x7074CC: mov     edi, [esp+0Ch+var_4]
0x7074D0: test    edi, edi
0x7074D2: jz      short loc_7074F0
0x7074D4: lea     ecx, [edi+4]
0x7074D7: push    ecx; lpAddend
0x7074D8: call    dword ptr ds:0A2807Ch
0x7074DE: test    eax, eax
0x7074E0: jnz     short loc_70750A
0x7074E2: test    edi, edi
0x7074E4: jz      short loc_7074FD
0x7074E6: mov     edx, [edi]
0x7074E8: mov     eax, [edx]
0x7074EA: push    1
0x7074EC: mov     ecx, edi
0x7074EE: call    eax
0x7074F0: mov     ecx, [esp+0Ch+arg_0]
0x7074F4: pop     edi
0x7074F5: mov     [esi+1Ch], ecx
0x7074F8: pop     esi
0x7074F9: pop     ecx
0x7074FA: retn    4
0x7074FD: mov     edx, [esp+0Ch+arg_0]
0x707501: pop     edi
0x707502: mov     [esi+1Ch], edx
0x707505: pop     esi
0x707506: pop     ecx
0x707507: retn    4
0x70750A: mov     eax, [esp+0Ch+arg_0]
0x70750E: pop     edi
0x70750F: mov     [esi+1Ch], eax
0x707512: pop     esi
0x707513: pop     ecx
0x707514: retn    4
0x707517: mov     edx, [esp+8+arg_0]
0x70751B: mov     [esi+1Ch], edx
0x70751E: pop     esi
0x70751F: pop     ecx
0x707520: retn    4
