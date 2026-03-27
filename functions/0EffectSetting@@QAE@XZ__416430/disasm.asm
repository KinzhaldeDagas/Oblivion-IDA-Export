0x416430: push    0FFFFFFFFh
0x416432: push    offset ??0EffectSetting@@QAE@XZ_SEH
0x416437: mov     eax, large fs:0
0x41643D: push    eax
0x41643E: push    ecx
0x41643F: push    ebx
0x416440: push    ebp
0x416441: push    esi
0x416442: push    edi
0x416443: mov     eax, ___security_cookie
0x416448: xor     eax, esp
0x41644A: push    eax
0x41644B: lea     eax, [esp+24h+var_C]
0x41644F: mov     large fs:0, eax
0x416455: mov     esi, ecx
0x416457: mov     [esp+24h+var_10], esi
0x41645B: call    TESForm_constr
0x416460: lea     ebp, [esi+18h]
0x416463: xor     edi, edi
0x416465: mov     ecx, ebp; this
0x416467: mov     [esp+24h+var_4], edi
0x41646B: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x416470: lea     ecx, [esi+30h]
0x416473: mov     byte ptr [esp+24h+var_4], 1
0x416478: call    TESDescription_constr
0x41647D: mov     dword ptr [esi+38h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x416484: mov     [esi+3Ch], edi
0x416487: mov     [esi+40h], di
0x41648B: mov     [esi+42h], di
0x41648F: lea     ebx, [esi+44h]
0x416492: mov     ecx, ebx
0x416494: mov     byte ptr [esp+24h+var_4], 2
0x416499: call    TESTexture_constr
0x41649E: fldz
0x4164A0: mov     dword ptr [ebx], offset ??_7TESIcon@@6B@; const TESIcon::`vftable'
0x4164A6: fstp    dword ptr [esi+5Ch]
0x4164A9: fld1
0x4164AB: mov     dword ptr [esi], offset ??_7EffectSetting@@6BEffectSetting@@@; const EffectSetting::`vftable'{for `EffectSetting'}
0x4164B1: fstp    dword ptr [esi+74h]
0x4164B4: mov     dword ptr [ebp+0], offset ??_7EffectSetting@@6BTESModel@@@; const EffectSetting::`vftable'{for `TESModel'}
0x4164BB: mov     dword ptr [esi+30h], offset ??_7EffectSetting@@6BTESDescription@@@; const EffectSetting::`vftable'{for `TESDescription'}
0x4164C2: mov     dword ptr [esi+38h], offset ??_7EffectSetting@@6BTESFullName@@@; const EffectSetting::`vftable'{for `TESFullName'}
0x4164C9: mov     dword ptr [ebx], offset ??_7EffectSetting@@6BTESIcon@@@; const EffectSetting::`vftable'{for `TESIcon'}
0x4164CF: mov     dword ptr [esi+98h], 0FFFFFFFFh
0x4164D9: mov     [esi+58h], edi
0x4164DC: mov     [esi+60h], edi
0x4164DF: mov     dword ptr [esi+64h], 6
0x4164E6: mov     dword ptr [esi+68h], 48h ; 'H'
0x4164ED: mov     [esi+6Ch], di
0x4164F1: mov     [esi+70h], edi
0x4164F4: mov     [esi+78h], edi
0x4164F7: mov     [esi+7Ch], edi
0x4164FA: mov     [esi+80h], edi
0x416500: mov     [esi+84h], edi
0x416506: mov     [esi+88h], edi
0x41650C: mov     [esi+8Ch], edi
0x416512: fld     fMagicDefaultCEEnchantFactor
0x416518: fstp    dword ptr [esi+90h]
0x41651E: mov     eax, esi
0x416520: fld     fMagicDefaultCEBarterFactor
0x416526: mov     [esi+9Ch], edi
0x41652C: fstp    dword ptr [esi+94h]
0x416532: mov     [esi+0A0h], edi
0x416538: mov     [esi+0A4h], edi
0x41653E: mov     [esi+50h], edi
0x416541: mov     [esi+54h], edi
0x416544: mov     byte ptr [esi+4], 0Ch
0x416548: mov     ecx, [esp+24h+var_C]
0x41654C: mov     large fs:0, ecx
0x416553: pop     ecx
0x416554: pop     edi
0x416555: pop     esi
0x416556: pop     ebp
0x416557: pop     ebx
0x416558: add     esp, 10h
0x41655B: retn
