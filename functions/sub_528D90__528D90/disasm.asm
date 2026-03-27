0x528D90: push    0FFFFFFFFh
0x528D92: push    offset SEH_528D90
0x528D97: mov     eax, large fs:0
0x528D9D: push    eax
0x528D9E: sub     esp, 130h
0x528DA4: push    ebx
0x528DA5: push    ebp
0x528DA6: push    esi
0x528DA7: push    edi
0x528DA8: mov     eax, ds:0B30AACh
0x528DAD: xor     eax, esp
0x528DAF: push    eax
0x528DB0: lea     eax, [esp+150h+var_C]
0x528DB7: mov     large fs:0, eax
0x528DBD: mov     ebx, ecx
0x528DBF: mov     dword ptr [esp+150h+var_120.member.type], ebx
0x528DC3: mov     [esp+150h+anonymous_0], 0
0x528DC8: mov     [esp+150h+var_12C], 0
0x528DD0: lea     eax, [ebx+108h]
0x528DD6: jmp     short loc_528DE0
0x528DD8: align 10h
0x528DE0: mov     [esp+150h+var_130], 0
0x528DE8: mov     [esp+150h+var_134], eax
0x528DEC: lea     esp, [esp+0]
0x528DF0: mov     eax, [esp+150h+var_134]
0x528DF4: mov     ecx, [eax]
0x528DF6: mov     eax, [eax+4]
0x528DF9: xor     ebp, ebp
0x528DFB: test    ecx, ecx
0x528DFD: mov     [esp+150h+var_138], ecx
0x528E01: mov     [esp+150h+var_120.member.flags], eax
0x528E05: jbe     loc_528EBA
0x528E0B: mov     ecx, [esp+150h+var_12C]
0x528E0F: mov     edx, [esp+150h+var_130]
0x528E13: add     ecx, edx
0x528E15: mov     [esp+150h+var_128], ecx
0x528E19: lea     esp, [esp+0]
0x528E20: xor     edi, edi
0x528E22: cmp     [esp+150h+var_120.member.flags], edi
0x528E26: jbe     loc_528EAD
0x528E2C: mov     eax, [esp+150h+var_128]
0x528E30: lea     eax, [eax+eax*2+21h]
0x528E34: lea     esi, [ebx+eax*8]
0x528E37: push    4; a2
0x528E39: lea     ecx, [esp+154h+var_120]
0x528E3D: push    ecx; a1
0x528E3E: mov     ecx, ebx
0x528E40: call    TESForm_LoadDataFromCurrentSaveGame
0x528E45: mov     eax, [esi+0Ch]
0x528E48: test    eax, eax
0x528E4A: jz      short loc_528E56
0x528E4C: mov     edx, [esi+10h]
0x528E4F: sub     edx, eax
0x528E51: sar     edx, 2
0x528E54: jnz     short loc_528E5B
0x528E56: call    __invalid_parameter_noinfo
0x528E5B: mov     eax, [esi+4]
0x528E5E: mov     ecx, [esi+0Ch]
0x528E61: imul    eax, ebp
0x528E64: lea     eax, [ecx+eax*4]
0x528E67: fld     dword ptr [eax+edi*4]
0x528E6A: fld     [esp+150h+var_120.vtbl]
0x528E6E: fucompp
0x528E70: fnstsw  ax
0x528E72: test    ah, 44h
0x528E75: jnp     short loc_528EA4
0x528E77: mov     eax, ecx
0x528E79: test    eax, eax
0x528E7B: jz      short loc_528E87
0x528E7D: mov     edx, [esi+10h]
0x528E80: sub     edx, eax
0x528E82: sar     edx, 2
0x528E85: jnz     short loc_528E8C
0x528E87: call    __invalid_parameter_noinfo
0x528E8C: mov     eax, [esi+4]
0x528E8F: fld     [esp+150h+var_120.vtbl]
0x528E93: mov     ecx, [esi+0Ch]
0x528E96: imul    eax, ebp
0x528E99: lea     eax, [ecx+eax*4]
0x528E9C: mov     [esp+150h+anonymous_0], 1
0x528EA1: fstp    dword ptr [eax+edi*4]
0x528EA4: add     edi, 1
0x528EA7: cmp     edi, [esp+150h+var_120.member.flags]
0x528EAB: jb      short loc_528E37
0x528EAD: add     ebp, 1
0x528EB0: cmp     ebp, [esp+150h+var_138]
0x528EB4: jb      loc_528E20
0x528EBA: mov     eax, [esp+150h+var_130]
0x528EBE: add     [esp+150h+var_134], 18h
0x528EC3: add     eax, 1
0x528EC6: cmp     eax, 2
0x528EC9: mov     [esp+150h+var_130], eax
0x528ECD: jb      loc_528DF0
0x528ED3: mov     ecx, [esp+150h+var_12C]
0x528ED7: mov     eax, [esp+150h+var_134]
0x528EDB: add     ecx, 2
0x528EDE: cmp     ecx, 4
0x528EE1: mov     [esp+150h+var_12C], ecx
0x528EE5: jb      loc_528DE0
0x528EEB: mov     ecx, [ebx+0E8h]
0x528EF1: test    ecx, ecx
0x528EF3: mov     [esp+150h+anonymous_1], 0
0x528EF8: jz      short loc_528F0A
0x528EFA: push    0
0x528EFC: call    sub_52BDB0
0x528F01: test    eax, eax
0x528F03: setnz   [esp+150h+anonymous_1]
0x528F08: jmp     short loc_528F27
0x528F0A: mov     eax, [ebx+0A4h]
0x528F10: test    eax, eax
0x528F12: jnz     short loc_528F19
0x528F14: mov     eax, offset EmptyString
0x528F19: push    eax; ArgList
0x528F1A: push    offset aSHasABadCurren; "%s has a bad current race when loading "...
0x528F1F: call    PrintError
0x528F24: add     esp, 8
0x528F27: push    4; a2
0x528F29: lea     edx, [esp+154h+a1]
0x528F2D: push    edx; a1
0x528F2E: mov     ecx, ebx
0x528F30: call    TESForm_LoadFormIDFromCurrentSaveGame
0x528F35: mov     eax, [esp+158h+var_12C]
0x528F39: push    0; int
0x528F3B: push    offset ??_R0?AVTESRace@@@8; struct TypeDescriptor *
0x528F40: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x528F45: push    0; int
0x528F47: push    eax; a1
0x528F48: call    TESForm_LookupByFormID
0x528F4D: add     esp, 4
0x528F50: push    eax; void *
0x528F51: call    OblivionDynamicCast
0x528F56: mov     ecx, [esp+16Ch+var_12C]
0x528F5A: add     esp, 14h
0x528F5D: test    ecx, ecx
0x528F5F: mov     esi, eax
0x528F61: jz      short loc_528F85
0x528F63: test    esi, esi
0x528F65: jnz     short loc_528F85
0x528F67: mov     eax, [ebx+0A4h]
0x528F6D: test    eax, eax
0x528F6F: jnz     short loc_528F76
0x528F71: mov     eax, offset EmptyString
0x528F76: push    ecx
0x528F77: push    eax; ArgList
0x528F78: push    offset aNpcSCouldNotFi; "NPC %s could not find race %08X"
0x528F7D: call    PrintError
0x528F82: add     esp, 0Ch
0x528F85: cmp     [ebx+0E8h], esi
0x528F8B: jz      short loc_528F92
0x528F8D: mov     byte ptr [esp+158h+anonymous_5], 1
0x528F92: test    esi, esi
0x528F94: mov     [ebx+0E8h], esi
0x528F9A: mov     byte ptr [esp+158h+anonymous_5+2], 0
0x528F9F: jz      short loc_528FB3
0x528FA1: push    0
0x528FA3: mov     ecx, esi
0x528FA5: call    sub_52BDB0
0x528FAA: test    eax, eax
0x528FAC: setnz   byte ptr [esp+158h+anonymous_5+2]
0x528FB1: jmp     short loc_528FD0
0x528FB3: mov     eax, [ebx+0A4h]
0x528FB9: test    eax, eax
0x528FBB: jnz     short loc_528FC2
0x528FBD: mov     eax, offset EmptyString
0x528FC2: push    eax; ArgList
0x528FC3: push    offset aSHasABadNewRac; "%s has a bad new race when loading face"...
0x528FC8: call    PrintError
0x528FCD: add     esp, 8
0x528FD0: push    4; a2
0x528FD2: lea     ecx, [esp+15Ch+var_120.member.flags]
0x528FD6: push    ecx; a1
0x528FD7: mov     ecx, ebx
0x528FD9: call    TESForm_LoadFormIDFromCurrentSaveGame
0x528FDE: mov     edx, [esp+160h+var_120.vtbl]
0x528FE2: push    0; int
0x528FE4: push    offset ??_R0?AVTESHair@@@8; struct TypeDescriptor *
0x528FE9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x528FEE: push    0; int
0x528FF0: push    edx; a1
0x528FF1: call    TESForm_LookupByFormID
0x528FF6: add     esp, 4
0x528FF9: push    eax; void *
0x528FFA: call    OblivionDynamicCast
0x528FFF: mov     ecx, [esp+174h+var_120.vtbl]
0x529003: add     esp, 14h
0x529006: test    ecx, ecx
0x529008: mov     esi, eax
0x52900A: jz      short loc_52902E
0x52900C: test    esi, esi
0x52900E: jnz     short loc_52902E
0x529010: mov     eax, [ebx+0A4h]
0x529016: test    eax, eax
0x529018: jnz     short loc_52901F
0x52901A: mov     eax, offset EmptyString
0x52901F: push    ecx
0x529020: push    eax; ArgList
0x529021: push    offset aNpcSCouldNot_0; "NPC %s could not find hair %08X"
0x529026: call    PrintError
0x52902B: add     esp, 0Ch
0x52902E: cmp     [ebx+1C8h], esi
0x529034: jz      short loc_52903B
0x529036: mov     byte ptr [esp+160h+anonymous_3], 1
0x52903B: push    4; a2
0x52903D: lea     eax, [esp+164h+a1]
0x529041: push    eax; a1
0x529042: mov     ecx, ebx
0x529044: mov     [ebx+1C8h], esi
0x52904A: call    TESForm_LoadFormIDFromCurrentSaveGame
0x52904F: mov     ecx, [esp+168h+var_12C]
0x529053: push    0; int
0x529055: push    offset ??_R0?AVTESEyes@@@8; struct TypeDescriptor *
0x52905A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52905F: push    0; int
0x529061: push    ecx; a1
0x529062: call    TESForm_LookupByFormID
0x529067: add     esp, 4
0x52906A: push    eax; void *
0x52906B: call    OblivionDynamicCast
0x529070: mov     ecx, [esp+17Ch+var_12C]
0x529074: add     esp, 14h
0x529077: test    ecx, ecx
0x529079: mov     esi, eax
0x52907B: jz      short loc_52909F
0x52907D: test    esi, esi
0x52907F: jnz     short loc_52909F
0x529081: mov     eax, [ebx+0A4h]
0x529087: test    eax, eax
0x529089: jnz     short loc_529090
0x52908B: mov     eax, offset EmptyString
0x529090: push    ecx
0x529091: push    eax; ArgList
0x529092: push    offset aNpcSCouldNot_1; "NPC %s could not find eyes %08X"
0x529097: call    PrintError
0x52909C: add     esp, 0Ch
0x52909F: cmp     [ebx+1D0h], esi
0x5290A5: jz      short loc_5290AC
0x5290A7: mov     byte ptr [esp+168h+var_154], 1
0x5290AC: push    4; a2
0x5290AE: lea     edx, [esp+16Ch+a1]
0x5290B2: push    edx; a1
0x5290B3: mov     ecx, ebx
0x5290B5: mov     [ebx+1D0h], esi
0x5290BB: call    TESForm_LoadDataFromCurrentSaveGame
0x5290C0: push    4; a2
0x5290C2: lea     eax, [esp+16Ch+var_120.member]
0x5290C6: push    eax; a1
0x5290C7: mov     ecx, ebx
0x5290C9: call    TESForm_LoadDataFromCurrentSaveGame
0x5290CE: fld     dword ptr [ebx+1CCh]
0x5290D4: fld     [esp+168h+a1]
0x5290D8: fld     st
0x5290DA: fucomp  st(2)
0x5290DC: fnstsw  ax
0x5290DE: fstp    st(1)
0x5290E0: test    ah, 44h
0x5290E3: mov     eax, dword ptr [esp+168h+var_120.member.type]
0x5290E7: jp      short loc_5290F1
0x5290E9: cmp     [ebx+1E8h], eax
0x5290EF: jz      short loc_5290F6
0x5290F1: mov     byte ptr [esp+168h+var_154], 1
0x5290F6: push    1; a2
0x5290F8: fstp    dword ptr [ebx+1CCh]
0x5290FE: lea     ecx, [esp+16Ch+var_154+3]
0x529102: push    ecx; a1
0x529103: mov     ecx, ebx
0x529105: mov     [ebx+1E8h], eax
0x52910B: call    TESForm_LoadDataFromCurrentSaveGame
0x529110: mov     dl, [ebx+28h]
0x529113: mov     al, byte ptr [esp+168h+var_154+3]
0x529117: and     dl, 1
0x52911A: cmp     dl, al
0x52911C: jz      short loc_529123
0x52911E: mov     byte ptr [esp+168h+var_154], 1
0x529123: test    al, al
0x529125: lea     ecx, [ebx+24h]
0x529128: jz      short loc_529130
0x52912A: or      dword ptr [ecx+4], 1
0x52912E: jmp     short loc_529134
0x529130: and     dword ptr [ecx+4], 0FFFFFFFEh
0x529134: mov     eax, [ecx]
0x529136: mov     edx, [eax+50h]
0x529139: push    10h
0x52913B: call    edx
0x52913D: cmp     [esp+150h+anonymous_0], 0
0x529142: jz      loc_52950C
0x529148: mov     eax, [ebx]
0x52914A: mov     edx, [eax+128h]
0x529150: push    45h ; 'E'
0x529152: mov     ecx, ebx
0x529154: call    edx
0x529156: mov     [esp+150h+var_128], eax
0x52915A: mov     eax, [ebx]
0x52915C: mov     edx, [eax+134h]
0x529162: push    0
0x529164: push    45h ; 'E'
0x529166: mov     ecx, ebx
0x529168: call    edx
0x52916A: mov     esi, [esp+150h+arg_0]
0x529171: mov     ecx, [esi+3Ch]
0x529174: xor     edi, edi
0x529176: test    ecx, ecx
0x529178: jz      short loc_529183
0x52917A: mov     eax, [ecx]
0x52917C: mov     edx, [eax+8]
0x52917F: call    edx
0x529181: mov     edi, eax
0x529183: mov     al, [esp+150h+anonymous_6]
0x529187: cmp     [esp+150h+anonymous_1], al
0x52918B: jnz     loc_529377
0x529191: test    edi, edi
0x529193: jz      loc_52927D
0x529199: mov     ecx, esi
0x52919B: xor     ebp, ebp
0x52919D: call    TESObjectREFR_GetAnimData
0x5291A2: test    eax, eax
0x5291A4: jz      short loc_5291C5
0x5291A6: mov     ecx, esi
0x5291A8: call    TESObjectREFR_GetAnimData
0x5291AD: cmp     [eax+98h], ebp
0x5291B3: jz      short loc_5291C5
0x5291B5: mov     ecx, esi
0x5291B7: call    TESObjectREFR_GetAnimData
0x5291BC: mov     eax, [eax+98h]
0x5291C2: mov     ebp, [eax+7Ch]
0x5291C5: mov     edx, [esi]
0x5291C7: mov     eax, [edx+134h]
0x5291CD: push    0
0x5291CF: mov     ecx, esi
0x5291D1: call    eax
0x5291D3: mov     ebx, ds:0A2807Ch
0x5291D9: mov     edi, eax
0x5291DB: test    edi, edi
0x5291DD: jz      short loc_529224
0x5291DF: cmp     dword ptr [edi+1Ch], 0
0x5291E3: jz      short loc_529224
0x5291E5: push    ebp
0x5291E6: push    edi
0x5291E7: call    sub_716620
0x5291EC: mov     ecx, [edi+1Ch]
0x5291EF: mov     edx, [ecx]
0x5291F1: mov     edx, [edx+88h]
0x5291F7: add     esp, 8
0x5291FA: push    edi
0x5291FB: lea     eax, [esp+154h+var_138]
0x5291FF: push    eax
0x529200: call    edx
0x529202: mov     eax, [esp+150h+var_138]
0x529206: test    eax, eax
0x529208: jz      short loc_529224
0x52920A: mov     edi, eax
0x52920C: add     eax, 4
0x52920F: push    eax; lpAddend
0x529210: call    ebx ; InterlockedDecrement
0x529212: test    eax, eax
0x529214: jnz     short loc_529224
0x529216: test    edi, edi
0x529218: jz      short loc_529224
0x52921A: mov     eax, [edi]
0x52921C: mov     edx, [eax]
0x52921E: push    1
0x529220: mov     ecx, edi
0x529222: call    edx
0x529224: mov     eax, [esi]
0x529226: mov     edx, [eax+130h]
0x52922C: push    0
0x52922E: mov     ecx, esi
0x529230: call    edx
0x529232: mov     edi, eax
0x529234: test    edi, edi
0x529236: jz      short loc_52927D
0x529238: cmp     dword ptr [edi+1Ch], 0
0x52923C: jz      short loc_52927D
0x52923E: push    ebp
0x52923F: push    edi
0x529240: call    sub_716620
0x529245: mov     ecx, [edi+1Ch]
0x529248: mov     eax, [ecx]
0x52924A: mov     eax, [eax+88h]
0x529250: add     esp, 8
0x529253: push    edi
0x529254: lea     edx, [esp+154h+var_138]
0x529258: push    edx
0x529259: call    eax
0x52925B: mov     eax, [esp+150h+var_138]
0x52925F: test    eax, eax
0x529261: jz      short loc_52927D
0x529263: mov     edi, eax
0x529265: add     eax, 4
0x529268: push    eax; lpAddend
0x529269: call    ebx ; InterlockedDecrement
0x52926B: test    eax, eax
0x52926D: jnz     short loc_52927D
0x52926F: test    edi, edi
0x529271: jz      short loc_52927D
0x529273: mov     edx, [edi]
0x529275: mov     eax, [edx]
0x529277: push    1
0x529279: mov     ecx, edi
0x52927B: call    eax
0x52927D: push    3
0x52927F: call    nullsub_returnTrue_0arg
0x529284: mov     edi, dword ptr [esp+154h+var_120.member.type]
0x529288: add     esp, 4
0x52928B: mov     ecx, edi
0x52928D: call    sub_405CE0
0x529292: push    2
0x529294: call    nullsub_returnTrue_0arg
0x529299: mov     eax, [esi+104h]
0x52929F: add     esp, 4
0x5292A2: test    eax, eax
0x5292A4: jz      short loc_5292AF
0x5292A6: push    eax
0x5292A7: push    esi
0x5292A8: mov     ecx, edi
0x5292AA: call    sub_525A70
0x5292AF: mov     edx, [esi]
0x5292B1: mov     eax, [edx+130h]
0x5292B7: push    0
0x5292B9: mov     ecx, esi
0x5292BB: call    eax
0x5292BD: test    eax, eax
0x5292BF: jz      loc_52935B
0x5292C5: mov     edx, [esi]
0x5292C7: mov     eax, [edx+134h]
0x5292CD: push    0
0x5292CF: mov     ecx, esi
0x5292D1: call    eax
0x5292D3: test    eax, eax
0x5292D5: jz      loc_52935B
0x5292DB: lea     ecx, [esp+150h+var_D0]
0x5292E2: call    FaceGenHeadParameters_Ctor
0x5292E7: mov     ecx, [edi+0E8h]
0x5292ED: lea     edx, [esp+150h+var_D0]
0x5292F4: push    edx
0x5292F5: push    edi
0x5292F6: mov     [esp+158h+var_4], 0
0x529301: call    TESRace_GetFaceGenHeadParameters
0x529306: mov     edx, [esi]
0x529308: lea     eax, [esp+150h+var_D0]
0x52930F: push    eax
0x529310: mov     eax, [edx+130h]
0x529316: push    0
0x529318: mov     ecx, esi
0x52931A: call    eax
0x52931C: push    eax
0x52931D: call    BSFaceGen_DoSomethingWithFaceGenNode
0x529322: mov     edx, [esi]
0x529324: mov     eax, [edx+134h]
0x52932A: add     esp, 8
0x52932D: lea     ecx, [esp+14Ch+var_CC]
0x529334: push    ecx
0x529335: push    0
0x529337: mov     ecx, esi
0x529339: call    eax
0x52933B: push    eax
0x52933C: call    BSFaceGen_DoSomethingWithFaceGenNode
0x529341: add     esp, 8
0x529344: lea     ecx, [esp+150h+var_D0]
0x52934B: mov     [esp+150h+var_4], 0FFFFFFFFh
0x529356: call    FaceGenHeadParameters_Dtor
0x52935B: mov     ecx, [esi+58h]
0x52935E: test    ecx, ecx
0x529360: jz      loc_5294F9
0x529366: mov     edx, [ecx]
0x529368: mov     eax, [edx+31Ch]
0x52936E: push    1
0x529370: call    eax
0x529372: jmp     loc_5294F9
0x529377: push    3
0x529379: xor     ebp, ebp
0x52937B: call    nullsub_returnTrue_0arg
0x529380: add     esp, 4
0x529383: mov     ecx, ebx
0x529385: call    sub_405CE0
0x52938A: push    2
0x52938C: call    nullsub_returnTrue_0arg
0x529391: mov     ecx, ds:0B333C4h; this
0x529397: mov     dl, [ecx+588h]
0x52939D: add     esp, 4
0x5293A0: push    ebp; a1
0x5293A1: mov     [esp+154h+anonymous_1], dl
0x5293A5: call    TogglePOV
0x5293AA: test    edi, edi
0x5293AC: jz      short loc_5293C1
0x5293AE: mov     ecx, esi; this
0x5293B0: call    TESObjectREFR__GetNiNode
0x5293B5: mov     ebp, [eax+1Ch]
0x5293B8: push    0
0x5293BA: mov     ecx, esi
0x5293BC: call    Character_Set3D
0x5293C1: cmp     [esp+150h+anonymous_6], 0
0x5293C6: lea     ecx, [ebx+0ACh]
0x5293CC: jz      short loc_5293DE
0x5293CE: mov     eax, [ecx]
0x5293D0: mov     edx, ds:0B38B68h
0x5293D6: mov     eax, [eax+18h]
0x5293D9: push    edx
0x5293DA: call    eax
0x5293DC: jmp     short loc_5293EB
0x5293DE: mov     edx, [ecx]
0x5293E0: mov     eax, ds:0B38B70h
0x5293E5: mov     edx, [edx+18h]
0x5293E8: push    eax
0x5293E9: call    edx
0x5293EB: test    ebp, ebp
0x5293ED: jz      loc_5294E1
0x5293F3: mov     ecx, esi
0x5293F5: mov     byte ptr ds:0B33D80h, 1
0x5293FC: call    MobileObject_GenerateNiNode
0x529401: mov     edi, eax
0x529403: mov     eax, [esi]
0x529405: mov     edx, [eax+134h]
0x52940B: push    0
0x52940D: mov     ecx, esi
0x52940F: call    edx
0x529411: test    eax, eax
0x529413: jnz     short loc_529481
0x529415: mov     eax, [esi]
0x529417: mov     edx, [eax+130h]
0x52941D: push    0
0x52941F: mov     ecx, esi
0x529421: call    edx
0x529423: test    eax, eax
0x529425: jnz     short loc_529481
0x529427: push    eax; a2
0x529428: mov     ecx, esi; this
0x52942A: call    Actor_GetActorBaseForm
0x52942F: push    0
0x529431: push    eax
0x529432: lea     ecx, [esp+158h+var_100]
0x529436: call    sub_437970
0x52943B: lea     ecx, [esp+150h+var_100]
0x52943F: mov     [esp+150h+var_4], 1
0x52944A: call    sub_435300
0x52944F: mov     eax, [esp+150h+var_100]
0x529453: mov     edx, [eax+28h]
0x529456: lea     ecx, [esp+150h+var_100]
0x52945A: call    edx
0x52945C: mov     eax, [esi+104h]
0x529462: push    eax
0x529463: push    esi
0x529464: lea     ecx, [esp+158h+var_100]
0x529468: call    sub_4353D0
0x52946D: lea     ecx, [esp+150h+var_100]; this
0x529471: mov     [esp+150h+var_4], 0FFFFFFFFh
0x52947C: call    ??1QueuedHead@@UAE@XZ; QueuedHead::~QueuedHead(void)
0x529481: mov     eax, [ebp+0]
0x529484: mov     edx, [eax+84h]
0x52948A: push    1
0x52948C: push    edi
0x52948D: mov     ecx, ebp
0x52948F: call    edx
0x529491: mov     ecx, ds:0B333C4h
0x529497: cmp     esi, ecx
0x529499: mov     byte ptr ds:0B33D80h, 0
0x5294A0: jnz     short loc_5294AA
0x5294A2: push    0
0x5294A4: push    edi
0x5294A5: call    sub_65F910
0x5294AA: mov     eax, [esi]
0x5294AC: mov     edx, [eax+148h]
0x5294B2: mov     ecx, esi
0x5294B4: call    edx
0x5294B6: mov     eax, [esi+58h]
0x5294B9: push    0; int
0x5294BB: push    offset ??_R0?AVMiddleHighProcess@@@8; struct TypeDescriptor *
0x5294C0: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x5294C5: push    0; int
0x5294C7: push    eax; void *
0x5294C8: call    OblivionDynamicCast
0x5294CD: add     esp, 14h
0x5294D0: test    eax, eax
0x5294D2: jz      short loc_5294E1
0x5294D4: mov     edx, [eax]
0x5294D6: mov     ecx, eax
0x5294D8: mov     eax, [edx+3ECh]
0x5294DE: push    esi
0x5294DF: call    eax
0x5294E1: cmp     [esp+150h+anonymous_1], 0
0x5294E6: setz    cl
0x5294E9: push    ecx; a1
0x5294EA: mov     ecx, ds:0B333C4h; this
0x5294F0: call    TogglePOV
0x5294F5: mov     edi, dword ptr [esp+150h+var_120.member.type]
0x5294F9: mov     eax, [esp+150h+var_128]
0x5294FD: mov     edx, [edi]
0x5294FF: mov     edx, [edx+134h]
0x529505: push    eax
0x529506: push    45h ; 'E'
0x529508: mov     ecx, edi
0x52950A: call    edx
0x52950C: mov     ecx, dword ptr [esp+150h+var_C]
0x529513: mov     large fs:0, ecx
0x52951A: pop     ecx
0x52951B: pop     edi
0x52951C: pop     esi
0x52951D: pop     ebp
0x52951E: pop     ebx
0x52951F: add     esp, 13Ch
0x529525: retn    4
