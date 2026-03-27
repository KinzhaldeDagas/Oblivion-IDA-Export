0x4BEA40: mov     eax, [esp+arg_0]
0x4BEA44: push    ebx
0x4BEA45: push    edi
0x4BEA46: push    0; int
0x4BEA48: push    offset ??_R0?AVTESClimate@@@8; struct TypeDescriptor *
0x4BEA4D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BEA52: push    0; int
0x4BEA54: push    eax; void *
0x4BEA55: mov     edi, ecx
0x4BEA57: call    OblivionDynamicCast
0x4BEA5C: mov     ebx, eax
0x4BEA5E: add     esp, 14h
0x4BEA61: test    ebx, ebx
0x4BEA63: jz      short loc_4BEACB
0x4BEA65: push    ebp
0x4BEA66: push    esi
0x4BEA67: push    ebx; a2
0x4BEA68: mov     ecx, edi; this
0x4BEA6A: call    TESForm_CopyAllComponentsFrom
0x4BEA6F: push    0
0x4BEA71: lea     ecx, [ebx+30h]
0x4BEA74: push    ecx
0x4BEA75: lea     ecx, [edi+30h]
0x4BEA78: call    sub_4EED80
0x4BEA7D: mov     ebp, ebx
0x4BEA7F: lea     esi, [edi+38h]
0x4BEA82: sub     ebp, edi
0x4BEA84: mov     [esp+10h+arg_0], 2
0x4BEA8C: lea     esp, [esp+0]
0x4BEA90: mov     edx, [esi]
0x4BEA92: mov     edx, [edx+8]
0x4BEA95: lea     eax, [esi+ebp]
0x4BEA98: push    eax
0x4BEA99: mov     ecx, esi
0x4BEA9B: call    edx
0x4BEA9D: add     esi, 0Ch
0x4BEAA0: sub     [esp+10h+arg_0], 1
0x4BEAA5: jnz     short loc_4BEA90
0x4BEAA7: mov     eax, [edi+18h]
0x4BEAAA: mov     eax, [eax+8]
0x4BEAAD: lea     ecx, [edi+18h]
0x4BEAB0: lea     edx, [ebx+18h]
0x4BEAB3: push    edx
0x4BEAB4: call    eax
0x4BEAB6: mov     edx, [ebx+50h]
0x4BEAB9: lea     eax, [ebx+50h]
0x4BEABC: lea     ecx, [edi+50h]
0x4BEABF: mov     [ecx], edx
0x4BEAC1: mov     ax, [eax+4]
0x4BEAC5: pop     esi
0x4BEAC6: mov     [ecx+4], ax
0x4BEACA: pop     ebp
0x4BEACB: pop     edi
0x4BEACC: pop     ebx
0x4BEACD: retn    4
