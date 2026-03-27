0x49E880: push    0FFFFFFFFh
0x49E882: push    offset CombinedWaterRelfectionPAsses_SEH
0x49E887: mov     eax, large fs:0
0x49E88D: push    eax
0x49E88E: sub     esp, 224h
0x49E894: mov     eax, ds:0B30AACh
0x49E899: xor     eax, esp
0x49E89B: mov     [esp+230h+var_10], eax
0x49E8A2: push    ebx
0x49E8A3: push    ebp
0x49E8A4: push    esi
0x49E8A5: push    edi
0x49E8A6: mov     eax, ds:0B30AACh
0x49E8AB: xor     eax, esp
0x49E8AD: push    eax
0x49E8AE: lea     eax, [esp+244h+var_C]
0x49E8B5: mov     large fs:0, eax
0x49E8BB: cmp     byte ptr ds:0B35228h, 0
0x49E8C2: mov     edi, [esp+244h+a2]
0x49E8C9: mov     esi, [esp+244h+a3]
0x49E8D0: mov     ebp, ecx
0x49E8D2: jz      short loc_49E8E0
0x49E8D4: mov     byte ptr ds:0B35228h, 0
0x49E8DB: jmp     loc_49F41C
0x49E8E0: push    1
0x49E8E2: call    GetGlobalScriptStateObj??
0x49E8E7: add     esp, 4
0x49E8EA: cmp     byte ptr [eax+31h], 0
0x49E8EE: jg      loc_49F41C
0x49E8F4: mov     ecx, ds:0B333C4h
0x49E8FA: test    ecx, ecx
0x49E8FC: jz      short loc_49E91E
0x49E8FE: mov     eax, ds:0B070B0h
0x49E903: fild    dword ptr ds:0B070B0h
0x49E909: test    eax, eax
0x49E90B: jge     short loc_49E913
0x49E90D: fadd    dword ptr ds:0A2FC78h
0x49E913: push    ecx
0x49E914: fstp    [esp+248h+var_248]; float
0x49E917: call    sub_65E5E0
0x49E91C: jmp     short loc_49E929
0x49E91E: mov     ecx, ds:0B333A0h
0x49E924: call    TES_GetCurrentCell
0x49E929: test    eax, eax
0x49E92B: mov     [esp+244h+var_230], eax
0x49E92F: jz      short loc_49E93B
0x49E931: cmp     eax, ds:0B35224h
0x49E937: jz      short loc_49E95F
0x49E939: jmp     short loc_49E953
0x49E93B: cmp     dword ptr ds:0B35224h, 0
0x49E942: jnz     short loc_49E95F
0x49E944: mov     ecx, ds:0B333A0h
0x49E94A: call    TES_GetCurrentCell
0x49E94F: mov     [esp+244h+var_230], eax
0x49E953: mov     byte ptr ds:0B3521Dh, 1
0x49E95A: mov     ds:0B35224h, eax
0x49E95F: cmp     byte ptr ds:0B07060h, 0
0x49E966: jz      loc_49EA37
0x49E96C: cmp     byte ptr ds:0B0703Ch, 0
0x49E973: jnz     short loc_49E982
0x49E975: cmp     byte ptr ds:0B35229h, 0
0x49E97C: jnz     short loc_49E982
0x49E97E: xor     bl, bl
0x49E980: jmp     short loc_49E984
0x49E982: mov     bl, 1
0x49E984: mov     ecx, ds:0B333A0h
0x49E98A: cmp     dword ptr [ecx+34h], 0
0x49E98E: jnz     short loc_49E9C9
0x49E990: mov     ecx, ds:0B35220h
0x49E996: test    ecx, ecx
0x49E998: jz      short loc_49E9C9
0x49E99A: call    sub_4ED650
0x49E99F: test    al, al
0x49E9A1: jz      short loc_49E9C9
0x49E9A3: test    bl, bl
0x49E9A5: jz      short loc_49E9C9
0x49E9A7: cmp     byte ptr ds:0B333B8h, 0
0x49E9AE: mov     byte ptr ds:0B45DB8h, 0
0x49E9B5: jnz     loc_49EA97
0x49E9BB: push    esi
0x49E9BC: push    edi
0x49E9BD: mov     ecx, ebp
0x49E9BF: call    NiRenderer_ReflectionPass
0x49E9C4: jmp     loc_49EA97
0x49E9C9: cmp     byte ptr ds:0B0703Ch, 0
0x49E9D0: jz      loc_49EA97
0x49E9D6: mov     eax, ds:0B45DCCh
0x49E9DB: test    eax, eax
0x49E9DD: mov     byte ptr ds:0B45DB8h, 1
0x49E9E4: jz      loc_49EA97
0x49E9EA: cmp     dword ptr [eax+110h], 0
0x49E9F1: jnz     loc_49EA97
0x49E9F7: lea     edx, [esp+244h+var_218]
0x49E9FB: push    offset aDataTexturesEf; "Data\\Textures\\Effects\\interior_refl."...
0x49EA00: push    edx
0x49EA01: call    __sprintf
0x49EA06: mov     eax, ds:0B43104h
0x49EA0B: mov     esi, ds:0B45DCCh
0x49EA11: push    offset dword_B256D0
0x49EA16: push    eax
0x49EA17: lea     ecx, [esp+254h+var_218]
0x49EA1B: push    ecx
0x49EA1C: mov     edx, ecx
0x49EA1E: push    edx
0x49EA1F: mov     eax, ecx
0x49EA21: push    eax
0x49EA22: push    ecx
0x49EA23: push    edx
0x49EA24: push    eax
0x49EA25: call    sub_720F80
0x49EA2A: add     esp, 28h
0x49EA2D: push    eax
0x49EA2E: mov     ecx, esi
0x49EA30: call    sub_499360
0x49EA35: jmp     short loc_49EA97
0x49EA37: mov     esi, ds:0B45DCCh
0x49EA3D: test    esi, esi
0x49EA3F: mov     byte ptr ds:0B45DB8h, 0
0x49EA46: jz      short loc_49EA5A
0x49EA48: push    0
0x49EA4A: mov     ecx, esi
0x49EA4C: call    sub_499360
0x49EA51: push    0
0x49EA53: mov     ecx, esi
0x49EA55: call    sub_499270
0x49EA5A: mov     eax, [ebp+4]
0x49EA5D: test    eax, eax
0x49EA5F: jz      short loc_49EA97
0x49EA61: mov     ecx, ds:0B42F50h; this
0x49EA67: push    eax; a2
0x49EA68: call    sub_7C1EE0
0x49EA6D: mov     esi, [ebp+4]
0x49EA70: test    esi, esi
0x49EA72: jz      short loc_49EA97
0x49EA74: lea     ecx, [esi+4]
0x49EA77: push    ecx; lpAddend
0x49EA78: call    dword ptr ds:0A2807Ch
0x49EA7E: test    eax, eax
0x49EA80: jnz     short loc_49EA90
0x49EA82: test    esi, esi
0x49EA84: jz      short loc_49EA90
0x49EA86: mov     edx, [esi]
0x49EA88: mov     eax, [edx]
0x49EA8A: push    1
0x49EA8C: mov     ecx, esi
0x49EA8E: call    eax
0x49EA90: mov     dword ptr [ebp+4], 0
0x49EA97: cmp     byte ptr ds:0B3521Dh, 0
0x49EA9E: jz      loc_49EB2A
0x49EAA4: mov     ecx, ds:0B333A0h
0x49EAAA: call    TES_GetCurrentCell
0x49EAAF: test    eax, eax
0x49EAB1: jz      short loc_49EB04
0x49EAB3: call    sub_43F4D0
0x49EAB8: test    al, al
0x49EABA: jz      short loc_49EB04
0x49EABC: cmp     byte ptr ds:0B07098h, 0
0x49EAC3: jz      short loc_49EB04
0x49EAC5: cmp     byte ptr ds:0B43077h, 0
0x49EACC: jz      short loc_49EB04
0x49EACE: mov     ecx, ds:0B333A0h
0x49EAD4: cmp     dword ptr [ecx+34h], 0
0x49EAD8: jnz     short loc_49EB0A
0x49EADA: call    TES__GetCurrentWorldspace
0x49EADF: mov     ecx, eax; this
0x49EAE1: call    TESWorldSpace__IsNoWaterLOD
0x49EAE6: test    al, al
0x49EAE8: jnz     short loc_49EB04
0x49EAEA: cmp     ds:0B35229h, al
0x49EAF0: jnz     short loc_49EB04
0x49EAF2: call    sub_4E9F40
0x49EAF7: test    al, al
0x49EAF9: jz      short loc_49EB04
0x49EAFB: mov     ecx, ebp
0x49EAFD: call    sub_49E280
0x49EB02: jmp     short loc_49EB2A
0x49EB04: mov     ecx, ds:0B333A0h
0x49EB0A: call    TES__GetCurrentWorldspace
0x49EB0F: mov     ecx, eax; this
0x49EB11: call    TESWorldSpace__IsNoWaterLOD
0x49EB16: test    al, al
0x49EB18: jz      short loc_49EB2A
0x49EB1A: cmp     byte ptr ds:0B35229h, 0
0x49EB21: jz      short loc_49EB2A
0x49EB23: mov     ecx, ebp
0x49EB25: call    sub_499E20
0x49EB2A: cmp     byte ptr ds:0B0703Ch, 0
0x49EB31: jnz     short loc_49EB40
0x49EB33: cmp     byte ptr ds:0B35229h, 0
0x49EB3A: jz      loc_49F41C
0x49EB40: mov     ecx, ds:0B333C4h; this
0x49EB46: test    ecx, ecx
0x49EB48: jz      loc_49EBFA
0x49EB4E: call    TESObjectREFR_GetParentCell
0x49EB53: test    eax, eax
0x49EB55: jz      loc_49EBFA
0x49EB5B: mov     ecx, ds:0B333CCh; this
0x49EB61: call    SceneGraph_GetChildNiAvNodeVtbl
0x49EB66: fld     dword ptr [eax+90h]
0x49EB6C: mov     ecx, ds:0B333C4h; this
0x49EB72: add     eax, 88h ; 'ˆ'
0x49EB77: fstp    qword ptr [esp+244h+var_22C+4]
0x49EB7B: call    TESObjectREFR_GetParentCell
0x49EB80: mov     ecx, eax
0x49EB82: call    TESObjectCELL_GetWaterHeight
0x49EB87: fcomp   qword ptr [esp+244h+var_22C+4]
0x49EB8B: fnstsw  ax
0x49EB8D: test    ah, 41h
0x49EB90: jnz     short loc_49EBC0
0x49EB92: mov     ecx, ds:0B333CCh; this
0x49EB98: mov     byte ptr ds:0B3521Ch, 1
0x49EB9F: mov     byte ptr ds:0B42CE2h, 1
0x49EBA6: mov     byte ptr ds:0B43164h, 1
0x49EBAD: call    SceneGraph_GetChildNiAvNodeVtbl
0x49EBB2: fld     dword ptr [eax+90h]
0x49EBB8: fstp    dword ptr ds:0B4314Ch
0x49EBBE: jmp     short loc_49EBD5
0x49EBC0: mov     byte ptr ds:0B3521Ch, 0
0x49EBC7: mov     byte ptr ds:0B42CE2h, 0
0x49EBCE: mov     byte ptr ds:0B43164h, 0
0x49EBD5: mov     ecx, ds:0B333C4h; this
0x49EBDB: call    TESObjectREFR_GetParentCell
0x49EBE0: mov     ecx, eax
0x49EBE2: call    TESObjectCELL_GetWaterHeight
0x49EBE7: call    Double_To_SInt32
0x49EBEC: mov     ds:0B42CE4h, eax
0x49EBF1: mov     byte ptr ds:0B42CE1h, 1
0x49EBF8: jmp     short loc_49EC01
0x49EBFA: mov     byte ptr ds:0B42CE1h, 0
0x49EC01: cmp     byte ptr ds:0B07050h, 0
0x49EC08: jz      loc_49ED60
0x49EC0E: cmp     byte ptr ds:0B42F3Eh, 0
0x49EC15: jz      loc_49ED60
0x49EC1B: cmp     dword ptr ds:0B42F48h, 2
0x49EC22: jl      loc_49ED60
0x49EC28: push    edi; a2
0x49EC29: mov     ecx, ebp; this
0x49EC2B: call    WateRsurfacEPass
0x49EC30: mov     eax, [ebp+34h]
0x49EC33: test    eax, eax
0x49EC35: jz      short loc_49EC47
0x49EC37: fld1
0x49EC39: mov     ecx, [eax+8]
0x49EC3C: mov     eax, [eax]
0x49EC3E: fst     dword ptr [ecx+18h]
0x49EC41: test    eax, eax
0x49EC43: jnz     short loc_49EC39
0x49EC45: fstp    st
0x49EC47: mov     eax, [ebp+34h]
0x49EC4A: test    eax, eax
0x49EC4C: mov     dword ptr [esp+244h+var_22C], eax
0x49EC50: jz      loc_49ED60
0x49EC56: mov     esi, [eax+8]
0x49EC59: cmp     byte ptr [esi+10h], 0
0x49EC5D: mov     ebx, [eax]
0x49EC5F: mov     [esp+244h+var_21C], ebx
0x49EC63: jz      loc_49ED3F
0x49EC69: mov     eax, [esi+8]
0x49EC6C: test    eax, eax
0x49EC6E: jz      short loc_49EC7C
0x49EC70: mov     ecx, ds:0B42F50h; this
0x49EC76: push    eax; a2
0x49EC77: call    sub_7C1EE0
0x49EC7C: mov     eax, [esi+0Ch]
0x49EC7F: test    eax, eax
0x49EC81: jz      short loc_49EC8F
0x49EC83: mov     ecx, ds:0B42F50h; this
0x49EC89: push    eax; a2
0x49EC8A: call    sub_7C1EE0
0x49EC8F: mov     edi, [esi+8]
0x49EC92: test    edi, edi
0x49EC94: mov     ebx, ds:0A2807Ch
0x49EC9A: jz      short loc_49ECBB
0x49EC9C: lea     ecx, [edi+4]
0x49EC9F: push    ecx; lpAddend
0x49ECA0: call    ebx ; InterlockedDecrement
0x49ECA2: test    eax, eax
0x49ECA4: jnz     short loc_49ECB4
0x49ECA6: test    edi, edi
0x49ECA8: jz      short loc_49ECB4
0x49ECAA: mov     edx, [edi]
0x49ECAC: mov     eax, [edx]
0x49ECAE: push    1
0x49ECB0: mov     ecx, edi
0x49ECB2: call    eax
0x49ECB4: mov     dword ptr [esi+8], 0
0x49ECBB: mov     edi, [esi+0Ch]
0x49ECBE: test    edi, edi
0x49ECC0: jz      short loc_49ECE1
0x49ECC2: lea     ecx, [edi+4]
0x49ECC5: push    ecx; lpAddend
0x49ECC6: call    ebx ; InterlockedDecrement
0x49ECC8: test    eax, eax
0x49ECCA: jnz     short loc_49ECDA
0x49ECCC: test    edi, edi
0x49ECCE: jz      short loc_49ECDA
0x49ECD0: mov     edx, [edi]
0x49ECD2: mov     eax, [edx]
0x49ECD4: push    1
0x49ECD6: mov     ecx, edi
0x49ECD8: call    eax
0x49ECDA: mov     dword ptr [esi+0Ch], 0
0x49ECE1: lea     ecx, [esp+244h+var_22C]
0x49ECE5: push    ecx
0x49ECE6: lea     ecx, [ebp+30h]
0x49ECE9: call    sub_7AA860
0x49ECEE: mov     eax, [esi+4]
0x49ECF1: mov     ecx, ds:0B35230h
0x49ECF7: mov     edx, [ecx]
0x49ECF9: mov     edx, [edx+88h]
0x49ECFF: push    eax
0x49ED00: lea     eax, [esp+248h+var_22C+4]
0x49ED04: push    eax
0x49ED05: call    edx
0x49ED07: mov     eax, dword ptr [esp+244h+var_22C+4]
0x49ED0B: test    eax, eax
0x49ED0D: jz      short loc_49ED29
0x49ED0F: mov     edi, eax
0x49ED11: add     eax, 4
0x49ED14: push    eax; lpAddend
0x49ED15: call    ebx ; InterlockedDecrement
0x49ED17: test    eax, eax
0x49ED19: jnz     short loc_49ED29
0x49ED1B: test    edi, edi
0x49ED1D: jz      short loc_49ED29
0x49ED1F: mov     eax, [edi]
0x49ED21: mov     edx, [eax]
0x49ED23: push    1
0x49ED25: mov     ecx, edi
0x49ED27: call    edx
0x49ED29: mov     ecx, esi
0x49ED2B: call    sub_4993B0
0x49ED30: push    esi
0x49ED31: call    FormHeapFree
0x49ED36: mov     ebx, [esp+248h+var_21C]
0x49ED3A: add     esp, 4
0x49ED3D: jmp     short loc_49ED52
0x49ED3F: cmp     byte ptr ds:0B07090h, 0
0x49ED46: jz      short loc_49ED52
0x49ED48: push    0; float
0x49ED4A: push    esi; int
0x49ED4B: mov     ecx, ebp
0x49ED4D: call    WaterGeometryPAss
0x49ED52: test    ebx, ebx
0x49ED54: mov     eax, ebx
0x49ED56: mov     dword ptr [esp+244h+var_22C], eax
0x49ED5A: jnz     loc_49EC56
0x49ED60: xor     ebx, ebx
0x49ED62: cmp     ds:0B3521Dh, bl
0x49ED68: jz      loc_49EF11
0x49ED6E: mov     edi, [esp+244h+var_230]
0x49ED72: cmp     edi, ebx
0x49ED74: mov     ds:0B3521Dh, bl
0x49ED7A: jz      short loc_49ED8B
0x49ED7C: mov     ecx, edi; this
0x49ED7E: call    TESObjectCELL__GetWaterForm
0x49ED83: test    eax, eax
0x49ED85: jz      short loc_49ED8B
0x49ED87: mov     ecx, edi
0x49ED89: jmp     short loc_49EDAA
0x49ED8B: cmp     ds:0B35220h, ebx
0x49ED91: jnz     short loc_49ED9D
0x49ED93: mov     ecx, ds:0B35224h
0x49ED99: cmp     ecx, ebx
0x49ED9B: jnz     short loc_49EDAA
0x49ED9D: mov     ecx, ds:0B333C4h; this
0x49EDA3: call    TESObjectREFR_GetParentCell
0x49EDA8: mov     ecx, eax; this
0x49EDAA: call    TESObjectCELL__GetWaterForm
0x49EDAF: mov     ds:0B35220h, eax
0x49EDB4: mov     ecx, [ebp+40h]
0x49EDB7: cmp     ecx, ebx
0x49EDB9: jz      short loc_49EDEE
0x49EDBB: call    sub_6B7260
0x49EDC0: test    al, al
0x49EDC2: jz      short loc_49EDEE
0x49EDC4: mov     ecx, [ebp+40h]
0x49EDC7: call    sub_6B7240
0x49EDCC: mov     ecx, [ebp+40h]
0x49EDCF: call    sub_6B73C0
0x49EDD4: mov     esi, [ebp+40h]
0x49EDD7: cmp     esi, ebx
0x49EDD9: jz      short loc_49EDEB
0x49EDDB: mov     ecx, esi; this
0x49EDDD: call    sub_6B73E0
0x49EDE2: push    esi
0x49EDE3: call    FormHeapFree
0x49EDE8: add     esp, 4
0x49EDEB: mov     [ebp+40h], ebx
0x49EDEE: mov     eax, ds:0B35220h
0x49EDF3: cmp     eax, ebx
0x49EDF5: jz      short loc_49EE16
0x49EDF7: mov     eax, [eax+38h]
0x49EDFA: cmp     eax, ebx
0x49EDFC: jz      short loc_49EE16
0x49EDFE: mov     eax, [eax+0Ch]
0x49EE01: mov     ecx, ds:0B33398h
0x49EE07: mov     ecx, [ecx+24h]
0x49EE0A: push    ebx
0x49EE0B: push    12h
0x49EE0D: push    eax
0x49EE0E: call    OSGLobals_PlaySound
0x49EE13: mov     [ebp+40h], eax
0x49EE16: cmp     byte ptr ds:0B07050h, 0
0x49EE1D: jz      loc_49EF11
0x49EE23: cmp     byte ptr ds:0B42F3Eh, 0
0x49EE2A: jz      loc_49EF11
0x49EE30: mov     ecx, ds:0B333A0h
0x49EE36: cmp     [ecx+34h], ebx
0x49EE39: jz      short loc_49EE45
0x49EE3B: mov     ecx, [ecx+58h]
0x49EE3E: mov     ecx, [ecx+8]
0x49EE41: mov     ecx, [ecx]
0x49EE43: jmp     short loc_49EE5D
0x49EE45: cmp     edi, ebx
0x49EE47: jz      short loc_49EE92
0x49EE49: push    edi
0x49EE4A: call    sub_43FAB0
0x49EE4F: cmp     eax, ebx
0x49EE51: jz      short loc_49EE92
0x49EE53: mov     edx, [eax+4]
0x49EE56: mov     eax, [edx+8]
0x49EE59: mov     eax, [eax]
0x49EE5B: mov     ecx, eax
0x49EE5D: push    4
0x49EE5F: call    NiNode_GetNiPropertyByID
0x49EE64: cmp     eax, ebx
0x49EE66: jz      short loc_49EE92
0x49EE68: mov     eax, ds:0B35220h
0x49EE6D: mov     eax, [eax+30h]
0x49EE70: cmp     eax, ebx
0x49EE72: jnz     short loc_49EE79
0x49EE74: mov     eax, offset EmptyString
0x49EE79: push    eax; Str2
0x49EE7A: push    offset aLava; "lava"
0x49EE7F: call    __strcmp
0x49EE84: add     esp, 8
0x49EE87: test    eax, eax
0x49EE89: setz    cl
0x49EE8C: mov     ds:0B45DBAh, cl
0x49EE92: mov     ecx, ds:0B35220h
0x49EE98: cmp     ecx, ebx
0x49EE9A: jz      short loc_49EF11
0x49EE9C: call    sub_4EDD90
0x49EEA1: test    eax, eax
0x49EEA3: jz      short loc_49EF11
0x49EEA5: mov     ecx, ds:0B35220h
0x49EEAB: call    sub_4EDD90
0x49EEB0: push    eax
0x49EEB1: push    offset aTextures; "Textures"
0x49EEB6: lea     edx, [esp+24Ch+ArgList]
0x49EEBD: push    offset aSS_2; "%s\\%s"
0x49EEC2: push    edx
0x49EEC3: call    __sprintf
0x49EEC8: add     esp, 10h
0x49EECB: push    ebx; char
0x49EECC: push    1; char
0x49EECE: lea     eax, [esp+24Ch+ArgList]
0x49EED5: push    eax; ArgList
0x49EED6: lea     ecx, [esp+250h+var_21C]
0x49EEDA: push    ecx; int
0x49EEDB: mov     ecx, ds:0B333A0h
0x49EEE1: call    sub_442890
0x49EEE6: mov     edx, [esp+244h+var_21C]
0x49EEEA: mov     ecx, ds:0B45DCCh
0x49EEF0: push    edx
0x49EEF1: mov     [esp+248h+var_4], ebx
0x49EEF8: call    sub_499310
0x49EEFD: lea     ecx, [esp+244h+var_21C]; this
0x49EF01: mov     [esp+244h+var_4], 0FFFFFFFFh
0x49EF0C: call    sub_7016A0
0x49EF11: call    Sky_CreateOrGetGlobalObject
0x49EF16: mov     eax, [eax+28h]
0x49EF19: mov     ecx, [eax+8]
0x49EF1C: mov     eax, [ecx+1Ch]
0x49EF1F: mov     edx, [eax+54h]
0x49EF22: mov     ecx, [eax+58h]
0x49EF25: mov     dword ptr [esp+244h+var_22C+4], edx
0x49EF29: mov     edx, [eax+5Ch]
0x49EF2C: mov     dword ptr [esp+244h+var_22C+8], ecx
0x49EF30: lea     ecx, [esp+244h+var_22C+4]
0x49EF34: mov     [esp+244h+var_220], edx
0x49EF38: call    sub_43F350
0x49EF3D: fstp    st
0x49EF3F: fld     dword ptr [esp+244h+var_22C+4]
0x49EF43: fstp    dword ptr ds:0B45DF4h
0x49EF49: fld     dword ptr [esp+244h+var_22C+8]
0x49EF4D: fstp    dword ptr ds:0B45DF8h
0x49EF53: fld     [esp+244h+var_220]
0x49EF57: fstp    dword ptr ds:0B45DFCh
0x49EF5D: call    Sky_CreateOrGetGlobalObject
0x49EF62: mov     ecx, [eax+28h]
0x49EF65: call    sub_544B00
0x49EF6A: fmul    qword ptr ds:0A309F0h
0x49EF70: fstp    dword ptr ds:0B45E00h
0x49EF76: call    Sky_CreateOrGetGlobalObject
0x49EF7B: mov     ecx, [eax+6Ch]
0x49EF7E: mov     edx, [eax+70h]
0x49EF81: mov     eax, [eax+74h]
0x49EF84: mov     dword ptr [esp+244h+var_22C+4], ecx
0x49EF88: fld     dword ptr [esp+244h+var_22C+4]
0x49EF8C: fstp    dword ptr ds:0B45E04h
0x49EF92: mov     dword ptr [esp+244h+var_22C+8], edx
0x49EF96: fld     dword ptr [esp+244h+var_22C+8]
0x49EF9A: mov     [esp+244h+var_220], eax
0x49EF9E: fstp    dword ptr ds:0B45E08h
0x49EFA4: fld     [esp+244h+var_220]
0x49EFA8: fstp    dword ptr ds:0B45E0Ch
0x49EFAE: fldz
0x49EFB0: fcom    dword ptr ds:0B45E00h
0x49EFB6: fnstsw  ax
0x49EFB8: test    ah, 44h
0x49EFBB: jnp     short loc_49EFCC
0x49EFBD: fstp    st
0x49EFBF: call    Sky_CreateOrGetGlobalObject
0x49EFC4: mov     ecx, [eax+28h]
0x49EFC7: call    sub_544B00
0x49EFCC: mov     al, ds:0B3521Ch
0x49EFD1: fstp    dword ptr ds:0B45E10h
0x49EFD7: test    al, al
0x49EFD9: jz      short loc_49EFE3
0x49EFDB: fldz
0x49EFDD: fstp    dword ptr ds:0B45E10h
0x49EFE3: mov     ecx, ds:0B333A0h
0x49EFE9: mov     ds:0B45DBBh, al
0x49EFEE: cmp     [ecx+34h], ebx
0x49EFF1: jnz     loc_49F3C8
0x49EFF7: mov     ecx, offset TimeGlobals
0x49EFFC: call    TimeGlobals_GetGameHour
0x49F001: fstp    qword ptr [esp+244h+var_22C+4]
0x49F005: call    Sky_CreateOrGetGlobalObject
0x49F00A: mov     ecx, eax
0x49F00C: call    sub_4991C0
0x49F011: fcomp   qword ptr [esp+244h+var_22C+4]
0x49F015: fnstsw  ax
0x49F017: test    ah, 5
0x49F01A: jp      loc_49F1FC
0x49F020: mov     ecx, offset TimeGlobals
0x49F025: call    TimeGlobals_GetGameHour
0x49F02A: fstp    qword ptr [esp+244h+var_22C+4]
0x49F02E: call    Sky_CreateOrGetGlobalObject
0x49F033: mov     ecx, eax
0x49F035: call    sub_499200
0x49F03A: fcomp   qword ptr [esp+244h+var_22C+4]
0x49F03E: fnstsw  ax
0x49F040: test    ah, 1
0x49F043: jnz     loc_49F1FC
0x49F049: mov     eax, ds:0B35220h
0x49F04E: cmp     [eax+0A4h], ebx
0x49F054: jz      loc_49F1EE
0x49F05A: mov     eax, [eax+0A4h]
0x49F060: cmp     eax, ebx
0x49F062: jz      loc_49F1EE
0x49F068: mov     ecx, offset TimeGlobals
0x49F06D: mov     [ebp+24h], eax
0x49F070: call    TimeGlobals_GetGameHour
0x49F075: push    ecx
0x49F076: fstp    [esp+248h+var_248]; float
0x49F079: call    Sky_CreateOrGetGlobalObject
0x49F07E: mov     ecx, eax
0x49F080: call    sub_499200
0x49F085: push    ecx
0x49F086: fstp    [esp+24Ch+var_24C]; float
0x49F089: call    Sky_CreateOrGetGlobalObject
0x49F08E: mov     ecx, eax
0x49F090: call    sub_4991C0
0x49F095: sub     esp, 0Ch
0x49F098: fstp    [esp+258h+var_250]; float
0x49F09C: fld1
0x49F09E: fstp    [esp+258h+var_254]; float
0x49F0A2: fldz
0x49F0A4: fstp    [esp+258h+var_258]; float
0x49F0A7: call    sub_410EB0
0x49F0AC: fcomp   qword ptr ds:0A2FC68h
0x49F0B2: add     esp, 14h
0x49F0B5: fnstsw  ax
0x49F0B7: test    ah, 5
0x49F0BA: jp      short loc_49F0C0
0x49F0BC: fldz
0x49F0BE: jmp     short loc_49F104
0x49F0C0: mov     ecx, offset TimeGlobals
0x49F0C5: call    TimeGlobals_GetGameHour
0x49F0CA: push    ecx
0x49F0CB: fstp    [esp+248h+var_248]; float
0x49F0CE: call    Sky_CreateOrGetGlobalObject
0x49F0D3: mov     ecx, eax
0x49F0D5: call    sub_499200
0x49F0DA: push    ecx
0x49F0DB: fstp    [esp+24Ch+var_24C]; float
0x49F0DE: call    Sky_CreateOrGetGlobalObject
0x49F0E3: mov     ecx, eax
0x49F0E5: call    sub_4991C0
0x49F0EA: sub     esp, 0Ch
0x49F0ED: fstp    [esp+258h+var_250]; float
0x49F0F1: fld1
0x49F0F3: fstp    [esp+258h+var_254]; float
0x49F0F7: fldz
0x49F0F9: fstp    [esp+258h+var_258]; float
0x49F0FC: call    sub_410EB0
0x49F101: add     esp, 14h
0x49F104: fstp    dword ptr [esp+244h+var_22C]
0x49F108: fld     dword ptr [esp+244h+var_22C]
0x49F10C: fcomp   qword ptr ds:0A2F928h
0x49F112: fnstsw  ax
0x49F114: test    ah, 41h
0x49F117: jnz     short loc_49F12F
0x49F119: fld1
0x49F11B: mov     byte ptr [ebp+28h], 1
0x49F11F: fstp    [esp+244h+var_230]
0x49F123: fld     [esp+244h+var_230]
0x49F127: fstp    dword ptr [ebp+2Ch]
0x49F12A: jmp     loc_49F3CB
0x49F12F: mov     ecx, offset TimeGlobals
0x49F134: call    TimeGlobals_GetGameHour
0x49F139: push    ecx
0x49F13A: fstp    [esp+248h+var_248]; float
0x49F13D: call    Sky_CreateOrGetGlobalObject
0x49F142: mov     ecx, eax
0x49F144: call    sub_499200
0x49F149: push    ecx
0x49F14A: fstp    [esp+24Ch+var_24C]; float
0x49F14D: call    Sky_CreateOrGetGlobalObject
0x49F152: mov     ecx, eax
0x49F154: call    sub_4991C0
0x49F159: sub     esp, 0Ch
0x49F15C: fstp    [esp+258h+var_250]; float
0x49F160: fld1
0x49F162: fstp    [esp+258h+var_254]; float
0x49F166: fldz
0x49F168: fstp    [esp+258h+var_258]; float
0x49F16B: call    sub_410EB0
0x49F170: fcomp   qword ptr ds:0A2FC68h
0x49F176: add     esp, 14h
0x49F179: fnstsw  ax
0x49F17B: test    ah, 5
0x49F17E: jp      short loc_49F196
0x49F180: fldz
0x49F182: mov     byte ptr [ebp+28h], 1
0x49F186: fstp    [esp+244h+var_230]
0x49F18A: fld     [esp+244h+var_230]
0x49F18E: fstp    dword ptr [ebp+2Ch]
0x49F191: jmp     loc_49F3CB
0x49F196: mov     ecx, offset TimeGlobals
0x49F19B: call    TimeGlobals_GetGameHour
0x49F1A0: push    ecx
0x49F1A1: fstp    [esp+248h+var_248]; float
0x49F1A4: call    Sky_CreateOrGetGlobalObject
0x49F1A9: mov     ecx, eax
0x49F1AB: call    sub_499200
0x49F1B0: push    ecx
0x49F1B1: fstp    [esp+24Ch+var_24C]; float
0x49F1B4: call    Sky_CreateOrGetGlobalObject
0x49F1B9: mov     ecx, eax
0x49F1BB: call    sub_4991C0
0x49F1C0: sub     esp, 0Ch
0x49F1C3: fstp    [esp+258h+var_250]; float
0x49F1C7: fld1
0x49F1C9: fstp    [esp+258h+var_254]; float
0x49F1CD: fldz
0x49F1CF: fstp    [esp+258h+var_258]; float
0x49F1D2: call    sub_410EB0
0x49F1D7: fstp    [esp+258h+var_230]
0x49F1DB: fld     [esp+258h+var_230]
0x49F1DF: add     esp, 14h
0x49F1E2: fstp    dword ptr [ebp+2Ch]
0x49F1E5: mov     byte ptr [ebp+28h], 1
0x49F1E9: jmp     loc_49F3CB
0x49F1EE: fldz
0x49F1F0: mov     byte ptr [ebp+28h], 0
0x49F1F4: fstp    dword ptr [ebp+2Ch]
0x49F1F7: jmp     loc_49F3CB
0x49F1FC: mov     ecx, offset TimeGlobals
0x49F201: call    TimeGlobals_GetGameHour
0x49F206: fstp    qword ptr [esp+244h+var_22C+4]
0x49F20A: call    Sky_CreateOrGetGlobalObject
0x49F20F: mov     ecx, eax
0x49F211: call    sub_499140
0x49F216: fcomp   qword ptr [esp+244h+var_22C+4]
0x49F21A: fnstsw  ax
0x49F21C: test    ah, 5
0x49F21F: jp      loc_49F3B6
0x49F225: mov     ecx, offset TimeGlobals
0x49F22A: call    TimeGlobals_GetGameHour
0x49F22F: fstp    qword ptr [esp+244h+var_22C+4]
0x49F233: call    Sky_CreateOrGetGlobalObject
0x49F238: mov     ecx, eax
0x49F23A: call    sub_499180
0x49F23F: fcomp   qword ptr [esp+244h+var_22C+4]
0x49F243: fnstsw  ax
0x49F245: test    ah, 1
0x49F248: jnz     loc_49F3B6
0x49F24E: mov     ecx, offset TimeGlobals
0x49F253: call    TimeGlobals_GetGameHour
0x49F258: push    ecx
0x49F259: fstp    [esp+248h+var_248]; float
0x49F25C: call    Sky_CreateOrGetGlobalObject
0x49F261: mov     ecx, eax
0x49F263: call    sub_499180
0x49F268: push    ecx
0x49F269: fstp    [esp+24Ch+var_24C]; float
0x49F26C: call    Sky_CreateOrGetGlobalObject
0x49F271: mov     ecx, eax
0x49F273: call    sub_499140
0x49F278: sub     esp, 0Ch
0x49F27B: fstp    [esp+258h+var_250]; float
0x49F27F: fld1
0x49F281: fstp    [esp+258h+var_254]; float
0x49F285: fldz
0x49F287: fstp    [esp+258h+var_258]; float
0x49F28A: call    sub_410EB0
0x49F28F: fcomp   qword ptr ds:0A2FC68h
0x49F295: add     esp, 14h
0x49F298: fnstsw  ax
0x49F29A: test    ah, 5
0x49F29D: jp      short loc_49F2A3
0x49F29F: fldz
0x49F2A1: jmp     short loc_49F2E7
0x49F2A3: mov     ecx, offset TimeGlobals
0x49F2A8: call    TimeGlobals_GetGameHour
0x49F2AD: push    ecx
0x49F2AE: fstp    [esp+248h+var_248]; float
0x49F2B1: call    Sky_CreateOrGetGlobalObject
0x49F2B6: mov     ecx, eax
0x49F2B8: call    sub_499180
0x49F2BD: push    ecx
0x49F2BE: fstp    [esp+24Ch+var_24C]; float
0x49F2C1: call    Sky_CreateOrGetGlobalObject
0x49F2C6: mov     ecx, eax
0x49F2C8: call    sub_499140
0x49F2CD: sub     esp, 0Ch
0x49F2D0: fstp    [esp+258h+var_250]; float
0x49F2D4: fld1
0x49F2D6: fstp    [esp+258h+var_254]; float
0x49F2DA: fldz
0x49F2DC: fstp    [esp+258h+var_258]; float
0x49F2DF: call    sub_410EB0
0x49F2E4: add     esp, 14h
0x49F2E7: fstp    dword ptr [esp+244h+var_22C]
0x49F2EB: fld     dword ptr [esp+244h+var_22C]
0x49F2EF: fcomp   qword ptr ds:0A2F928h
0x49F2F5: fnstsw  ax
0x49F2F7: test    ah, 41h
0x49F2FA: jnz     short loc_49F303
0x49F2FC: fld1
0x49F2FE: jmp     loc_49F39C
0x49F303: mov     ecx, offset TimeGlobals
0x49F308: call    TimeGlobals_GetGameHour
0x49F30D: push    ecx
0x49F30E: fstp    [esp+248h+var_248]; float
0x49F311: call    Sky_CreateOrGetGlobalObject
0x49F316: mov     ecx, eax
0x49F318: call    sub_499180
0x49F31D: push    ecx
0x49F31E: fstp    [esp+24Ch+var_24C]; float
0x49F321: call    Sky_CreateOrGetGlobalObject
0x49F326: mov     ecx, eax
0x49F328: call    sub_499140
0x49F32D: sub     esp, 0Ch
0x49F330: fstp    [esp+258h+var_250]; float
0x49F334: fld1
0x49F336: fstp    [esp+258h+var_254]; float
0x49F33A: fldz
0x49F33C: fstp    [esp+258h+var_258]; float
0x49F33F: call    sub_410EB0
0x49F344: fcomp   qword ptr ds:0A2FC68h
0x49F34A: add     esp, 14h
0x49F34D: fnstsw  ax
0x49F34F: test    ah, 5
0x49F352: jp      short loc_49F358
0x49F354: fldz
0x49F356: jmp     short loc_49F39C
0x49F358: mov     ecx, offset TimeGlobals
0x49F35D: call    TimeGlobals_GetGameHour
0x49F362: push    ecx
0x49F363: fstp    [esp+248h+var_248]; float
0x49F366: call    Sky_CreateOrGetGlobalObject
0x49F36B: mov     ecx, eax
0x49F36D: call    sub_499180
0x49F372: push    ecx
0x49F373: fstp    [esp+24Ch+var_24C]; float
0x49F376: call    Sky_CreateOrGetGlobalObject
0x49F37B: mov     ecx, eax
0x49F37D: call    sub_499140
0x49F382: sub     esp, 0Ch
0x49F385: fstp    [esp+258h+var_250]; float
0x49F389: fld1
0x49F38B: fstp    [esp+258h+var_254]; float
0x49F38F: fldz
0x49F391: fstp    [esp+258h+var_258]; float
0x49F394: call    sub_410EB0
0x49F399: add     esp, 14h
0x49F39C: fstp    [esp+244h+var_230]
0x49F3A0: mov     byte ptr [ebp+28h], 1
0x49F3A4: fld     [esp+244h+var_230]
0x49F3A8: fstp    dword ptr [ebp+2Ch]
0x49F3AB: mov     edx, ds:0B35220h
0x49F3B1: mov     [ebp+24h], edx
0x49F3B4: jmp     short loc_49F3CB
0x49F3B6: cmp     [ebp+24h], ebx
0x49F3B9: jz      short loc_49F3CB
0x49F3BB: fldz
0x49F3BD: mov     byte ptr [ebp+29h], 1
0x49F3C1: fstp    dword ptr [ebp+2Ch]
0x49F3C4: mov     byte ptr [ebp+28h], 0
0x49F3C8: mov     [ebp+24h], ebx
0x49F3CB: fldz
0x49F3CD: fcom    dword ptr [ebp+2Ch]
0x49F3D0: fnstsw  ax
0x49F3D2: test    ah, 5
0x49F3D5: jp      short loc_49F404
0x49F3D7: cmp     byte ptr [ebp+28h], 0
0x49F3DB: jz      short loc_49F404
0x49F3DD: mov     eax, [ebp+24h]
0x49F3E0: fstp    st
0x49F3E2: fld     dword ptr [ebp+2Ch]
0x49F3E5: push    ebx; int
0x49F3E6: push    ecx
0x49F3E7: fstp    [esp+24Ch+var_24C]; float
0x49F3EA: push    eax; int
0x49F3EB: mov     ecx, ebp
0x49F3ED: call    sub_499570
0x49F3F2: fld1
0x49F3F4: fcomp   dword ptr [ebp+2Ch]
0x49F3F7: fnstsw  ax
0x49F3F9: test    ah, 44h
0x49F3FC: jp      short loc_49F415
0x49F3FE: mov     byte ptr [ebp+28h], 0
0x49F402: jmp     short loc_49F415
0x49F404: movzx   ecx, byte ptr [ebp+29h]
0x49F408: push    ecx; int
0x49F409: push    ecx
0x49F40A: mov     ecx, ebp
0x49F40C: fstp    [esp+24Ch+var_24C]; float
0x49F40F: push    ebx; int
0x49F410: call    sub_499570
0x49F415: mov     ecx, ebp
0x49F417: call    sub_49AD00
0x49F41C: mov     ecx, dword ptr [esp+244h+var_C]
0x49F423: mov     large fs:0, ecx
0x49F42A: pop     ecx
0x49F42B: pop     edi
0x49F42C: pop     esi
0x49F42D: pop     ebp
0x49F42E: pop     ebx
0x49F42F: mov     ecx, [esp+230h+var_10]
0x49F436: xor     ecx, esp
0x49F438: call    @__security_check_cookie@4; __security_check_cookie(x)
0x49F43D: add     esp, 230h
0x49F443: retn    8
