0x64BAC0: push    ecx
0x64BAC1: push    ebp
0x64BAC2: push    esi
0x64BAC3: mov     esi, [esp+0Ch+arg_0]
0x64BAC7: mov     eax, [esi]
0x64BAC9: mov     edx, [eax+170h]
0x64BACF: push    edi
0x64BAD0: push    0; int
0x64BAD2: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x64BAD7: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x64BADC: mov     edi, ecx
0x64BADE: push    0; int
0x64BAE0: mov     ecx, esi
0x64BAE2: call    edx
0x64BAE4: push    eax; void *
0x64BAE5: call    OblivionDynamicCast
0x64BAEA: add     esp, 14h
0x64BAED: push    0; int
0x64BAEF: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x64BAF4: mov     ebp, eax
0x64BAF6: mov     eax, [esi]
0x64BAF8: mov     edx, [eax+170h]
0x64BAFE: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x64BB03: push    0; int
0x64BB05: mov     ecx, esi
0x64BB07: call    edx
0x64BB09: push    eax; void *
0x64BB0A: call    OblivionDynamicCast
0x64BB0F: mov     edx, [edi+8]
0x64BB12: add     esp, 14h
0x64BB15: test    edx, edx
0x64BB17: mov     byte ptr [esp+10h+var_4], 1
0x64BB1C: mov     byte ptr [esp+10h+arg_0], 1
0x64BB21: jz      short loc_64BB54
0x64BB23: cmp     byte ptr [edx+20h], 4
0x64BB27: jnz     short loc_64BB35
0x64BB29: mov     byte ptr [esp+10h+arg_8], 1
0x64BB2E: mov     byte ptr [esp+10h+var_4], 0
0x64BB33: jmp     short loc_64BB4F
0x64BB35: mov     edx, [edx+1Ch]
0x64BB38: mov     ecx, edx
0x64BB3A: shr     ecx, 14h
0x64BB3D: test    cl, 1
0x64BB40: jz      short loc_64BB47
0x64BB42: mov     byte ptr [esp+10h+var_4], 0
0x64BB47: shr     edx, 15h
0x64BB4A: test    dl, 1
0x64BB4D: jz      short loc_64BB54
0x64BB4F: mov     byte ptr [esp+10h+arg_0], 0
0x64BB54: test    ebp, ebp
0x64BB56: jz      short loc_64BB73
0x64BB58: mov     edx, [esp+10h+arg_8]
0x64BB5C: mov     eax, [esp+10h+arg_0]
0x64BB60: mov     ecx, [esp+10h+var_4]
0x64BB64: push    1; char
0x64BB66: push    edx; int
0x64BB67: push    eax; int
0x64BB68: push    ecx; int
0x64BB69: push    esi; int
0x64BB6A: mov     ecx, ebp; int
0x64BB6C: call    sub_5227A0
0x64BB71: jmp     short loc_64BB8B
0x64BB73: test    eax, eax
0x64BB75: jz      short loc_64BB8B
0x64BB77: mov     edx, [esp+10h+arg_0]
0x64BB7B: mov     ecx, [esp+10h+var_4]
0x64BB7F: push    1
0x64BB81: push    edx
0x64BB82: push    ecx
0x64BB83: push    esi
0x64BB84: mov     ecx, eax
0x64BB86: call    sub_51E240
0x64BB8B: mov     ecx, [esi+58h]
0x64BB8E: test    ecx, ecx
0x64BB90: jz      short loc_64BB9E
0x64BB92: mov     edx, [ecx]
0x64BB94: mov     eax, [edx+31Ch]
0x64BB9A: push    1
0x64BB9C: call    eax
0x64BB9E: cmp     [esp+10h+arg_4], 0
0x64BBA3: jz      short loc_64BBB4
0x64BBA5: mov     edx, [edi]
0x64BBA7: mov     eax, [edx+188h]
0x64BBAD: push    1
0x64BBAF: push    esi
0x64BBB0: mov     ecx, edi
0x64BBB2: call    eax
0x64BBB4: pop     edi
0x64BBB5: pop     esi
0x64BBB6: pop     ebp
0x64BBB7: pop     ecx
0x64BBB8: retn    0Ch
