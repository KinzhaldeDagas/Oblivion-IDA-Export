0x4F8480: push    esi
0x4F8481: push    edi
0x4F8482: mov     edi, [esp+8+arg_0]
0x4F8486: xor     esi, esi
0x4F8488: test    edi, edi
0x4F848A: jz      short loc_4F849E
0x4F848C: mov     eax, [edi]
0x4F848E: mov     edx, [eax+190h]
0x4F8494: mov     ecx, edi
0x4F8496: call    edx
0x4F8498: test    al, al
0x4F849A: jz      short loc_4F849E
0x4F849C: mov     esi, edi
0x4F849E: test    esi, esi
0x4F84A0: fldz
0x4F84A2: mov     edi, [esp+8+arg_C]
0x4F84A6: fstp    qword ptr [edi]
0x4F84A8: jz      short loc_4F84EA
0x4F84AA: mov     ecx, [esi+58h]
0x4F84AD: mov     eax, [ecx]
0x4F84AF: mov     edx, [eax+0F0h]
0x4F84B5: push    1
0x4F84B7: call    edx
0x4F84B9: test    eax, eax
0x4F84BB: jz      short loc_4F84C1
0x4F84BD: fld1
0x4F84BF: fstp    qword ptr [edi]
0x4F84C1: cmp     byte ptr ds:0B361ACh, 0
0x4F84C8: jz      short loc_4F84EA
0x4F84CA: fldz
0x4F84CC: fcomp   qword ptr [edi]
0x4F84CE: fnstsw  ax
0x4F84D0: test    ah, 44h
0x4F84D3: jnp     short loc_4F84EA
0x4F84D5: mov     ecx, esi; this
0x4F84D7: call    TESObjectREFR_GetName
0x4F84DC: push    eax
0x4F84DD: push    offset aSWearingATorch; "%s  wearing a torch "
0x4F84E2: call    Interface_ConsolePrint
0x4F84E7: add     esp, 8
0x4F84EA: pop     edi
0x4F84EB: mov     al, 1
0x4F84ED: pop     esi
0x4F84EE: retn
