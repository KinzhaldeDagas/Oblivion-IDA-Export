0x52E760: push    ebx
0x52E761: push    esi
0x52E762: mov     esi, [esp+8+a2]
0x52E766: push    edi
0x52E767: push    0; int
0x52E769: push    offset ??_R0?AVTESSkill@@@8; struct TypeDescriptor *
0x52E76E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52E773: push    0; int
0x52E775: push    esi; void *
0x52E776: mov     edi, ecx
0x52E778: call    OblivionDynamicCast
0x52E77D: mov     ebx, eax
0x52E77F: add     esp, 14h
0x52E782: test    ebx, ebx
0x52E784: jz      short loc_52E7CB
0x52E786: push    esi; a2
0x52E787: mov     ecx, edi; this
0x52E789: call    TESForm_CopyAllComponentsFrom
0x52E78E: mov     eax, [ebx+2Ch]
0x52E791: mov     [edi+2Ch], eax
0x52E794: mov     ecx, [ebx+30h]
0x52E797: mov     [edi+30h], ecx
0x52E79A: mov     edx, [ebx+34h]
0x52E79D: mov     [edi+34h], edx
0x52E7A0: mov     eax, [ebx+38h]
0x52E7A3: mov     [edi+38h], eax
0x52E7A6: mov     ecx, [ebx+3Ch]
0x52E7A9: mov     [edi+3Ch], ecx
0x52E7AC: lea     esi, [edi+40h]
0x52E7AF: sub     ebx, edi
0x52E7B1: mov     edi, 4
0x52E7B6: mov     edx, [esi]
0x52E7B8: mov     edx, [edx+8]
0x52E7BB: lea     eax, [ebx+esi]
0x52E7BE: push    eax
0x52E7BF: mov     ecx, esi
0x52E7C1: call    edx
0x52E7C3: add     esi, 8
0x52E7C6: sub     edi, 1
0x52E7C9: jnz     short loc_52E7B6
0x52E7CB: pop     edi
0x52E7CC: pop     esi
0x52E7CD: pop     ebx
0x52E7CE: retn    4
