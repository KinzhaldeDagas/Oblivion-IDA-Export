0x4AC940: mov     eax, [esp+arg_0]
0x4AC944: push    ebx
0x4AC945: push    ebp
0x4AC946: push    0; int
0x4AC948: push    offset ??_R0?AVTESEffectShader@@@8; struct TypeDescriptor *
0x4AC94D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AC952: push    0; int
0x4AC954: push    eax; void *
0x4AC955: mov     ebp, ecx
0x4AC957: call    OblivionDynamicCast
0x4AC95C: mov     ebx, eax
0x4AC95E: add     esp, 14h
0x4AC961: test    ebx, ebx
0x4AC963: jz      short loc_4AC9AE
0x4AC965: push    esi
0x4AC966: push    edi
0x4AC967: push    ebx; a2
0x4AC968: mov     ecx, ebp; this
0x4AC96A: call    TESForm_CopyAllComponentsFrom
0x4AC96F: mov     edx, [ebp+0F8h]
0x4AC975: mov     edx, [edx+8]
0x4AC978: lea     esi, [ebx+18h]
0x4AC97B: lea     edi, [ebp+18h]
0x4AC97E: mov     ecx, 38h ; '8'
0x4AC983: rep movsd
0x4AC985: lea     ecx, [ebp+0F8h]
0x4AC98B: lea     eax, [ebx+0F8h]
0x4AC991: push    eax
0x4AC992: call    edx
0x4AC994: mov     eax, [ebp+104h]
0x4AC99A: mov     edx, [eax+8]
0x4AC99D: lea     ecx, [ebp+104h]
0x4AC9A3: add     ebx, 104h
0x4AC9A9: push    ebx
0x4AC9AA: call    edx
0x4AC9AC: pop     edi
0x4AC9AD: pop     esi
0x4AC9AE: pop     ebp
0x4AC9AF: pop     ebx
0x4AC9B0: retn    4
