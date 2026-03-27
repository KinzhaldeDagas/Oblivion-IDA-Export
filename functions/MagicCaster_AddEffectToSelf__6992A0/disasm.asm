0x6992A0: push    ebx
0x6992A1: push    esi
0x6992A2: push    edi
0x6992A3: push    0; int
0x6992A5: push    offset ??_R0?AVMagicTarget@@@8; struct TypeDescriptor *
0x6992AA: push    offset ??_R0?AVMagicCaster@@@8; struct _s_RTTICompleteObjectLocator *
0x6992AF: mov     esi, ecx
0x6992B1: push    0; int
0x6992B3: push    esi; void *
0x6992B4: xor     bl, bl
0x6992B6: call    OblivionDynamicCast
0x6992BB: mov     edi, eax
0x6992BD: add     esp, 14h
0x6992C0: test    edi, edi
0x6992C2: jz      short MagicCaster_AddEffectToSelf___Return_0
0x6992C4: mov     eax, [esi]
0x6992C6: mov     edx, [eax+30h]
0x6992C9: mov     ecx, esi
0x6992CB: call    edx
0x6992CD: mov     ecx, [esp+0Ch+arg_0]
0x6992D1: mov     edx, [edi]
0x6992D3: mov     edx, [edx]
0x6992D5: push    0
0x6992D7: push    ecx
0x6992D8: push    eax
0x6992D9: push    esi
0x6992DA: mov     ecx, edi
0x6992DC: call    edx
0x6992DE: pop     edi
0x6992DF: pop     esi
0x6992E0: pop     ebx
0x6992E1: retn    4
