0x5378B0: push    0FFFFFFFFh
0x5378B2: push    offset SEH_5378B0
0x5378B7: mov     eax, large fs:0
0x5378BD: push    eax
0x5378BE: sub     esp, 20h
0x5378C1: push    ebx
0x5378C2: push    esi
0x5378C3: push    edi
0x5378C4: mov     eax, ds:0B30AACh
0x5378C9: xor     eax, esp
0x5378CB: push    eax
0x5378CC: lea     eax, [esp+3Ch+var_C]
0x5378D0: mov     large fs:0, eax
0x5378D6: mov     ebx, ecx
0x5378D8: mov     esi, [esp+3Ch+arg_0]
0x5378DC: test    esi, esi
0x5378DE: jz      loc_537BF8
0x5378E4: fldz
0x5378E6: fcom    dword ptr [ebx+14h]
0x5378E9: fnstsw  ax
0x5378EB: test    ah, 5
0x5378EE: jnp     loc_537BF6
0x5378F4: mov     eax, [esi+8]
0x5378F7: test    eax, eax
0x5378F9: jz      short loc_537905
0x5378FB: mov     ecx, [eax+50h]
0x5378FE: fstp    st
0x537900: call    sub_89DA90
0x537905: mov     eax, [esi+8]
0x537908: fstp    [esp+3Ch+arg_0]
0x53790C: test    eax, eax
0x53790E: jz      short loc_53791A
0x537910: mov     eax, [eax+50h]
0x537913: add     eax, 0D0h ; 'Ð'
0x537918: jmp     short loc_53791F
0x53791A: mov     eax, offset unk_BA7A40
0x53791F: push    eax
0x537920: lea     eax, [esp+40h+var_18]
0x537924: push    eax
0x537925: call    HavokVector_ToWorldVector; TES4 authoritative: converts Havok-unit vector to TES/world units using dbl_A372E0 (inverse hkFactor).
0x53792A: fld     [esp+44h+var_10]
0x53792E: fld     st
0x537930: add     esp, 8
0x537933: fabs
0x537935: fstp    [esp+3Ch+var_2C]
0x537939: fld     [esp+3Ch+var_2C]
0x53793D: fstp    [esp+3Ch+var_2C]
0x537941: fld     dword ptr ds:0B37B28h
0x537947: fmul    [esp+3Ch+var_2C]
0x53794B: fadd    [esp+3Ch+arg_0]
0x53794F: fstp    [esp+3Ch+arg_0]
0x537953: fldz
0x537955: fcompp
0x537957: fnstsw  ax
0x537959: test    ah, 5
0x53795C: jp      short loc_53796C
0x53795E: fld     dword ptr ds:0B37B30h
0x537964: fmul    [esp+3Ch+arg_0]
0x537968: fstp    [esp+3Ch+arg_0]
0x53796C: lea     ecx, [esp+3Ch+a2]
0x537970: push    ecx
0x537971: mov     ecx, esi
0x537973: call    sub_4D6900
0x537978: fld     [esp+3Ch+arg_4]
0x53797C: mov     ecx, ds:0B333A0h; this
0x537982: fstp    [esp+3Ch+a3]
0x537986: cmp     dword ptr [ecx+34h], 0
0x53798A: jnz     short loc_5379B4
0x53798C: lea     edx, [esp+3Ch+a3]
0x537990: push    edx; a3
0x537991: lea     eax, [esp+40h+a2]
0x537995: push    eax; a2
0x537996: call    GetTerrainHeight
0x53799B: test    al, al
0x53799D: jz      short loc_5379B4
0x53799F: fld     [esp+3Ch+a3]
0x5379A3: fld     [esp+3Ch+arg_4]
0x5379A7: fcompp
0x5379A9: fnstsw  ax
0x5379AB: test    ah, 5
0x5379AE: jnp     loc_537BF8
0x5379B4: mov     ecx, ds:0B33398h
0x5379BA: mov     edi, [ecx+24h]
0x5379BD: test    edi, edi
0x5379BF: jz      loc_537BD8
0x5379C5: fld     [esp+3Ch+arg_0]
0x5379C9: fld     dword ptr ds:0B37B08h
0x5379CF: fcompp
0x5379D1: fnstsw  ax
0x5379D3: test    ah, 5
0x5379D6: jp      short loc_5379FF
0x5379D8: push    1
0x5379DA: push    102h
0x5379DF: push    offset aCwaterlarge; "CWaterLarge"
0x5379E4: mov     ecx, edi
0x5379E6: call    PlaySound???
0x5379EB: fld     dword ptr ds:0B37B40h
0x5379F1: mov     esi, eax
0x5379F3: fstp    [esp+3Ch+var_2C]
0x5379F7: test    esi, esi
0x5379F9: jnz     loc_537A7F
0x5379FF: fld     [esp+3Ch+arg_0]
0x537A03: fld     dword ptr ds:0B37B10h
0x537A09: fcompp
0x537A0B: fnstsw  ax
0x537A0D: test    ah, 5
0x537A10: jp      short loc_537A3B
0x537A12: push    1
0x537A14: push    102h
0x537A19: push    offset aCwatermedium; "CWaterMedium"
0x537A1E: mov     ecx, edi
0x537A20: call    PlaySound???
0x537A25: mov     ecx, 0B37B48h
0x537A2A: mov     esi, eax
0x537A2C: call    GameSetting_GetSafeFloatPointer
0x537A31: fld     dword ptr [eax]
0x537A33: test    esi, esi
0x537A35: fstp    [esp+3Ch+var_2C]
0x537A39: jnz     short loc_537A7F
0x537A3B: fld     [esp+3Ch+arg_0]
0x537A3F: fld     dword ptr ds:0B37B18h
0x537A45: fcompp
0x537A47: fnstsw  ax
0x537A49: test    ah, 5
0x537A4C: jp      loc_537BD8
0x537A52: push    1
0x537A54: push    102h
0x537A59: push    offset aCwatersmall; "CWaterSmall"
0x537A5E: mov     ecx, edi
0x537A60: call    PlaySound???
0x537A65: mov     ecx, 0B37B50h
0x537A6A: mov     esi, eax
0x537A6C: call    GameSetting_GetSafeFloatPointer
0x537A71: fld     dword ptr [eax]
0x537A73: test    esi, esi
0x537A75: fstp    [esp+3Ch+var_2C]
0x537A79: jz      loc_537BD8
0x537A7F: fld     [esp+3Ch+arg_4]
0x537A83: sub     esp, 0Ch
0x537A86: fst     dword ptr [esp+48h+var_20+4]
0x537A8A: mov     ecx, esi
0x537A8C: fstp    [esp+48h+var_40]; float
0x537A90: fld     dword ptr [esp+48h+var_20]
0x537A94: fstp    [esp+48h+scale]; float
0x537A98: fld     [esp+48h+a2]
0x537A9C: fstp    [esp+48h+unknownChildName+4]; localPosZ
0x537A9F: call    sub_6B7360
0x537AA4: push    0
0x537AA6: mov     ecx, esi
0x537AA8: call    sub_6B7190
0x537AAD: fldz
0x537AAF: fcomp   [esp+3Ch+var_2C]
0x537AB3: fnstsw  ax
0x537AB5: test    ah, 5
0x537AB8: jp      loc_537BD8
0x537ABE: mov     ecx, ds:0B333C4h; this
0x537AC4: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x537AC9: test    eax, eax
0x537ACB: jz      loc_537BD8
0x537AD1: mov     ecx, ds:0B333C4h; this
0x537AD7: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x537ADC: mov     ecx, eax; this
0x537ADE: call    TESObjectCELL__GetWaterForm
0x537AE3: test    eax, eax
0x537AE5: jz      loc_537BD8
0x537AEB: mov     ecx, ds:0B333C4h; this
0x537AF1: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x537AF6: mov     ecx, eax; this
0x537AF8: call    TESObjectCELL__GetWaterForm
0x537AFD: mov     edx, [eax]
0x537AFF: mov     ecx, eax
0x537B01: mov     eax, [edx+88h]
0x537B07: call    eax
0x537B09: test    al, al
0x537B0B: jnz     loc_537BD8
0x537B11: mov     ecx, ds:0B333C4h; this
0x537B17: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x537B1C: mov     ecx, ds:0B333C4h; TESObjectREFR *
0x537B22: push    ecx; TESObjectREFR *
0x537B23: call    sub_4C9BE0
0x537B28: mov     ecx, ds:0B333C4h; this
0x537B2E: add     esp, 4
0x537B31: push    3
0x537B33: push    eax
0x537B34: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x537B39: mov     ecx, eax
0x537B3B: call    sub_441800; ODismemberment authority: loaded cell effect child lookup by quadrant/index; hit particles use index 3 after sub_4C9BE0(ref).
0x537B40: push    20h ; ' '; Size
0x537B42: mov     edi, eax
0x537B44: call    FormHeapAlloc
0x537B49: mov     esi, eax
0x537B4B: add     esp, 4
0x537B4E: mov     [esp+3Ch+arg_4], esi
0x537B52: test    esi, esi
0x537B54: mov     [esp+3Ch+var_4], 0
0x537B5C: jz      short loc_537BC3
0x537B5E: mov     edx, [esp+3Ch+a2]
0x537B62: fld     [esp+3Ch+var_2C]
0x537B66: mov     ecx, dword ptr [esp+3Ch+var_20]
0x537B6A: push    1; useCachedClone
0x537B6C: sub     esp, 10h
0x537B6F: fstp    [esp+50h+scale]; scale
0x537B73: mov     eax, esp
0x537B75: fld1
0x537B77: mov     [eax], edx
0x537B79: mov     edx, dword ptr [esp+50h+var_20+4]
0x537B7D: mov     [eax+4], ecx
0x537B80: mov     ecx, ds:0B258DCh
0x537B86: mov     [eax+8], edx
0x537B89: mov     edx, ds:0B258E0h
0x537B8F: sub     esp, 0Ch
0x537B92: mov     eax, esp
0x537B94: mov     [eax], ecx
0x537B96: mov     ecx, ds:0B258E4h
0x537B9C: mov     [eax+4], edx
0x537B9F: mov     edx, ds:0B37B38h
0x537BA5: push    edx; modelPath
0x537BA6: push    edi; parentNode
0x537BA7: mov     [eax+8], ecx
0x537BAA: push    ecx
0x537BAB: mov     ecx, ds:0B333C4h; this
0x537BB1: fstp    [esp+68h+durationSeconds]; durationSeconds
0x537BB4: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x537BB9: push    eax; parentCell
0x537BBA: mov     ecx, esi; self
0x537BBC: call    BSTempEffectParticle_Constructor; Verified: constructs BSTempEffectParticle; parameters include cell, duration, NiNode parent, model path, direction XYZ, local position XYZ, scale, and cached-clone flag. Body-hit caller 0x5EF214 passes direction XYZ and position XYZ; constructor writes position components into the NiAVObject local-transform translation (including stores at root+0x54/+0x58). It applies |scale|, attaches the cloned NIF and starts controllers. Cached-clone choice is controlled by the final bool. All parameters now typed by observed data flow.
0x537BC1: jmp     short loc_537BC5
0x537BC3: xor     eax, eax
0x537BC5: push    eax; effect
0x537BC6: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x537BCB: mov     [esp+40h+var_4], 0FFFFFFFFh
0x537BD3: call    ActorProcessManager_RegisterTempEffect; [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
0x537BD8: fld     dword ptr ds:0B37B20h
0x537BDE: fstp    dword ptr [ebx+14h]
0x537BE1: mov     ecx, [esp+3Ch+var_C]
0x537BE5: mov     large fs:0, ecx
0x537BEC: pop     ecx
0x537BED: pop     edi
0x537BEE: pop     esi
0x537BEF: pop     ebx
0x537BF0: add     esp, 2Ch
0x537BF3: retn    8
0x537BF6: fstp    st
0x537BF8: mov     ecx, [esp+3Ch+var_C]
0x537BFC: mov     large fs:0, ecx
0x537C03: pop     ecx
0x537C04: pop     edi
0x537C05: pop     esi
0x537C06: pop     ebx
0x537C07: add     esp, 2Ch
0x537C0A: retn    8
0x9B9380: mov     eax, [ebp+8]
0x9B9383: push    eax
0x9B9384: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B9389: pop     ecx
0x9B938A: retn
0x9B938B: mov     edx, [esp+arg_4]
0x9B938F: lea     eax, [edx-2Ch]
0x9B9392: mov     ecx, [edx-30h]
0x9B9395: xor     ecx, eax
0x9B9397: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B939C: mov     eax, offset stru_AE3718
0x9B93A1: jmp     ___CxxFrameHandler3
