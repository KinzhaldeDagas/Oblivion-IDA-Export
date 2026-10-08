0x696250: push    ebp
0x696251: mov     ebp, esp
0x696253: and     esp, 0FFFFFFF0h
0x696256: push    0FFFFFFFFh
0x696258: push    offset SEH_69D5E0
0x69625D: mov     eax, large fs:0
0x696263: push    eax
0x696264: sub     esp, 38h
0x696267: mov     eax, ds:0B30AACh
0x69626C: xor     eax, esp
0x69626E: mov     [esp+44h+var_14], eax
0x696272: push    ebx
0x696273: push    esi
0x696274: push    edi; int
0x696275: mov     eax, ds:0B30AACh
0x69627A: xor     eax, esp
0x69627C: push    eax; int
0x69627D: lea     eax, [esp+54h+var_C]
0x696281: mov     large fs:0, eax
0x696287: mov     eax, [ebp+arg_8]
0x69628A: mov     ebx, [ebp+arg_1C]
0x69628D: mov     [esp+54h+var_40], eax
0x696291: mov     eax, [ebp+arg_C]
0x696294: mov     edx, [ebp+arg_4]
0x696297: mov     [esp+54h+var_38], eax
0x69629B: mov     eax, [ebp+arg_2C]
0x69629E: sub     esp, 0Ch
0x6962A1: mov     [esp+60h+var_3C], eax
0x6962A5: mov     eax, esp
0x6962A7: mov     [eax], ebx
0x6962A9: mov     ebx, [ebp+arg_20]
0x6962AC: mov     [eax+4], ebx
0x6962AF: mov     ebx, [ebp+arg_24]
0x6962B2: mov     edi, [ebp+node]
0x6962B5: mov     [eax+8], ebx
0x6962B8: mov     ebx, [ebp+arg_10]
0x6962BB: sub     esp, 0Ch
0x6962BE: mov     eax, esp
0x6962C0: mov     [eax], ebx
0x6962C2: mov     ebx, [ebp+arg_14]
0x6962C5: mov     [eax+4], ebx
0x6962C8: mov     ebx, [ebp+arg_18]
0x6962CB: mov     [eax+8], ebx
0x6962CE: mov     eax, [esp+6Ch+var_38]
0x6962D2: push    eax
0x6962D3: mov     eax, [esp+70h+var_40]
0x6962D7: mov     esi, ecx
0x6962D9: mov     ecx, [ebp+arg_0]
0x6962DC: push    eax
0x6962DD: push    edx
0x6962DE: push    ecx
0x6962DF: mov     ecx, esi
0x6962E1: mov     [esp+7Ch+var_34], esi
0x6962E5: call    sub_69F360
0x6962EA: mov     ecx, [esi+74h]
0x6962ED: mov     dword ptr [esi], offset ??_7MagicBallProjectile@@6BMagicBallProjectile@@@; const MagicBallProjectile::`vftable'{for `MagicBallProjectile'}
0x6962F3: mov     dword ptr [esi+18h], offset ??_7MagicBallProjectile@@6BTESChildCell@@@; const MagicBallProjectile::`vftable'{for `TESChildCell'}
0x6962FA: fld     dword ptr [ecx+74h]
0x6962FD: fmul    dword ptr ds:0B37EE8h
0x696303: xor     ebx, ebx
0x696305: cmp     edi, ebx
0x696307: mov     [esp+54h+var_4], ebx
0x69630B: fstp    dword ptr [esi+5Ch]
0x69630E: mov     [esi+80h], ebx
0x696314: fldz
0x696316: mov     [esi+88h], ebx
0x69631C: fstp    dword ptr [esi+7Ch]
0x69631F: mov     [esi+8Ch], ebx
0x696325: fld1
0x696327: mov     ecx, esi; this
0x696329: fstp    dword ptr [esi+84h]
0x69632F: jz      short loc_696339
0x696331: push    edi; node
0x696332: call    MobileObject_SetNiNode; Verified MobileObject node setter: invokes the reference's pre-node-update virtual, releases any old NiNode reference, stores the new node in TESObjectREFR+0x40, and AddRefs it. Used by both normal Set3D and the queued distant-tree attach path.
0x696337: jmp     short loc_69633E
0x696339: call    sub_69FD40
0x69633E: mov     ecx, esi
0x696340: call    MagicBallProjectile_PlaySpecialIdle; MagicBallProjectile SpecialIdle setup. Synchronizes projectile node transform and starts SpecialIdle_Projectile sequence from the controller-manager text-key map.
0x696345: mov     ecx, esi
0x696347: call    sub_695DC0
0x69634C: fld     dword ptr ds:0A7DEB4h
0x696352: fchs
0x696354: mov     ecx, esi; this
0x696356: fstp    [esp+54h+a2.x]
0x69635A: fldz
0x69635C: fst     [esp+54h+a2.y]
0x696360: fst     [esp+54h+a2.z]
0x696364: fstp    [esp+54h+a2.w]
0x696368: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x69636D: cmp     eax, ebx
0x69636F: jz      short loc_696384
0x696371: mov     eax, [eax+8]
0x696374: cmp     eax, ebx
0x696376: jz      short loc_696384
0x696378: lea     edx, [esp+54h+a2]
0x69637C: push    edx; a2
0x69637D: mov     ecx, eax; this
0x69637F: call    sub_8AC0B0; TES4 authoritative: writes proxy velocity vector back into bhk collision object+0x10. Climbing/Slowfall velocity edits must happen before these calls or must write both proxy+0x2E0 and object+0x10 after the fact.
0x696384: push    esi; reference
0x696385: mov     ecx, esi; this
0x696387: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x69638C: mov     ecx, eax; this
0x69638E: call    TESObjectCELL_AddReference; Verified: persistent-cell AddReference updates the WorldSpace coordinate/fallback persistent-reference index (+0x64) through TESWorldSpace_IndexReference. Ordinary cell additions do not index there. This routine does not populate the separate SubSpace spatial index at +0x60.
0x696393: mov     eax, [esi+74h]
0x696396: mov     eax, [eax+84h]
0x69639C: cmp     eax, ebx
0x69639E: jz      short loc_6963E2
0x6963A0: mov     edi, [esi+88h]
0x6963A6: cmp     edi, ebx
0x6963A8: mov     ecx, [eax+0Ch]
0x6963AB: mov     [esp+54h+var_40], ecx
0x6963AF: jz      short loc_6963C7
0x6963B1: mov     ecx, edi; this
0x6963B3: call    sub_6B73E0
0x6963B8: push    edi
0x6963B9: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6963BE: add     esp, 4
0x6963C1: mov     [esi+88h], ebx
0x6963C7: mov     edx, [esp+54h+var_40]
0x6963CB: push    1; a5
0x6963CD: push    102h; a4
0x6963D2: push    1; a3
0x6963D4: push    edx; a2
0x6963D5: mov     ecx, esi; this
0x6963D7: call    sub_65AC50
0x6963DC: mov     [esi+88h], eax
0x6963E2: mov     edi, [esp+54h+var_3C]
0x6963E6: cmp     edi, ebx
0x6963E8: jz      short loc_6963F8
0x6963EA: push    esi
0x6963EB: mov     ecx, edi
0x6963ED: call    sub_69E200
0x6963F2: mov     [esi+8Ch], edi
0x6963F8: mov     ecx, esi
0x6963FA: call    sub_69FF10
0x6963FF: mov     ecx, [esi+68h]
0x696402: cmp     ecx, ebx
0x696404: jz      short loc_69640F
0x696406: mov     eax, [ecx]
0x696408: mov     edx, [eax+20h]
0x69640B: call    edx
0x69640D: jmp     short loc_696411
0x69640F: xor     eax, eax
0x696411: cmp     eax, ds:0B333C4h
0x696417: jz      short loc_69642B
0x696419: fld     dword ptr ds:0B38108h
0x69641F: fadd    dword ptr ds:0B3C0D0h
0x696425: fstp    dword ptr ds:0B3C0D0h
0x69642B: push    2000000h; a2
0x696430: mov     ecx, esi; this
0x696432: call    TESForm_MarkAsModified
0x696437: mov     eax, esi
0x696439: mov     ecx, [esp+54h+var_C]
0x69643D: mov     large fs:0, ecx
0x696444: pop     ecx
0x696445: pop     edi
0x696446: pop     esi
0x696447: pop     ebx
0x696448: mov     ecx, [esp+44h+var_14]
0x69644C: xor     ecx, esp
0x69644E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x696453: mov     esp, ebp
0x696455: pop     ebp
0x696456: retn    30h ; '0'
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
