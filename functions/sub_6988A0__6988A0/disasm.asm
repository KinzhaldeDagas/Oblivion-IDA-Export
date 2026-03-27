0x6988A0: push    ebp
0x6988A1: mov     ebp, esp
0x6988A3: and     esp, 0FFFFFFF0h
0x6988A6: push    0FFFFFFFFh
0x6988A8: push    offset SEH_6988A0
0x6988AD: mov     eax, large fs:0
0x6988B3: push    eax
0x6988B4: sub     esp, 48h
0x6988B7: mov     eax, ds:0B30AACh
0x6988BC: xor     eax, esp
0x6988BE: mov     [esp+54h+var_14], eax
0x6988C2: push    ebx
0x6988C3: push    esi
0x6988C4: push    edi
0x6988C5: mov     eax, ds:0B30AACh
0x6988CA: xor     eax, esp
0x6988CC: push    eax
0x6988CD: lea     eax, [esp+64h+var_C]
0x6988D1: mov     large fs:0, eax
0x6988D7: mov     eax, [ebp+arg_C]
0x6988DA: mov     edi, [ebp+arg_1C]
0x6988DD: mov     edx, [ebp+arg_8]
0x6988E0: mov     ebx, [ebp+arg_0]
0x6988E3: sub     esp, 0Ch
0x6988E6: mov     [esp+70h+var_48], eax
0x6988EA: mov     eax, esp
0x6988EC: mov     [eax], edi
0x6988EE: mov     edi, [ebp+arg_20]
0x6988F1: mov     [eax+4], edi
0x6988F4: mov     edi, [ebp+arg_24]
0x6988F7: mov     [eax+8], edi
0x6988FA: mov     edi, [ebp+arg_10]
0x6988FD: sub     esp, 0Ch
0x698900: mov     eax, esp
0x698902: mov     [eax], edi
0x698904: mov     edi, [ebp+arg_14]
0x698907: mov     [eax+4], edi
0x69890A: mov     edi, [ebp+arg_18]
0x69890D: mov     [eax+8], edi
0x698910: mov     eax, [esp+7Ch+var_48]
0x698914: push    eax
0x698915: mov     esi, ecx
0x698917: mov     ecx, [ebp+arg_4]
0x69891A: push    edx
0x69891B: push    ecx
0x69891C: push    ebx
0x69891D: mov     ecx, esi
0x69891F: mov     [esp+8Ch+a2.x], esi
0x698923: call    sub_69F360
0x698928: xor     edi, edi
0x69892A: mov     dword ptr [esi], offset ??_7MagicBoltProjectile@@6BMagicBoltProjectile@@@; const MagicBoltProjectile::`vftable'{for `MagicBoltProjectile'}
0x698930: mov     dword ptr [esi+18h], offset ??_7MagicBoltProjectile@@6BTESChildCell@@@; const MagicBoltProjectile::`vftable'{for `TESChildCell'}
0x698937: mov     [esp+64h+var_4], edi
0x69893B: mov     [esi+7Ch], edi
0x69893E: mov     [esi+88h], edi
0x698944: mov     [esi+8Ch], edi
0x69894A: mov     [esi+90h], edi
0x698950: mov     [esi+94h], edi
0x698956: mov     ecx, ds:0B381A0h
0x69895C: mov     ds:0B2DC90h, ecx
0x698962: mov     eax, [esi+74h]
0x698965: mov     [esi+80h], edi
0x69896B: fld     dword ptr [eax+74h]
0x69896E: fstp    [esp+64h+var_48]
0x698972: mov     ecx, ebx
0x698974: fld     [esp+64h+var_48]
0x698978: mov     byte ptr [esp+64h+var_4], 5
0x69897D: fmul    dword ptr ds:0B37EE8h
0x698983: mov     [esi+84h], edi
0x698989: mov     [esi+98h], edi
0x69898F: mov     [esi+9Ch], edi
0x698995: fstp    dword ptr [esi+5Ch]
0x698998: fldz
0x69899A: fstp    dword ptr [esi+0A0h]
0x6989A0: mov     edx, [ebx]
0x6989A2: mov     eax, [edx+20h]
0x6989A5: call    eax
0x6989A7: mov     ecx, ds:0B333C4h
0x6989AD: cmp     eax, ecx
0x6989AF: jnz     short loc_698A02
0x6989B1: push    1
0x6989B3: call    PlayerCharacter_GetPlayerNode
0x6989B8: test    eax, eax
0x6989BA: jz      short loc_698A02
0x6989BC: mov     ecx, ds:0B333C4h
0x6989C2: push    1; a4
0x6989C4: call    PlayerCharacter_GetPlayerNode
0x6989C9: test    byte ptr [eax+18h], 1
0x6989CD: jnz     short loc_698A02
0x6989CF: mov     eax, [esi+34h]
0x6989D2: fld     dword ptr ds:0B38150h
0x6989D8: mov     ecx, [esi+2Ch]
0x6989DB: mov     edx, [esi+30h]
0x6989DE: mov     [esp+64h+var_3C], eax
0x6989E2: fadd    [esp+64h+var_3C]
0x6989E6: sub     esp, 0Ch
0x6989E9: mov     eax, esp
0x6989EB: mov     [eax], ecx
0x6989ED: fstp    [esp+70h+var_3C]
0x6989F1: mov     ecx, [esp+70h+var_3C]
0x6989F5: mov     [eax+4], edx
0x6989F8: mov     [eax+8], ecx
0x6989FB: mov     ecx, esi; this
0x6989FD: call    TESObjectREFR_SetPosition
0x698A02: mov     eax, [esi+74h]
0x698A05: push    eax
0x698A06: call    sub_69FD20
0x698A0B: mov     ebx, eax
0x698A0D: add     esp, 4
0x698A10: cmp     ebx, edi
0x698A12: mov     [esp+64h+var_48], ebx
0x698A16: jz      short loc_698A22
0x698A18: lea     edx, [ebx+4]
0x698A1B: push    edx; lpAddend
0x698A1C: call    dword ptr ds:0A28078h
0x698A22: cmp     ebx, edi
0x698A24: mov     byte ptr [esp+64h+var_4], 6
0x698A29: jz      short loc_698A49
0x698A2B: lea     eax, [ebx+4]
0x698A2E: push    eax; lpAddend
0x698A2F: call    dword ptr ds:0A2807Ch
0x698A35: test    eax, eax
0x698A37: jnz     short loc_698A43
0x698A39: mov     edx, [ebx]
0x698A3B: mov     eax, [edx]
0x698A3D: push    1
0x698A3F: mov     ecx, ebx
0x698A41: call    eax
0x698A43: mov     [esp+68h+var_4C], edi
0x698A47: mov     ebx, edi
0x698A49: mov     ecx, esi
0x698A4B: call    sub_696CE0
0x698A50: mov     eax, [esi+88h]
0x698A56: push    eax
0x698A57: mov     ecx, esi
0x698A59: call    sub_4D7D10
0x698A5E: mov     ecx, esi
0x698A60: call    sub_698410
0x698A65: fld     dword ptr ds:0A7DEB4h
0x698A6B: fchs
0x698A6D: mov     ecx, esi; this
0x698A6F: fstp    [esp+68h+a2.x]
0x698A73: fldz
0x698A75: fst     [esp+68h+a2.y]
0x698A79: fst     [esp+68h+a2.z]
0x698A7D: fstp    [esp+68h+a2.w]
0x698A81: call    MobileObject_GetCharProxy
0x698A86: cmp     eax, edi
0x698A88: jz      short loc_698A9D
0x698A8A: mov     eax, [eax+8]
0x698A8D: cmp     eax, edi
0x698A8F: jz      short loc_698A9D
0x698A91: lea     ecx, [esp+68h+a2]
0x698A95: push    ecx; a2
0x698A96: mov     ecx, eax; this
0x698A98: call    sub_8AC0B0
0x698A9D: push    esi; Concurrency::details::SchedulerBase *
0x698A9E: mov     ecx, esi; this
0x698AA0: call    TESObjectREFR_GetParentCell
0x698AA5: mov     ecx, eax
0x698AA7: call    sub_4D35D0
0x698AAC: mov     eax, [esi+74h]
0x698AAF: mov     [esi+80h], edi
0x698AB5: cmp     [eax+84h], edi
0x698ABB: jz      loc_698B7D
0x698AC1: mov     eax, [eax+84h]
0x698AC7: mov     ebx, [esi+9Ch]
0x698ACD: cmp     ebx, edi
0x698ACF: mov     edx, [eax+0Ch]
0x698AD2: mov     [esp+68h+var_3C], edx
0x698AD6: jz      short loc_698AEE
0x698AD8: mov     ecx, ebx; this
0x698ADA: call    sub_6B73E0
0x698ADF: push    ebx
0x698AE0: call    FormHeapFree
0x698AE5: add     esp, 4
0x698AE8: mov     [esi+9Ch], edi
0x698AEE: mov     eax, ds:0B33398h
0x698AF3: mov     ebx, [eax+24h]
0x698AF6: cmp     ebx, edi
0x698AF8: jz      short loc_698B79
0x698AFA: cmp     [esi+94h], edi
0x698B00: jz      short loc_698B79
0x698B02: mov     ecx, [esp+68h+var_3C]
0x698B06: push    1
0x698B08: push    102h
0x698B0D: push    ecx
0x698B0E: mov     ecx, ebx
0x698B10: call    OSGLobals_PlaySound
0x698B15: cmp     eax, edi
0x698B17: mov     [esi+9Ch], eax
0x698B1D: jz      short loc_698B79
0x698B1F: mov     edx, [esi+2Ch]
0x698B22: mov     ecx, [esi+30h]
0x698B25: mov     [esp+68h+var_48], edx
0x698B29: mov     edx, [esi+34h]
0x698B2C: sub     esp, 0Ch
0x698B2F: mov     [esp+74h+var_40], edx
0x698B33: fld     [esp+74h+var_40]
0x698B37: fstp    [esp+74h+var_6C]; float
0x698B3B: mov     [esp+74h+var_44], ecx
0x698B3F: fld     [esp+74h+var_44]
0x698B43: mov     ecx, eax
0x698B45: fstp    [esp+74h+var_70]; float
0x698B49: fld     [esp+74h+var_48]
0x698B4D: fstp    [esp+74h+var_74]; float
0x698B50: call    sub_6B7360
0x698B55: mov     eax, [esi+94h]
0x698B5B: mov     ecx, [esi+9Ch]
0x698B61: mov     ecx, [ecx]
0x698B63: push    eax
0x698B64: push    ecx
0x698B65: mov     ecx, ebx
0x698B67: call    sub_6AA980
0x698B6C: mov     ecx, [esi+9Ch]
0x698B72: push    1
0x698B74: call    sub_6B7190
0x698B79: mov     ebx, [esp+68h+var_4C]
0x698B7D: mov     ecx, esi
0x698B7F: call    sub_69FF10
0x698B84: mov     ecx, [esi+68h]
0x698B87: cmp     ecx, edi
0x698B89: jz      short loc_698B94
0x698B8B: mov     eax, [ecx]
0x698B8D: mov     edx, [eax+20h]
0x698B90: call    edx
0x698B92: jmp     short loc_698B96
0x698B94: xor     eax, eax
0x698B96: cmp     eax, ds:0B333C4h
0x698B9C: jz      short loc_698BB2
0x698B9E: fld     dword ptr ds:0B38110h
0x698BA4: fadd    dword ptr ds:0B3C0D0h
0x698BAA: fstp    dword ptr ds:0B3C0D0h
0x698BB0: jmp     short loc_698BBD
0x698BB2: push    esi
0x698BB3: mov     ecx, offset ActorProcessManager_ptr.unk4C
0x698BB8: call    BSSimpleList_PushFront
0x698BBD: cmp     ebx, edi
0x698BBF: mov     [esp+68h+var_8], 5
0x698BC4: jz      short loc_698BDE
0x698BC6: lea     eax, [ebx+4]
0x698BC9: push    eax; lpAddend
0x698BCA: call    dword ptr ds:0A2807Ch
0x698BD0: test    eax, eax
0x698BD2: jnz     short loc_698BDE
0x698BD4: mov     edx, [ebx]
0x698BD6: mov     eax, [edx]
0x698BD8: push    1
0x698BDA: mov     ecx, ebx
0x698BDC: call    eax
0x698BDE: mov     eax, esi
0x698BE0: mov     ecx, [esp+6Ch+var_14]
0x698BE4: mov     large fs:0, ecx
0x698BEB: pop     ecx
0x698BEC: pop     edi
0x698BED: pop     esi
0x698BEE: pop     ebx
0x698BEF: mov     ecx, [esp+5Ch+var_1C]
0x698BF3: xor     ecx, esp
0x698BF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x698BFA: mov     esp, ebp
0x698BFC: pop     ebp
0x698BFD: retn    28h ; '('
