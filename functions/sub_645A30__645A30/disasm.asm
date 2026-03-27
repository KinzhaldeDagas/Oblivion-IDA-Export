0x645A30: push    edi
0x645A31: mov     edi, [esp+4+arg_4]
0x645A35: test    edi, edi
0x645A37: jz      loc_645AE8
0x645A3D: mov     eax, [edi]
0x645A3F: mov     edx, [eax+198h]
0x645A45: push    0
0x645A47: mov     ecx, edi
0x645A49: call    edx
0x645A4B: test    al, al
0x645A4D: jnz     loc_645AE8
0x645A53: push    esi
0x645A54: mov     esi, [esp+8+arg_0]
0x645A58: test    esi, esi
0x645A5A: jz      loc_645AE7
0x645A60: mov     eax, [esi]
0x645A62: mov     edx, [eax+170h]
0x645A68: mov     ecx, esi
0x645A6A: call    edx
0x645A6C: cmp     byte ptr [eax+4], 18h
0x645A70: jnz     short loc_645AE7
0x645A72: mov     ecx, esi; this
0x645A74: mov     byte ptr [esp+8+arg_4], 0
0x645A79: call    GetTeleportExtraData
0x645A7E: test    eax, eax
0x645A80: jz      short loc_645AAF
0x645A82: mov     ecx, eax
0x645A84: call    sub_42B470
0x645A89: test    eax, eax
0x645A8B: jnz     short loc_645AAA
0x645A8D: mov     ecx, edi; this
0x645A8F: call    TESObjectREFR_GetParentCell
0x645A94: test    eax, eax
0x645A96: jz      short loc_645AAA
0x645A98: mov     ecx, edi; this
0x645A9A: call    TESObjectREFR_GetParentCell
0x645A9F: mov     ecx, eax; this
0x645AA1: call    TESObjectCELL_IsInterior
0x645AA6: test    al, al
0x645AA8: jnz     short loc_645AAF
0x645AAA: mov     byte ptr [esp+8+arg_4], 1
0x645AAF: mov     eax, [esp+8+arg_4]
0x645AB3: push    eax
0x645AB4: push    edi
0x645AB5: mov     ecx, esi
0x645AB7: call    TESOBjectREFR_IsOwnedBy
0x645ABC: test    al, al
0x645ABE: jz      short loc_645AE7
0x645AC0: mov     ecx, esi
0x645AC2: call    sub_4D7740
0x645AC7: test    eax, eax
0x645AC9: jz      short loc_645AE7
0x645ACB: mov     ecx, esi
0x645ACD: call    sub_4DBE40
0x645AD2: mov     ecx, esi; this
0x645AD4: call    GetTeleportExtraData
0x645AD9: test    eax, eax
0x645ADB: jz      short loc_645AE7
0x645ADD: push    0
0x645ADF: push    esi
0x645AE0: mov     ecx, eax
0x645AE2: call    sub_42B5F0
0x645AE7: pop     esi
0x645AE8: xor     al, al
0x645AEA: pop     edi
0x645AEB: retn
