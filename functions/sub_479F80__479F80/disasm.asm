0x479F80: push    0FFFFFFFFh
0x479F82: push    offset SEH_479F80
0x479F87: mov     eax, large fs:0
0x479F8D: push    eax
0x479F8E: sub     esp, 28h
0x479F91: push    ebx
0x479F92: push    ebp
0x479F93: push    esi
0x479F94: push    edi
0x479F95: mov     eax, ds:0B30AACh
0x479F9A: xor     eax, esp
0x479F9C: push    eax
0x479F9D: lea     eax, [esp+48h+var_C]
0x479FA1: mov     large fs:0, eax
0x479FA7: mov     ebx, ecx
0x479FA9: mov     esi, [esp+48h+arg_0]
0x479FAD: xor     edi, edi
0x479FAF: cmp     esi, edi
0x479FB1: jz      loc_47A2A9
0x479FB7: cmp     byte ptr [esi+4], 14h
0x479FBB: jnz     loc_47A2A9
0x479FC1: push    edi
0x479FC2: lea     eax, [ebx+11Ch]
0x479FC8: push    1
0x479FCA: push    eax
0x479FCB: call    sub_478780
0x479FD0: mov     ecx, [ebx+150h]
0x479FD6: mov     eax, [ecx]
0x479FD8: mov     edx, [eax+170h]
0x479FDE: push    0FFFFFFFFh; int
0x479FE0: call    edx
0x479FE2: mov     ecx, eax
0x479FE4: call    TESActorBase_IsFemale
0x479FE9: push    eax; int
0x479FEA: push    ebx; int
0x479FEB: lea     ecx, [esi+64h]; int
0x479FEE: call    sub_4691D0
0x479FF3: mov     eax, [ebx+120h]
0x479FF9: cmp     eax, edi
0x479FFB: jz      loc_47A2A9
0x47A001: mov     esi, [ebx+150h]
0x47A007: mov     ecx, ds:0B333C4h
0x47A00D: cmp     esi, ecx
0x47A00F: jnz     short loc_47A04C
0x47A011: push    ebx
0x47A012: mov     esi, eax
0x47A014: call    sub_65D770
0x47A019: mov     ecx, ds:0B333C4h
0x47A01F: push    eax
0x47A020: call    PlayerCharacter_GetPlayerNode
0x47A025: mov     edx, [esi]
0x47A027: push    eax
0x47A028: mov     eax, [ebx+150h]
0x47A02E: push    eax
0x47A02F: mov     eax, [edx+14h]
0x47A032: push    0Dh
0x47A034: mov     ecx, esi
0x47A036: call    eax
0x47A038: push    eax
0x47A039: call    sub_479450
0x47A03E: add     esp, 10h
0x47A041: mov     [ebx+124h], eax
0x47A047: jmp     loc_47A24C
0x47A04C: mov     edx, [eax]
0x47A04E: mov     ecx, eax
0x47A050: mov     eax, [edx+14h]
0x47A053: call    eax
0x47A055: cmp     eax, edi
0x47A057: jz      loc_47A244
0x47A05D: cmp     esi, edi
0x47A05F: jz      loc_47A244
0x47A065: mov     esi, [esi+3Ch]
0x47A068: cmp     esi, edi
0x47A06A: mov     [esp+48h+Src], esi
0x47A06E: jz      loc_47A244
0x47A074: mov     ecx, ds:0B33A1Ch
0x47A07A: push    1
0x47A07C: push    3
0x47A07E: push    1
0x47A080: push    eax
0x47A081: call    sub_439EB0
0x47A086: mov     esi, eax
0x47A088: lea     ecx, [esp+48h+var_28]
0x47A08C: mov     [esp+48h+var_34], esi
0x47A090: call    sub_478B90
0x47A095: fld1
0x47A097: fst     [esp+48h+var_10]
0x47A09B: fst     [esp+48h+var_14]
0x47A09F: fstp    [esp+48h+var_18]
0x47A0A3: mov     [esp+48h+var_4], edi
0x47A0A7: mov     [esp+48h+arg_0], edi
0x47A0AB: push    esi
0x47A0AC: mov     byte ptr [esp+4Ch+var_4], 1
0x47A0B1: call    sub_480820
0x47A0B6: add     esp, 4
0x47A0B9: test    al, al
0x47A0BB: jz      short loc_47A0E0
0x47A0BD: lea     ecx, [esp+48h+var_28]
0x47A0C1: push    ecx
0x47A0C2: mov     ecx, ds:0B333A0h
0x47A0C8: push    esi
0x47A0C9: call    sub_4430C0
0x47A0CE: push    eax; a2
0x47A0CF: lea     ecx, [esp+4Ch+arg_0]; this
0x47A0D3: call    NiSmartPointer_Set??
0x47A0D8: mov     ebp, [esp+48h+arg_0]
0x47A0DC: mov     edi, ebp
0x47A0DE: jmp     short loc_47A0EE
0x47A0E0: lea     edx, [esp+48h+var_28]
0x47A0E4: push    edx
0x47A0E5: mov     ecx, esi
0x47A0E7: call    sub_700610
0x47A0EC: mov     ebp, eax
0x47A0EE: push    offset dword_A7D0EC
0x47A0F3: mov     ecx, esi
0x47A0F5: call    NiObjectNET_GetExtraData
0x47A0FA: test    eax, eax
0x47A0FC: jz      short loc_47A111
0x47A0FE: mov     eax, [eax+0Ch]
0x47A101: shr     eax, 4
0x47A104: test    al, 1
0x47A106: jz      short loc_47A111
0x47A108: push    ebp
0x47A109: call    sub_4E26F0
0x47A10E: add     esp, 4
0x47A111: mov     ecx, ebp
0x47A113: call    sub_6FFC60
0x47A118: test    ebp, ebp
0x47A11A: jz      loc_47A1F7
0x47A120: push    ebp
0x47A121: push    offset dword_B35288
0x47A126: call    NiRTTI__IsObjectOfRTTIType
0x47A12B: add     esp, 8
0x47A12E: test    al, al
0x47A130: jz      short loc_47A13B
0x47A132: push    7
0x47A134: mov     ecx, ebp
0x47A136: call    sub_4A01B0
0x47A13B: mov     ecx, ds:0B3F9A8h
0x47A141: mov     [ebp+54h], ecx
0x47A144: mov     edx, ds:0B3F9ACh
0x47A14A: mov     [ebp+58h], edx
0x47A14D: mov     eax, ds:0B3F9B0h
0x47A152: mov     [ebp+5Ch], eax
0x47A155: lea     edi, [ebp+30h]
0x47A158: mov     ecx, 9
0x47A15D: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x47A162: push    ebp
0x47A163: rep movsd
0x47A165: call    sub_471B80
0x47A16A: add     esp, 4
0x47A16D: test    al, al
0x47A16F: jz      short loc_47A184
0x47A171: mov     eax, [ebp+8]
0x47A174: push    eax; ArgList
0x47A175: push    offset aTyringToAddSki; "Tyring to add skinned object '%s' as an"...
0x47A17A: call    PrintError
0x47A17F: add     esp, 8
0x47A182: jmp     short loc_47A1E5
0x47A184: mov     ecx, [esp+48h+var_34]
0x47A188: mov     esi, [esp+48h+Src]
0x47A18C: push    0
0x47A18E: push    0FFFFFFFFh
0x47A190: push    0
0x47A192: push    ecx
0x47A193: push    ebp
0x47A194: push    esi
0x47A195: call    sub_479140
0x47A19A: mov     edx, [ebp+0]
0x47A19D: mov     eax, [edx+8]
0x47A1A0: add     esp, 18h
0x47A1A3: mov     ecx, ebp
0x47A1A5: call    eax
0x47A1A7: test    eax, eax
0x47A1A9: jz      short loc_47A1E5
0x47A1AB: cmp     dword ptr [ebp+1Ch], 0
0x47A1AF: jnz     short loc_47A1E5
0x47A1B1: mov     eax, ds:0B065FCh
0x47A1B6: cmp     eax, 0FFFFFFFFh
0x47A1B9: jz      short loc_47A1D6
0x47A1BB: mov     ecx, ds:0B06550h[eax*4]
0x47A1C2: push    ecx; a2
0x47A1C3: push    esi; a1
0x47A1C4: call    NiObjectNET_LookupObjectByName
0x47A1C9: add     esp, 8
0x47A1CC: test    eax, eax
0x47A1CE: jz      short loc_47A1D6
0x47A1D0: mov     edx, [eax]
0x47A1D2: mov     ecx, eax
0x47A1D4: jmp     short loc_47A1DA
0x47A1D6: mov     edx, [esi]
0x47A1D8: mov     ecx, esi
0x47A1DA: mov     eax, [edx+84h]
0x47A1E0: push    1
0x47A1E2: push    ebp
0x47A1E3: call    eax
0x47A1E5: mov     ecx, ebp
0x47A1E7: call    NiNode_UpdateDynamicEffectState
0x47A1EC: mov     ecx, ebp; this
0x47A1EE: call    NiAVObject_InitializePropertyState
0x47A1F3: mov     edi, [esp+48h+arg_0]
0x47A1F7: test    edi, edi
0x47A1F9: mov     byte ptr [esp+48h+var_4], 0
0x47A1FE: jz      short loc_47A218
0x47A200: lea     ecx, [edi+4]
0x47A203: push    ecx; lpAddend
0x47A204: call    dword ptr ds:0A2807Ch
0x47A20A: test    eax, eax
0x47A20C: jnz     short loc_47A218
0x47A20E: mov     edx, [edi]
0x47A210: mov     eax, [edx]
0x47A212: push    1
0x47A214: mov     ecx, edi
0x47A216: call    eax
0x47A218: mov     ecx, [esp+48h+var_28]
0x47A21C: test    ecx, ecx
0x47A21E: mov     [esp+48h+var_4], 0FFFFFFFFh
0x47A226: jz      short loc_47A230
0x47A228: mov     edx, [ecx]
0x47A22A: mov     eax, [edx]
0x47A22C: push    1
0x47A22E: call    eax
0x47A230: mov     ecx, [esp+48h+var_24]
0x47A234: test    ecx, ecx
0x47A236: jz      short loc_47A240
0x47A238: mov     edx, [ecx]
0x47A23A: mov     eax, [edx]
0x47A23C: push    1
0x47A23E: call    eax
0x47A240: xor     edi, edi
0x47A242: jmp     short loc_47A246
0x47A244: xor     ebp, ebp
0x47A246: mov     [ebx+124h], ebp
0x47A24C: mov     [esp+48h+Src], edi
0x47A250: mov     [esp+48h+var_2C], di
0x47A255: mov     [esp+48h+var_2A], di
0x47A25A: mov     ecx, [ebx+11Ch]
0x47A260: mov     eax, [ecx+0Ch]
0x47A263: mov     edx, [ecx]
0x47A265: push    eax
0x47A266: mov     eax, [edx+0D4h]
0x47A26C: mov     [esp+4Ch+var_4], 2
0x47A274: call    eax
0x47A276: mov     ecx, ds:0B065BCh
0x47A27C: push    eax
0x47A27D: push    ecx; ArgList
0x47A27E: lea     edx, [esp+54h+Src]
0x47A282: push    offset aSS08x; "%s %s (%08X)"
0x47A287: push    edx; int
0x47A288: call    BSStringT_Static_Format
0x47A28D: mov     esi, [esp+5Ch+Src]
0x47A291: mov     ecx, [ebx+124h]
0x47A297: add     esp, 14h
0x47A29A: push    esi; Src
0x47A29B: call    NiObjectNET_SetName
0x47A2A0: push    esi
0x47A2A1: call    FormHeapFree
0x47A2A6: add     esp, 4
0x47A2A9: mov     ecx, [esp+48h+var_C]
0x47A2AD: mov     large fs:0, ecx
0x47A2B4: pop     ecx
0x47A2B5: pop     edi
0x47A2B6: pop     esi
0x47A2B7: pop     ebp
0x47A2B8: pop     ebx
0x47A2B9: add     esp, 34h
0x47A2BC: retn    4
