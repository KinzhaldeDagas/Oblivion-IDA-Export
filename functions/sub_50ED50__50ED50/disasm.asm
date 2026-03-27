0x50ED50: push    0FFFFFFFFh
0x50ED52: push    offset SEH_50ED50
0x50ED57: mov     eax, large fs:0
0x50ED5D: push    eax
0x50ED5E: sub     esp, 4Ch
0x50ED61: push    ebx
0x50ED62: push    ebp
0x50ED63: push    esi
0x50ED64: push    edi
0x50ED65: mov     eax, ds:0B30AACh
0x50ED6A: xor     eax, esp
0x50ED6C: push    eax
0x50ED6D: lea     eax, [esp+6Ch+var_C]
0x50ED71: mov     large fs:0, eax
0x50ED77: push    0DCh ; 'Ü'; Size
0x50ED7C: call    FormHeapAlloc
0x50ED81: add     esp, 4
0x50ED84: mov     [esp+6Ch+var_4C], eax
0x50ED88: test    eax, eax
0x50ED8A: mov     [esp+6Ch+var_4], 0
0x50ED92: jz      short loc_50EDA1
0x50ED94: push    0
0x50ED96: mov     ecx, eax; this
0x50ED98: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x50ED9D: mov     ebp, eax
0x50ED9F: jmp     short loc_50EDA3
0x50EDA1: xor     ebp, ebp
0x50EDA3: mov     [esp+6Ch+var_4], 0FFFFFFFFh
0x50EDAB: call    sub_4E70B0
0x50EDB0: push    eax; a2
0x50EDB1: mov     ecx, ebp; this
0x50EDB3: call    sub_405680
0x50EDB8: mov     ecx, ds:0B333C4h; this
0x50EDBE: call    TESObjectREFR_GetParentCell
0x50EDC3: mov     edi, eax
0x50EDC5: mov     ecx, edi; this
0x50EDC7: call    TESObjectCELL_IsInterior
0x50EDCC: test    al, al
0x50EDCE: jz      loc_50EE75
0x50EDD4: mov     ecx, edi
0x50EDD6: call    sub_4CCED0
0x50EDDB: mov     esi, eax
0x50EDDD: test    esi, esi
0x50EDDF: jz      loc_50EF41
0x50EDE5: mov     ecx, ds:0B333C4h
0x50EDEB: mov     eax, [ecx]
0x50EDED: mov     edx, [eax+174h]
0x50EDF3: call    edx
0x50EDF5: fld     dword ptr [eax+8]
0x50EDF8: mov     eax, [esi]
0x50EDFA: fstp    [esp+6Ch+var_58]
0x50EDFE: fldz
0x50EE00: mov     edx, [eax+4]
0x50EE03: fst     [esp+6Ch+var_48]
0x50EE07: push    1
0x50EE09: lea     ecx, [esp+70h+var_48]
0x50EE0D: fstp    [esp+70h+var_44]
0x50EE11: fld     [esp+70h+var_58]
0x50EE15: push    ecx
0x50EE16: push    ebp
0x50EE17: fstp    [esp+78h+var_40]
0x50EE1B: mov     ecx, esi
0x50EE1D: call    edx
0x50EE1F: mov     ecx, edi
0x50EE21: call    sub_4CCE00
0x50EE26: fmul    qword ptr ds:0A3D360h
0x50EE2C: fstp    [esp+6Ch+var_58]
0x50EE30: fldz
0x50EE32: fld     [esp+6Ch+var_58]
0x50EE36: fucom   st(1)
0x50EE38: fnstsw  ax
0x50EE3A: fstp    st(1)
0x50EE3C: test    ah, 44h
0x50EE3F: jnp     loc_50EF3F
0x50EE45: mov     ecx, 9
0x50EE4A: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x50EE4F: lea     edi, [esp+6Ch+var_30]
0x50EE53: rep movsd
0x50EE55: push    ecx
0x50EE56: lea     ecx, [esp+70h+var_30]
0x50EE5A: fstp    [esp+70h+var_70]; float
0x50EE5D: call    NiMatrix33_InitRotationTransform
0x50EE62: lea     edi, [ebp+30h]
0x50EE65: mov     ecx, 9
0x50EE6A: lea     esi, [esp+6Ch+var_30]
0x50EE6E: rep movsd
0x50EE70: jmp     loc_50EF41
0x50EE75: mov     eax, ds:0B06A2Ch
0x50EE7A: xor     ecx, ecx
0x50EE7C: cmp     ecx, eax
0x50EE7E: mov     [esp+6Ch+var_58], ecx
0x50EE82: jnb     loc_50EF41
0x50EE88: xor     ebx, ebx
0x50EE8A: lea     ebx, [ebx+0]
0x50EE90: cmp     ebx, eax
0x50EE92: jnb     loc_50EF37
0x50EE98: mov     eax, ds:0B333A0h
0x50EE9D: push    ebx
0x50EE9E: push    ecx
0x50EE9F: mov     ecx, [eax+8]
0x50EEA2: call    GetGridEntry
0x50EEA7: mov     esi, [eax]
0x50EEA9: test    esi, esi
0x50EEAB: jz      short loc_50EF26
0x50EEAD: mov     ecx, esi
0x50EEAF: call    sub_4CCED0
0x50EEB4: mov     edi, eax
0x50EEB6: test    edi, edi
0x50EEB8: jz      short loc_50EF26
0x50EEBA: mov     ecx, esi; this
0x50EEBC: call    TESObjectCELL_GetXCoordinate
0x50EEC1: shl     eax, 0Ch
0x50EEC4: mov     [esp+6Ch+var_54], eax
0x50EEC8: fild    [esp+6Ch+var_54]
0x50EECC: mov     ecx, esi; this
0x50EECE: fstp    [esp+6Ch+var_50]
0x50EED2: call    TESObjectCELL_GetYCoordinate
0x50EED7: mov     ecx, ds:0B333C4h
0x50EEDD: mov     edx, [ecx]
0x50EEDF: shl     eax, 0Ch
0x50EEE2: mov     [esp+6Ch+var_54], eax
0x50EEE6: fild    [esp+6Ch+var_54]
0x50EEEA: mov     eax, [edx+174h]
0x50EEF0: fstp    [esp+6Ch+var_54]
0x50EEF4: call    eax
0x50EEF6: fld     dword ptr [eax+8]
0x50EEF9: mov     edx, [edi]
0x50EEFB: mov     edx, [edx+4]
0x50EEFE: fstp    [esp+6Ch+var_4C]
0x50EF02: fld     [esp+6Ch+var_50]
0x50EF06: push    1
0x50EF08: fstp    [esp+70h+var_3C]
0x50EF0C: lea     eax, [esp+70h+var_3C]
0x50EF10: fld     [esp+70h+var_54]
0x50EF14: push    eax
0x50EF15: fstp    [esp+74h+var_38]
0x50EF19: push    ebp
0x50EF1A: fld     [esp+78h+var_4C]
0x50EF1E: mov     ecx, edi
0x50EF20: fstp    [esp+78h+var_34]
0x50EF24: call    edx
0x50EF26: mov     eax, ds:0B06A2Ch
0x50EF2B: mov     ecx, [esp+6Ch+var_58]
0x50EF2F: add     ebx, 1
0x50EF32: jmp     loc_50EE90
0x50EF37: add     ecx, 1
0x50EF3A: jmp     loc_50EE7C
0x50EF3F: fstp    st
0x50EF41: fldz
0x50EF43: push    1; a3
0x50EF45: push    ecx
0x50EF46: fstp    [esp+74h+a2]; a2
0x50EF49: mov     ecx, ebp; this
0x50EF4B: call    NiAVObject_UpdateNiAVObject
0x50EF50: mov     ecx, ebp; this
0x50EF52: call    NiAVObject_InitializePropertyState
0x50EF57: fld     dword ptr ds:0A37CC8h
0x50EF5D: push    ecx
0x50EF5E: mov     ecx, ds:0B333A0h
0x50EF64: fstp    [esp+70h+var_70]; float
0x50EF67: push    ebp; int
0x50EF68: call    sub_440E60
0x50EF6D: mov     al, 1
0x50EF6F: mov     ecx, dword ptr [esp+6Ch+var_C]
0x50EF73: mov     large fs:0, ecx
0x50EF7A: pop     ecx
0x50EF7B: pop     edi
0x50EF7C: pop     esi
0x50EF7D: pop     ebp
0x50EF7E: pop     ebx
0x50EF7F: add     esp, 58h
0x50EF82: retn
