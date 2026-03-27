0x8B68B0: push    ecx
0x8B68B1: push    esi
0x8B68B2: mov     esi, ecx
0x8B68B4: mov     eax, [esi]
0x8B68B6: mov     edx, [eax+74h]
0x8B68B9: lea     ecx, [esp+8+var_1]
0x8B68BD: push    ecx
0x8B68BE: mov     ecx, esi
0x8B68C0: call    edx
0x8B68C2: mov     edx, [esp+8+arg_4]
0x8B68C6: mov     ecx, eax
0x8B68C8: test    ecx, ecx
0x8B68CA: jz      short loc_8B693E
0x8B68CC: fld     dword ptr [edx+10h]
0x8B68CF: fstp    [esp+8+arg_4]
0x8B68D3: fld1
0x8B68D5: fld     [esp+8+arg_4]
0x8B68D9: fucom   st(1)
0x8B68DB: fnstsw  ax
0x8B68DD: fstp    st(1)
0x8B68DF: test    ah, 44h
0x8B68E2: jnp     short loc_8B693C
0x8B68E4: fld     dword ptr [ecx+10h]
0x8B68E7: mov     eax, [esp+8+arg_0]
0x8B68EB: fmul    st, st(1)
0x8B68ED: push    edx
0x8B68EE: push    eax
0x8B68EF: fstp    dword ptr [ecx+10h]
0x8B68F2: fld     dword ptr [ecx+14h]
0x8B68F5: fmul    st, st(1)
0x8B68F7: fstp    dword ptr [ecx+14h]
0x8B68FA: fld     dword ptr [ecx+18h]
0x8B68FD: fmul    st, st(1)
0x8B68FF: fstp    dword ptr [ecx+18h]
0x8B6902: fld     dword ptr [ecx+1Ch]
0x8B6905: fmul    st, st(1)
0x8B6907: fstp    dword ptr [ecx+1Ch]
0x8B690A: fld     st
0x8B690C: fmul    dword ptr [ecx+20h]
0x8B690F: fstp    dword ptr [ecx+20h]
0x8B6912: fld     dword ptr [ecx+24h]
0x8B6915: fmul    st, st(1)
0x8B6917: fstp    dword ptr [ecx+24h]
0x8B691A: fld     dword ptr [ecx+28h]
0x8B691D: fmul    st, st(1)
0x8B691F: fstp    dword ptr [ecx+28h]
0x8B6922: fld     dword ptr [ecx+2Ch]
0x8B6925: fmul    st, st(1)
0x8B6927: fstp    dword ptr [ecx+2Ch]
0x8B692A: fmul    dword ptr [ecx+4]
0x8B692D: fstp    dword ptr [ecx+4]
0x8B6930: mov     ecx, esi
0x8B6932: call    sub_8A2670
0x8B6937: pop     esi
0x8B6938: pop     ecx
0x8B6939: retn    8
0x8B693C: fstp    st
0x8B693E: mov     eax, [esp+8+arg_0]
0x8B6942: push    edx
0x8B6943: push    eax
0x8B6944: mov     ecx, esi
0x8B6946: call    sub_8A2670
0x8B694B: pop     esi
0x8B694C: pop     ecx
0x8B694D: retn    8
