0x69D5E0: push    ebp
0x69D5E1: mov     ebp, esp
0x69D5E3: and     esp, 0FFFFFFF0h
0x69D5E6: push    0FFFFFFFFh
0x69D5E8: push    offset SEH_69D5E0
0x69D5ED: mov     eax, large fs:0
0x69D5F3: push    eax
0x69D5F4: sub     esp, 38h
0x69D5F7: mov     eax, ds:0B30AACh
0x69D5FC: xor     eax, esp
0x69D5FE: mov     [esp+44h+var_14], eax
0x69D602: push    ebx
0x69D603: push    esi
0x69D604: push    edi; int
0x69D605: mov     eax, ds:0B30AACh
0x69D60A: xor     eax, esp
0x69D60C: push    eax; int
0x69D60D: lea     eax, [esp+54h+var_C]
0x69D611: mov     large fs:0, eax
0x69D617: mov     eax, [ebp+arg_C]
0x69D61A: mov     ebx, [ebp+arg_1C]
0x69D61D: mov     edi, [ebp+arg_8]
0x69D620: mov     [esp+54h+var_40], eax
0x69D624: mov     eax, [ebp+arg_28]
0x69D627: mov     edx, [ebp+arg_4]
0x69D62A: mov     [esp+54h+node], eax
0x69D62E: mov     eax, [ebp+arg_2C]
0x69D631: sub     esp, 0Ch
0x69D634: mov     [esp+60h+var_38], eax
0x69D638: mov     eax, esp
0x69D63A: mov     [eax], ebx
0x69D63C: mov     ebx, [ebp+arg_20]
0x69D63F: mov     [eax+4], ebx
0x69D642: mov     ebx, [ebp+arg_24]
0x69D645: mov     [eax+8], ebx
0x69D648: mov     ebx, [ebp+arg_10]
0x69D64B: sub     esp, 0Ch
0x69D64E: mov     eax, esp
0x69D650: mov     [eax], ebx
0x69D652: mov     ebx, [ebp+arg_14]
0x69D655: mov     [eax+4], ebx
0x69D658: mov     ebx, [ebp+arg_18]
0x69D65B: mov     [eax+8], ebx
0x69D65E: mov     eax, [esp+6Ch+var_40]
0x69D662: push    eax
0x69D663: mov     esi, ecx
0x69D665: mov     ecx, [ebp+arg_0]
0x69D668: push    edi
0x69D669: push    edx
0x69D66A: push    ecx
0x69D66B: mov     ecx, esi
0x69D66D: mov     [esp+7Ch+var_34], esi
0x69D671: call    sub_69F360
0x69D676: mov     ecx, [esi+70h]
0x69D679: xor     ebx, ebx
0x69D67B: mov     [esp+54h+var_4], ebx
0x69D67F: mov     dword ptr [esi], offset ??_7MagicFogProjectile@@6BMagicFogProjectile@@@; const MagicFogProjectile::`vftable'{for `MagicFogProjectile'}
0x69D685: mov     dword ptr [esi+18h], offset ??_7MagicFogProjectile@@6BTESChildCell@@@; const MagicFogProjectile::`vftable'{for `TESChildCell'}
0x69D68C: call    EffectItem_GetDuration
0x69D691: mov     [esp+54h+var_40], eax
0x69D695: fild    [esp+54h+var_40]
0x69D699: fstp    [esp+54h+var_40]
0x69D69D: fld     [esp+54h+var_40]
0x69D6A1: fld     dword ptr ds:0B37F20h
0x69D6A7: fcom    st(1)
0x69D6A9: fnstsw  ax
0x69D6AB: test    ah, 5
0x69D6AE: jp      short loc_69D6B4
0x69D6B0: fstp    st
0x69D6B2: jmp     short loc_69D6B6
0x69D6B4: fstp    st(1)
0x69D6B6: mov     ecx, [esi+70h]
0x69D6B9: fstp    [esp+54h+var_40]
0x69D6BD: fld     [esp+54h+var_40]
0x69D6C1: fstp    dword ptr [esi+80h]
0x69D6C7: call    EffectItem_GetArea; Effective area: returns 0 for EffectSetting NoArea (0x200) or Self range (0); otherwise raw EffectItem+0x8 area.
0x69D6CC: mov     [esp+54h+var_40], eax
0x69D6D0: fild    [esp+54h+var_40]
0x69D6D4: fstp    [esp+54h+var_40]
0x69D6D8: fld     [esp+54h+var_40]
0x69D6DC: fld     dword ptr ds:0B37F28h
0x69D6E2: fcom    st(1)
0x69D6E4: fnstsw  ax
0x69D6E6: test    ah, 5
0x69D6E9: jp      short loc_69D6EF
0x69D6EB: fstp    st
0x69D6ED: jmp     short loc_69D6F1
0x69D6EF: fstp    st(1)
0x69D6F1: mov     ecx, [esi+74h]
0x69D6F4: fstp    [esp+54h+var_40]
0x69D6F8: fld     [esp+54h+var_40]
0x69D6FC: mov     eax, [esp+54h+node]
0x69D700: cmp     eax, ebx
0x69D702: fstp    dword ptr [esi+84h]
0x69D708: fld     dword ptr [ecx+74h]
0x69D70B: mov     ecx, esi; this
0x69D70D: fmul    dword ptr ds:0B37EE8h
0x69D713: mov     [esi+88h], ebx
0x69D719: mov     [esi+90h], ebx
0x69D71F: mov     [esi+98h], ebx
0x69D725: fstp    dword ptr [esi+5Ch]
0x69D728: mov     [esi+94h], ebx
0x69D72E: fldz
0x69D730: fstp    dword ptr [esi+7Ch]
0x69D733: fld1
0x69D735: fstp    dword ptr [esi+8Ch]
0x69D73B: jz      short loc_69D745
0x69D73D: push    eax; node
0x69D73E: call    MobileObject_SetNiNode; Verified MobileObject node setter: invokes the reference's pre-node-update virtual, releases any old NiNode reference, stores the new node in TESObjectREFR+0x40, and AddRefs it. Used by both normal Set3D and the queued distant-tree attach path.
0x69D743: jmp     short loc_69D74A
0x69D745: call    sub_69FD40
0x69D74A: mov     ecx, esi
0x69D74C: call    sub_69CB30
0x69D751: mov     ecx, esi
0x69D753: call    sub_69D140
0x69D758: fld     dword ptr ds:0A7DEB4h
0x69D75E: fchs
0x69D760: mov     ecx, esi; this
0x69D762: fstp    [esp+54h+a2.x]
0x69D766: fldz
0x69D768: fst     [esp+54h+a2.y]
0x69D76C: fst     [esp+54h+a2.z]
0x69D770: fstp    [esp+54h+a2.w]
0x69D774: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x69D779: cmp     eax, ebx
0x69D77B: jz      short loc_69D790
0x69D77D: mov     eax, [eax+8]
0x69D780: cmp     eax, ebx
0x69D782: jz      short loc_69D790
0x69D784: lea     edx, [esp+54h+a2]
0x69D788: push    edx; a2
0x69D789: mov     ecx, eax; this
0x69D78B: call    sub_8AC0B0; TES4 authoritative: writes proxy velocity vector back into bhk collision object+0x10. Climbing/Slowfall velocity edits must happen before these calls or must write both proxy+0x2E0 and object+0x10 after the fact.
0x69D790: push    esi; reference
0x69D791: mov     ecx, esi; this
0x69D793: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x69D798: mov     ecx, eax; this
0x69D79A: call    TESObjectCELL_AddReference; Verified: persistent-cell AddReference updates the WorldSpace coordinate/fallback persistent-reference index (+0x64) through TESWorldSpace_IndexReference. Ordinary cell additions do not index there. This routine does not populate the separate SubSpace spatial index at +0x60.
0x69D79F: mov     eax, [esi+74h]
0x69D7A2: mov     eax, [eax+84h]
0x69D7A8: cmp     eax, ebx
0x69D7AA: jz      short loc_69D7FF
0x69D7AC: mov     edi, [esi+90h]
0x69D7B2: cmp     edi, ebx
0x69D7B4: mov     ecx, [eax+0Ch]
0x69D7B7: mov     [esp+54h+node], ecx
0x69D7BB: jz      short loc_69D7D3
0x69D7BD: mov     ecx, edi; this
0x69D7BF: call    sub_6B73E0
0x69D7C4: push    edi
0x69D7C5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x69D7CA: add     esp, 4
0x69D7CD: mov     [esi+90h], ebx
0x69D7D3: mov     edx, [esp+54h+node]
0x69D7D7: push    1; a5
0x69D7D9: push    102h; a4
0x69D7DE: push    1; a3
0x69D7E0: push    edx; a2
0x69D7E1: mov     ecx, esi; this
0x69D7E3: call    sub_65AC50
0x69D7E8: cmp     eax, ebx
0x69D7EA: mov     [esi+90h], eax
0x69D7F0: jz      short loc_69D7FF
0x69D7F2: fld1
0x69D7F4: push    ecx
0x69D7F5: mov     ecx, eax
0x69D7F7: fstp    [esp+58h+var_58]; float
0x69D7FA: call    sub_6B7280
0x69D7FF: mov     edi, [esp+54h+var_38]
0x69D803: cmp     edi, ebx
0x69D805: jz      short loc_69D827
0x69D807: push    esi
0x69D808: mov     ecx, edi
0x69D80A: call    sub_69E200
0x69D80F: fld     dword ptr [esi+80h]
0x69D815: push    ecx
0x69D816: fstp    [esp+58h+var_58]; float
0x69D819: push    ebx; char
0x69D81A: mov     ecx, edi
0x69D81C: mov     [esi+98h], edi
0x69D822: call    MagicCaster_CastingVFX_ClearSomething???
0x69D827: mov     ecx, esi
0x69D829: call    sub_69FF10
0x69D82E: mov     ecx, [esi+68h]
0x69D831: cmp     ecx, ebx
0x69D833: jz      short loc_69D83E
0x69D835: mov     eax, [ecx]
0x69D837: mov     edx, [eax+20h]
0x69D83A: call    edx
0x69D83C: jmp     short loc_69D840
0x69D83E: xor     eax, eax
0x69D840: cmp     eax, ds:0B333C4h
0x69D846: mov     eax, esi
0x69D848: jz      short loc_69D85C
0x69D84A: fld     dword ptr ds:0B38118h
0x69D850: fadd    dword ptr ds:0B3C0D0h
0x69D856: fstp    dword ptr ds:0B3C0D0h
0x69D85C: mov     ecx, [esp+54h+var_C]
0x69D860: mov     large fs:0, ecx
0x69D867: pop     ecx
0x69D868: pop     edi
0x69D869: pop     esi
0x69D86A: pop     ebx
0x69D86B: mov     ecx, [esp+44h+var_14]
0x69D86F: xor     ecx, esp
0x69D871: call    @__security_check_cookie@4; __security_check_cookie(x)
0x69D876: mov     esp, ebp
0x69D878: pop     ebp
0x69D879: retn    30h ; '0'
0x9C5950: mov     ecx, [ebp+var_34]
0x9C5953: jmp     sub_69FA60
0x9C5958: mov     edx, [esp-4+arg_4]
0x9C595C: lea     eax, [edx-44h]
0x9C595F: mov     ecx, [edx-48h]
0x9C5962: xor     ecx, eax
0x9C5964: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5969: add     eax, 0Ch
0x9C596C: mov     ecx, [edx-8]
0x9C596F: xor     ecx, eax
0x9C5971: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5976: mov     eax, offset stru_AEE0AC
0x9C597B: jmp     ___CxxFrameHandler3
