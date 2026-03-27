0x50BB70: push    0FFFFFFFFh
0x50BB72: push    offset SEH_50BB70
0x50BB77: mov     eax, large fs:0
0x50BB7D: push    eax
0x50BB7E: sub     esp, 30h
0x50BB81: push    esi
0x50BB82: mov     eax, ds:0B30AACh
0x50BB87: xor     eax, esp
0x50BB89: push    eax
0x50BB8A: lea     eax, [esp+44h+var_C]
0x50BB8E: mov     large fs:0, eax
0x50BB94: mov     edx, [esp+44h+l]
0x50BB98: lea     eax, [esp+44h+var_38]
0x50BB9C: push    eax
0x50BB9D: mov     eax, [esp+48h+arg_10]
0x50BBA1: lea     ecx, [esp+48h+var_3C]
0x50BBA5: push    ecx; UInt16
0x50BBA6: mov     ecx, [esp+4Ch+arg_C]
0x50BBAA: push    edx; l
0x50BBAB: mov     edx, [esp+50h+a4]
0x50BBAF: push    eax; a6
0x50BBB0: mov     eax, [esp+54h+a3]
0x50BBB4: push    ecx; a5
0x50BBB5: mov     ecx, [esp+58h+arg_4]
0x50BBB9: push    edx; a4
0x50BBBA: mov     edx, [esp+5Ch+a1]
0x50BBBE: push    eax; a3
0x50BBBF: push    ecx; a2
0x50BBC0: push    edx; a1
0x50BBC1: mov     dword ptr [esp+68h+var_3C], 0
0x50BBC9: mov     [esp+68h+var_38], 0
0x50BBD1: call    Script_ExtractArgs
0x50BBD6: add     esp, 24h
0x50BBD9: test    al, al
0x50BBDB: jnz     short loc_50BBEE
0x50BBDD: mov     ecx, [esp+44h+var_C]
0x50BBE1: mov     large fs:0, ecx
0x50BBE8: pop     ecx
0x50BBE9: pop     esi
0x50BBEA: add     esp, 3Ch
0x50BBED: retn
0x50BBEE: cmp     [esp+44h+var_38], 0
0x50BBF3: mov     eax, dword ptr [esp+44h+var_3C]
0x50BBF7: push    4
0x50BBF9: mov     ecx, eax
0x50BBFB: jz      loc_50BD5F
0x50BC01: or      byte ptr [eax+34h], 8
0x50BC05: mov     eax, [ecx]
0x50BC07: mov     edx, [eax+40h]
0x50BC0A: call    edx
0x50BC0C: mov     ecx, ds:0B333C4h; this
0x50BC12: call    TESObjectREFR_GetParentCell
0x50BC17: test    eax, eax
0x50BC19: jz      loc_50BD6A
0x50BC1F: mov     ecx, eax
0x50BC21: call    TESObjectCELL_GetOwner
0x50BC26: cmp     eax, dword ptr [esp+44h+var_3C]
0x50BC2A: jnz     loc_50BD6A
0x50BC30: mov     eax, ds:0B333C4h
0x50BC35: push    0
0x50BC37: push    eax
0x50BC38: mov     ecx, offset ActorProcessManager_ptr
0x50BC3D: call    sub_675D50
0x50BC42: call    sub_67F0A0
0x50BC47: push    1
0x50BC49: mov     byte ptr [esp+48h+var_34], al
0x50BC4D: call    sub_67F0B0
0x50BC52: call    sub_67F0C0
0x50BC57: push    1
0x50BC59: mov     byte ptr [esp+4Ch+var_30], al
0x50BC5D: call    sub_67F0D0
0x50BC62: add     esp, 8
0x50BC65: push    0; int
0x50BC67: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x50BC6C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x50BC71: push    0; int
0x50BC73: push    3Ch ; '<'; a1
0x50BC75: call    TESForm_LookupByFormID
0x50BC7A: add     esp, 4
0x50BC7D: push    eax; void *
0x50BC7E: call    OblivionDynamicCast
0x50BC83: add     esp, 14h
0x50BC86: lea     ecx, [esp+44h+var_20]
0x50BC8A: mov     esi, eax
0x50BC8C: call    sub_68A9F0
0x50BC91: fld     dword ptr ds:0A32048h
0x50BC97: mov     edx, ds:0B333C4h
0x50BC9D: fst     [esp+44h+var_2C]
0x50BCA1: push    esi
0x50BCA2: fst     [esp+48h+var_28]
0x50BCA6: push    0
0x50BCA8: fstp    [esp+4Ch+var_24]
0x50BCAC: lea     ecx, [esp+4Ch+var_2C]
0x50BCB0: push    ecx
0x50BCB1: push    edx
0x50BCB2: lea     ecx, [esp+54h+var_20]
0x50BCB6: mov     [esp+54h+var_4], 0
0x50BCBE: call    sub_68B030
0x50BCC3: mov     eax, [esp+44h+var_34]
0x50BCC7: push    eax
0x50BCC8: call    sub_67F0B0
0x50BCCD: mov     ecx, [esp+48h+var_30]
0x50BCD1: push    ecx
0x50BCD2: call    sub_67F0D0
0x50BCD7: add     esp, 8
0x50BCDA: push    0
0x50BCDC: push    0
0x50BCDE: lea     ecx, [esp+4Ch+var_20]
0x50BCE2: call    sub_68A890
0x50BCE7: test    eax, eax
0x50BCE9: jz      short loc_50BD3B
0x50BCEB: mov     ecx, eax; this
0x50BCED: call    GetTeleportExtraData
0x50BCF2: mov     esi, eax
0x50BCF4: test    esi, esi
0x50BCF6: jz      short loc_50BD3B
0x50BCF8: mov     ecx, esi
0x50BCFA: call    sub_42B410
0x50BCFF: test    eax, eax
0x50BD01: jz      short loc_50BD3B
0x50BD03: mov     ecx, esi
0x50BD05: call    sub_42B410
0x50BD0A: push    0; int
0x50BD0C: mov     esi, eax
0x50BD0E: mov     edx, [esi]
0x50BD10: mov     eax, [edx+170h]
0x50BD16: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x50BD1B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x50BD20: push    0; int
0x50BD22: mov     ecx, esi
0x50BD24: call    eax
0x50BD26: push    eax; void *
0x50BD27: call    OblivionDynamicCast
0x50BD2C: add     esp, 14h
0x50BD2F: test    eax, eax
0x50BD31: jz      short loc_50BD3B
0x50BD33: push    esi
0x50BD34: mov     ecx, eax
0x50BD36: call    sub_4B7B40
0x50BD3B: lea     ecx, [esp+44h+var_20]
0x50BD3F: mov     [esp+44h+var_4], 0FFFFFFFFh
0x50BD47: call    sub_68AA10
0x50BD4C: mov     al, 1
0x50BD4E: mov     ecx, [esp+44h+var_C]
0x50BD52: mov     large fs:0, ecx
0x50BD59: pop     ecx
0x50BD5A: pop     esi
0x50BD5B: add     esp, 3Ch
0x50BD5E: retn
0x50BD5F: mov     edx, [ecx]
0x50BD61: and     byte ptr [eax+34h], 0F7h
0x50BD65: mov     eax, [edx+40h]
0x50BD68: call    eax
0x50BD6A: mov     al, 1
0x50BD6C: mov     ecx, [esp+44h+var_C]
0x50BD70: mov     large fs:0, ecx
0x50BD77: pop     ecx
0x50BD78: pop     esi
0x50BD79: add     esp, 3Ch
0x50BD7C: retn
