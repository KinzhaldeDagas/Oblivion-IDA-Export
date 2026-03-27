0x62EC10: sub     esp, 10h
0x62EC13: push    ebx
0x62EC14: push    ebp
0x62EC15: push    esi
0x62EC16: mov     esi, ecx
0x62EC18: mov     eax, [esi]
0x62EC1A: mov     edx, [eax+184h]
0x62EC20: push    edi
0x62EC21: call    edx
0x62EC23: cmp     dword ptr [esi+2Ch], 0
0x62EC27: mov     edi, [esp+20h+arg_0]
0x62EC2B: mov     [esp+20h+var_10], eax
0x62EC2F: jnz     short loc_62EC3E
0x62EC31: mov     eax, [esi]
0x62EC33: mov     edx, [eax+558h]
0x62EC39: push    edi
0x62EC3A: mov     ecx, esi
0x62EC3C: call    edx
0x62EC3E: mov     eax, [esi+2Ch]
0x62EC41: test    eax, eax
0x62EC43: jz      loc_62EF5F
0x62EC49: mov     eax, [eax+8]
0x62EC4C: mov     ecx, eax
0x62EC4E: shr     ecx, 5
0x62EC51: test    cl, 1
0x62EC54: jnz     loc_62EF5F
0x62EC5A: shr     eax, 0Bh
0x62EC5D: test    al, 1
0x62EC5F: jnz     loc_62EF5F
0x62EC65: cmp     dword ptr [esi+44h], 0
0x62EC69: jz      loc_62EF6E
0x62EC6F: mov     ebx, [esi+44h]
0x62EC72: mov     edx, [ebx+4]
0x62EC75: push    edx
0x62EC76: call    sub_470520
0x62EC7B: imul    eax, [ebx+10h]
0x62EC7F: mov     [esp+24h+arg_0], eax
0x62EC83: add     esp, 4
0x62EC86: cmp     dword ptr [esi+2Ch], 0
0x62EC8A: fild    [esp+20h+arg_0]
0x62EC8E: fstp    [esp+20h+arg_0]
0x62EC92: jnz     short loc_62ECC4
0x62EC94: mov     ebx, [ebx]
0x62EC96: mov     eax, [ebx]
0x62EC98: mov     edx, [eax+170h]
0x62EC9E: mov     ebp, [esi+44h]
0x62ECA1: mov     ecx, ebx
0x62ECA3: call    edx
0x62ECA5: cmp     [ebp+4], eax
0x62ECA8: jnz     short loc_62ECC4
0x62ECAA: mov     ecx, [ebp+0]
0x62ECAD: mov     eax, [esi]
0x62ECAF: mov     edx, [eax+0D0h]
0x62ECB5: push    ecx
0x62ECB6: mov     ecx, esi
0x62ECB8: call    edx
0x62ECBA: pop     edi
0x62ECBB: pop     esi
0x62ECBC: pop     ebp
0x62ECBD: pop     ebx
0x62ECBE: add     esp, 10h
0x62ECC1: retn    4
0x62ECC4: mov     ecx, [esi+2Ch]; this
0x62ECC7: xor     bl, bl
0x62ECC9: call    GetTeleportExtraData
0x62ECCE: test    eax, eax
0x62ECD0: jz      short loc_62ED46
0x62ECD2: mov     eax, [edi]
0x62ECD4: mov     edx, [eax+174h]
0x62ECDA: mov     ecx, edi
0x62ECDC: call    edx
0x62ECDE: mov     ecx, [esi+2Ch]
0x62ECE1: push    eax
0x62ECE2: lea     eax, [esp+24h+var_C]
0x62ECE6: push    eax
0x62ECE7: call    sub_4D76F0
0x62ECEC: mov     ecx, eax
0x62ECEE: call    sub_4121A0
0x62ECF3: lea     ecx, [esp+20h+var_C]
0x62ECF7: call    sub_404C90
0x62ECFC: fild    dword ptr ds:0B36B28h
0x62ED02: fcompp
0x62ED04: fnstsw  ax
0x62ED06: test    ah, 1
0x62ED09: jnz     short loc_62ED56
0x62ED0B: mov     bl, 1
0x62ED0D: cmp     byte ptr [esi+0D0h], 0
0x62ED14: jnz     short loc_62ED23
0x62ED16: mov     edx, [esi]
0x62ED18: mov     eax, [edx+194h]
0x62ED1E: push    edi
0x62ED1F: mov     ecx, esi
0x62ED21: call    eax
0x62ED23: mov     ecx, esi
0x62ED25: call    sub_64ADA0
0x62ED2A: test    al, al
0x62ED2C: jz      loc_62EE56
0x62ED32: test    bl, bl
0x62ED34: jnz     loc_62EE56
0x62ED3A: mov     dword ptr [esi+2Ch], 0
0x62ED41: jmp     loc_62EF37
0x62ED46: mov     ecx, [esp+20h+var_10]
0x62ED4A: push    edi
0x62ED4B: call    sub_5687D0
0x62ED50: mov     bl, al
0x62ED52: test    bl, bl
0x62ED54: jnz     short loc_62ED0D
0x62ED56: mov     ecx, esi
0x62ED58: call    sub_64ADA0
0x62ED5D: test    al, al
0x62ED5F: jnz     short loc_62ED0D
0x62ED61: mov     edx, [esi]
0x62ED63: mov     eax, [edx+36Ch]
0x62ED69: mov     ecx, esi
0x62ED6B: call    eax
0x62ED6D: test    eax, eax
0x62ED6F: jz      short loc_62ED87
0x62ED71: mov     edx, [edi]
0x62ED73: mov     eax, [edx+320h]
0x62ED79: mov     ecx, edi
0x62ED7B: call    eax
0x62ED7D: pop     edi
0x62ED7E: pop     esi
0x62ED7F: pop     ebp
0x62ED80: pop     ebx
0x62ED81: add     esp, 10h
0x62ED84: retn    4
0x62ED87: cmp     byte ptr [esi+0D0h], 0
0x62ED8E: jz      short loc_62EDFB
0x62ED90: mov     ecx, [esi+2Ch]; this
0x62ED93: call    GetTeleportExtraData
0x62ED98: test    eax, eax
0x62ED9A: mov     ebp, [esi]
0x62ED9C: mov     ecx, [esi+2Ch]
0x62ED9F: jnz     short loc_62EDAD
0x62EDA1: mov     edx, [ecx]
0x62EDA3: mov     eax, [edx+174h]
0x62EDA9: call    eax
0x62EDAB: jmp     short loc_62EDB2
0x62EDAD: call    sub_4D76F0
0x62EDB2: mov     ecx, [esi+2Ch]; this
0x62EDB5: mov     ebx, eax
0x62EDB7: call    TESObjectREFR_GetWorldSpace
0x62EDBC: mov     ecx, [esi+2Ch]; this
0x62EDBF: push    eax
0x62EDC0: call    TESObjectREFR_GetParentCell
0x62EDC5: mov     ecx, [ebx]
0x62EDC7: mov     edx, [ebx+4]
0x62EDCA: push    eax
0x62EDCB: sub     esp, 0Ch
0x62EDCE: mov     eax, esp
0x62EDD0: mov     [eax], ecx
0x62EDD2: mov     ecx, [ebx+8]
0x62EDD5: mov     [eax+4], edx
0x62EDD8: mov     edx, [ebp+3DCh]
0x62EDDE: mov     [eax+8], ecx
0x62EDE1: push    edi
0x62EDE2: mov     ecx, esi
0x62EDE4: call    edx
0x62EDE6: test    al, al
0x62EDE8: jz      loc_62EF6E
0x62EDEE: cmp     byte ptr [esi+0D0h], 0
0x62EDF5: jnz     loc_62EF6E
0x62EDFB: mov     eax, [esi]
0x62EDFD: mov     edx, [eax+238h]
0x62EE03: push    101h
0x62EE08: push    edi
0x62EE09: mov     ecx, esi
0x62EE0B: call    edx
0x62EE0D: mov     ecx, [esp+20h+var_10]
0x62EE11: mov     ebp, [esi]
0x62EE13: mov     ebx, [esi+2Ch]
0x62EE16: push    2
0x62EE18: push    edi
0x62EE19: call    sub_5677B0
0x62EE1E: push    ecx
0x62EE1F: mov     ecx, [esi+2Ch]; this
0x62EE22: fstp    [esp+24h+var_24]
0x62EE25: call    TESObjectREFR_GetWorldSpace
0x62EE2A: mov     ecx, [esi+2Ch]; this
0x62EE2D: push    eax
0x62EE2E: call    TESObjectREFR_GetParentCell
0x62EE33: push    eax
0x62EE34: mov     eax, [ebx]
0x62EE36: mov     edx, [eax+174h]
0x62EE3C: mov     ecx, ebx
0x62EE3E: call    edx
0x62EE40: push    eax
0x62EE41: mov     eax, [ebp+414h]
0x62EE47: push    edi
0x62EE48: mov     ecx, esi
0x62EE4A: call    eax
0x62EE4C: pop     edi
0x62EE4D: pop     esi
0x62EE4E: pop     ebp
0x62EE4F: pop     ebx
0x62EE50: add     esp, 10h
0x62EE53: retn    4
0x62EE56: mov     ecx, [esi+44h]
0x62EE59: mov     ecx, [ecx]
0x62EE5B: mov     edx, [ecx]
0x62EE5D: mov     eax, [edx+190h]
0x62EE63: xor     ebp, ebp
0x62EE65: call    eax
0x62EE67: test    al, al
0x62EE69: jnz     short loc_62EEE0
0x62EE6B: mov     ecx, [esi+44h]
0x62EE6E: mov     ecx, [ecx]; this
0x62EE70: call    TESObjectREFR_GetOwner
0x62EE75: test    eax, eax
0x62EE77: jz      short loc_62EE9A
0x62EE79: cmp     byte ptr [eax+4], 23h ; '#'
0x62EE7D: jnz     short loc_62EE9A
0x62EE7F: mov     edx, [esi+44h]
0x62EE82: mov     ecx, [edx]; this
0x62EE84: call    TESObjectREFR_GetOwner
0x62EE89: test    eax, eax
0x62EE8B: jz      short loc_62EE9A
0x62EE8D: push    eax
0x62EE8E: mov     ecx, offset ActorProcessManager_ptr
0x62EE93: call    sub_675220
0x62EE98: mov     ebp, eax
0x62EE9A: mov     eax, [esi+44h]
0x62EE9D: mov     ebx, [eax]
0x62EE9F: mov     edx, [edi]
0x62EEA1: mov     eax, [edx+170h]
0x62EEA7: mov     ecx, edi
0x62EEA9: add     ebx, 44h ; 'D'
0x62EEAC: call    eax
0x62EEAE: push    eax
0x62EEAF: mov     ecx, ebx
0x62EEB1: call    ExtraDataList__SetOrRemoveExtraOwnership
0x62EEB6: mov     ecx, [esi+44h]
0x62EEB9: mov     edx, [ecx+18h]
0x62EEBC: push    4000h
0x62EEC1: push    edx
0x62EEC2: push    ebp
0x62EEC3: call    Script_AddEventToExtraScript
0x62EEC8: mov     eax, [esi+44h]
0x62EECB: mov     ecx, [eax+4]
0x62EECE: add     esp, 0Ch
0x62EED1: push    1
0x62EED3: push    ecx
0x62EED4: mov     ecx, [eax]
0x62EED6: push    0
0x62EED8: push    edi
0x62EED9: call    ActivateRef
0x62EEDE: jmp     short loc_62EF1D
0x62EEE0: mov     edx, [esi+44h]
0x62EEE3: mov     eax, [edx+18h]
0x62EEE6: mov     ebp, [esi+2Ch]
0x62EEE9: push    4000h
0x62EEEE: push    eax
0x62EEEF: push    ebp
0x62EEF0: call    Script_AddEventToExtraScript
0x62EEF5: mov     eax, [esi+44h]
0x62EEF8: mov     ecx, [eax+4]
0x62EEFB: mov     edx, [ebp+0]
0x62EEFE: mov     edx, [edx+100h]
0x62EF04: add     esp, 0Ch
0x62EF07: push    0
0x62EF09: push    1
0x62EF0B: push    0
0x62EF0D: push    0
0x62EF0F: push    edi
0x62EF10: push    0
0x62EF12: push    0
0x62EF14: push    1
0x62EF16: push    0
0x62EF18: push    ecx
0x62EF19: mov     ecx, ebp
0x62EF1B: call    edx
0x62EF1D: test    ebp, ebp
0x62EF1F: jz      short loc_62EF37
0x62EF21: cmp     ebp, edi
0x62EF23: jz      short loc_62EF37
0x62EF25: fld     [esp+20h+arg_0]
0x62EF29: call    Double_To_SInt32
0x62EF2E: push    eax
0x62EF2F: push    ebp
0x62EF30: mov     ecx, edi
0x62EF32: call    sub_5E4A40
0x62EF37: mov     eax, [esi+44h]
0x62EF3A: test    eax, eax
0x62EF3C: jz      short loc_62EF47
0x62EF3E: push    eax
0x62EF3F: call    FormHeapFree
0x62EF44: add     esp, 4
0x62EF47: mov     dword ptr [esi+44h], 0
0x62EF4E: mov     byte ptr [esi+0D0h], 0
0x62EF55: pop     edi
0x62EF56: pop     esi
0x62EF57: pop     ebp
0x62EF58: pop     ebx
0x62EF59: add     esp, 10h
0x62EF5C: retn    4
0x62EF5F: mov     eax, [esi]
0x62EF61: mov     edx, [eax+188h]
0x62EF67: push    1
0x62EF69: push    edi
0x62EF6A: mov     ecx, esi
0x62EF6C: call    edx
0x62EF6E: pop     edi
0x62EF6F: pop     esi
0x62EF70: pop     ebp
0x62EF71: pop     ebx
0x62EF72: add     esp, 10h
0x62EF75: retn    4
