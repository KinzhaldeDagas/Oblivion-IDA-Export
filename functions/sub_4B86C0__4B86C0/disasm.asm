0x4B86C0: push    0FFFFFFFFh
0x4B86C2: push    offset SEH_4B86C0
0x4B86C7: mov     eax, large fs:0
0x4B86CD: push    eax
0x4B86CE: sub     esp, 34h
0x4B86D1: push    ebx
0x4B86D2: push    ebp
0x4B86D3: push    esi
0x4B86D4: push    edi
0x4B86D5: mov     eax, ds:0B30AACh
0x4B86DA: xor     eax, esp
0x4B86DC: push    eax
0x4B86DD: lea     eax, [esp+54h+var_C]
0x4B86E1: mov     large fs:0, eax
0x4B86E7: mov     [esp+54h+var_3C], ecx
0x4B86EB: mov     esi, [esp+54h+arg_0]
0x4B86EF: xor     ebx, ebx
0x4B86F1: xor     ebp, ebp
0x4B86F3: cmp     esi, ebx
0x4B86F5: mov     [esp+54h+var_40], ebx
0x4B86F9: jz      loc_4B89DD
0x4B86FF: mov     ecx, esi; this
0x4B8701: call    TESObjectREFR_GetWorldSpace
0x4B8706: cmp     eax, ebx
0x4B8708: mov     [esp+54h+arg_0], eax
0x4B870C: jnz     short loc_4B8736
0x4B870E: mov     ecx, esi; this
0x4B8710: call    TESObjectREFR_GetParentCell
0x4B8715: test    eax, eax
0x4B8717: jz      short loc_4B8736
0x4B8719: mov     ecx, esi; this
0x4B871B: call    TESObjectREFR_GetParentCell
0x4B8720: mov     ecx, eax; this
0x4B8722: call    TESObjectCELL_IsInterior
0x4B8727: test    al, al
0x4B8729: jz      short loc_4B8736
0x4B872B: mov     ecx, esi; this
0x4B872D: call    TESObjectREFR_GetParentCell
0x4B8732: mov     [esp+54h+arg_0], eax
0x4B8736: mov     ecx, [esp+54h+arg_4]
0x4B873A: xor     edi, edi
0x4B873C: cmp     ecx, ebx
0x4B873E: jz      short loc_4B877F
0x4B8740: call    sub_4D8E40
0x4B8745: mov     esi, eax
0x4B8747: cmp     esi, ebx
0x4B8749: jz      short loc_4B877F
0x4B874B: mov     ecx, esi; this
0x4B874D: call    GetTeleportExtraData
0x4B8752: test    eax, eax
0x4B8754: jz      short loc_4B877F
0x4B8756: mov     ecx, esi; this
0x4B8758: call    GetTeleportExtraData
0x4B875D: mov     ecx, eax
0x4B875F: call    sub_42B410
0x4B8764: test    eax, eax
0x4B8766: jz      short loc_4B877F
0x4B8768: mov     ecx, esi; this
0x4B876A: call    GetTeleportExtraData
0x4B876F: mov     ecx, eax
0x4B8771: call    sub_42B410
0x4B8776: mov     ecx, eax
0x4B8778: call    sub_4D8AF0
0x4B877D: mov     edi, eax
0x4B877F: cmp     [esp+54h+arg_0], ebx
0x4B8783: jz      loc_4B89DD
0x4B8789: push    25h ; '%'
0x4B878B: lea     ecx, [esp+58h+var_2C]
0x4B878F: call    ??0?$NiTPointerMap@H_N@@QAE@XZ; NiTPointerMap<int,bool>::NiTPointerMap<int,bool>(void)
0x4B8794: mov     edx, [esp+54h+var_3C]
0x4B8798: xor     esi, esi
0x4B879A: lea     eax, [edx+68h]
0x4B879D: cmp     eax, ebx
0x4B879F: mov     [esp+54h+var_4], ebx
0x4B87A3: mov     [esp+54h+arg_4], ebx
0x4B87A7: mov     [esp+54h+var_38], esi
0x4B87AB: jz      short loc_4B87C2
0x4B87AD: lea     ecx, [ecx+0]
0x4B87B0: cmp     [eax], ebx
0x4B87B2: jz      short loc_4B87B7
0x4B87B4: add     esi, 1
0x4B87B7: mov     eax, [eax+4]
0x4B87BA: cmp     eax, ebx
0x4B87BC: jnz     short loc_4B87B0
0x4B87BE: mov     [esp+54h+var_38], esi
0x4B87C2: cmp     edi, ebx
0x4B87C4: jz      short loc_4B880B
0x4B87C6: cmp     edi, [esp+54h+arg_0]
0x4B87CA: jz      short loc_4B880B
0x4B87CC: lea     eax, [edx+68h]
0x4B87CF: cmp     eax, ebx
0x4B87D1: jz      short loc_4B880B
0x4B87D3: mov     ecx, [eax+4]
0x4B87D6: cmp     ecx, ebx
0x4B87D8: jnz     short loc_4B87DE
0x4B87DA: cmp     [eax], ebx
0x4B87DC: jz      short loc_4B880B
0x4B87DE: cmp     [eax], edi
0x4B87E0: jz      short loc_4B87EA
0x4B87E2: mov     eax, ecx
0x4B87E4: cmp     eax, ebx
0x4B87E6: jnz     short loc_4B87D3
0x4B87E8: jmp     short loc_4B880B
0x4B87EA: mov     ecx, [esp+54h+arg_0]
0x4B87EE: lea     eax, [esp+54h+var_40]
0x4B87F2: push    eax
0x4B87F3: push    ecx
0x4B87F4: push    edi
0x4B87F5: mov     [esp+60h+arg_4], esi
0x4B87F9: call    sub_4CB070
0x4B87FE: mov     edx, [esp+60h+var_3C]
0x4B8802: add     esp, 0Ch
0x4B8805: mov     ebp, eax
0x4B8807: mov     [esp+54h+var_40], ebx
0x4B880B: mov     ecx, ds:0B333C4h
0x4B8811: or      edi, 0FFFFFFFFh
0x4B8814: push    edx
0x4B8815: mov     [esp+58h+var_34], edi
0x4B8819: call    sub_663EB0
0x4B881E: cmp     [esp+54h+arg_4], esi
0x4B8822: movzx   edx, al
0x4B8825: mov     [esp+54h+var_30], edx
0x4B8829: jnb     loc_4B8929
0x4B882F: jmp     short loc_4B8835
0x4B8831: mov     esi, [esp+54h+var_38]
0x4B8835: cmp     ebp, ebx
0x4B8837: jnz     loc_4B89B6
0x4B883D: add     [esp+54h+arg_4], 1
0x4B8842: push    ebx; Seed
0x4B8843: call    GetRandomLargeInteger?
0x4B8848: xor     edx, edx
0x4B884A: add     esp, 4
0x4B884D: div     esi
0x4B884F: mov     eax, [esp+54h+var_2C]
0x4B8853: mov     edi, edx
0x4B8855: mov     edx, [eax+4]
0x4B8858: push    edi
0x4B8859: lea     ecx, [esp+58h+var_2C]
0x4B885D: call    edx
0x4B885F: mov     ecx, [esp+54h+var_24]
0x4B8863: mov     esi, [ecx+eax*4]
0x4B8866: cmp     esi, ebx
0x4B8868: jz      short loc_4B888C
0x4B886A: lea     ebx, [ebx+0]
0x4B8870: mov     edx, [esi+4]
0x4B8873: mov     eax, [esp+54h+var_2C]
0x4B8877: push    edx
0x4B8878: mov     edx, [eax+8]
0x4B887B: push    edi
0x4B887C: lea     ecx, [esp+5Ch+var_2C]
0x4B8880: call    edx
0x4B8882: test    al, al
0x4B8884: jnz     short loc_4B88BA
0x4B8886: mov     esi, [esi]
0x4B8888: cmp     esi, ebx
0x4B888A: jnz     short loc_4B8870
0x4B888C: mov     eax, [esp+54h+var_3C]
0x4B8890: add     eax, 68h ; 'h'
0x4B8893: xor     edx, edx
0x4B8895: xor     esi, esi
0x4B8897: cmp     eax, ebx
0x4B8899: jz      short loc_4B88D5
0x4B889B: jmp     short loc_4B88A0
0x4B889D: align 10h
0x4B88A0: mov     ecx, [eax+4]
0x4B88A3: cmp     ecx, ebx
0x4B88A5: jnz     short loc_4B88AB
0x4B88A7: cmp     [eax], ebx
0x4B88A9: jz      short loc_4B88D5
0x4B88AB: cmp     esi, edi
0x4B88AD: jz      short loc_4B88D3
0x4B88AF: mov     eax, ecx
0x4B88B1: add     esi, 1
0x4B88B4: cmp     eax, ebx
0x4B88B6: jnz     short loc_4B88A0
0x4B88B8: jmp     short loc_4B88D5
0x4B88BA: cmp     [esi+8], bl
0x4B88BD: jz      short loc_4B888C
0x4B88BF: push    ebx; Seed
0x4B88C0: call    GetRandomLargeInteger?
0x4B88C5: xor     edx, edx
0x4B88C7: add     esp, 4
0x4B88CA: div     [esp+54h+var_38]
0x4B88CE: jmp     loc_4B884F
0x4B88D3: mov     edx, [eax]
0x4B88D5: mov     ecx, [esp+54h+arg_0]
0x4B88D9: lea     eax, [esp+54h+var_40]
0x4B88DD: push    eax
0x4B88DE: push    ecx
0x4B88DF: push    edx
0x4B88E0: call    sub_4CB070
0x4B88E5: add     esp, 0Ch
0x4B88E8: cmp     [esp+54h+var_40], ebx
0x4B88EC: mov     ebp, eax
0x4B88EE: jz      short loc_4B88FB
0x4B88F0: cmp     [esp+54h+var_34], 0FFFFFFFFh
0x4B88F5: jnz     short loc_4B88FB
0x4B88F7: mov     [esp+54h+var_34], edi
0x4B88FB: cmp     ebp, ebx
0x4B88FD: jz      short loc_4B890F
0x4B88FF: cmp     edi, [esp+54h+var_30]
0x4B8903: jnz     short loc_4B890F
0x4B8905: mov     [esp+54h+var_40], ebp
0x4B8909: mov     [esp+54h+var_34], edi
0x4B890D: xor     ebp, ebp
0x4B890F: push    1; a3
0x4B8911: push    esi; a2
0x4B8912: lea     ecx, [esp+5Ch+var_2C]; this
0x4B8916: call    NiTMap_SetAt
0x4B891B: mov     edx, [esp+54h+var_38]
0x4B891F: cmp     [esp+54h+arg_4], edx
0x4B8923: jb      loc_4B8831
0x4B8929: cmp     ebp, ebx
0x4B892B: jnz     loc_4B89B6
0x4B8931: mov     eax, [esp+54h+var_40]
0x4B8935: cmp     eax, ebx
0x4B8937: jz      short loc_4B89B6
0x4B8939: mov     ecx, [esp+54h+var_3C]
0x4B893D: test    byte ptr [ecx+64h], 1
0x4B8941: jz      short loc_4B89B6
0x4B8943: push    eax
0x4B8944: call    RemoveExtraTeleportFromDoorRef
0x4B8949: mov     ecx, [esp+58h+var_40]; this
0x4B894D: add     esp, 4
0x4B8950: call    TESObjectREFR_GetWorldSpace
0x4B8955: cmp     eax, ebx
0x4B8957: jz      short loc_4B8962
0x4B8959: mov     ecx, eax
0x4B895B: call    sub_4F2630
0x4B8960: jmp     short loc_4B89AE
0x4B8962: mov     ecx, [esp+54h+var_40]; this
0x4B8966: call    TESObjectREFR_GetParentCell
0x4B896B: mov     esi, eax
0x4B896D: cmp     esi, ebx
0x4B896F: jz      short loc_4B89AE
0x4B8971: mov     ecx, esi; this
0x4B8973: call    TESObjectCELL_IsInterior
0x4B8978: test    al, al
0x4B897A: jz      short loc_4B89AE
0x4B897C: push    25h ; '%'
0x4B897E: lea     ecx, [esp+58h+var_1C]
0x4B8982: call    sub_4B8420
0x4B8987: lea     edx, [esp+54h+var_1C]
0x4B898B: push    edx
0x4B898C: mov     ecx, esi
0x4B898E: mov     byte ptr [esp+58h+var_4], 1
0x4B8993: call    sub_4CBE50
0x4B8998: lea     ecx, [esp+54h+var_1C]
0x4B899C: call    NiTMap_Clear
0x4B89A1: lea     ecx, [esp+54h+var_1C]
0x4B89A5: mov     byte ptr [esp+54h+var_4], bl
0x4B89A9: call    ??1?$NiTPointerMap@PAVTESObjectCELL@@_N@@UAE@XZ; NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(void)
0x4B89AE: mov     ebp, [esp+54h+var_40]
0x4B89B2: mov     edi, [esp+54h+var_34]
0x4B89B6: cmp     edi, 0FFFFFFFFh
0x4B89B9: jz      short loc_4B89CC
0x4B89BB: mov     eax, [esp+54h+var_3C]
0x4B89BF: mov     ecx, ds:0B333C4h
0x4B89C5: push    edi
0x4B89C6: push    eax
0x4B89C7: call    sub_663EE0
0x4B89CC: lea     ecx, [esp+54h+var_2C]
0x4B89D0: mov     [esp+54h+var_4], 0FFFFFFFFh
0x4B89D8: call    ??1?$NiTPointerMap@H_N@@UAE@XZ; NiTPointerMap<int,bool>::~NiTPointerMap<int,bool>(void)
0x4B89DD: mov     eax, ebp
0x4B89DF: mov     ecx, [esp+54h+var_C]
0x4B89E3: mov     large fs:0, ecx
0x4B89EA: pop     ecx
0x4B89EB: pop     edi
0x4B89EC: pop     esi
0x4B89ED: pop     ebp
0x4B89EE: pop     ebx
0x4B89EF: add     esp, 40h
0x4B89F2: retn    8
