0x7D6900: push    esi
0x7D6901: mov     esi, [esp+4+arg_0]
0x7D6905: test    esi, esi
0x7D6907: push    edi
0x7D6908: mov     edi, ecx
0x7D690A: jz      short loc_7D6935
0x7D690C: mov     eax, [esi]
0x7D690E: mov     edx, [eax+8]
0x7D6911: mov     ecx, esi
0x7D6913: call    edx
0x7D6915: mov     ecx, eax
0x7D6917: test    ecx, ecx
0x7D6919: jz      short loc_7D6935
0x7D691B: test    byte ptr [esi+18h], 1
0x7D691F: jnz     short loc_7D6935
0x7D6921: fldz
0x7D6923: fcomp   dword ptr [ecx+2Ch]
0x7D6926: fnstsw  ax
0x7D6928: test    ah, 44h
0x7D692B: jnp     short loc_7D6935
0x7D692D: push    ecx
0x7D692E: mov     ecx, edi
0x7D6930: call    ShadowSceneLight_UpdateLightingProperty
0x7D6935: pop     edi
0x7D6936: pop     esi
0x7D6937: retn    4
