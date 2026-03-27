0x4D5A90: push    ebx
0x4D5A91: push    ebp
0x4D5A92: mov     ebp, ecx
0x4D5A94: push    ebp; a2
0x4D5A95: mov     ecx, offset stru_B35C80; this
0x4D5A9A: call    sub_496EA0
0x4D5A9F: lea     ebx, [ebp+48h]
0x4D5AA2: test    ebx, ebx
0x4D5AA4: jz      loc_4D5BBB
0x4D5AAA: push    esi
0x4D5AAB: push    edi
0x4D5AAC: lea     esp, [esp+0]
0x4D5AB0: mov     edi, [ebx]
0x4D5AB2: test    edi, edi
0x4D5AB4: jz      loc_4D5BAE
0x4D5ABA: cmp     edi, ds:0B333C4h
0x4D5AC0: jz      loc_4D5BAE
0x4D5AC6: push    0; int
0x4D5AC8: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4D5ACD: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4D5AD2: push    0; int
0x4D5AD4: push    edi; void *
0x4D5AD5: call    OblivionDynamicCast
0x4D5ADA: add     esp, 14h
0x4D5ADD: lea     ecx, [edi+44h]; this
0x4D5AE0: mov     esi, eax
0x4D5AE2: call    ExtraDataList_GetContainerChanges
0x4D5AE7: test    eax, eax
0x4D5AE9: jz      short loc_4D5B02
0x4D5AEB: mov     ecx, ds:0B333C4h
0x4D5AF1: push    1
0x4D5AF3: push    0
0x4D5AF5: push    0
0x4D5AF7: push    ecx
0x4D5AF8: push    edi
0x4D5AF9: mov     ecx, eax
0x4D5AFB: call    sub_492E70
0x4D5B00: fstp    st
0x4D5B02: test    esi, esi
0x4D5B04: jz      loc_4D5B97
0x4D5B0A: mov     eax, [esi+8]
0x4D5B0D: mov     edx, eax
0x4D5B0F: shr     edx, 0Bh
0x4D5B12: test    dl, 1
0x4D5B15: jnz     short loc_4D5B3B
0x4D5B17: shr     eax, 5
0x4D5B1A: test    al, 1
0x4D5B1C: jnz     short loc_4D5B3B
0x4D5B1E: fld     dword ptr ds:0A31C80h
0x4D5B24: mov     eax, [esi]
0x4D5B26: mov     edx, [eax+374h]
0x4D5B2C: push    ecx
0x4D5B2D: mov     ecx, ds:0B333C4h
0x4D5B33: fstp    [esp+14h+var_14]
0x4D5B36: push    ecx
0x4D5B37: mov     ecx, esi
0x4D5B39: call    edx
0x4D5B3B: mov     ecx, esi
0x4D5B3D: call    Actor__IsEssential
0x4D5B42: test    al, al
0x4D5B44: jnz     short loc_4D5B97
0x4D5B46: mov     eax, [esi+8]
0x4D5B49: mov     ecx, eax
0x4D5B4B: shr     ecx, 0Bh
0x4D5B4E: test    cl, 1
0x4D5B51: jnz     short loc_4D5B97
0x4D5B53: shr     eax, 5
0x4D5B56: test    al, 1
0x4D5B58: jnz     short loc_4D5B97
0x4D5B5A: mov     edx, [esi]
0x4D5B5C: mov     eax, [edx+198h]
0x4D5B62: push    0
0x4D5B64: mov     ecx, esi
0x4D5B66: call    eax
0x4D5B68: test    al, al
0x4D5B6A: jnz     short loc_4D5B97
0x4D5B6C: mov     edx, [esi]
0x4D5B6E: mov     eax, ds:0B333C4h
0x4D5B73: mov     edx, [edx+32Ch]
0x4D5B79: push    1
0x4D5B7B: push    0
0x4D5B7D: push    0
0x4D5B7F: push    0
0x4D5B81: push    0
0x4D5B83: push    eax
0x4D5B84: mov     ecx, esi
0x4D5B86: call    edx
0x4D5B88: fldz
0x4D5B8A: push    ecx
0x4D5B8B: fstp    [esp+14h+var_14]; int
0x4D5B8E: push    0; int
0x4D5B90: mov     ecx, esi; int
0x4D5B92: call    Actor_Kill
0x4D5B97: mov     ecx, edi
0x4D5B99: call    sub_4D7740
0x4D5B9E: test    eax, eax
0x4D5BA0: jz      short loc_4D5BA9
0x4D5BA2: mov     ecx, edi
0x4D5BA4: call    sub_4DBEA0
0x4D5BA9: call    sub_4D5370
0x4D5BAE: mov     ebx, [ebx+4]
0x4D5BB1: test    ebx, ebx
0x4D5BB3: jnz     loc_4D5AB0
0x4D5BB9: pop     edi
0x4D5BBA: pop     esi
0x4D5BBB: push    ebp; a2
0x4D5BBC: mov     ecx, offset stru_B35C80; this
0x4D5BC1: call    sub_496F50
0x4D5BC6: pop     ebp
0x4D5BC7: pop     ebx
0x4D5BC8: retn
