0x69D8C0: push    0FFFFFFFFh
0x69D8C2: push    offset MagicHitEffect_constr_args_SEH
0x69D8C7: mov     eax, large fs:0
0x69D8CD: push    eax
0x69D8CE: push    ecx
0x69D8CF: push    esi
0x69D8D0: mov     eax, ds:0B30AACh
0x69D8D5: xor     eax, esp
0x69D8D7: push    eax
0x69D8D8: lea     eax, [esp+18h+var_C]
0x69D8DC: mov     large fs:0, eax
0x69D8E2: mov     esi, ecx
0x69D8E4: mov     [esp+18h+var_10], esi
0x69D8E8: fldz
0x69D8EA: push    ecx
0x69D8EB: fstp    [esp+1Ch+var_1C]; float
0x69D8EE: push    0; int
0x69D8F0: call    BSTempEff_constr
0x69D8F5: mov     ecx, [esp+18h+arg_0]; this
0x69D8F9: test    ecx, ecx
0x69D8FB: mov     [esp+18h+var_4], 0
0x69D903: mov     dword ptr [esi], offset ??_7MagicHitEffect@@6B@; const MagicHitEffect::`vftable'
0x69D909: mov     [esi+1Ch], ecx
0x69D90C: jz      short loc_69D916
0x69D90E: call    TESObjectREFR_GetParentCell
0x69D913: mov     [esi+0Ch], eax
0x69D916: fldz
0x69D918: mov     eax, [esp+18h+arg_4]
0x69D91C: fstp    dword ptr [esi+20h]
0x69D91F: mov     [esi+18h], eax
0x69D922: fld     dword ptr ds:0A32048h
0x69D928: mov     byte ptr [esi+24h], 0
0x69D92C: fstp    dword ptr [esi+8]
0x69D92F: mov     eax, esi
0x69D931: mov     ecx, [esp+18h+var_C]
0x69D935: mov     large fs:0, ecx
0x69D93C: pop     ecx
0x69D93D: pop     esi
0x69D93E: add     esp, 10h
0x69D941: retn    8
