0x612BD0: push    esi
0x612BD1: push    edi
0x612BD2: mov     edi, [esp+8+arg_0]
0x612BD6: cmp     edi, 0FFh
0x612BDC: mov     esi, ecx
0x612BDE: jz      short loc_612C26
0x612BE0: cmp     dword ptr [esi+74h], 0
0x612BE4: jz      short loc_612C26
0x612BE6: cmp     [esp+8+arg_4], 0
0x612BEB: jnz     short loc_612C09
0x612BED: mov     ecx, [esi+3Ch]
0x612BF0: fldz
0x612BF2: mov     eax, [ecx]
0x612BF4: mov     edx, [eax+164h]
0x612BFA: push    ecx
0x612BFB: fstp    [esp+0Ch+var_C]; float
0x612BFE: push    3; int
0x612C00: call    edx
0x612C02: mov     ecx, eax
0x612C04: call    sub_470FC0
0x612C09: mov     ecx, [esi+3Ch]
0x612C0C: push    edi
0x612C0D: call    sub_5F48D0
0x612C12: test    al, al
0x612C14: jz      short loc_612C26
0x612C16: mov     eax, [esi+74h]
0x612C19: mov     [esi+78h], eax
0x612C1C: mov     dword ptr [esi+74h], 0
0x612C23: mov     [esi+50h], edi
0x612C26: pop     edi
0x612C27: pop     esi
0x612C28: retn    8
