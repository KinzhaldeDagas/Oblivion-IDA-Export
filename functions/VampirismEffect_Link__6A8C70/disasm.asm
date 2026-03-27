0x6A8C70: push    ebx
0x6A8C71: push    esi
0x6A8C72: push    edi
0x6A8C73: mov     edi, [esp+0Ch+arg_0]
0x6A8C77: push    edi
0x6A8C78: mov     ebx, ecx
0x6A8C7A: call    ActiveEffect_Base_Link
0x6A8C7F: push    0; int
0x6A8C81: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x6A8C86: push    offset ??_R0?AVActor@@@8; struct _s_RTTICompleteObjectLocator *
0x6A8C8B: push    0; int
0x6A8C8D: push    edi; void *
0x6A8C8E: call    OblivionDynamicCast
0x6A8C93: mov     esi, eax
0x6A8C95: add     esp, 14h
0x6A8C98: test    esi, esi
0x6A8C9A: jz      short VampirismEffect_Link___Done
0x6A8C9C: mov     ecx, [esi+58h]
0x6A8C9F: test    ecx, ecx
0x6A8CA1: jz      short VampirismEffect_Link___Done
0x6A8CA3: mov     eax, [ecx]
0x6A8CA5: mov     edx, [eax+320h]
0x6A8CAB: call    edx
0x6A8CAD: test    al, al
0x6A8CAF: jz      short VampirismEffect_Link___Done
0x6A8CB1: mov     eax, [esi]
0x6A8CB3: mov     edx, [eax+154h]
0x6A8CB9: mov     ecx, esi
0x6A8CBB: call    edx
0x6A8CBD: test    eax, eax
0x6A8CBF: jz      short loc_6A8CCF
0x6A8CC1: fld     dword ptr [ebx+18h]
0x6A8CC4: push    ecx
0x6A8CC5: mov     ecx, esi
0x6A8CC7: fstp    [esp+14h+var_14]; float
0x6A8CCA: call    sub_60E2E0
0x6A8CCF: mov     ecx, [esi+58h]
0x6A8CD2: mov     eax, [ecx]
0x6A8CD4: mov     edx, [eax+5Ch]
0x6A8CD7: call    edx
0x6A8CD9: mov     byte ptr ds:0B33D80h, 1
0x6A8CE0: mov     ecx, [esi+58h]
0x6A8CE3: mov     eax, [ecx]
0x6A8CE5: mov     edx, [eax+318h]
0x6A8CEB: push    edi
0x6A8CEC: call    edx
0x6A8CEE: mov     byte ptr ds:0B33D80h, 0
