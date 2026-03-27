0x542F20: sub     esp, 8
0x542F23: push    esi
0x542F24: mov     esi, ecx
0x542F26: mov     ecx, ds:0B33B00h
0x542F2C: call    sub_45A500
0x542F31: test    al, al
0x542F33: jz      short loc_542F49
0x542F35: mov     eax, ds:0B33B00h
0x542F3A: mov     ecx, [eax+18h]
0x542F3D: shr     ecx, 0Ah
0x542F40: test    cl, 1
0x542F43: jz      loc_5431EB
0x542F49: push    3
0x542F4B: call    nullsub_returnTrue_0arg
0x542F50: add     esp, 4
0x542F53: mov     ecx, offset TimeGlobals
0x542F58: call    TimeGlobals_GetGameHour
0x542F5D: fstp    dword ptr [esi+0D0h]
0x542F63: mov     ecx, ds:0B333C4h; this
0x542F69: test    ecx, ecx
0x542F6B: jz      short loc_542FC1
0x542F6D: call    TESObjectREFR_GetParentCell
0x542F72: test    eax, eax
0x542F74: jz      short loc_542FC1
0x542F76: mov     eax, ds:0B333CCh
0x542F7B: cmp     word ptr [eax+0B6h], 0
0x542F83: ja      short loc_542F89
0x542F85: xor     eax, eax
0x542F87: jmp     short loc_542F91
0x542F89: mov     edx, [eax+0B0h]
0x542F8F: mov     eax, [edx]
0x542F91: fld     dword ptr [eax+90h]
0x542F97: mov     ecx, ds:0B333C4h; this
0x542F9D: fstp    [esp+0Ch+var_8]
0x542FA1: call    TESObjectREFR_GetParentCell
0x542FA6: mov     ecx, eax
0x542FA8: call    TESObjectCELL_GetWaterHeight
0x542FAD: fcomp   [esp+0Ch+var_8]
0x542FB1: fnstsw  ax
0x542FB3: test    ah, 41h
0x542FB6: jnz     short loc_542FC1
0x542FB8: or      dword ptr [esi+0FCh], 4
0x542FBF: jmp     short loc_542FC8
0x542FC1: and     dword ptr [esi+0FCh], 0FFFFFFFBh
0x542FC8: mov     eax, [esi+0DCh]
0x542FCE: cmp     eax, 1
0x542FD1: jz      short loc_542FEF
0x542FD3: test    eax, eax
0x542FD5: jz      short loc_542FEF
0x542FD7: mov     eax, [esi+4]
0x542FDA: mov     ecx, 0FFFEh
0x542FDF: and     [eax+18h], cx
0x542FE3: mov     eax, [esi+28h]
0x542FE6: mov     eax, [eax+0Ch]
0x542FE9: and     [eax+18h], cx
0x542FED: jmp     short loc_543002
0x542FEF: mov     eax, [esi+4]
0x542FF2: or      word ptr [eax+18h], 1
0x542FF7: mov     ecx, [esi+28h]
0x542FFA: mov     eax, [ecx+0Ch]
0x542FFD: or      word ptr [eax+18h], 1
0x543002: mov     ecx, esi
0x543004: call    sub_5422F0
0x543009: mov     ecx, ds:0B33B00h
0x54300F: call    sub_45A500
0x543014: test    al, al
0x543016: jz      short loc_54301F
0x543018: or      dword ptr [esi+0FCh], 1
0x54301F: mov     ecx, esi
0x543021: call    sub_5418F0
0x543026: mov     ecx, esi
0x543028: call    sub_541DD0
0x54302D: mov     ecx, esi
0x54302F: call    sub_53FF90
0x543034: mov     ecx, esi
0x543036: call    sub_542590
0x54303B: mov     ecx, [esi+20h]
0x54303E: test    ecx, ecx
0x543040: jz      short loc_543052
0x543042: mov     edx, [ecx]
0x543044: fld     [esp+0Ch+arg_0]
0x543048: mov     eax, [edx+0Ch]
0x54304B: push    ecx
0x54304C: fstp    [esp+10h+var_10]
0x54304F: push    esi
0x543050: call    eax
0x543052: mov     ecx, [esi+24h]
0x543055: test    ecx, ecx
0x543057: jz      short loc_543069
0x543059: mov     edx, [ecx]
0x54305B: fld     [esp+0Ch+arg_0]
0x54305F: mov     eax, [edx+0Ch]
0x543062: push    ecx
0x543063: fstp    [esp+10h+var_10]
0x543066: push    esi
0x543067: call    eax
0x543069: mov     ecx, [esi+2Ch]
0x54306C: test    ecx, ecx
0x54306E: jz      short loc_543080
0x543070: mov     edx, [ecx]
0x543072: fld     [esp+0Ch+arg_0]
0x543076: mov     eax, [edx+0Ch]
0x543079: push    ecx
0x54307A: fstp    [esp+10h+var_10]
0x54307D: push    esi
0x54307E: call    eax
0x543080: mov     ecx, [esi+28h]
0x543083: test    ecx, ecx
0x543085: jz      short loc_543097
0x543087: mov     edx, [ecx]
0x543089: fld     [esp+0Ch+arg_0]
0x54308D: mov     eax, [edx+0Ch]
0x543090: push    ecx
0x543091: fstp    [esp+10h+var_10]
0x543094: push    esi
0x543095: call    eax
0x543097: test    byte ptr [esi+0FCh], 20h
0x54309E: jz      short loc_5430B2
0x5430A0: mov     ecx, offset TimeGlobals
0x5430A5: call    TimeGlobals_GetGameDaysPassed
0x5430AA: cmp     [esi+0ECh], eax
0x5430B0: jb      short loc_5430C1
0x5430B2: mov     ecx, ds:0B33B00h
0x5430B8: call    sub_45A500
0x5430BD: test    al, al
0x5430BF: jz      short loc_543134
0x5430C1: push    ebx
0x5430C2: push    esi
0x5430C3: call    sub_53C5E0
0x5430C8: mov     bl, al
0x5430CA: mov     eax, [esi+30h]
0x5430CD: add     esp, 4
0x5430D0: test    eax, eax
0x5430D2: jz      short loc_5430F8
0x5430D4: test    bl, bl
0x5430D6: jz      short loc_5430F8
0x5430D8: cmp     dword ptr [eax+70h], 0
0x5430DC: jnz     short loc_5430F8
0x5430DE: mov     ecx, ds:0B33B00h
0x5430E4: call    sub_45A500
0x5430E9: mov     ecx, [esi+30h]
0x5430EC: neg     al
0x5430EE: sbb     eax, eax
0x5430F0: neg     eax
0x5430F2: add     eax, 1
0x5430F5: mov     [ecx+70h], eax
0x5430F8: mov     eax, [esi+34h]
0x5430FB: test    eax, eax
0x5430FD: jz      short loc_543123
0x5430FF: test    bl, bl
0x543101: jz      short loc_543123
0x543103: cmp     dword ptr [eax+70h], 0
0x543107: jnz     short loc_543123
0x543109: mov     ecx, ds:0B33B00h
0x54310F: call    sub_45A500
0x543114: mov     edx, [esi+34h]
0x543117: neg     al
0x543119: sbb     eax, eax
0x54311B: neg     eax
0x54311D: add     eax, 1
0x543120: mov     [edx+70h], eax
0x543123: mov     ecx, offset TimeGlobals
0x543128: call    TimeGlobals_GetGameDaysPassed
0x54312D: mov     [esi+0ECh], eax
0x543133: pop     ebx
0x543134: mov     ecx, [esi+30h]
0x543137: test    ecx, ecx
0x543139: jz      short loc_54314B
0x54313B: mov     eax, [ecx]
0x54313D: fld     [esp+0Ch+arg_0]
0x543141: mov     edx, [eax+0Ch]
0x543144: push    ecx
0x543145: fstp    [esp+10h+var_10]
0x543148: push    esi
0x543149: call    edx
0x54314B: mov     ecx, [esi+34h]
0x54314E: test    ecx, ecx
0x543150: jz      short loc_543162
0x543152: mov     eax, [ecx]
0x543154: fld     [esp+0Ch+arg_0]
0x543158: mov     edx, [eax+0Ch]
0x54315B: push    ecx
0x54315C: fstp    [esp+10h+var_10]
0x54315F: push    esi
0x543160: call    edx
0x543162: mov     ecx, [esi+38h]
0x543165: test    ecx, ecx
0x543167: jz      short loc_543176
0x543169: fld     [esp+0Ch+arg_0]
0x54316D: push    ecx
0x54316E: fstp    [esp+10h+var_10]; float
0x543171: call    sub_53F4C0
0x543176: fldz
0x543178: fcom    dword ptr [esi+0E4h]
0x54317E: fnstsw  ax
0x543180: test    ah, 5
0x543183: jp      short loc_5431BA
0x543185: mov     eax, ds:0B33EA0h
0x54318A: sub     eax, [esi+0E8h]
0x543190: test    eax, eax
0x543192: mov     [esp+0Ch+arg_0], eax
0x543196: fild    [esp+0Ch+arg_0]
0x54319A: jge     short loc_5431A2
0x54319C: fadd    dword ptr ds:0A2FC78h
0x5431A2: fld     dword ptr ds:0B36640h
0x5431A8: fmul    qword ptr ds:0A2FC70h
0x5431AE: fdivp   st(1), st
0x5431B0: fld1
0x5431B2: fsubrp  st(1), st
0x5431B4: fstp    dword ptr [esi+0E4h]
0x5431BA: fcom    dword ptr [esi+0E4h]
0x5431C0: fnstsw  ax
0x5431C2: test    ah, 41h
0x5431C5: jnz     short loc_5431CF
0x5431C7: fstp    dword ptr [esi+0E4h]
0x5431CD: jmp     short loc_5431D1
0x5431CF: fstp    st
0x5431D1: lea     ecx, [esi+48h]
0x5431D4: push    ecx
0x5431D5: call    sub_498060
0x5431DA: push    2
0x5431DC: call    nullsub_returnTrue_0arg
0x5431E1: add     esp, 8
0x5431E4: and     dword ptr [esi+0FCh], 0FFFFFFFCh
0x5431EB: pop     esi
0x5431EC: add     esp, 8
0x5431EF: retn    4
