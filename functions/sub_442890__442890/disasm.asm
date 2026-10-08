0x442890: push    0FFFFFFFFh; TES texture cache/load helper: checks the global texture map, optionally verifies file existence via FileFinder, loads NiSourceTexture by filename, caches it, and returns a refcounted texture pointer.
0x442892: push    offset SEH_442890
0x442897: mov     eax, large fs:0
0x44289D: push    eax
0x44289E: sub     esp, 8
0x4428A1: push    ebx
0x4428A2: push    ebp
0x4428A3: push    esi
0x4428A4: push    edi
0x4428A5: mov     eax, ds:0B30AACh
0x4428AA: xor     eax, esp
0x4428AC: push    eax
0x4428AD: lea     eax, [esp+28h+var_C]
0x4428B1: mov     large fs:0, eax
0x4428B7: xor     ebx, ebx
0x4428B9: mov     [esp+28h+var_10], ebx
0x4428BD: mov     [esp+28h+var_14], ebx
0x4428C1: mov     ecx, ds:0B35300h
0x4428C7: mov     eax, [ecx]
0x4428C9: mov     edi, [esp+28h+ArgList]
0x4428CD: mov     edx, [eax+4]
0x4428D0: push    ebx
0x4428D1: push    edi
0x4428D2: mov     [esp+30h+var_4], 1
0x4428DA: xor     ebp, ebp
0x4428DC: call    edx
0x4428DE: mov     esi, eax
0x4428E0: cmp     esi, ebx
0x4428E2: jz      short loc_442922
0x4428E4: mov     ebp, ds:0A28078h
0x4428EA: lea     edi, [esi+4]
0x4428ED: push    edi; lpAddend
0x4428EE: call    ebp ; InterlockedIncrement
0x4428F0: mov     ebx, [esp+28h+outTexture]
0x4428F4: push    edi; lpAddend
0x4428F5: mov     [ebx], esi
0x4428F7: call    ebp ; InterlockedIncrement
0x4428F9: push    edi; lpAddend
0x4428FA: mov     [esp+2Ch+var_10], 1
0x442902: mov     byte ptr [esp+2Ch+var_4], 0
0x442907: call    dword ptr ds:0A2807Ch
0x44290D: test    eax, eax
0x44290F: jnz     short loc_44291B
0x442911: mov     eax, [esi]
0x442913: mov     edx, [eax]
0x442915: push    1
0x442917: mov     ecx, esi
0x442919: call    edx
0x44291B: mov     eax, ebx
0x44291D: jmp     loc_442A0E
0x442922: cmp     [esp+28h+searchArchives], 0
0x442927: jz      short loc_44292E
0x442929: mov     ebp, 6
0x44292E: mov     ecx, ds:0B33A04h
0x442934: cmp     ecx, ebx
0x442936: jz      short loc_442948
0x442938: mov     eax, [ecx]
0x44293A: mov     edx, [eax+4]
0x44293D: push    0FFFFFFFFh
0x44293F: push    ebp
0x442940: push    ebx
0x442941: push    edi
0x442942: call    edx
0x442944: cmp     eax, ebx
0x442946: jnz     short loc_44295A
0x442948: cmp     [esp+28h+allowMissing], 0
0x44294D: jz      short loc_44295A; SpeedTreeOBSE 2026-07-14: FileFinder lookup is archive/resource aware. Direct SpeedTree composite candidates must reach this path without a loose-file GetFileAttributes gate.
0x44294F: mov     eax, [esp+28h+outTexture]
0x442953: mov     [eax], ebx
0x442955: jmp     loc_442A0E
0x44295A: mov     esi, ds:0B33A10h
0x442960: call    dword ptr ds:0A2808Ch
0x442966: cmp     eax, [esi+30h]
0x442969: jz      short loc_442976
0x44296B: mov     ecx, esi
0x44296D: call    sub_432860
0x442972: mov     bl, 1
0x442974: jmp     short loc_442978
0x442976: xor     bl, bl
0x442978: push    1; char
0x44297A: push    offset OB_TES_DefaultSourceTextureFormatPrefs_010201A0; int
0x44297F: push    edi; Src
0x442980: call    NiSourceTexture__LoadTextureByFilename; Verified (Oblivion): source-texture loader returns a reference-counted NiSourceTexture* through its output parameter; that pointer is passed to TESEffectShader_CreateVisualProperty and retained by ParticleShaderProperty.
0x442985: add     esp, 0Ch
0x442988: push    eax; a2
0x442989: lea     ecx, [esp+2Ch+var_14]; this
0x44298D: call    NiSmartPointer_Set??
0x442992: test    bl, bl
0x442994: jz      short loc_4429A1
0x442996: mov     ecx, ds:0B33A10h
0x44299C: call    sub_432890
0x4429A1: mov     esi, [esp+28h+var_14]
0x4429A5: test    esi, esi
0x4429A7: jz      short loc_4429BA
0x4429A9: mov     ecx, ds:0B35300h
0x4429AF: mov     eax, [ecx]
0x4429B1: mov     edx, [eax+8]
0x4429B4: push    esi
0x4429B5: push    edi
0x4429B6: call    edx
0x4429B8: jmp     short loc_4429CF
0x4429BA: cmp     [esp+28h+allowMissing], 0
0x4429BF: jnz     short loc_4429CF
0x4429C1: push    edi; ArgList
0x4429C2: push    offset aTesCreatetextu; "TES::CreateTextureImage unable to creat"...
0x4429C7: call    PrintError
0x4429CC: add     esp, 8
0x4429CF: test    esi, esi
0x4429D1: mov     edi, [esp+28h+outTexture]
0x4429D5: mov     [edi], esi
0x4429D7: jz      short loc_4429E3
0x4429D9: lea     eax, [esi+4]
0x4429DC: push    eax; lpAddend
0x4429DD: call    dword ptr ds:0A28078h
0x4429E3: test    esi, esi
0x4429E5: mov     [esp+28h+var_10], 1
0x4429ED: mov     byte ptr [esp+28h+var_4], 0
0x4429F2: jz      short loc_442A0C
0x4429F4: lea     ecx, [esi+4]
0x4429F7: push    ecx; lpAddend
0x4429F8: call    dword ptr ds:0A2807Ch
0x4429FE: test    eax, eax
0x442A00: jnz     short loc_442A0C
0x442A02: mov     edx, [esi]
0x442A04: mov     eax, [edx]
0x442A06: push    1
0x442A08: mov     ecx, esi
0x442A0A: call    eax
0x442A0C: mov     eax, edi
0x442A0E: mov     ecx, dword ptr [esp+28h+var_C]
0x442A12: mov     large fs:0, ecx
0x442A19: pop     ecx
0x442A1A: pop     edi
0x442A1B: pop     esi
0x442A1C: pop     ebp
0x442A1D: pop     ebx
0x442A1E: add     esp, 14h
0x442A21: retn    10h
0x9AD120: lea     ecx, [ebp-14h]; slot
0x9AD123: jmp     NiPointerSlot_Release
0x9AD128: mov     eax, [ebp-10h]
0x9AD12B: and     eax, 1
0x9AD12E: jz      locret_9AD140
0x9AD134: and     dword ptr [ebp-10h], 0FFFFFFFEh
0x9AD138: mov     ecx, [ebp+4]; slot
0x9AD13B: jmp     NiPointerSlot_Release
0x9AD140: retn
0x9AD141: mov     edx, [esp+ArgList]
0x9AD145: lea     eax, [edx-18h]
0x9AD148: mov     ecx, [edx-1Ch]
0x9AD14B: xor     ecx, eax
0x9AD14D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD152: mov     eax, offset stru_AD9D24
0x9AD157: jmp     ___CxxFrameHandler3
