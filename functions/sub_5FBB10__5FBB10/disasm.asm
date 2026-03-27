0x5FBB10: sub     esp, 8
0x5FBB13: push    ebx
0x5FBB14: push    ebp
0x5FBB15: push    esi
0x5FBB16: push    edi
0x5FBB17: mov     edi, [esp+18h+arg_0]
0x5FBB1B: mov     eax, [edi]
0x5FBB1D: mov     edx, [eax+44h]
0x5FBB20: mov     esi, ecx
0x5FBB22: push    20000h
0x5FBB27: mov     ecx, edi
0x5FBB29: call    edx
0x5FBB2B: mov     eax, [edi]
0x5FBB2D: mov     edx, [eax+154h]
0x5FBB33: push    0
0x5FBB35: push    1
0x5FBB37: push    1
0x5FBB39: mov     ecx, edi
0x5FBB3B: call    edx
0x5FBB3D: push    eax
0x5FBB3E: call    sub_88CF90
0x5FBB43: mov     eax, [edi]
0x5FBB45: mov     edx, [eax+170h]
0x5FBB4B: add     esp, 10h
0x5FBB4E: mov     ecx, edi
0x5FBB50: call    edx
0x5FBB52: mov     ebp, eax
0x5FBB54: test    ebp, ebp
0x5FBB56: mov     [esp+18h+arg_0], ebp
0x5FBB5A: jz      short loc_5FBB66
0x5FBB5C: movzx   eax, byte ptr [ebp+4]
0x5FBB60: mov     [esp+18h+var_4], eax
0x5FBB64: jmp     short loc_5FBB6E
0x5FBB66: mov     [esp+18h+var_4], 0
0x5FBB6E: mov     eax, [edi+0Ch]
0x5FBB71: push    esi
0x5FBB72: push    eax
0x5FBB73: mov     ecx, offset ActorProcessManager_ptr
0x5FBB78: call    sub_674E40
0x5FBB7D: push    0
0x5FBB7F: push    1
0x5FBB81: mov     ebx, eax
0x5FBB83: push    ebp
0x5FBB84: mov     ecx, esi
0x5FBB86: mov     [esp+24h+var_8], ebx
0x5FBB8A: call    sub_5E99C0
0x5FBB8F: test    ebx, ebx
0x5FBB91: jz      short loc_5FBBF9
0x5FBB93: mov     ebp, [ebx]
0x5FBB95: test    ebp, ebp
0x5FBB97: jz      short loc_5FBBE1
0x5FBB99: mov     ecx, [ebp+58h]
0x5FBB9C: xor     eax, eax
0x5FBB9E: test    ecx, ecx
0x5FBBA0: jz      short loc_5FBBB5
0x5FBBA2: mov     ecx, [ecx+8]
0x5FBBA5: test    ecx, ecx
0x5FBBA7: jz      short loc_5FBBB5
0x5FBBA9: mov     ecx, [ecx+28h]
0x5FBBAC: test    ecx, ecx
0x5FBBAE: jz      short loc_5FBBB5
0x5FBBB0: call    sub_569E60
0x5FBBB5: cmp     eax, edi
0x5FBBB7: jnz     short loc_5FBBC2
0x5FBBB9: cmp     dword ptr [ebp+58h], 0
0x5FBBBD: jz      short loc_5FBBDA
0x5FBBBF: push    esi
0x5FBBC0: jmp     short loc_5FBBCA
0x5FBBC2: cmp     dword ptr [ebp+58h], 0
0x5FBBC6: jz      short loc_5FBBDA
0x5FBBC8: push    0
0x5FBBCA: mov     ebp, [ebp+58h]
0x5FBBCD: mov     edx, [ebp+0]
0x5FBBD0: mov     eax, [edx+0D0h]
0x5FBBD6: mov     ecx, ebp
0x5FBBD8: call    eax
0x5FBBDA: mov     ebx, [ebx+4]
0x5FBBDD: test    ebx, ebx
0x5FBBDF: jnz     short loc_5FBB93
0x5FBBE1: mov     ebx, [esp+18h+var_8]
0x5FBBE5: mov     ecx, ebx
0x5FBBE7: call    BSSimpleList_Clear
0x5FBBEC: push    ebx
0x5FBBED: call    FormHeapFree
0x5FBBF2: mov     ebp, [esp+1Ch+arg_0]
0x5FBBF6: add     esp, 4
0x5FBBF9: mov     edx, [esi]
0x5FBBFB: mov     eax, [edx+170h]
0x5FBC01: mov     ecx, esi
0x5FBC03: call    eax
0x5FBC05: cmp     byte ptr [eax+4], 23h ; '#'
0x5FBC09: jnz     loc_5FBCA9
0x5FBC0F: mov     ecx, edi; this
0x5FBC11: call    TESObjectREFR_GetOwner
0x5FBC16: test    eax, eax
0x5FBC18: jz      loc_5FBCA1
0x5FBC1E: push    1
0x5FBC20: push    esi
0x5FBC21: mov     ecx, edi
0x5FBC23: call    TESOBjectREFR_IsOwnedBy
0x5FBC28: test    al, al
0x5FBC2A: jnz     short loc_5FBCA1
0x5FBC2C: mov     ecx, [esi+58h]
0x5FBC2F: mov     edx, [ecx]
0x5FBC31: mov     eax, [edx+8]
0x5FBC34: call    eax
0x5FBC36: test    eax, eax
0x5FBC38: jnz     short loc_5FBCA1
0x5FBC3A: mov     ebp, [esi]
0x5FBC3C: mov     ecx, edi; this
0x5FBC3E: add     ebp, 238h
0x5FBC44: call    TESObjectREFR_GetOwner
0x5FBC49: mov     ecx, [esp+18h+arg_4]
0x5FBC4D: mov     edx, [esp+18h+arg_0]
0x5FBC51: push    eax
0x5FBC52: mov     eax, [ebp+0]
0x5FBC55: push    0
0x5FBC57: push    ecx
0x5FBC58: push    edx
0x5FBC59: push    edi
0x5FBC5A: mov     ecx, esi
0x5FBC5C: call    eax
0x5FBC5E: mov     edx, [esi]
0x5FBC60: mov     eax, [edx+334h]
0x5FBC66: push    1
0x5FBC68: mov     ecx, esi
0x5FBC6A: call    eax
0x5FBC6C: test    al, al
0x5FBC6E: jz      short loc_5FBC86
0x5FBC70: cmp     esi, ds:0B333C4h
0x5FBC76: jz      short loc_5FBC86
0x5FBC78: lea     ecx, [edi+44h]
0x5FBC7B: call    ExtraDataList_RemoveOwner
0x5FBC80: mov     ebp, [esp+18h+arg_0]
0x5FBC84: jmp     short loc_5FBCA9
0x5FBC86: mov     edx, [edi]
0x5FBC88: mov     eax, [edx+170h]
0x5FBC8E: mov     ecx, edi
0x5FBC90: call    eax
0x5FBC92: push    eax
0x5FBC93: lea     ecx, [edi+44h]
0x5FBC96: call    ExtraDataList__SetOrRemoveExtraOwnership
0x5FBC9B: mov     ebp, [esp+18h+arg_0]
0x5FBC9F: jmp     short loc_5FBCA9
0x5FBCA1: lea     ecx, [edi+44h]
0x5FBCA4: call    ExtraDataList_RemoveOwner
0x5FBCA9: mov     ecx, [esi+58h]
0x5FBCAC: mov     edx, [ecx]
0x5FBCAE: mov     eax, [edx+0F4h]
0x5FBCB4: xor     bl, bl
0x5FBCB6: push    1
0x5FBCB8: mov     byte ptr [esp+1Ch+var_8], bl
0x5FBCBC: call    eax
0x5FBCBE: test    eax, eax
0x5FBCC0: jz      short loc_5FBD1A
0x5FBCC2: mov     ecx, [esi+58h]
0x5FBCC5: mov     edx, [ecx]
0x5FBCC7: mov     eax, [edx+0F4h]
0x5FBCCD: push    1
0x5FBCCF: call    eax
0x5FBCD1: cmp     ebp, [eax+8]
0x5FBCD4: jnz     short loc_5FBD1A
0x5FBCD6: lea     ecx, [edi+44h]
0x5FBCD9: call    ExtraDataList_GetExtraCount
0x5FBCDE: mov     ecx, [esi+58h]
0x5FBCE1: mov     edx, [ecx]
0x5FBCE3: movsx   ebp, ax
0x5FBCE6: mov     eax, [edx+0F4h]
0x5FBCEC: push    1
0x5FBCEE: call    eax
0x5FBCF0: mov     ecx, eax
0x5FBCF2: call    TESHealthForm_GetHealth
0x5FBCF7: mov     ecx, [esi+58h]
0x5FBCFA: mov     edx, [ecx]
0x5FBCFC: add     ebp, eax
0x5FBCFE: mov     eax, [edx+0F4h]
0x5FBD04: push    ebp
0x5FBD05: push    1
0x5FBD07: call    eax
0x5FBD09: mov     ecx, eax
0x5FBD0B: call    sub_60D020
0x5FBD10: mov     ebp, [esp+18h+arg_0]
0x5FBD14: mov     bl, 1
0x5FBD16: mov     byte ptr [esp+18h+var_8], bl
0x5FBD1A: cmp     byte ptr [ebp+4], 22h ; '"'
0x5FBD1E: jnz     short loc_5FBD25
0x5FBD20: mov     byte ptr [esp+18h+arg_8], 0
0x5FBD25: test    byte ptr [edi+8], 1
0x5FBD29: jnz     short loc_5FBD7F
0x5FBD2B: push    0FFFFFFFFh; a2
0x5FBD2D: mov     ecx, edi; this
0x5FBD2F: call    TESForm_GetOverrideFile
0x5FBD34: test    eax, eax
0x5FBD36: jnz     short loc_5FBD7F
0x5FBD38: mov     ecx, edi; this
0x5FBD3A: call    TESObjectREFR_IsPersistent?
0x5FBD3F: test    al, al
0x5FBD41: jnz     short loc_5FBD7F
0x5FBD43: push    2
0x5FBD45: mov     ecx, edi
0x5FBD47: call    sub_4D8260
0x5FBD4C: test    al, al
0x5FBD4E: jz      short loc_5FBD5E
0x5FBD50: mov     ecx, [esp+18h+var_8]
0x5FBD54: mov     edx, [esp+18h+arg_4]
0x5FBD58: push    ecx
0x5FBD59: push    0
0x5FBD5B: push    edx
0x5FBD5C: jmp     short loc_5FBD8E
0x5FBD5E: mov     eax, [esp+18h+var_8]
0x5FBD62: mov     ecx, [esp+18h+arg_4]
0x5FBD66: push    eax
0x5FBD67: push    0
0x5FBD69: push    ecx
0x5FBD6A: push    edi
0x5FBD6B: mov     ecx, esi
0x5FBD6D: call    sub_4DDC40
0x5FBD72: mov     edx, [edi]
0x5FBD74: mov     eax, [edx+10h]
0x5FBD77: push    1
0x5FBD79: mov     ecx, edi
0x5FBD7B: call    eax
0x5FBD7D: jmp     short loc_5FBD9D
0x5FBD7F: mov     ecx, [esp+18h+var_8]
0x5FBD83: mov     edx, [esp+18h+arg_8]
0x5FBD87: mov     eax, [esp+18h+arg_4]
0x5FBD8B: push    ecx
0x5FBD8C: push    edx
0x5FBD8D: push    eax
0x5FBD8E: push    edi
0x5FBD8F: mov     ecx, esi
0x5FBD91: call    sub_4DDC40
0x5FBD96: mov     ecx, edi
0x5FBD98: call    sub_4D7D80
0x5FBD9D: test    bl, bl
0x5FBD9F: jz      short loc_5FBDB7
0x5FBDA1: mov     edx, [esi]
0x5FBDA3: mov     eax, [edx+168h]
0x5FBDA9: push    0
0x5FBDAB: mov     ecx, esi
0x5FBDAD: call    eax
0x5FBDAF: push    eax
0x5FBDB0: mov     ecx, esi
0x5FBDB2: call    sub_5F8300
0x5FBDB7: cmp     [esp+18h+var_4], 21h ; '!'
0x5FBDBC: jnz     loc_5FBEB3
0x5FBDC2: mov     edx, [esi]
0x5FBDC4: mov     eax, [edx+170h]
0x5FBDCA: mov     ecx, esi
0x5FBDCC: xor     ebx, ebx
0x5FBDCE: call    eax
0x5FBDD0: mov     edi, eax
0x5FBDD2: test    edi, edi
0x5FBDD4: jz      short loc_5FBDE8
0x5FBDD6: mov     edx, [esi]
0x5FBDD8: mov     eax, [edx+190h]
0x5FBDDE: mov     ecx, esi
0x5FBDE0: call    eax
0x5FBDE2: test    al, al
0x5FBDE4: jz      short loc_5FBDE8
0x5FBDE6: mov     ebx, edi
0x5FBDE8: mov     ecx, ebx
0x5FBDEA: call    TESActorBase_CanUseWeaponAndShield
0x5FBDEF: test    al, al
0x5FBDF1: jz      loc_5FBEB3
0x5FBDF7: mov     edx, [esi]
0x5FBDF9: mov     eax, [edx+2B8h]
0x5FBDFF: push    0FFFFFFFFh
0x5FBE01: mov     ecx, esi
0x5FBE03: call    eax
0x5FBE05: mov     ebp, eax
0x5FBE07: test    ebp, ebp
0x5FBE09: jz      loc_5FBEB3
0x5FBE0F: mov     ecx, [ebp+0]
0x5FBE12: xor     eax, eax
0x5FBE14: test    ecx, ecx
0x5FBE16: jz      short loc_5FBE1A
0x5FBE18: mov     eax, [ecx]
0x5FBE1A: mov     ecx, [ebp+8]
0x5FBE1D: push    0
0x5FBE1F: push    1
0x5FBE21: push    eax
0x5FBE22: push    1
0x5FBE24: push    ecx
0x5FBE25: mov     ecx, esi
0x5FBE27: call    Actor_EquipItem
0x5FBE2C: mov     edx, [esi]
0x5FBE2E: mov     eax, [edx+334h]
0x5FBE34: push    1
0x5FBE36: mov     ecx, esi
0x5FBE38: call    eax
0x5FBE3A: test    al, al
0x5FBE3C: jz      short loc_5FBEA3
0x5FBE3E: mov     ecx, [esi+58h]
0x5FBE41: mov     edx, [ecx]
0x5FBE43: mov     eax, [edx+308h]
0x5FBE49: push    1
0x5FBE4B: call    eax
0x5FBE4D: mov     ecx, [esi+58h]
0x5FBE50: mov     edx, [ecx]
0x5FBE52: mov     eax, [edx+300h]
0x5FBE58: push    1
0x5FBE5A: call    eax
0x5FBE5C: mov     edi, [esi+58h]
0x5FBE5F: test    edi, edi
0x5FBE61: jz      short loc_5FBE75
0x5FBE63: mov     ecx, edi
0x5FBE65: mov     edx, [ecx]
0x5FBE67: mov     eax, [edx+304h]
0x5FBE6D: call    eax
0x5FBE6F: mov     byte ptr [esp+18h+arg_4], al
0x5FBE73: jmp     short loc_5FBE7A
0x5FBE75: mov     byte ptr [esp+18h+arg_4], 0
0x5FBE7A: mov     ebx, [edi]
0x5FBE7C: push    esi
0x5FBE7D: mov     ecx, esi
0x5FBE7F: add     ebx, 150h
0x5FBE85: call    TESObjectREFR_GetAnimData
0x5FBE8A: mov     edx, [esi]
0x5FBE8C: push    eax
0x5FBE8D: mov     eax, [edx+168h]
0x5FBE93: mov     ecx, esi
0x5FBE95: call    eax
0x5FBE97: mov     ecx, [esp+18h+arg_C]
0x5FBE9B: mov     edx, [ebx]
0x5FBE9D: push    eax
0x5FBE9E: push    ecx
0x5FBE9F: mov     ecx, edi
0x5FBEA1: call    edx
0x5FBEA3: mov     ecx, ebp
0x5FBEA5: call    ContainerEntryExtraData_DestroyDataTable
0x5FBEAA: push    ebp
0x5FBEAB: call    FormHeapFree
0x5FBEB0: add     esp, 4
0x5FBEB3: pop     edi
0x5FBEB4: pop     esi
0x5FBEB5: pop     ebp
0x5FBEB6: pop     ebx
0x5FBEB7: add     esp, 8
0x5FBEBA: retn    0Ch
