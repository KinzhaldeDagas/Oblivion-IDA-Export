0x56C4C0: push    0FFFFFFFFh
0x56C4C2: push    offset SEH_56C4C0
0x56C4C7: mov     eax, large fs:0
0x56C4CD: push    eax
0x56C4CE: sub     esp, 13Ch
0x56C4D4: mov     eax, ds:0B30AACh
0x56C4D9: xor     eax, esp
0x56C4DB: mov     [esp+148h+var_10], eax
0x56C4E2: push    ebx
0x56C4E3: push    ebp
0x56C4E4: push    esi
0x56C4E5: push    edi
0x56C4E6: mov     eax, ds:0B30AACh
0x56C4EB: xor     eax, esp
0x56C4ED: push    eax
0x56C4EE: lea     eax, [esp+15Ch+var_C]
0x56C4F5: mov     large fs:0, eax
0x56C4FB: mov     ebp, ecx
0x56C4FD: mov     ecx, ds:0B33B00h
0x56C503: xor     ebx, ebx
0x56C505: mov     dword ptr [esp+15Ch+var_144], ebx
0x56C509: mov     [esp+15Ch+var_134], ebx
0x56C50D: call    sub_45A170
0x56C512: test    al, al
0x56C514: jz      loc_56C5B7
0x56C51A: mov     ecx, ds:0B33B00h
0x56C520: push    4; Size
0x56C522: lea     eax, [esp+160h+Dst]
0x56C526: push    eax; Dst
0x56C527: call    SaveLoad_LoadData
0x56C52C: cmp     [esp+15Ch+Dst], 4B4F4C42h
0x56C534: jz      short loc_56C59E
0x56C536: mov     eax, ds:0B33B00h
0x56C53B: mov     esi, [eax+80h]
0x56C541: cmp     esi, ebx
0x56C543: jz      short loc_56C582
0x56C545: mov     ecx, [esi]
0x56C547: push    ecx; a1
0x56C548: call    TESForm_LookupByFormID
0x56C54D: mov     edx, [esi+5]
0x56C550: movzx   ecx, byte ptr [esi+9]
0x56C554: add     esp, 4
0x56C557: push    edx
0x56C558: mov     edx, [eax]
0x56C55A: push    ecx
0x56C55B: mov     ecx, eax
0x56C55D: mov     eax, [edx+0D4h]
0x56C563: call    eax
0x56C565: mov     ecx, [esi]
0x56C567: push    eax
0x56C568: push    ecx
0x56C569: push    0DBh ; 'Û'
0x56C56E: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56C573: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x56C578: call    PrintError
0x56C57D: add     esp, 1Ch
0x56C580: jmp     short loc_56C59E
0x56C582: movzx   edx, byte ptr [eax+7Ch]
0x56C586: push    edx
0x56C587: push    0DBh ; 'Û'
0x56C58C: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56C591: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x56C596: call    PrintError
0x56C59B: add     esp, 10h
0x56C59E: mov     ecx, ds:0B33B00h
0x56C5A4: mov     eax, [ecx+14h]
0x56C5A7: push    2; Size
0x56C5A9: lea     edx, [esp+160h+var_144]
0x56C5AD: push    edx; Dst
0x56C5AE: mov     [esp+164h+var_134], eax
0x56C5B2: call    SaveLoad_LoadData
0x56C5B7: mov     ecx, ebp
0x56C5B9: call    sub_56BCA0
0x56C5BE: push    4Ch ; 'L'; Size
0x56C5C0: mov     byte ptr [esp+160h+var_148+3], al
0x56C5C4: call    FormHeapAlloc
0x56C5C9: add     esp, 4
0x56C5CC: cmp     eax, ebx
0x56C5CE: jz      short loc_56C5D7
0x56C5D0: mov     [eax], ebx
0x56C5D2: mov     [eax+48h], ebx
0x56C5D5: jmp     short loc_56C5D9
0x56C5D7: xor     eax, eax
0x56C5D9: mov     [ebp+18h], eax
0x56C5DC: mov     ecx, ds:0B33B00h
0x56C5E2: lea     eax, [esp+15Ch+var_114]
0x56C5E6: push    eax; Dst
0x56C5E7: call    sub_45A290
0x56C5EC: test    eax, eax
0x56C5EE: jz      short loc_56C648
0x56C5F0: push    ebx; char
0x56C5F1: push    ebx; char
0x56C5F2: lea     ecx, [esp+164h+var_114]
0x56C5F6: push    ecx; ArgList
0x56C5F7: mov     ecx, ds:0B333A0h
0x56C5FD: lea     edx, [esp+168h+var_128]
0x56C601: push    edx; int
0x56C602: call    sub_442890
0x56C607: mov     ecx, [ebp+18h]
0x56C60A: push    eax
0x56C60B: mov     [esp+160h+var_4], ebx
0x56C612: call    sub_55E2A0
0x56C617: mov     eax, [esp+15Ch+var_128]
0x56C61B: cmp     eax, ebx
0x56C61D: mov     [esp+15Ch+var_4], 0FFFFFFFFh
0x56C628: jz      short loc_56C648
0x56C62A: mov     esi, eax
0x56C62C: add     eax, 4
0x56C62F: push    eax; lpAddend
0x56C630: call    dword ptr ds:0A2807Ch
0x56C636: test    eax, eax
0x56C638: jnz     short loc_56C648
0x56C63A: cmp     esi, ebx
0x56C63C: jz      short loc_56C648
0x56C63E: mov     eax, [esi]
0x56C640: mov     edx, [eax]
0x56C642: push    1
0x56C644: mov     ecx, esi
0x56C646: call    edx
0x56C648: mov     eax, [ebp+18h]
0x56C64B: cmp     [eax], ebx
0x56C64D: jnz     short loc_56C654
0x56C64F: mov     byte ptr [esp+160h+var_14C+3], 0
0x56C654: mov     ecx, ds:0B33B00h
0x56C65A: push    4; Size
0x56C65C: add     eax, 4
0x56C65F: push    eax; Dst
0x56C660: call    SaveLoad_LoadData
0x56C665: mov     ecx, ds:0B33B00h
0x56C66B: push    10h; Size
0x56C66D: lea     eax, [esp+164h+var_128]
0x56C671: push    eax; Dst
0x56C672: call    SaveLoad_LoadData
0x56C677: mov     ecx, [ebp+18h]
0x56C67A: add     ecx, 8
0x56C67D: push    ecx
0x56C67E: lea     ecx, [esp+164h+var_128]
0x56C682: call    sub_47C600
0x56C687: mov     edx, [ebp+18h]
0x56C68A: mov     ecx, ds:0B33B00h
0x56C690: push    0Ch; Size
0x56C692: add     edx, 2Ch ; ','
0x56C695: push    edx; Dst
0x56C696: call    SaveLoad_LoadData
0x56C69B: mov     eax, [ebp+18h]
0x56C69E: mov     ecx, ds:0B33B00h
0x56C6A4: push    4; Size
0x56C6A6: add     eax, 38h ; '8'
0x56C6A9: push    eax; Dst
0x56C6AA: call    SaveLoad_LoadData
0x56C6AF: mov     ecx, [ebp+18h]
0x56C6B2: add     ecx, 3Ch ; '<'
0x56C6B5: push    4; Size
0x56C6B7: push    ecx; Dst
0x56C6B8: mov     ecx, ds:0B33B00h
0x56C6BE: call    SaveLoad_LoadFormID
0x56C6C3: mov     edx, [ebp+18h]
0x56C6C6: mov     ecx, ds:0B33B00h
0x56C6CC: push    4; Size
0x56C6CE: add     edx, 40h ; '@'
0x56C6D1: push    edx; Dst
0x56C6D2: call    SaveLoad_LoadData
0x56C6D7: mov     eax, [ebp+18h]
0x56C6DA: mov     ecx, ds:0B33B00h
0x56C6E0: push    1; Size
0x56C6E2: add     eax, 44h ; 'D'
0x56C6E5: push    eax; Dst
0x56C6E6: call    SaveLoad_LoadData
0x56C6EB: push    4; Size
0x56C6ED: lea     ecx, [esp+16Ch+var_14C]
0x56C6F1: push    ecx; Dst
0x56C6F2: mov     ecx, ds:0B33B00h
0x56C6F8: call    SaveLoad_LoadData
0x56C6FD: mov     ecx, ds:0B33B00h
0x56C703: push    4; Size
0x56C705: lea     edx, [esp+16Ch+var_144]
0x56C709: push    edx; Dst
0x56C70A: call    SaveLoad_LoadData
0x56C70F: mov     eax, [ebp+18h]
0x56C712: mov     eax, [eax+3Ch]
0x56C715: xor     edi, edi
0x56C717: cmp     eax, ebx
0x56C719: jz      short loc_56C73B
0x56C71B: push    ebx; int
0x56C71C: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x56C721: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56C726: push    ebx; int
0x56C727: push    eax; a1
0x56C728: call    TESForm_LookupByFormID
0x56C72D: add     esp, 4
0x56C730: push    eax; void *
0x56C731: call    OblivionDynamicCast
0x56C736: add     esp, 14h
0x56C739: mov     edi, eax
0x56C73B: cmp     edi, ebx
0x56C73D: mov     byte ptr [esp+168h+var_148], 0
0x56C742: jz      short loc_56C749
0x56C744: mov     ebx, [edi+3Ch]
0x56C747: jmp     short loc_56C760
0x56C749: mov     ecx, [ebp+0Ch]; this
0x56C74C: cmp     ecx, ebx
0x56C74E: jz      loc_56C913
0x56C754: call    TESObjectCELL_GetNiNode?
0x56C759: mov     ebx, eax
0x56C75B: mov     byte ptr [esp+168h+var_148], 1
0x56C760: test    ebx, ebx
0x56C762: jz      loc_56C913
0x56C768: cmp     [esp+168h+var_151], 0
0x56C76D: jz      loc_56C913
0x56C773: mov     ecx, [esp+168h+var_148]
0x56C777: push    ecx
0x56C778: push    1
0x56C77A: push    ebx
0x56C77B: call    sub_480F00
0x56C780: mov     esi, eax
0x56C782: mov     eax, [esp+174h+var_14C]
0x56C786: add     esp, 0Ch
0x56C789: cmp     eax, esi
0x56C78B: jz      loc_56C822
0x56C791: mov     ecx, ds:0B333C4h
0x56C797: cmp     edi, ecx
0x56C799: jnz     short loc_56C7BA
0x56C79B: push    1
0x56C79D: call    PlayerCharacter_GetPlayerNode
0x56C7A2: mov     edx, [esp+168h+var_148]
0x56C7A6: push    edx
0x56C7A7: mov     ebx, eax
0x56C7A9: push    1
0x56C7AB: push    ebx
0x56C7AC: call    sub_480F00
0x56C7B1: mov     esi, eax
0x56C7B3: mov     eax, [esp+174h+var_14C]
0x56C7B7: add     esp, 0Ch
0x56C7BA: cmp     eax, esi
0x56C7BC: jz      short loc_56C822
0x56C7BE: test    edi, edi
0x56C7C0: jz      short loc_56C7E4
0x56C7C2: mov     ecx, [edi+0Ch]
0x56C7C5: mov     edx, [edi]
0x56C7C7: push    esi
0x56C7C8: mov     dword ptr [esp+16Ch+var_13C], ecx
0x56C7CC: push    eax
0x56C7CD: mov     eax, [edx+0D4h]
0x56C7D3: mov     ecx, edi
0x56C7D5: call    eax
0x56C7D7: mov     ecx, dword ptr [esp+170h+var_13C]
0x56C7DB: push    eax
0x56C7DC: push    ecx
0x56C7DD: push    offset aGeometryCountH; "Geometry count has changed on reference"...
0x56C7E2: jmp     short loc_56C809
0x56C7E4: mov     ecx, [ebp+0Ch]
0x56C7E7: test    ecx, ecx
0x56C7E9: jz      short loc_56C815
0x56C7EB: mov     edx, [ecx+0Ch]
0x56C7EE: push    esi
0x56C7EF: push    eax
0x56C7F0: mov     eax, [ecx]
0x56C7F2: mov     dword ptr [esp+170h+var_13C], edx
0x56C7F6: mov     edx, [eax+0D4h]
0x56C7FC: call    edx
0x56C7FE: push    eax
0x56C7FF: mov     eax, dword ptr [esp+174h+var_13C]
0x56C803: push    eax; ArgList
0x56C804: push    offset aGeometryCoun_0; "Geometry count has changed on cell %08X"...
0x56C809: call    PrintError
0x56C80E: mov     eax, [esp+17Ch+var_14C]
0x56C812: add     esp, 14h
0x56C815: cmp     eax, esi
0x56C817: mov     [esp+168h+var_151], 0
0x56C81C: jnz     loc_56C918
0x56C822: mov     ecx, [esp+168h+var_148]
0x56C826: mov     edx, dword ptr [esp+168h+var_144]
0x56C82A: push    ecx
0x56C82B: push    1
0x56C82D: push    edx
0x56C82E: push    ebx
0x56C82F: call    sub_481320
0x56C834: add     esp, 10h
0x56C837: test    eax, eax
0x56C839: jnz     short loc_56C888
0x56C83B: test    edi, edi
0x56C83D: jz      short loc_56C85F
0x56C83F: mov     eax, [edi]
0x56C841: mov     edx, [eax+0D4h]
0x56C847: mov     esi, [edi+0Ch]
0x56C84A: mov     ecx, edi
0x56C84C: call    edx
0x56C84E: push    eax
0x56C84F: mov     eax, dword ptr [esp+16Ch+var_144]
0x56C853: push    esi
0x56C854: push    eax
0x56C855: push    offset aCouldNotFin_15; "Could not find geometry with index %i o"...
0x56C85A: jmp     loc_56C90B
0x56C85F: mov     ecx, [ebp+0Ch]
0x56C862: test    ecx, ecx
0x56C864: jz      loc_56C913
0x56C86A: mov     edx, [ecx]
0x56C86C: mov     eax, [edx+0D4h]
0x56C872: mov     esi, [ecx+0Ch]
0x56C875: call    eax
0x56C877: mov     ecx, dword ptr [esp+168h+var_144]
0x56C87B: push    eax
0x56C87C: push    esi
0x56C87D: push    ecx
0x56C87E: push    offset aCouldNotFin_16; "Could not find geometry with index %i o"...
0x56C883: jmp     loc_56C90B
0x56C888: mov     edx, [eax]
0x56C88A: mov     ecx, eax
0x56C88C: mov     eax, [edx+10h]
0x56C88F: call    eax
0x56C891: mov     esi, eax
0x56C893: push    4
0x56C895: mov     ecx, esi
0x56C897: call    NiNode_GetNiPropertyByID
0x56C89C: test    eax, eax
0x56C89E: jz      short loc_56C8D9
0x56C8A0: push    4
0x56C8A2: mov     ecx, esi
0x56C8A4: call    NiNode_GetNiPropertyByID
0x56C8A9: mov     edx, [eax]
0x56C8AB: mov     ecx, eax
0x56C8AD: mov     eax, [edx+54h]
0x56C8B0: call    eax
0x56C8B2: cmp     eax, 1
0x56C8B5: jl      short loc_56C8D9
0x56C8B7: push    4
0x56C8B9: mov     ecx, esi
0x56C8BB: call    NiNode_GetNiPropertyByID
0x56C8C0: mov     edx, [eax]
0x56C8C2: mov     ecx, eax
0x56C8C4: mov     eax, [edx+54h]
0x56C8C7: call    eax
0x56C8C9: cmp     eax, 0Ah
0x56C8CC: jg      short loc_56C8D9
0x56C8CE: push    4
0x56C8D0: mov     ecx, esi
0x56C8D2: call    NiNode_GetNiPropertyByID
0x56C8D7: jmp     short loc_56C8DB
0x56C8D9: xor     eax, eax
0x56C8DB: mov     ecx, [ebp+18h]
0x56C8DE: push    eax; a2
0x56C8DF: add     ecx, 48h ; 'H'; this
0x56C8E2: call    NiSmartPointer_Set??
0x56C8E7: mov     ecx, [ebp+18h]
0x56C8EA: cmp     dword ptr [ecx+48h], 0
0x56C8EE: jnz     short loc_56C918
0x56C8F0: mov     edx, [edi]
0x56C8F2: mov     eax, [edx+0D4h]
0x56C8F8: mov     esi, [edi+0Ch]
0x56C8FB: mov     ecx, edi
0x56C8FD: call    eax
0x56C8FF: mov     ecx, dword ptr [esp+168h+var_144]
0x56C903: push    eax
0x56C904: push    esi
0x56C905: push    ecx; ArgList
0x56C906: push    offset aThereIsNoShade; "There is no shader property on geometry"...
0x56C90B: call    PrintError
0x56C910: add     esp, 10h
0x56C913: mov     [esp+168h+var_151], 0
0x56C918: mov     ecx, ds:0B33B00h
0x56C91E: call    sub_45A170
0x56C923: test    al, al
0x56C925: jz      loc_56CA29
0x56C92B: mov     ecx, ds:0B33B00h
0x56C931: mov     edi, [ecx+80h]
0x56C937: test    edi, edi
0x56C939: mov     esi, [ecx+14h]
0x56C93C: jz      loc_56C9DB
0x56C942: mov     edx, [edi]
0x56C944: push    edx; a1
0x56C945: call    TESForm_LookupByFormID
0x56C94A: mov     ebx, [esp+16Ch+var_140]
0x56C94E: mov     ecx, eax
0x56C950: movzx   eax, [esp+16Ch+var_150]
0x56C955: add     eax, ebx
0x56C957: add     esp, 4
0x56C95A: cmp     esi, eax
0x56C95C: jbe     short loc_56C99B
0x56C95E: mov     edx, [edi+5]
0x56C961: movzx   eax, byte ptr [edi+9]
0x56C965: push    edx
0x56C966: mov     edx, [ecx]
0x56C968: push    eax
0x56C969: mov     eax, [edx+0D4h]
0x56C96F: call    eax
0x56C971: mov     ecx, [edi]
0x56C973: movzx   edx, [esp+170h+var_150]
0x56C978: push    eax
0x56C979: push    ecx
0x56C97A: push    141h
0x56C97F: sub     esi, edx
0x56C981: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56C986: sub     esi, ebx
0x56C988: push    esi; ArgList
0x56C989: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x56C98E: call    PrintError
0x56C993: add     esp, 20h
0x56C996: jmp     loc_56CA29
0x56C99B: jnb     loc_56CA29
0x56C9A1: mov     eax, [edi+5]
0x56C9A4: movzx   edx, byte ptr [edi+9]
0x56C9A8: push    eax
0x56C9A9: mov     eax, [ecx]
0x56C9AB: push    edx
0x56C9AC: mov     edx, [eax+0D4h]
0x56C9B2: call    edx
0x56C9B4: movzx   ecx, [esp+170h+var_150]
0x56C9B9: push    eax
0x56C9BA: mov     eax, [edi]
0x56C9BC: push    eax
0x56C9BD: push    141h
0x56C9C2: sub     ecx, esi
0x56C9C4: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56C9C9: add     ecx, ebx
0x56C9CB: push    ecx; ArgList
0x56C9CC: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x56C9D1: call    PrintError
0x56C9D6: add     esp, 20h
0x56C9D9: jmp     short loc_56CA29
0x56C9DB: movzx   eax, [esp+168h+var_150]
0x56C9E0: mov     edx, [esp+168h+var_140]
0x56C9E4: lea     edi, [eax+edx]
0x56C9E7: cmp     esi, edi
0x56C9E9: jbe     short loc_56CA06
0x56C9EB: movzx   ecx, byte ptr [ecx+7Ch]
0x56C9EF: push    ecx
0x56C9F0: push    141h
0x56C9F5: sub     esi, eax
0x56C9F7: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56C9FC: sub     esi, edx
0x56C9FE: push    esi
0x56C9FF: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x56CA04: jmp     short loc_56CA21
0x56CA06: jnb     short loc_56CA29
0x56CA08: movzx   ecx, byte ptr [ecx+7Ch]
0x56CA0C: push    ecx
0x56CA0D: push    141h
0x56CA12: sub     eax, esi
0x56CA14: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56CA19: add     eax, edx
0x56CA1B: push    eax; ArgList
0x56CA1C: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x56CA21: call    PrintError
0x56CA26: add     esp, 14h
0x56CA29: mov     bl, [esp+168h+var_151]
0x56CA2D: test    bl, bl
0x56CA2F: mov     ebp, [ebp+18h]
0x56CA32: jz      short loc_56CA3F
0x56CA34: mov     ecx, [ebp+48h]
0x56CA37: push    ebp
0x56CA38: call    sub_7EE3E0
0x56CA3D: jmp     short loc_56CA6C
0x56CA3F: mov     esi, [ebp+48h]
0x56CA42: add     ebp, 48h ; 'H'
0x56CA45: test    esi, esi
0x56CA47: jz      short loc_56CA6C
0x56CA49: lea     edx, [esi+4]
0x56CA4C: push    edx; lpAddend
0x56CA4D: call    dword ptr ds:0A2807Ch
0x56CA53: test    eax, eax
0x56CA55: jnz     short loc_56CA65
0x56CA57: test    esi, esi
0x56CA59: jz      short loc_56CA65
0x56CA5B: mov     eax, [esi]
0x56CA5D: mov     edx, [eax]
0x56CA5F: push    1
0x56CA61: mov     ecx, esi
0x56CA63: call    edx
0x56CA65: mov     dword ptr [ebp+0], 0
0x56CA6C: mov     al, bl
0x56CA6E: mov     ecx, [esp+168h+var_18]
0x56CA75: mov     large fs:0, ecx
0x56CA7C: pop     ecx
0x56CA7D: pop     edi
0x56CA7E: pop     esi
0x56CA7F: pop     ebp
0x56CA80: pop     ebx
0x56CA81: mov     ecx, [esp+154h+var_1C]
0x56CA88: xor     ecx, esp
0x56CA8A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x56CA8F: add     esp, 148h
0x56CA95: retn
