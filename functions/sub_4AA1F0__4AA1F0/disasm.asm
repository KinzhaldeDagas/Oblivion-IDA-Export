0x4AA1F0: sub     esp, 154h
0x4AA1F6: mov     eax, ds:0B30AACh
0x4AA1FB: xor     eax, esp
0x4AA1FD: mov     [esp+154h+var_4], eax
0x4AA204: fild    dword ptr ds:0B02E24h
0x4AA20A: mov     eax, [esp+154h+arg_0]
0x4AA211: mov     ecx, 500h
0x4AA216: sub     ecx, ds:0B02E24h
0x4AA21C: fstp    [esp+154h+var_148]
0x4AA220: push    ebx
0x4AA221: mov     [esp+158h+var_14C], ecx
0x4AA225: fild    [esp+158h+var_14C]
0x4AA229: push    ebp; float
0x4AA22A: push    esi; float
0x4AA22B: mov     esi, [esp+160h+arg_8]
0x4AA232: mov     ebx, [esi]
0x4AA234: fstp    [esp+160h+var_14C]
0x4AA238: fld     [esp+160h+var_14C]
0x4AA23C: push    edi; float
0x4AA23D: fld     [esp+164h+var_148]
0x4AA241: mov     edi, [esp+164h+arg_C]
0x4AA248: mov     ebp, [edi]
0x4AA24A: fld     st
0x4AA24C: fsubp   st(2), st
0x4AA24E: push    0; int
0x4AA250: fxch    st(1)
0x4AA252: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4AA257: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4AA25C: fmul    qword ptr ds:0A2FAA0h
0x4AA262: push    0; int
0x4AA264: push    eax; void *
0x4AA265: mov     [esp+178h+var_144], esi
0x4AA269: faddp   st(1), st
0x4AA26B: mov     [esp+178h+var_140], edi
0x4AA26F: mov     [esp+178h+var_150], ebx
0x4AA273: mov     [esp+178h+var_154], ebp; float
0x4AA277: fstp    [esp+178h+var_13C]
0x4AA27B: call    OblivionDynamicCast
0x4AA280: add     esp, 14h
0x4AA283: test    eax, eax
0x4AA285: mov     [esp+164h+var_138], eax
0x4AA289: jnz     short loc_4AA2BA
0x4AA28B: fild    [esp+164h+var_150]
0x4AA28F: push    0FFFFFFFFh; int
0x4AA291: push    1; int
0x4AA293: sub     esp, 8
0x4AA296: fstp    [esp+174h+var_170]; float
0x4AA29A: fld     [esp+174h+var_148]
0x4AA29E: fstp    [esp+174h+var_174]; float
0x4AA2A1: push    offset aCombatStyleCur; "COMBAT STYLE: Current ref is not an act"...
0x4AA2A6: call    InterfaceMgr_DebugTextLine
0x4AA2AB: add     esp, 14h
0x4AA2AE: add     ebx, [esp+164h+arg_4]
0x4AA2B5: jmp     loc_4ABB16
0x4AA2BA: mov     ecx, eax
0x4AA2BC: call    Actor_IsPlayer
0x4AA2C1: test    al, al
0x4AA2C3: jz      short loc_4AA2F4
0x4AA2C5: fild    [esp+164h+var_150]
0x4AA2C9: push    0FFFFFFFFh; int
0x4AA2CB: push    1; int
0x4AA2CD: sub     esp, 8
0x4AA2D0: fstp    [esp+174h+var_170]; float
0x4AA2D4: fld     [esp+174h+var_148]
0x4AA2D8: fstp    [esp+174h+var_174]; float
0x4AA2DB: push    offset aCombatStyleC_0; "COMBAT STYLE: Current ref is the Player"...
0x4AA2E0: call    InterfaceMgr_DebugTextLine
0x4AA2E5: add     esp, 14h
0x4AA2E8: add     ebx, [esp+164h+arg_4]
0x4AA2EF: jmp     loc_4ABB16
0x4AA2F4: mov     ecx, [esp+164h+var_138]
0x4AA2F8: call    sub_5E0F50
0x4AA2FD: mov     esi, eax
0x4AA2FF: cmp     esi, offset dword_B35788
0x4AA305: jnz     short loc_4AA30E
0x4AA307: mov     eax, offset aDefault; " (default)"
0x4AA30C: jmp     short loc_4AA31A
0x4AA30E: mov     edx, [esi]
0x4AA310: mov     eax, [edx+0D4h]
0x4AA316: mov     ecx, esi
0x4AA318: call    eax
0x4AA31A: push    eax
0x4AA31B: lea     ecx, [esp+168h+var_CC]
0x4AA322: push    offset aCombatStyleS; "COMBAT STYLE: %s"
0x4AA327: push    ecx
0x4AA328: call    __sprintf
0x4AA32D: fild    [esp+170h+var_150]
0x4AA331: add     esp, 0Ch
0x4AA334: push    0FFFFFFFFh; int
0x4AA336: push    1; int
0x4AA338: sub     esp, 8
0x4AA33B: fstp    [esp+174h+var_170]; float
0x4AA33F: lea     edx, [esp+174h+var_CC]
0x4AA346: fld     [esp+174h+var_148]
0x4AA34A: fstp    [esp+174h+var_174]; float
0x4AA34D: push    edx; int
0x4AA34E: call    InterfaceMgr_DebugTextLine
0x4AA353: mov     edi, [esp+178h+arg_4]
0x4AA35A: add     esp, 14h
0x4AA35D: add     ebx, edi
0x4AA35F: push    0FFFFFFFFh; int
0x4AA361: mov     [esp+168h+var_150], ebx
0x4AA365: fild    [esp+168h+var_150]
0x4AA369: push    1; int
0x4AA36B: sub     esp, 8
0x4AA36E: fstp    [esp+174h+var_170]; float
0x4AA372: fld     [esp+174h+var_148]
0x4AA376: fstp    [esp+174h+var_174]; float
0x4AA379: push    offset aMeleeDecision; "MELEE DECISION"
0x4AA37E: call    InterfaceMgr_DebugTextLine
0x4AA383: mov     eax, ds:0B35788h
0x4AA388: mov     edx, [eax+0DCh]
0x4AA38E: add     ebx, edi
0x4AA390: add     esp, 14h
0x4AA393: mov     ecx, offset dword_B35788
0x4AA398: mov     [esp+164h+var_150], ebx
0x4AA39C: call    edx
0x4AA39E: mov     edx, [esi]
0x4AA3A0: movsx   eax, al
0x4AA3A3: push    eax
0x4AA3A4: mov     eax, [edx+0DCh]
0x4AA3AA: mov     ecx, esi
0x4AA3AC: call    eax
0x4AA3AE: movsx   ecx, al
0x4AA3B1: push    ecx
0x4AA3B2: lea     edx, [esp+16Ch+var_134]
0x4AA3B6: push    edx
0x4AA3B7: mov     ecx, esi
0x4AA3B9: call    sub_4A9930
0x4AA3BE: lea     eax, [esp+164h+var_134]
0x4AA3C2: push    eax
0x4AA3C3: lea     ecx, [esp+168h+var_CC]
0x4AA3CA: push    offset aBlockChanceS; "Block %%Chance: %s"
0x4AA3CF: push    ecx
0x4AA3D0: call    __sprintf
0x4AA3D5: fild    [esp+170h+var_150]
0x4AA3D9: add     esp, 0Ch
0x4AA3DC: push    0FFFFFFFFh; int
0x4AA3DE: push    1; int
0x4AA3E0: sub     esp, 8
0x4AA3E3: fstp    [esp+174h+var_170]; float
0x4AA3E7: lea     edx, [esp+174h+var_CC]
0x4AA3EE: fld     [esp+174h+var_148]
0x4AA3F2: fstp    [esp+174h+var_174]; float
0x4AA3F5: push    edx; int
0x4AA3F6: call    InterfaceMgr_DebugTextLine
0x4AA3FB: mov     eax, ds:0B35788h
0x4AA400: mov     edx, [eax+10Ch]
0x4AA406: add     ebx, edi
0x4AA408: add     esp, 14h
0x4AA40B: mov     ecx, offset dword_B35788
0x4AA410: mov     [esp+164h+var_150], ebx
0x4AA414: call    edx
0x4AA416: mov     edx, [esi]
0x4AA418: movsx   eax, al
0x4AA41B: push    eax
0x4AA41C: mov     eax, [edx+10Ch]
0x4AA422: mov     ecx, esi
0x4AA424: call    eax
0x4AA426: movsx   ecx, al
0x4AA429: push    ecx
0x4AA42A: lea     edx, [esp+16Ch+var_134]
0x4AA42E: push    edx
0x4AA42F: mov     ecx, esi
0x4AA431: call    sub_4A9930
0x4AA436: lea     eax, [esp+164h+var_134]
0x4AA43A: push    eax
0x4AA43B: lea     ecx, [esp+168h+var_CC]
0x4AA442: push    offset aAttackChanceS; "Attack %%Chance: %s"
0x4AA447: push    ecx
0x4AA448: call    __sprintf
0x4AA44D: fild    [esp+170h+var_150]
0x4AA451: add     esp, 0Ch
0x4AA454: push    0FFFFFFFFh; int
0x4AA456: push    1; int
0x4AA458: sub     esp, 8
0x4AA45B: fstp    [esp+174h+var_170]; float
0x4AA45F: lea     edx, [esp+174h+var_CC]
0x4AA466: fld     [esp+174h+var_148]
0x4AA46A: fstp    [esp+174h+var_174]; float
0x4AA46D: push    edx; int
0x4AA46E: call    InterfaceMgr_DebugTextLine
0x4AA473: mov     eax, ds:0B35788h
0x4AA478: mov     edx, [eax+110h]
0x4AA47E: add     ebx, edi
0x4AA480: add     esp, 14h
0x4AA483: mov     ecx, offset dword_B35788
0x4AA488: mov     [esp+164h+var_150], ebx; float
0x4AA48C: call    edx
0x4AA48E: mov     eax, [esi]
0x4AA490: mov     edx, [eax+110h]
0x4AA496: push    ecx
0x4AA497: mov     ecx, esi
0x4AA499: fstp    [esp+168h+var_168]
0x4AA49C: call    edx
0x4AA49E: push    ecx
0x4AA49F: lea     eax, [esp+168h+var_130]
0x4AA4A3: fstp    [esp+168h+var_168]; float
0x4AA4A6: push    eax; int
0x4AA4A7: mov     ecx, esi
0x4AA4A9: call    sub_4A98D0
0x4AA4AE: lea     ecx, [esp+160h+var_130]
0x4AA4B2: push    ecx
0x4AA4B3: lea     edx, [esp+164h+var_C8]
0x4AA4BA: push    offset aRecoilStaggerB; "Recoil/Stagger Bonus to Attack: %s"
0x4AA4BF: push    edx
0x4AA4C0: call    __sprintf
0x4AA4C5: fild    [esp+16Ch+var_14C]
0x4AA4C9: add     esp, 0Ch
0x4AA4CC: push    0FFFFFFFFh; int
0x4AA4CE: push    1; int
0x4AA4D0: sub     esp, 8
0x4AA4D3: fstp    [esp+170h+var_16C]; float
0x4AA4D7: lea     eax, [esp+170h+var_C8]
0x4AA4DE: fld     [esp+170h+var_144]
0x4AA4E2: fstp    [esp+170h+var_170]; float
0x4AA4E5: push    eax; int
0x4AA4E6: call    InterfaceMgr_DebugTextLine
0x4AA4EB: mov     edx, ds:0B35788h
0x4AA4F1: mov     eax, [edx+114h]
0x4AA4F7: add     ebx, edi
0x4AA4F9: add     esp, 14h
0x4AA4FC: mov     ecx, offset dword_B35788
0x4AA501: mov     [esp+160h+var_14C], ebx
0x4AA505: call    eax
0x4AA507: mov     edx, [esi]
0x4AA509: mov     eax, [edx+114h]
0x4AA50F: push    ecx
0x4AA510: mov     ecx, esi
0x4AA512: fstp    [esp+164h+var_164]
0x4AA515: call    eax
0x4AA517: push    ecx
0x4AA518: lea     ecx, [esp+164h+var_12C]
0x4AA51C: fstp    [esp+164h+var_164]; float
0x4AA51F: push    ecx; int
0x4AA520: mov     ecx, esi
0x4AA522: call    sub_4A98D0
0x4AA527: lea     edx, [esp+15Ch+var_12C]
0x4AA52B: push    edx
0x4AA52C: lea     eax, [esp+160h+var_C4]
0x4AA533: push    offset aUnconsciousBon; "Unconscious Bonus to Attack: %s"
0x4AA538: push    eax
0x4AA539: call    __sprintf
0x4AA53E: fild    [esp+168h+var_148]
0x4AA542: add     esp, 0Ch
0x4AA545: push    0FFFFFFFFh; int
0x4AA547: push    1; int
0x4AA549: sub     esp, 8
0x4AA54C: fstp    [esp+16Ch+var_168]; float
0x4AA550: lea     ecx, [esp+16Ch+var_C4]
0x4AA557: fld     [esp+16Ch+var_140]
0x4AA55B: fstp    [esp+16Ch+var_16C]; float
0x4AA55E: push    ecx; int
0x4AA55F: call    InterfaceMgr_DebugTextLine
0x4AA564: mov     edx, ds:0B35788h
0x4AA56A: mov     eax, [edx+118h]
0x4AA570: add     ebx, edi
0x4AA572: add     esp, 14h
0x4AA575: mov     ecx, offset dword_B35788
0x4AA57A: mov     [esp+15Ch+var_148], ebx
0x4AA57E: call    eax
0x4AA580: mov     edx, [esi]
0x4AA582: mov     eax, [edx+118h]
0x4AA588: push    ecx
0x4AA589: mov     ecx, esi
0x4AA58B: fstp    [esp+160h+var_160]
0x4AA58E: call    eax
0x4AA590: push    ecx
0x4AA591: lea     ecx, [esp+160h+var_128]
0x4AA595: fstp    [esp+160h+var_160]; float
0x4AA598: push    ecx; int
0x4AA599: mov     ecx, esi
0x4AA59B: call    sub_4A98D0
0x4AA5A0: lea     edx, [esp+158h+var_128]
0x4AA5A4: push    edx
0x4AA5A5: lea     eax, [esp+15Ch+var_C0]
0x4AA5AC: push    offset aHandToHandBonu; "Hand-to-Hand Bonus to Attack: %s"
0x4AA5B1: push    eax
0x4AA5B2: call    __sprintf
0x4AA5B7: fild    [esp+164h+var_144]
0x4AA5BB: add     esp, 0Ch
0x4AA5BE: push    0FFFFFFFFh; int
0x4AA5C0: push    1; int
0x4AA5C2: sub     esp, 8
0x4AA5C5: fstp    [esp+168h+var_164]; float
0x4AA5C9: lea     ecx, [esp+168h+var_C0]
0x4AA5D0: fld     [esp+168h+var_13C]
0x4AA5D4: fstp    [esp+168h+var_168]; float
0x4AA5D7: push    ecx; int
0x4AA5D8: call    InterfaceMgr_DebugTextLine
0x4AA5DD: add     esp, 14h
0x4AA5E0: add     ebx, edi
0x4AA5E2: push    0FFFFFFFFh; int
0x4AA5E4: mov     [esp+15Ch+var_144], ebx
0x4AA5E8: fild    [esp+15Ch+var_144]
0x4AA5EC: push    1; int
0x4AA5EE: sub     esp, 8
0x4AA5F1: fstp    [esp+168h+var_164]; float
0x4AA5F5: fld     [esp+168h+var_13C]
0x4AA5F9: fstp    [esp+168h+var_168]; float
0x4AA5FC: push    offset aPowerAttacks; "POWER ATTACKS"
0x4AA601: call    InterfaceMgr_DebugTextLine
0x4AA606: mov     edx, ds:0B35788h
0x4AA60C: mov     eax, [edx+11Ch]
0x4AA612: add     ebx, edi
0x4AA614: add     esp, 14h
0x4AA617: mov     ecx, offset dword_B35788
0x4AA61C: mov     [esp+158h+var_144], ebx
0x4AA620: call    eax
0x4AA622: mov     edx, [esi]
0x4AA624: movsx   ecx, al
0x4AA627: mov     eax, [edx+11Ch]
0x4AA62D: push    ecx
0x4AA62E: mov     ecx, esi
0x4AA630: call    eax
0x4AA632: movsx   ecx, al
0x4AA635: push    ecx
0x4AA636: lea     edx, [esp+15Ch+var_124]
0x4AA63A: push    edx
0x4AA63B: mov     ecx, esi
0x4AA63D: call    sub_4A9930
0x4AA642: lea     eax, [esp+154h+var_124]
0x4AA646: push    eax
0x4AA647: push    offset aPowerAttackCha; "Power Attack %%Chance: %s"
0x4AA64C: lea     ecx, [esp+15Ch+var_BC]
0x4AA653: push    ecx
0x4AA654: call    __sprintf
0x4AA659: fild    [esp+160h+var_140]
0x4AA65D: add     esp, 0Ch
0x4AA660: push    0FFFFFFFFh; int
0x4AA662: push    1; int
0x4AA664: sub     esp, 8
0x4AA667: fstp    [esp+164h+var_160]; float
0x4AA66B: lea     edx, [esp+164h+var_BC]
0x4AA672: fld     [esp+164h+var_138]
0x4AA676: fstp    [esp+164h+var_164]; float
0x4AA679: push    edx; int
0x4AA67A: call    InterfaceMgr_DebugTextLine
0x4AA67F: mov     eax, ds:0B35788h
0x4AA684: mov     edx, [eax+120h]
0x4AA68A: add     ebx, edi
0x4AA68C: add     esp, 14h
0x4AA68F: mov     ecx, offset dword_B35788
0x4AA694: mov     [esp+154h+var_140], ebx
0x4AA698: call    edx
0x4AA69A: mov     eax, [esi]
0x4AA69C: mov     edx, [eax+120h]
0x4AA6A2: push    ecx
0x4AA6A3: mov     ecx, esi
0x4AA6A5: fstp    [esp+158h+var_158]
0x4AA6A8: call    edx
0x4AA6AA: push    ecx
0x4AA6AB: lea     eax, [esp+158h+var_120]
0x4AA6AF: fstp    [esp+158h+var_158]; float
0x4AA6B2: push    eax; int
0x4AA6B3: mov     ecx, esi
0x4AA6B5: call    sub_4A98D0
0x4AA6BA: lea     ecx, [esp+150h+var_120]
0x4AA6BE: push    ecx
0x4AA6BF: lea     edx, [esp+154h+var_B8]
0x4AA6C6: push    offset aRecoilStagge_0; "Recoil/Stagger Bonus to Power Attack: %"...
0x4AA6CB: push    edx
0x4AA6CC: call    __sprintf
0x4AA6D1: fild    [esp+15Ch+var_13C]
0x4AA6D5: add     esp, 0Ch
0x4AA6D8: push    0FFFFFFFFh; int
0x4AA6DA: push    1; int
0x4AA6DC: sub     esp, 8
0x4AA6DF: fstp    [esp+160h+var_15C]; float
0x4AA6E3: lea     eax, [esp+160h+var_B8]
0x4AA6EA: fld     [esp+160h+var_134]
0x4AA6EE: fstp    [esp+160h+var_160]; float
0x4AA6F1: push    eax; int
0x4AA6F2: call    InterfaceMgr_DebugTextLine
0x4AA6F7: mov     edx, ds:0B35788h
0x4AA6FD: mov     eax, [edx+124h]
0x4AA703: add     ebx, edi
0x4AA705: add     esp, 14h
0x4AA708: mov     ecx, offset dword_B35788
0x4AA70D: mov     [esp+150h+var_13C], ebx
0x4AA711: call    eax
0x4AA713: mov     edx, [esi]
0x4AA715: mov     eax, [edx+124h]
0x4AA71B: push    ecx
0x4AA71C: mov     ecx, esi
0x4AA71E: fstp    [esp+154h+var_154]
0x4AA721: call    eax
0x4AA723: push    ecx
0x4AA724: lea     ecx, [esp+154h+var_11C]
0x4AA728: fstp    [esp+154h+var_154]; float
0x4AA72B: push    ecx; int
0x4AA72C: mov     ecx, esi
0x4AA72E: call    sub_4A98D0
0x4AA733: lea     edx, [esp+14Ch+var_11C]
0x4AA737: push    edx
0x4AA738: lea     eax, [esp+150h+var_B4]
0x4AA73F: push    offset aUnconsciousB_0; "Unconscious Bonus to Power Attack: %s"
0x4AA744: push    eax
0x4AA745: call    __sprintf
0x4AA74A: fild    [esp+158h+var_138]
0x4AA74E: add     esp, 0Ch
0x4AA751: push    0FFFFFFFFh; int
0x4AA753: push    1; int
0x4AA755: sub     esp, 8
0x4AA758: fstp    [esp+15Ch+var_158]; float
0x4AA75C: fld     [esp+15Ch+var_130]
0x4AA760: lea     ecx, [esp+15Ch+var_B4]
0x4AA767: fstp    [esp+15Ch+var_15C]; float
0x4AA76A: push    ecx; int
0x4AA76B: call    InterfaceMgr_DebugTextLine
0x4AA770: mov     edx, [esi]
0x4AA772: mov     eax, [edx+16Ch]
0x4AA778: add     esp, 14h
0x4AA77B: add     ebx, edi
0x4AA77D: push    2
0x4AA77F: mov     ecx, esi
0x4AA781: mov     [esp+150h+var_138], ebx
0x4AA785: call    eax
0x4AA787: fild    [esp+150h+var_13C]
0x4AA78B: push    0FFFFFFFFh; int
0x4AA78D: push    1; int
0x4AA78F: sub     esp, 8
0x4AA792: test    al, al
0x4AA794: fstp    [esp+160h+var_15C]; float
0x4AA798: fld     [esp+160h+var_134]
0x4AA79C: fstp    [esp+160h+var_160]; float
0x4AA79F: jz      loc_4AA984
0x4AA7A5: push    offset aChoosePowerAtt; "Choose Power Attacks using %%Chance."
0x4AA7AA: call    InterfaceMgr_DebugTextLine
0x4AA7AF: mov     edx, ds:0B35788h
0x4AA7B5: mov     eax, [edx+128h]
0x4AA7BB: add     ebx, edi
0x4AA7BD: add     esp, 14h
0x4AA7C0: mov     ecx, offset dword_B35788
0x4AA7C5: mov     [esp+150h+var_13C], ebx
0x4AA7C9: call    eax
0x4AA7CB: mov     edx, [esi]
0x4AA7CD: movsx   ecx, al
0x4AA7D0: mov     eax, [edx+128h]
0x4AA7D6: push    ecx
0x4AA7D7: mov     ecx, esi
0x4AA7D9: call    eax
0x4AA7DB: movsx   ecx, al
0x4AA7DE: push    ecx
0x4AA7DF: lea     edx, [esp+158h+var_120]
0x4AA7E3: push    edx
0x4AA7E4: mov     ecx, esi
0x4AA7E6: call    sub_4A9930
0x4AA7EB: lea     eax, [esp+150h+var_120]
0x4AA7EF: push    eax
0x4AA7F0: lea     ecx, [esp+154h+var_B8]
0x4AA7F7: push    offset aNormalS; "Normal: %s"
0x4AA7FC: push    ecx
0x4AA7FD: call    __sprintf
0x4AA802: fild    [esp+15Ch+var_13C]
0x4AA806: add     esp, 0Ch
0x4AA809: push    0FFFFFFFFh; int
0x4AA80B: push    1; int
0x4AA80D: sub     esp, 8
0x4AA810: fstp    [esp+160h+var_15C]; float
0x4AA814: lea     edx, [esp+160h+var_B8]
0x4AA81B: fld     [esp+160h+var_134]
0x4AA81F: fstp    [esp+160h+var_160]; float
0x4AA822: push    edx; int
0x4AA823: call    InterfaceMgr_DebugTextLine
0x4AA828: mov     eax, ds:0B35788h
0x4AA82D: mov     edx, [eax+12Ch]
0x4AA833: add     ebx, edi
0x4AA835: add     esp, 14h
0x4AA838: mov     ecx, offset dword_B35788
0x4AA83D: mov     [esp+150h+var_13C], ebx
0x4AA841: call    edx
0x4AA843: mov     edx, [esi]
0x4AA845: movsx   eax, al
0x4AA848: push    eax
0x4AA849: mov     eax, [edx+12Ch]
0x4AA84F: mov     ecx, esi
0x4AA851: call    eax
0x4AA853: movsx   ecx, al
0x4AA856: push    ecx
0x4AA857: lea     edx, [esp+158h+var_120]
0x4AA85B: push    edx
0x4AA85C: mov     ecx, esi
0x4AA85E: call    sub_4A9930
0x4AA863: mov     eax, ds:0B35788h
0x4AA868: mov     edx, [eax+130h]
0x4AA86E: mov     ecx, offset dword_B35788
0x4AA873: call    edx
0x4AA875: mov     edx, [esi]
0x4AA877: movsx   eax, al
0x4AA87A: push    eax
0x4AA87B: mov     eax, [edx+130h]
0x4AA881: mov     ecx, esi
0x4AA883: call    eax
0x4AA885: movsx   ecx, al
0x4AA888: push    ecx
0x4AA889: lea     edx, [esp+158h+var_EC]
0x4AA88D: push    edx
0x4AA88E: mov     ecx, esi
0x4AA890: call    sub_4A9930
0x4AA895: lea     eax, [esp+150h+var_EC]
0x4AA899: push    eax
0x4AA89A: lea     ecx, [esp+154h+var_120]
0x4AA89E: push    ecx
0x4AA89F: lea     edx, [esp+158h+var_B8]
0x4AA8A6: push    offset aForwardSBackS; "Forward: %s Back: %s"
0x4AA8AB: push    edx
0x4AA8AC: call    __sprintf
0x4AA8B1: fild    [esp+160h+var_13C]
0x4AA8B5: add     esp, 10h
0x4AA8B8: push    0FFFFFFFFh; int
0x4AA8BA: push    1; int
0x4AA8BC: sub     esp, 8
0x4AA8BF: fstp    [esp+160h+var_15C]; float
0x4AA8C3: lea     eax, [esp+160h+var_B8]
0x4AA8CA: fld     [esp+160h+var_134]
0x4AA8CE: fstp    [esp+160h+var_160]; float
0x4AA8D1: push    eax; int
0x4AA8D2: call    InterfaceMgr_DebugTextLine
0x4AA8D7: mov     edx, ds:0B35788h
0x4AA8DD: mov     eax, [edx+134h]
0x4AA8E3: add     ebx, edi
0x4AA8E5: add     esp, 14h
0x4AA8E8: mov     ecx, offset dword_B35788
0x4AA8ED: mov     [esp+150h+var_13C], ebx
0x4AA8F1: call    eax
0x4AA8F3: mov     edx, [esi]
0x4AA8F5: movsx   ecx, al
0x4AA8F8: mov     eax, [edx+134h]
0x4AA8FE: push    ecx
0x4AA8FF: mov     ecx, esi
0x4AA901: call    eax
0x4AA903: movsx   ecx, al
0x4AA906: push    ecx
0x4AA907: lea     edx, [esp+158h+var_120]
0x4AA90B: push    edx
0x4AA90C: mov     ecx, esi
0x4AA90E: call    sub_4A9930
0x4AA913: mov     eax, ds:0B35788h
0x4AA918: mov     edx, [eax+138h]
0x4AA91E: mov     ecx, offset dword_B35788
0x4AA923: call    edx
0x4AA925: mov     edx, [esi]
0x4AA927: movsx   eax, al
0x4AA92A: push    eax
0x4AA92B: mov     eax, [edx+138h]
0x4AA931: mov     ecx, esi
0x4AA933: call    eax
0x4AA935: movsx   ecx, al
0x4AA938: push    ecx
0x4AA939: lea     edx, [esp+158h+var_EC]
0x4AA93D: push    edx
0x4AA93E: mov     ecx, esi
0x4AA940: call    sub_4A9930
0x4AA945: lea     eax, [esp+150h+var_EC]
0x4AA949: push    eax
0x4AA94A: lea     ecx, [esp+154h+var_120]
0x4AA94E: push    ecx
0x4AA94F: lea     edx, [esp+158h+var_B8]
0x4AA956: push    offset aLeftSRightS; "Left: %s Right: %s"
0x4AA95B: push    edx
0x4AA95C: call    __sprintf
0x4AA961: fild    [esp+160h+var_13C]
0x4AA965: add     esp, 10h
0x4AA968: push    0FFFFFFFFh
0x4AA96A: push    1
0x4AA96C: sub     esp, 8
0x4AA96F: fstp    [esp+160h+var_15C]
0x4AA973: lea     eax, [esp+160h+var_B8]
0x4AA97A: fld     [esp+160h+var_134]
0x4AA97E: fstp    [esp+160h+var_160]
0x4AA981: push    eax
0x4AA982: jmp     short loc_4AA989
0x4AA984: push    offset aChoosePowerA_0; "Choose Power Attacks using Movement."
0x4AA989: call    InterfaceMgr_DebugTextLine
0x4AA98E: mov     edx, ds:0B35788h
0x4AA994: mov     eax, [edx+13Ch]
0x4AA99A: add     ebx, edi
0x4AA99C: add     esp, 14h
0x4AA99F: mov     ecx, offset dword_B35788
0x4AA9A4: mov     [esp+150h+var_13C], ebx
0x4AA9A8: call    eax
0x4AA9AA: mov     edx, [esi]
0x4AA9AC: mov     eax, [edx+13Ch]
0x4AA9B2: push    ecx
0x4AA9B3: mov     ecx, esi
0x4AA9B5: fstp    [esp+154h+var_154]; float
0x4AA9B8: call    eax
0x4AA9BA: push    ecx
0x4AA9BB: lea     ecx, [esp+158h+var_120]
0x4AA9BF: fstp    [esp+158h+var_158]; float
0x4AA9C2: push    ecx; int
0x4AA9C3: mov     ecx, esi
0x4AA9C5: call    sub_4A98D0
0x4AA9CA: mov     edx, ds:0B35788h
0x4AA9D0: mov     eax, [edx+140h]
0x4AA9D6: mov     ecx, offset dword_B35788
0x4AA9DB: call    eax
0x4AA9DD: mov     edx, [esi]
0x4AA9DF: mov     eax, [edx+140h]
0x4AA9E5: push    ecx
0x4AA9E6: mov     ecx, esi
0x4AA9E8: fstp    [esp+154h+var_154]; float
0x4AA9EB: call    eax
0x4AA9ED: push    ecx
0x4AA9EE: lea     ecx, [esp+158h+var_EC]
0x4AA9F2: fstp    [esp+158h+var_158]; float
0x4AA9F5: push    ecx; int
0x4AA9F6: mov     ecx, esi
0x4AA9F8: call    sub_4A98D0
0x4AA9FD: lea     edx, [esp+150h+var_EC]
0x4AAA01: push    edx
0x4AAA02: lea     eax, [esp+154h+var_120]
0x4AAA06: push    eax
0x4AAA07: lea     ecx, [esp+158h+var_B8]
0x4AAA0E: push    offset aHoldTimerMinSM; "Hold Timer Min: %s Max: %s"
0x4AAA13: push    ecx
0x4AAA14: call    __sprintf
0x4AAA19: fild    [esp+160h+var_13C]
0x4AAA1D: add     esp, 10h
0x4AAA20: push    0FFFFFFFFh; int
0x4AAA22: push    1; int
0x4AAA24: sub     esp, 8
0x4AAA27: fstp    [esp+160h+var_15C]; float
0x4AAA2B: lea     edx, [esp+160h+var_B8]
0x4AAA32: fld     [esp+160h+var_134]
0x4AAA36: fstp    [esp+160h+var_160]; float
0x4AAA39: push    edx; int
0x4AAA3A: call    InterfaceMgr_DebugTextLine
0x4AAA3F: fild    [esp+164h+var_140]
0x4AAA43: add     esp, 14h
0x4AAA46: push    0FFFFFFFFh; int
0x4AAA48: push    3; int
0x4AAA4A: sub     esp, 8
0x4AAA4D: fstp    [esp+160h+var_15C]; float
0x4AAA51: add     ebx, edi
0x4AAA53: fld     [esp+160h+var_138]
0x4AAA57: fstp    [esp+160h+var_160]; float
0x4AAA5A: push    offset aManeuverDecisi; "MANEUVER DECISION"
0x4AAA5F: call    InterfaceMgr_DebugTextLine
0x4AAA64: mov     eax, ds:0B35788h
0x4AAA69: mov     edx, [eax+0DCh]
0x4AAA6F: add     ebp, edi
0x4AAA71: add     esp, 14h
0x4AAA74: mov     ecx, offset dword_B35788
0x4AAA79: mov     [esp+150h+var_140], ebp
0x4AAA7D: call    edx
0x4AAA7F: mov     edx, [esi]
0x4AAA81: movsx   eax, al
0x4AAA84: push    eax
0x4AAA85: mov     eax, [edx+0DCh]
0x4AAA8B: mov     ecx, esi
0x4AAA8D: call    eax
0x4AAA8F: movsx   ecx, al
0x4AAA92: push    ecx
0x4AAA93: lea     edx, [esp+158h+var_120]
0x4AAA97: push    edx
0x4AAA98: mov     ecx, esi
0x4AAA9A: call    sub_4A9930
0x4AAA9F: lea     eax, [esp+150h+var_120]
0x4AAAA3: push    eax
0x4AAAA4: lea     ecx, [esp+154h+var_B8]
0x4AAAAB: push    offset aDodgeChanceS; "Dodge %%Chance: %s"
0x4AAAB0: push    ecx
0x4AAAB1: call    __sprintf
0x4AAAB6: fild    [esp+15Ch+var_140]
0x4AAABA: add     esp, 0Ch
0x4AAABD: push    0FFFFFFFFh; int
0x4AAABF: push    3; int
0x4AAAC1: sub     esp, 8
0x4AAAC4: fstp    [esp+160h+var_15C]; float
0x4AAAC8: lea     edx, [esp+160h+var_B8]
0x4AAACF: fld     [esp+160h+var_138]
0x4AAAD3: fstp    [esp+160h+var_160]; float
0x4AAAD6: push    edx; int
0x4AAAD7: call    InterfaceMgr_DebugTextLine
0x4AAADC: mov     eax, ds:0B35788h
0x4AAAE1: mov     edx, [eax+0E4h]
0x4AAAE7: add     ebp, edi
0x4AAAE9: add     esp, 14h
0x4AAAEC: mov     ecx, offset dword_B35788
0x4AAAF1: mov     [esp+150h+var_140], ebp
0x4AAAF5: call    edx
0x4AAAF7: mov     edx, [esi]
0x4AAAF9: movsx   eax, al
0x4AAAFC: push    eax
0x4AAAFD: mov     eax, [edx+0E4h]
0x4AAB03: mov     ecx, esi
0x4AAB05: call    eax
0x4AAB07: movsx   ecx, al
0x4AAB0A: push    ecx
0x4AAB0B: lea     edx, [esp+158h+var_120]
0x4AAB0F: push    edx
0x4AAB10: mov     ecx, esi
0x4AAB12: call    sub_4A9930
0x4AAB17: lea     eax, [esp+150h+var_120]
0x4AAB1B: push    eax
0x4AAB1C: lea     ecx, [esp+154h+var_B8]
0x4AAB23: push    offset aDodgeLeftRight; "Dodge Left/Right %%Chance: %s"
0x4AAB28: push    ecx
0x4AAB29: call    __sprintf
0x4AAB2E: fild    [esp+15Ch+var_140]
0x4AAB32: add     esp, 0Ch
0x4AAB35: push    0FFFFFFFFh; int
0x4AAB37: push    3; int
0x4AAB39: sub     esp, 8
0x4AAB3C: fstp    [esp+160h+var_15C]; float
0x4AAB40: lea     edx, [esp+160h+var_B8]
0x4AAB47: fld     [esp+160h+var_138]
0x4AAB4B: fstp    [esp+160h+var_160]; float
0x4AAB4E: push    edx; int
0x4AAB4F: call    InterfaceMgr_DebugTextLine
0x4AAB54: mov     eax, ds:0B35788h
0x4AAB59: mov     edx, [eax+0E0h]
0x4AAB5F: add     ebp, edi
0x4AAB61: add     esp, 14h
0x4AAB64: mov     ecx, offset dword_B35788
0x4AAB69: mov     [esp+150h+var_140], ebp
0x4AAB6D: call    edx
0x4AAB6F: mov     edx, [esi]
0x4AAB71: movsx   eax, al
0x4AAB74: push    eax
0x4AAB75: mov     eax, [edx+0E0h]
0x4AAB7B: mov     ecx, esi
0x4AAB7D: call    eax
0x4AAB7F: movsx   ecx, al
0x4AAB82: push    ecx
0x4AAB83: lea     edx, [esp+158h+var_120]
0x4AAB87: push    edx
0x4AAB88: mov     ecx, esi
0x4AAB8A: call    sub_4A9930
0x4AAB8F: lea     eax, [esp+150h+var_120]
0x4AAB93: push    eax
0x4AAB94: push    offset aAcrobaticDodge; "Acrobatic Dodge %%Chance: %s"
0x4AAB99: lea     ecx, [esp+158h+var_B8]
0x4AABA0: push    ecx
0x4AABA1: call    __sprintf
0x4AABA6: fild    [esp+15Ch+var_140]
0x4AABAA: add     esp, 0Ch
0x4AABAD: push    0FFFFFFFFh; int
0x4AABAF: push    3; int
0x4AABB1: sub     esp, 8
0x4AABB4: fstp    [esp+160h+var_15C]; float
0x4AABB8: lea     edx, [esp+160h+var_B8]
0x4AABBF: fld     [esp+160h+var_138]
0x4AABC3: fstp    [esp+160h+var_160]; float
0x4AABC6: push    edx; int
0x4AABC7: call    InterfaceMgr_DebugTextLine
0x4AABCC: mov     eax, ds:0B35788h
0x4AABD1: mov     edx, [eax+100h]
0x4AABD7: add     ebp, edi
0x4AABD9: add     esp, 14h
0x4AABDC: mov     ecx, offset dword_B35788
0x4AABE1: mov     [esp+150h+var_140], ebp
0x4AABE5: call    edx
0x4AABE7: mov     eax, [esi]
0x4AABE9: mov     edx, [eax+100h]
0x4AABEF: push    ecx
0x4AABF0: mov     ecx, esi
0x4AABF2: fstp    [esp+154h+var_154]; float
0x4AABF5: call    edx
0x4AABF7: push    ecx
0x4AABF8: lea     eax, [esp+158h+var_120]
0x4AABFC: fstp    [esp+158h+var_158]; float
0x4AABFF: push    eax; int
0x4AAC00: mov     ecx, esi
0x4AAC02: call    sub_4A98D0
0x4AAC07: mov     edx, ds:0B35788h
0x4AAC0D: mov     eax, [edx+104h]
0x4AAC13: mov     ecx, offset dword_B35788
0x4AAC18: call    eax
0x4AAC1A: mov     edx, [esi]
0x4AAC1C: mov     eax, [edx+104h]
0x4AAC22: push    ecx
0x4AAC23: mov     ecx, esi
0x4AAC25: fstp    [esp+154h+var_154]; float
0x4AAC28: call    eax
0x4AAC2A: push    ecx
0x4AAC2B: lea     ecx, [esp+158h+var_EC]
0x4AAC2F: fstp    [esp+158h+var_158]; float
0x4AAC32: push    ecx; int
0x4AAC33: mov     ecx, esi
0x4AAC35: call    sub_4A98D0
0x4AAC3A: lea     edx, [esp+150h+var_EC]
0x4AAC3E: push    edx
0x4AAC3F: lea     eax, [esp+154h+var_120]
0x4AAC43: push    eax
0x4AAC44: lea     ecx, [esp+158h+var_B8]
0x4AAC4B: push    offset aIdleTimerMinSM; "Idle Timer Min: %s Max: %s"
0x4AAC50: push    ecx
0x4AAC51: call    __sprintf
0x4AAC56: fild    [esp+160h+var_140]
0x4AAC5A: add     esp, 10h
0x4AAC5D: push    0FFFFFFFFh; int
0x4AAC5F: push    3; int
0x4AAC61: sub     esp, 8
0x4AAC64: fstp    [esp+160h+var_15C]; float
0x4AAC68: lea     edx, [esp+160h+var_B8]
0x4AAC6F: fld     [esp+160h+var_138]
0x4AAC73: fstp    [esp+160h+var_160]; float
0x4AAC76: push    edx; int
0x4AAC77: call    InterfaceMgr_DebugTextLine
0x4AAC7C: mov     eax, ds:0B35788h
0x4AAC81: mov     edx, [eax+0E8h]
0x4AAC87: add     ebp, edi
0x4AAC89: add     esp, 14h
0x4AAC8C: mov     ecx, offset dword_B35788
0x4AAC91: mov     [esp+150h+var_140], ebp
0x4AAC95: call    edx
0x4AAC97: mov     eax, [esi]
0x4AAC99: mov     edx, [eax+0E8h]
0x4AAC9F: push    ecx
0x4AACA0: mov     ecx, esi
0x4AACA2: fstp    [esp+154h+var_154]; float
0x4AACA5: call    edx
0x4AACA7: push    ecx
0x4AACA8: fstp    [esp+158h+var_158]; float
0x4AACAB: lea     eax, [esp+158h+var_120]
0x4AACAF: push    eax; int
0x4AACB0: mov     ecx, esi
0x4AACB2: call    sub_4A98D0
0x4AACB7: mov     edx, ds:0B35788h
0x4AACBD: mov     eax, [edx+0ECh]
0x4AACC3: mov     ecx, offset dword_B35788
0x4AACC8: call    eax
0x4AACCA: mov     edx, [esi]
0x4AACCC: mov     eax, [edx+0ECh]
0x4AACD2: push    ecx
0x4AACD3: mov     ecx, esi
0x4AACD5: fstp    [esp+154h+var_154]; float
0x4AACD8: call    eax
0x4AACDA: push    ecx
0x4AACDB: lea     ecx, [esp+158h+var_EC]
0x4AACDF: fstp    [esp+158h+var_158]; float
0x4AACE2: push    ecx; int
0x4AACE3: mov     ecx, esi
0x4AACE5: call    sub_4A98D0
0x4AACEA: lea     edx, [esp+150h+var_EC]
0x4AACEE: push    edx
0x4AACEF: lea     eax, [esp+154h+var_120]
0x4AACF3: push    eax
0x4AACF4: lea     ecx, [esp+158h+var_B8]
0x4AACFB: push    offset aDodgeLRTimerMi; "Dodge L/R Timer Min: %s Max: %s"
0x4AAD00: push    ecx
0x4AAD01: call    __sprintf
0x4AAD06: fild    [esp+160h+var_140]
0x4AAD0A: add     esp, 10h
0x4AAD0D: push    0FFFFFFFFh; int
0x4AAD0F: push    3; int
0x4AAD11: sub     esp, 8
0x4AAD14: fstp    [esp+160h+var_15C]; float
0x4AAD18: lea     edx, [esp+160h+var_B8]
0x4AAD1F: fld     [esp+160h+var_138]
0x4AAD23: fstp    [esp+160h+var_160]; float
0x4AAD26: push    edx; int
0x4AAD27: call    InterfaceMgr_DebugTextLine
0x4AAD2C: mov     eax, ds:0B35788h
0x4AAD31: mov     edx, [eax+0F0h]
0x4AAD37: add     ebp, edi
0x4AAD39: add     esp, 14h
0x4AAD3C: mov     ecx, offset dword_B35788
0x4AAD41: mov     [esp+150h+var_140], ebp
0x4AAD45: call    edx
0x4AAD47: mov     eax, [esi]
0x4AAD49: mov     edx, [eax+0F0h]
0x4AAD4F: push    ecx
0x4AAD50: mov     ecx, esi
0x4AAD52: fstp    [esp+154h+var_154]; float
0x4AAD55: call    edx
0x4AAD57: push    ecx
0x4AAD58: lea     eax, [esp+158h+var_120]
0x4AAD5C: fstp    [esp+158h+var_158]; float
0x4AAD5F: push    eax; int
0x4AAD60: mov     ecx, esi
0x4AAD62: call    sub_4A98D0
0x4AAD67: mov     edx, ds:0B35788h
0x4AAD6D: mov     eax, [edx+0F4h]
0x4AAD73: mov     ecx, offset dword_B35788
0x4AAD78: call    eax
0x4AAD7A: mov     edx, [esi]
0x4AAD7C: mov     eax, [edx+0F4h]
0x4AAD82: push    ecx
0x4AAD83: mov     ecx, esi
0x4AAD85: fstp    [esp+154h+var_154]; float
0x4AAD88: call    eax
0x4AAD8A: push    ecx
0x4AAD8B: lea     ecx, [esp+158h+var_EC]
0x4AAD8F: fstp    [esp+158h+var_158]; float
0x4AAD92: push    ecx; int
0x4AAD93: mov     ecx, esi
0x4AAD95: call    sub_4A98D0
0x4AAD9A: lea     edx, [esp+150h+var_EC]
0x4AAD9E: push    edx
0x4AAD9F: lea     eax, [esp+154h+var_120]
0x4AADA3: push    eax
0x4AADA4: push    offset aDodgeForwardTi; "Dodge Forward Timer Min: %s Max: %s"
0x4AADA9: lea     ecx, [esp+15Ch+var_B8]
0x4AADB0: push    ecx
0x4AADB1: call    __sprintf
0x4AADB6: fild    [esp+160h+var_140]
0x4AADBA: add     esp, 10h
0x4AADBD: push    0FFFFFFFFh; int
0x4AADBF: push    3; int
0x4AADC1: sub     esp, 8
0x4AADC4: fstp    [esp+160h+var_15C]; float
0x4AADC8: lea     edx, [esp+160h+var_B8]
0x4AADCF: fld     [esp+160h+var_138]
0x4AADD3: fstp    [esp+160h+var_160]; float
0x4AADD6: push    edx; int
0x4AADD7: call    InterfaceMgr_DebugTextLine
0x4AADDC: mov     eax, ds:0B35788h
0x4AADE1: mov     edx, [eax+0F8h]
0x4AADE7: add     ebp, edi
0x4AADE9: add     esp, 14h
0x4AADEC: mov     ecx, offset dword_B35788
0x4AADF1: mov     [esp+150h+var_140], ebp
0x4AADF5: call    edx
0x4AADF7: mov     eax, [esi]
0x4AADF9: mov     edx, [eax+0F8h]
0x4AADFF: push    ecx
0x4AAE00: mov     ecx, esi
0x4AAE02: fstp    [esp+154h+var_154]; float
0x4AAE05: call    edx
0x4AAE07: push    ecx
0x4AAE08: lea     eax, [esp+158h+var_120]
0x4AAE0C: fstp    [esp+158h+var_158]; float
0x4AAE0F: push    eax; int
0x4AAE10: mov     ecx, esi
0x4AAE12: call    sub_4A98D0
0x4AAE17: mov     edx, ds:0B35788h
0x4AAE1D: mov     eax, [edx+0FCh]
0x4AAE23: mov     ecx, offset dword_B35788
0x4AAE28: call    eax
0x4AAE2A: mov     edx, [esi]
0x4AAE2C: mov     eax, [edx+0FCh]
0x4AAE32: push    ecx
0x4AAE33: mov     ecx, esi
0x4AAE35: fstp    [esp+154h+var_154]; float
0x4AAE38: call    eax
0x4AAE3A: push    ecx
0x4AAE3B: lea     ecx, [esp+158h+var_EC]
0x4AAE3F: fstp    [esp+158h+var_158]; float
0x4AAE42: push    ecx; int
0x4AAE43: mov     ecx, esi
0x4AAE45: call    sub_4A98D0
0x4AAE4A: lea     edx, [esp+150h+var_EC]
0x4AAE4E: push    edx
0x4AAE4F: lea     eax, [esp+154h+var_120]
0x4AAE53: push    eax
0x4AAE54: lea     ecx, [esp+158h+var_B8]
0x4AAE5B: push    offset aDodgeBackTimer; "Dodge Back Timer Min: %s Max: %s"
0x4AAE60: push    ecx
0x4AAE61: call    __sprintf
0x4AAE66: fild    [esp+160h+var_140]
0x4AAE6A: add     esp, 10h
0x4AAE6D: push    0FFFFFFFFh; int
0x4AAE6F: push    3; int
0x4AAE71: sub     esp, 8
0x4AAE74: fstp    [esp+160h+var_15C]; float
0x4AAE78: lea     edx, [esp+160h+var_B8]
0x4AAE7F: fld     [esp+160h+var_138]
0x4AAE83: fstp    [esp+160h+var_160]; float
0x4AAE86: push    edx; int
0x4AAE87: call    InterfaceMgr_DebugTextLine
0x4AAE8C: mov     eax, ds:0B35788h
0x4AAE91: mov     edx, [eax+144h]
0x4AAE97: add     ebp, edi
0x4AAE99: add     esp, 14h
0x4AAE9C: mov     ecx, offset dword_B35788
0x4AAEA1: mov     [esp+150h+var_140], ebp
0x4AAEA5: call    edx
0x4AAEA7: mov     eax, [esi]
0x4AAEA9: mov     edx, [eax+144h]
0x4AAEAF: push    ecx
0x4AAEB0: mov     ecx, esi
0x4AAEB2: fstp    [esp+154h+var_154]; float
0x4AAEB5: call    edx
0x4AAEB7: push    ecx
0x4AAEB8: fstp    [esp+158h+var_158]; float
0x4AAEBB: lea     eax, [esp+158h+var_120]
0x4AAEBF: push    eax; int
0x4AAEC0: mov     ecx, esi
0x4AAEC2: call    sub_4A98D0
0x4AAEC7: lea     ecx, [esp+150h+var_120]
0x4AAECB: push    ecx
0x4AAECC: lea     edx, [esp+154h+var_B8]
0x4AAED3: push    offset aOptimalRangeMu; "Optimal Range Mult: %s"
0x4AAED8: push    edx
0x4AAED9: call    __sprintf
0x4AAEDE: fild    [esp+15Ch+var_140]
0x4AAEE2: add     esp, 0Ch
0x4AAEE5: push    0FFFFFFFFh; int
0x4AAEE7: push    3; int
0x4AAEE9: sub     esp, 8
0x4AAEEC: fstp    [esp+160h+var_15C]; float
0x4AAEF0: lea     eax, [esp+160h+var_B8]
0x4AAEF7: fld     [esp+160h+var_138]
0x4AAEFB: fstp    [esp+160h+var_160]; float
0x4AAEFE: push    eax; int
0x4AAEFF: call    InterfaceMgr_DebugTextLine
0x4AAF04: mov     edx, ds:0B35788h
0x4AAF0A: mov     eax, [edx+148h]
0x4AAF10: add     ebp, edi
0x4AAF12: add     esp, 14h
0x4AAF15: mov     ecx, offset dword_B35788
0x4AAF1A: mov     [esp+150h+var_140], ebp
0x4AAF1E: call    eax
0x4AAF20: mov     edx, [esi]
0x4AAF22: mov     eax, [edx+148h]
0x4AAF28: push    ecx
0x4AAF29: mov     ecx, esi
0x4AAF2B: fstp    [esp+154h+var_154]; float
0x4AAF2E: call    eax
0x4AAF30: push    ecx
0x4AAF31: lea     ecx, [esp+158h+var_120]
0x4AAF35: fstp    [esp+158h+var_158]; float
0x4AAF38: push    ecx; int
0x4AAF39: mov     ecx, esi
0x4AAF3B: call    sub_4A98D0
0x4AAF40: lea     edx, [esp+150h+var_120]
0x4AAF44: push    edx
0x4AAF45: lea     eax, [esp+154h+var_B8]
0x4AAF4C: push    offset aMaximumRangeMu; "Maximum Range Mult: %s"
0x4AAF51: push    eax
0x4AAF52: call    __sprintf
0x4AAF57: fild    [esp+15Ch+var_140]
0x4AAF5B: add     esp, 0Ch
0x4AAF5E: push    0FFFFFFFFh; int
0x4AAF60: push    3; int
0x4AAF62: sub     esp, 8
0x4AAF65: fstp    [esp+160h+var_15C]; float
0x4AAF69: lea     ecx, [esp+160h+var_B8]
0x4AAF70: fld     [esp+160h+var_138]
0x4AAF74: fstp    [esp+160h+var_160]; float
0x4AAF77: push    ecx; int
0x4AAF78: call    InterfaceMgr_DebugTextLine
0x4AAF7D: mov     edx, ds:0B35788h
0x4AAF83: mov     eax, [edx+14Ch]
0x4AAF89: add     ebp, edi
0x4AAF8B: add     esp, 14h
0x4AAF8E: mov     ecx, offset dword_B35788
0x4AAF93: mov     [esp+150h+var_140], ebp
0x4AAF97: call    eax
0x4AAF99: mov     edx, [esi]
0x4AAF9B: mov     eax, [edx+14Ch]
0x4AAFA1: push    ecx
0x4AAFA2: mov     ecx, esi
0x4AAFA4: fstp    [esp+154h+var_154]; float
0x4AAFA7: call    eax
0x4AAFA9: push    ecx
0x4AAFAA: lea     ecx, [esp+158h+var_120]
0x4AAFAE: fstp    [esp+158h+var_158]; float
0x4AAFB1: push    ecx; int
0x4AAFB2: mov     ecx, esi
0x4AAFB4: call    sub_4A98D0
0x4AAFB9: lea     edx, [esp+150h+var_120]
0x4AAFBD: push    edx
0x4AAFBE: push    offset aSwitchToMeleeD; "Switch to Melee Distance: %s"
0x4AAFC3: lea     eax, [esp+158h+var_B8]
0x4AAFCA: push    eax
0x4AAFCB: call    __sprintf
0x4AAFD0: fild    [esp+15Ch+var_140]
0x4AAFD4: add     esp, 0Ch
0x4AAFD7: push    0FFFFFFFFh; int
0x4AAFD9: push    3; int
0x4AAFDB: sub     esp, 8
0x4AAFDE: fstp    [esp+160h+var_15C]; float
0x4AAFE2: lea     ecx, [esp+160h+var_B8]
0x4AAFE9: fld     [esp+160h+var_138]
0x4AAFED: fstp    [esp+160h+var_160]; float
0x4AAFF0: push    ecx; int
0x4AAFF1: call    InterfaceMgr_DebugTextLine
0x4AAFF6: mov     edx, ds:0B35788h
0x4AAFFC: mov     eax, [edx+150h]
0x4AB002: add     ebp, edi
0x4AB004: add     esp, 14h
0x4AB007: mov     ecx, offset dword_B35788
0x4AB00C: mov     [esp+150h+var_140], ebp
0x4AB010: call    eax
0x4AB012: mov     edx, [esi]
0x4AB014: mov     eax, [edx+150h]
0x4AB01A: push    ecx
0x4AB01B: mov     ecx, esi
0x4AB01D: fstp    [esp+154h+var_154]; float
0x4AB020: call    eax
0x4AB022: push    ecx
0x4AB023: lea     ecx, [esp+158h+var_120]
0x4AB027: fstp    [esp+158h+var_158]; float
0x4AB02A: push    ecx; int
0x4AB02B: mov     ecx, esi
0x4AB02D: call    sub_4A98D0
0x4AB032: lea     edx, [esp+150h+var_120]
0x4AB036: push    edx
0x4AB037: lea     eax, [esp+154h+var_B8]
0x4AB03E: push    offset aSwitchToRanged; "Switch to Ranged Distance: %s"
0x4AB043: push    eax
0x4AB044: call    __sprintf
0x4AB049: fild    [esp+15Ch+var_140]
0x4AB04D: add     esp, 0Ch
0x4AB050: push    0FFFFFFFFh; int
0x4AB052: push    3; int
0x4AB054: sub     esp, 8
0x4AB057: fstp    [esp+160h+var_15C]; float
0x4AB05B: lea     ecx, [esp+160h+var_B8]
0x4AB062: fld     [esp+160h+var_138]
0x4AB066: fstp    [esp+160h+var_160]; float
0x4AB069: push    ecx; int
0x4AB06A: call    InterfaceMgr_DebugTextLine
0x4AB06F: mov     edx, ds:0B35788h
0x4AB075: mov     eax, [edx+154h]
0x4AB07B: add     ebp, edi
0x4AB07D: add     esp, 14h
0x4AB080: mov     ecx, offset dword_B35788
0x4AB085: mov     [esp+150h+var_140], ebp
0x4AB089: call    eax
0x4AB08B: mov     edx, [esi]
0x4AB08D: mov     eax, [edx+154h]
0x4AB093: push    ecx
0x4AB094: mov     ecx, esi
0x4AB096: fstp    [esp+154h+var_154]; float
0x4AB099: call    eax
0x4AB09B: push    ecx
0x4AB09C: lea     ecx, [esp+158h+var_120]
0x4AB0A0: fstp    [esp+158h+var_158]; float
0x4AB0A3: push    ecx; int
0x4AB0A4: mov     ecx, esi
0x4AB0A6: call    sub_4A98D0
0x4AB0AB: lea     edx, [esp+150h+var_120]
0x4AB0AF: push    edx
0x4AB0B0: lea     eax, [esp+154h+var_B8]
0x4AB0B7: push    offset aBuffStandoffDi; "Buff Standoff Distance: %s"
0x4AB0BC: push    eax
0x4AB0BD: call    __sprintf
0x4AB0C2: fild    [esp+15Ch+var_140]
0x4AB0C6: add     esp, 0Ch
0x4AB0C9: push    0FFFFFFFFh; int
0x4AB0CB: push    3; int
0x4AB0CD: sub     esp, 8
0x4AB0D0: fstp    [esp+160h+var_15C]; float
0x4AB0D4: fld     [esp+160h+var_138]
0x4AB0D8: fstp    [esp+160h+var_160]; float
0x4AB0DB: lea     ecx, [esp+160h+var_B8]
0x4AB0E2: push    ecx; int
0x4AB0E3: call    InterfaceMgr_DebugTextLine
0x4AB0E8: mov     edx, ds:0B35788h
0x4AB0EE: mov     eax, [edx+158h]
0x4AB0F4: add     ebp, edi
0x4AB0F6: add     esp, 14h
0x4AB0F9: mov     ecx, offset dword_B35788
0x4AB0FE: mov     [esp+150h+var_140], ebp
0x4AB102: call    eax
0x4AB104: mov     edx, [esi]
0x4AB106: mov     eax, [edx+158h]
0x4AB10C: push    ecx
0x4AB10D: mov     ecx, esi
0x4AB10F: fstp    [esp+154h+var_154]; float
0x4AB112: call    eax
0x4AB114: push    ecx
0x4AB115: lea     ecx, [esp+158h+var_120]
0x4AB119: fstp    [esp+158h+var_158]; float
0x4AB11C: push    ecx; int
0x4AB11D: mov     ecx, esi
0x4AB11F: call    sub_4A98D0
0x4AB124: lea     edx, [esp+150h+var_120]
0x4AB128: push    edx
0x4AB129: lea     eax, [esp+154h+var_B8]
0x4AB130: push    offset aRangedStandoff; "Ranged Standoff Distance: %s"
0x4AB135: push    eax
0x4AB136: call    __sprintf
0x4AB13B: fild    [esp+15Ch+var_140]
0x4AB13F: add     esp, 0Ch
0x4AB142: push    0FFFFFFFFh; int
0x4AB144: push    3; int
0x4AB146: sub     esp, 8
0x4AB149: fstp    [esp+160h+var_15C]; float
0x4AB14D: lea     ecx, [esp+160h+var_B8]
0x4AB154: fld     [esp+160h+var_138]
0x4AB158: fstp    [esp+160h+var_160]; float
0x4AB15B: push    ecx; int
0x4AB15C: call    InterfaceMgr_DebugTextLine
0x4AB161: mov     edx, ds:0B35788h
0x4AB167: mov     eax, [edx+15Ch]
0x4AB16D: add     ebp, edi
0x4AB16F: add     esp, 14h
0x4AB172: mov     ecx, offset dword_B35788
0x4AB177: mov     [esp+150h+var_140], ebp
0x4AB17B: call    eax
0x4AB17D: mov     edx, [esi]
0x4AB17F: mov     eax, [edx+15Ch]
0x4AB185: push    ecx
0x4AB186: mov     ecx, esi
0x4AB188: fstp    [esp+154h+var_154]; float
0x4AB18B: call    eax
0x4AB18D: push    ecx
0x4AB18E: lea     ecx, [esp+158h+var_120]
0x4AB192: fstp    [esp+158h+var_158]; float
0x4AB195: push    ecx; int
0x4AB196: mov     ecx, esi
0x4AB198: call    sub_4A98D0
0x4AB19D: lea     edx, [esp+150h+var_120]
0x4AB1A1: push    edx
0x4AB1A2: lea     eax, [esp+154h+var_B8]
0x4AB1A9: push    offset aGroupstandoffD; "GroupStandoff Distance: %s"
0x4AB1AE: push    eax
0x4AB1AF: call    __sprintf
0x4AB1B4: fild    [esp+15Ch+var_140]
0x4AB1B8: add     esp, 0Ch
0x4AB1BB: push    0FFFFFFFFh; int
0x4AB1BD: push    3; int
0x4AB1BF: sub     esp, 8
0x4AB1C2: fstp    [esp+160h+var_15C]; float
0x4AB1C6: lea     ecx, [esp+160h+var_B8]
0x4AB1CD: fld     [esp+160h+var_138]
0x4AB1D1: fstp    [esp+160h+var_160]; float
0x4AB1D4: push    ecx; int
0x4AB1D5: call    InterfaceMgr_DebugTextLine
0x4AB1DA: mov     edx, [esi]
0x4AB1DC: add     esp, 14h
0x4AB1DF: add     ebp, edi
0x4AB1E1: mov     [esp+150h+var_140], ebp
0x4AB1E5: push    40h ; '@'
0x4AB1E7: mov     ecx, esi
0x4AB1E9: mov     eax, [edx+16Ch]
0x4AB1EF: call    eax
0x4AB1F1: test    al, al
0x4AB1F3: mov     ecx, offset aPrefersRangedA; "Prefers Ranged Attacks"
0x4AB1F8: jnz     short loc_4AB1FF
0x4AB1FA: mov     ecx, offset aNoRangedPrefer; "No Ranged Preference"
0x4AB1FF: lea     edx, [esp+154h+var_BC]
0x4AB206: mov     al, [ecx]
0x4AB208: mov     [edx], al
0x4AB20A: add     ecx, 1
0x4AB20D: add     edx, 1
0x4AB210: test    al, al
0x4AB212: jnz     short loc_4AB206
0x4AB214: fild    [esp+154h+var_144]
0x4AB218: push    0FFFFFFFFh; int
0x4AB21A: push    3; int
0x4AB21C: sub     esp, 8
0x4AB21F: fstp    [esp+164h+var_160]; float
0x4AB223: lea     ecx, [esp+164h+var_BC]
0x4AB22A: fld     [esp+164h+var_13C]
0x4AB22E: fstp    [esp+164h+var_164]; float
0x4AB231: push    ecx; int
0x4AB232: call    InterfaceMgr_DebugTextLine
0x4AB237: mov     edx, [esi]
0x4AB239: mov     eax, [edx+16Ch]
0x4AB23F: add     esp, 14h
0x4AB242: add     ebp, edi
0x4AB244: push    8
0x4AB246: mov     ecx, esi
0x4AB248: mov     [esp+158h+var_144], ebp
0x4AB24C: call    eax
0x4AB24E: test    al, al
0x4AB250: mov     ecx, offset aYieldEnabled; "Yield Enabled"
0x4AB255: jnz     short loc_4AB25C
0x4AB257: mov     ecx, offset aYieldDisabled; "Yield Disabled"
0x4AB25C: lea     edx, [esp+154h+var_BC]
0x4AB263: mov     al, [ecx]
0x4AB265: mov     [edx], al
0x4AB267: add     ecx, 1
0x4AB26A: add     edx, 1
0x4AB26D: test    al, al
0x4AB26F: jnz     short loc_4AB263
0x4AB271: fild    [esp+154h+var_144]
0x4AB275: push    0FFFFFFFFh; int
0x4AB277: push    3; int
0x4AB279: sub     esp, 8
0x4AB27C: fstp    [esp+164h+var_160]; float
0x4AB280: lea     ecx, [esp+164h+var_BC]
0x4AB287: fld     [esp+164h+var_13C]
0x4AB28B: fstp    [esp+164h+var_164]; float
0x4AB28E: push    ecx; int
0x4AB28F: call    InterfaceMgr_DebugTextLine
0x4AB294: mov     edx, [esi]
0x4AB296: mov     eax, [edx+16Ch]
0x4AB29C: add     esp, 14h
0x4AB29F: add     ebp, edi
0x4AB2A1: push    20h ; ' '
0x4AB2A3: mov     ecx, esi
0x4AB2A5: mov     [esp+158h+var_144], ebp
0x4AB2A9: call    eax
0x4AB2AB: test    al, al
0x4AB2AD: mov     ecx, offset aFleeDisabled; "Flee Disabled"
0x4AB2B2: jnz     short loc_4AB2B9
0x4AB2B4: mov     ecx, offset aFleeEnabled; "Flee Enabled"
0x4AB2B9: lea     edx, [esp+158h+var_C0]
0x4AB2C0: mov     al, [ecx]
0x4AB2C2: mov     [edx], al
0x4AB2C4: add     ecx, 1
0x4AB2C7: add     edx, 1
0x4AB2CA: test    al, al
0x4AB2CC: jnz     short loc_4AB2C0
0x4AB2CE: fild    [esp+158h+var_148]
0x4AB2D2: push    0FFFFFFFFh; int
0x4AB2D4: push    3; int
0x4AB2D6: sub     esp, 8
0x4AB2D9: fstp    [esp+168h+var_164]; float
0x4AB2DD: lea     ecx, [esp+168h+var_C0]
0x4AB2E4: fld     [esp+168h+var_140]
0x4AB2E8: fstp    [esp+168h+var_168]; float
0x4AB2EB: push    ecx; int
0x4AB2EC: call    InterfaceMgr_DebugTextLine
0x4AB2F1: mov     edx, [esi]
0x4AB2F3: mov     eax, [edx+16Ch]
0x4AB2F9: add     esp, 14h
0x4AB2FC: add     ebp, edi
0x4AB2FE: push    10h
0x4AB300: mov     ecx, esi
0x4AB302: mov     [esp+15Ch+var_148], ebp
0x4AB306: call    eax
0x4AB308: test    al, al
0x4AB30A: mov     ecx, offset aRejectsYields; "Rejects Yields"
0x4AB30F: jnz     short loc_4AB316
0x4AB311: mov     ecx, offset aAcceptsYields; "Accepts Yields"
0x4AB316: lea     edx, [esp+15Ch+var_C4]
0x4AB31D: lea     ecx, [ecx+0]
0x4AB320: mov     al, [ecx]
0x4AB322: mov     [edx], al
0x4AB324: add     ecx, 1
0x4AB327: add     edx, 1
0x4AB32A: test    al, al
0x4AB32C: jnz     short loc_4AB320
0x4AB32E: fild    [esp+15Ch+var_14C]
0x4AB332: push    0FFFFFFFFh; int
0x4AB334: push    3; int
0x4AB336: sub     esp, 8
0x4AB339: fstp    [esp+16Ch+var_168]; float
0x4AB33D: lea     ecx, [esp+16Ch+var_C4]
0x4AB344: fld     [esp+16Ch+var_144]
0x4AB348: fstp    [esp+16Ch+var_16C]; float
0x4AB34B: push    ecx; int
0x4AB34C: call    InterfaceMgr_DebugTextLine
0x4AB351: mov     edx, [esi]
0x4AB353: mov     eax, [edx+16Ch]
0x4AB359: add     esp, 14h
0x4AB35C: add     ebp, edi
0x4AB35E: push    4
0x4AB360: mov     ecx, esi
0x4AB362: mov     [esp+160h+var_14C], ebp
0x4AB366: call    eax
0x4AB368: test    al, al
0x4AB36A: mov     ecx, offset aIgnoresAlliesI; "Ignores allies in range of area effects"
0x4AB36F: jnz     short loc_4AB376
0x4AB371: mov     ecx, offset aWonTCastAreaEf; "Won't cast area effects if allies are i"...
0x4AB376: lea     edx, [esp+160h+var_C8]
0x4AB37D: lea     ecx, [ecx+0]
0x4AB380: mov     al, [ecx]
0x4AB382: mov     [edx], al
0x4AB384: add     ecx, 1
0x4AB387: add     edx, 1
0x4AB38A: test    al, al
0x4AB38C: jnz     short loc_4AB380
0x4AB38E: fild    [esp+160h+var_150]
0x4AB392: push    0FFFFFFFFh; int
0x4AB394: push    3; int
0x4AB396: sub     esp, 8
0x4AB399: fstp    [esp+170h+var_16C]; float
0x4AB39D: lea     ecx, [esp+170h+var_C8]
0x4AB3A4: fld     [esp+170h+var_148]
0x4AB3A8: fstp    [esp+170h+var_170]; float
0x4AB3AB: push    ecx; int
0x4AB3AC: call    InterfaceMgr_DebugTextLine
0x4AB3B1: mov     edx, [esi]
0x4AB3B3: mov     eax, [edx+16Ch]
0x4AB3B9: add     esp, 14h
0x4AB3BC: push    1
0x4AB3BE: mov     ecx, esi
0x4AB3C0: add     ebp, edi
0x4AB3C2: call    eax
0x4AB3C4: test    al, al
0x4AB3C6: jz      loc_4ABB0E
0x4AB3CC: add     ebx, edi
0x4AB3CE: push    0FFFFFFFFh; int
0x4AB3D0: mov     [esp+168h+var_150], ebx
0x4AB3D4: fild    [esp+168h+var_150]
0x4AB3D8: push    2; int
0x4AB3DA: sub     esp, 8
0x4AB3DD: fstp    [esp+174h+var_170]; float
0x4AB3E1: fld     [esp+174h+var_13C]
0x4AB3E5: fstp    [esp+174h+var_174]; float
0x4AB3E8: push    offset aAdvancedSettin; "ADVANCED SETTINGS"
0x4AB3ED: call    InterfaceMgr_DebugTextLine
0x4AB3F2: add     ebx, edi
0x4AB3F4: add     esp, 14h
0x4AB3F7: mov     ecx, offset dword_B35788
0x4AB3FC: mov     [esp+164h+var_150], ebx
0x4AB400: mov     [esp+164h+var_154], ebx
0x4AB404: call    sub_4A9F70
0x4AB409: push    ecx
0x4AB40A: mov     ecx, esi
0x4AB40C: fstp    [esp+168h+var_168]; float
0x4AB40F: call    sub_4A9F70
0x4AB414: push    ecx
0x4AB415: lea     ecx, [esp+16Ch+var_134]
0x4AB419: fstp    [esp+16Ch+var_16C]; float
0x4AB41C: push    ecx; int
0x4AB41D: mov     ecx, esi
0x4AB41F: call    sub_4A98D0
0x4AB424: mov     ecx, offset dword_B35788
0x4AB429: call    sub_4A9F30
0x4AB42E: push    ecx
0x4AB42F: mov     ecx, esi
0x4AB431: fstp    [esp+168h+var_168]; float
0x4AB434: call    sub_4A9F30
0x4AB439: push    ecx
0x4AB43A: lea     edx, [esp+16Ch+var_100]
0x4AB43E: fstp    [esp+16Ch+var_16C]; float
0x4AB441: push    edx; int
0x4AB442: mov     ecx, esi
0x4AB444: call    sub_4A98D0
0x4AB449: lea     eax, [esp+164h+var_100]
0x4AB44D: push    eax
0x4AB44E: lea     ecx, [esp+168h+var_134]
0x4AB452: push    ecx
0x4AB453: lea     edx, [esp+16Ch+var_CC]
0x4AB45A: push    offset aBlockSkillModi; "Block Skill Modifier Base: %s Mult: %s"
0x4AB45F: push    edx
0x4AB460: call    __sprintf
0x4AB465: fild    [esp+174h+var_150]
0x4AB469: add     esp, 10h
0x4AB46C: push    0FFFFFFFFh; int
0x4AB46E: push    1; int
0x4AB470: sub     esp, 8
0x4AB473: fstp    [esp+174h+var_170]; float
0x4AB477: lea     eax, [esp+174h+var_CC]
0x4AB47E: fld     [esp+174h+var_148]
0x4AB482: fstp    [esp+174h+var_174]; float
0x4AB485: push    eax; int
0x4AB486: call    InterfaceMgr_DebugTextLine
0x4AB48B: add     ebx, edi
0x4AB48D: add     esp, 14h
0x4AB490: mov     ecx, offset dword_B35788
0x4AB495: mov     [esp+164h+var_150], ebx
0x4AB499: mov     ebp, ebx
0x4AB49B: call    sub_4AA070
0x4AB4A0: push    ecx
0x4AB4A1: mov     ecx, esi
0x4AB4A3: fstp    [esp+168h+var_168]; float
0x4AB4A6: call    sub_4AA070
0x4AB4AB: push    ecx
0x4AB4AC: lea     ecx, [esp+16Ch+var_134]
0x4AB4B0: fstp    [esp+16Ch+var_16C]; float
0x4AB4B3: push    ecx; int
0x4AB4B4: mov     ecx, esi
0x4AB4B6: call    sub_4A98D0
0x4AB4BB: mov     ecx, offset dword_B35788
0x4AB4C0: call    sub_4AA030
0x4AB4C5: push    ecx
0x4AB4C6: mov     ecx, esi
0x4AB4C8: fstp    [esp+168h+var_168]; float
0x4AB4CB: call    sub_4AA030
0x4AB4D0: push    ecx
0x4AB4D1: lea     edx, [esp+16Ch+var_100]
0x4AB4D5: fstp    [esp+16Ch+var_16C]; float
0x4AB4D8: push    edx; int
0x4AB4D9: mov     ecx, esi
0x4AB4DB: call    sub_4A98D0
0x4AB4E0: lea     eax, [esp+164h+var_100]
0x4AB4E4: push    eax
0x4AB4E5: lea     ecx, [esp+168h+var_134]
0x4AB4E9: push    ecx
0x4AB4EA: lea     edx, [esp+16Ch+var_CC]
0x4AB4F1: push    offset aAttackSkillMod; "Attack Skill Modifier Base: %s Mult: %s"
0x4AB4F6: push    edx
0x4AB4F7: call    __sprintf
0x4AB4FC: fild    [esp+174h+var_150]
0x4AB500: add     esp, 10h
0x4AB503: push    0FFFFFFFFh; int
0x4AB505: push    1; int
0x4AB507: sub     esp, 8
0x4AB50A: fstp    [esp+174h+var_170]; float
0x4AB50E: lea     eax, [esp+174h+var_CC]
0x4AB515: fld     [esp+174h+var_148]
0x4AB519: fstp    [esp+174h+var_174]; float
0x4AB51C: push    eax; int
0x4AB51D: call    InterfaceMgr_DebugTextLine
0x4AB522: add     ebx, edi
0x4AB524: add     esp, 14h
0x4AB527: mov     ecx, offset dword_B35788
0x4AB52C: mov     [esp+164h+var_150], ebx
0x4AB530: call    sub_4AA170
0x4AB535: push    ecx
0x4AB536: mov     ecx, esi
0x4AB538: fstp    [esp+168h+var_168]; float
0x4AB53B: call    sub_4AA170
0x4AB540: push    ecx
0x4AB541: lea     ecx, [esp+16Ch+var_134]
0x4AB545: fstp    [esp+16Ch+var_16C]; float
0x4AB548: push    ecx; int
0x4AB549: mov     ecx, esi
0x4AB54B: call    sub_4A98D0
0x4AB550: mov     ecx, offset dword_B35788
0x4AB555: call    sub_4AA1B0
0x4AB55A: push    ecx
0x4AB55B: mov     ecx, esi
0x4AB55D: fstp    [esp+168h+var_168]; float
0x4AB560: call    sub_4AA1B0
0x4AB565: push    ecx
0x4AB566: lea     edx, [esp+16Ch+var_100]
0x4AB56A: fstp    [esp+16Ch+var_16C]; float
0x4AB56D: push    edx; int
0x4AB56E: mov     ecx, esi
0x4AB570: call    sub_4A98D0
0x4AB575: lea     eax, [esp+164h+var_100]
0x4AB579: push    eax
0x4AB57A: lea     ecx, [esp+168h+var_134]
0x4AB57E: push    ecx
0x4AB57F: lea     edx, [esp+16Ch+var_CC]
0x4AB586: push    offset aPowerAtt_Fatig; "Power Att. Fatigue Modifier Base: %s Mu"...
0x4AB58B: push    edx
0x4AB58C: call    __sprintf
0x4AB591: fild    [esp+174h+var_150]
0x4AB595: add     esp, 10h
0x4AB598: push    0FFFFFFFFh; int
0x4AB59A: push    1; int
0x4AB59C: sub     esp, 8
0x4AB59F: fstp    [esp+174h+var_170]; float
0x4AB5A3: lea     eax, [esp+174h+var_CC]
0x4AB5AA: fld     [esp+174h+var_148]
0x4AB5AE: fstp    [esp+174h+var_174]; float
0x4AB5B1: push    eax; int
0x4AB5B2: call    InterfaceMgr_DebugTextLine
0x4AB5B7: add     ebx, edi
0x4AB5B9: add     esp, 14h
0x4AB5BC: mov     ecx, offset dword_B35788
0x4AB5C1: mov     [esp+164h+var_150], ebx
0x4AB5C5: call    sub_4AA0B0
0x4AB5CA: push    ecx
0x4AB5CB: mov     ecx, esi
0x4AB5CD: fstp    [esp+168h+var_168]; float
0x4AB5D0: call    sub_4AA0B0
0x4AB5D5: push    ecx
0x4AB5D6: fstp    [esp+16Ch+var_16C]; float
0x4AB5D9: lea     ecx, [esp+16Ch+var_134]
0x4AB5DD: push    ecx; int
0x4AB5DE: mov     ecx, esi
0x4AB5E0: call    sub_4A98D0
0x4AB5E5: lea     edx, [esp+164h+var_134]
0x4AB5E9: push    edx
0x4AB5EA: lea     eax, [esp+168h+var_CC]
0x4AB5F1: push    offset aAttackWhileUnd; "Attack While Under Attack Mult: %s"
0x4AB5F6: push    eax
0x4AB5F7: call    __sprintf
0x4AB5FC: fild    [esp+170h+var_150]
0x4AB600: add     esp, 0Ch
0x4AB603: push    0FFFFFFFFh; int
0x4AB605: push    1; int
0x4AB607: sub     esp, 8
0x4AB60A: fstp    [esp+174h+var_170]; float
0x4AB60E: lea     ecx, [esp+174h+var_CC]
0x4AB615: fld     [esp+174h+var_148]
0x4AB619: fstp    [esp+174h+var_174]; float
0x4AB61C: push    ecx; int
0x4AB61D: call    InterfaceMgr_DebugTextLine
0x4AB622: add     ebx, edi
0x4AB624: add     esp, 14h
0x4AB627: mov     ecx, offset dword_B35788
0x4AB62C: mov     [esp+164h+var_150], ebx
0x4AB630: call    sub_4AA130
0x4AB635: push    ecx
0x4AB636: mov     ecx, esi
0x4AB638: fstp    [esp+168h+var_168]; float
0x4AB63B: call    sub_4AA130
0x4AB640: push    ecx
0x4AB641: lea     edx, [esp+16Ch+var_134]
0x4AB645: fstp    [esp+16Ch+var_16C]; float
0x4AB648: push    edx; int
0x4AB649: mov     ecx, esi
0x4AB64B: call    sub_4A98D0
0x4AB650: lea     eax, [esp+164h+var_134]
0x4AB654: push    eax
0x4AB655: lea     ecx, [esp+168h+var_CC]
0x4AB65C: push    offset aAttackNotUnder; "Attack Not Under Attack Mult: %s"
0x4AB661: push    ecx
0x4AB662: call    __sprintf
0x4AB667: fild    [esp+170h+var_150]
0x4AB66B: add     esp, 0Ch
0x4AB66E: push    0FFFFFFFFh; int
0x4AB670: push    1; int
0x4AB672: sub     esp, 8
0x4AB675: fstp    [esp+174h+var_170]; float
0x4AB679: lea     edx, [esp+174h+var_CC]
0x4AB680: fld     [esp+174h+var_148]
0x4AB684: fstp    [esp+174h+var_174]; float
0x4AB687: push    edx; int
0x4AB688: call    InterfaceMgr_DebugTextLine
0x4AB68D: add     ebx, edi
0x4AB68F: add     esp, 14h
0x4AB692: mov     ecx, offset dword_B35788
0x4AB697: mov     [esp+164h+var_150], ebx
0x4AB69B: call    sub_4A9FB0
0x4AB6A0: push    ecx
0x4AB6A1: mov     ecx, esi
0x4AB6A3: fstp    [esp+168h+var_168]; float
0x4AB6A6: call    sub_4A9FB0
0x4AB6AB: push    ecx
0x4AB6AC: lea     eax, [esp+16Ch+var_134]
0x4AB6B0: fstp    [esp+16Ch+var_16C]; float
0x4AB6B3: push    eax; int
0x4AB6B4: mov     ecx, esi
0x4AB6B6: call    sub_4A98D0
0x4AB6BB: lea     ecx, [esp+164h+var_134]
0x4AB6BF: push    ecx
0x4AB6C0: lea     edx, [esp+168h+var_CC]
0x4AB6C7: push    offset aBlockWhileUnde; "Block While Under Attack Mult: %s"
0x4AB6CC: push    edx
0x4AB6CD: call    __sprintf
0x4AB6D2: fild    [esp+170h+var_150]
0x4AB6D6: add     esp, 0Ch
0x4AB6D9: push    0FFFFFFFFh; int
0x4AB6DB: push    1; int
0x4AB6DD: sub     esp, 8
0x4AB6E0: fstp    [esp+174h+var_170]; float
0x4AB6E4: fld     [esp+174h+var_148]
0x4AB6E8: lea     eax, [esp+174h+var_CC]
0x4AB6EF: fstp    [esp+174h+var_174]; float
0x4AB6F2: push    eax; int
0x4AB6F3: call    InterfaceMgr_DebugTextLine
0x4AB6F8: add     ebx, edi
0x4AB6FA: add     esp, 14h
0x4AB6FD: mov     ecx, offset dword_B35788
0x4AB702: mov     [esp+164h+var_150], ebx
0x4AB706: call    sub_4A9FF0
0x4AB70B: push    ecx
0x4AB70C: mov     ecx, esi
0x4AB70E: fstp    [esp+168h+var_168]; float
0x4AB711: call    sub_4A9FF0
0x4AB716: push    ecx
0x4AB717: lea     ecx, [esp+16Ch+var_134]
0x4AB71B: fstp    [esp+16Ch+var_16C]; float
0x4AB71E: push    ecx; int
0x4AB71F: mov     ecx, esi
0x4AB721: call    sub_4A98D0
0x4AB726: lea     edx, [esp+164h+var_134]
0x4AB72A: push    edx
0x4AB72B: lea     eax, [esp+168h+var_CC]
0x4AB732: push    offset aBlockNotUnderA; "Block Not Under Attack Mult: %s"
0x4AB737: push    eax
0x4AB738: call    __sprintf
0x4AB73D: fild    [esp+170h+var_150]
0x4AB741: add     esp, 0Ch
0x4AB744: push    0FFFFFFFFh; int
0x4AB746: push    1; int
0x4AB748: sub     esp, 8
0x4AB74B: fstp    [esp+174h+var_170]; float
0x4AB74F: lea     ecx, [esp+174h+var_CC]
0x4AB756: fld     [esp+174h+var_148]
0x4AB75A: fstp    [esp+174h+var_174]; float
0x4AB75D: push    ecx; int
0x4AB75E: call    InterfaceMgr_DebugTextLine
0x4AB763: add     esp, 14h
0x4AB766: mov     ecx, offset dword_B35788
0x4AB76B: add     ebx, edi
0x4AB76D: call    sub_4A9CF0
0x4AB772: push    ecx
0x4AB773: mov     ecx, esi
0x4AB775: fstp    [esp+168h+var_168]; float
0x4AB778: call    sub_4A9CF0
0x4AB77D: push    ecx
0x4AB77E: lea     edx, [esp+16Ch+var_134]
0x4AB782: fstp    [esp+16Ch+var_16C]; float
0x4AB785: push    edx; int
0x4AB786: mov     ecx, esi
0x4AB788: call    sub_4A98D0
0x4AB78D: mov     ecx, offset dword_B35788
0x4AB792: call    sub_4A9CB0
0x4AB797: push    ecx
0x4AB798: mov     ecx, esi
0x4AB79A: fstp    [esp+168h+var_168]; float
0x4AB79D: call    sub_4A9CB0
0x4AB7A2: push    ecx
0x4AB7A3: lea     eax, [esp+16Ch+var_100]
0x4AB7A7: fstp    [esp+16Ch+var_16C]; float
0x4AB7AA: push    eax; int
0x4AB7AB: mov     ecx, esi
0x4AB7AD: call    sub_4A98D0
0x4AB7B2: lea     ecx, [esp+164h+var_100]
0x4AB7B6: push    ecx
0x4AB7B7: lea     edx, [esp+168h+var_134]
0x4AB7BB: push    edx
0x4AB7BC: lea     eax, [esp+16Ch+var_CC]
0x4AB7C3: push    offset aDodgeFatigueMo; "Dodge Fatigue Modifier Base: %s Mult: %"...
0x4AB7C8: push    eax
0x4AB7C9: call    __sprintf
0x4AB7CE: fild    [esp+174h+var_154]
0x4AB7D2: add     esp, 10h
0x4AB7D5: push    0FFFFFFFFh; int
0x4AB7D7: push    3; int
0x4AB7D9: sub     esp, 8
0x4AB7DC: fstp    [esp+174h+var_170]; float
0x4AB7E0: lea     ecx, [esp+174h+var_CC]
0x4AB7E7: fld     [esp+174h+var_14C]
0x4AB7EB: fstp    [esp+174h+var_174]; float
0x4AB7EE: push    ecx; int
0x4AB7EF: call    InterfaceMgr_DebugTextLine
0x4AB7F4: add     esp, 14h
0x4AB7F7: mov     ecx, offset dword_B35788
0x4AB7FC: mov     [esp+164h+var_154], ebp
0x4AB800: call    sub_4A9D30
0x4AB805: push    ecx
0x4AB806: mov     ecx, esi
0x4AB808: fstp    [esp+168h+var_168]; float
0x4AB80B: call    sub_4A9D30
0x4AB810: push    ecx
0x4AB811: lea     edx, [esp+16Ch+var_134]
0x4AB815: fstp    [esp+16Ch+var_16C]; float
0x4AB818: push    edx; int
0x4AB819: mov     ecx, esi
0x4AB81B: call    sub_4A98D0
0x4AB820: mov     ecx, offset dword_B35788
0x4AB825: call    sub_4A9D70
0x4AB82A: push    ecx
0x4AB82B: mov     ecx, esi
0x4AB82D: fstp    [esp+168h+var_168]; float
0x4AB830: call    sub_4A9D70
0x4AB835: push    ecx
0x4AB836: lea     eax, [esp+16Ch+var_100]
0x4AB83A: fstp    [esp+16Ch+var_16C]; float
0x4AB83D: push    eax; int
0x4AB83E: mov     ecx, esi
0x4AB840: call    sub_4A98D0
0x4AB845: lea     ecx, [esp+164h+var_100]
0x4AB849: push    ecx
0x4AB84A: lea     edx, [esp+168h+var_134]
0x4AB84E: push    edx
0x4AB84F: lea     eax, [esp+16Ch+var_CC]
0x4AB856: push    offset aEncumberedSpee; "Encumbered Speed Modifier Base: %s Mult"...
0x4AB85B: push    eax
0x4AB85C: call    __sprintf
0x4AB861: fild    [esp+174h+var_154]
0x4AB865: add     esp, 10h
0x4AB868: push    0FFFFFFFFh; int
0x4AB86A: push    3; int
0x4AB86C: sub     esp, 8
0x4AB86F: fstp    [esp+174h+var_170]; float
0x4AB873: lea     ecx, [esp+174h+var_CC]
0x4AB87A: fld     [esp+174h+var_14C]
0x4AB87E: fstp    [esp+174h+var_174]; float
0x4AB881: push    ecx; int
0x4AB882: call    InterfaceMgr_DebugTextLine
0x4AB887: add     ebp, edi
0x4AB889: add     esp, 14h
0x4AB88C: mov     ecx, offset dword_B35788
0x4AB891: mov     [esp+164h+var_154], ebp
0x4AB895: call    sub_4A9DB0
0x4AB89A: push    ecx
0x4AB89B: mov     ecx, esi
0x4AB89D: fstp    [esp+168h+var_168]; float
0x4AB8A0: call    sub_4A9DB0
0x4AB8A5: push    ecx
0x4AB8A6: lea     edx, [esp+16Ch+var_134]
0x4AB8AA: fstp    [esp+16Ch+var_16C]; float
0x4AB8AD: push    edx; int
0x4AB8AE: mov     ecx, esi
0x4AB8B0: call    sub_4A98D0
0x4AB8B5: lea     eax, [esp+164h+var_134]
0x4AB8B9: push    eax
0x4AB8BA: lea     ecx, [esp+168h+var_CC]
0x4AB8C1: push    offset aDodgeWhileUnde; "Dodge While Under Attack Mult: %s"
0x4AB8C6: push    ecx
0x4AB8C7: call    __sprintf
0x4AB8CC: fild    [esp+170h+var_154]
0x4AB8D0: add     esp, 0Ch
0x4AB8D3: push    0FFFFFFFFh; int
0x4AB8D5: push    3; int
0x4AB8D7: sub     esp, 8
0x4AB8DA: fstp    [esp+174h+var_170]; float
0x4AB8DE: lea     edx, [esp+174h+var_CC]
0x4AB8E5: fld     [esp+174h+var_14C]
0x4AB8E9: fstp    [esp+174h+var_174]; float
0x4AB8EC: push    edx; int
0x4AB8ED: call    InterfaceMgr_DebugTextLine
0x4AB8F2: add     esp, 14h
0x4AB8F5: add     ebp, edi
0x4AB8F7: mov     [esp+164h+var_154], ebp
0x4AB8FB: mov     ecx, offset dword_B35788
0x4AB900: call    sub_4A9DF0
0x4AB905: push    ecx
0x4AB906: mov     ecx, esi
0x4AB908: fstp    [esp+168h+var_168]; float
0x4AB90B: call    sub_4A9DF0
0x4AB910: push    ecx
0x4AB911: lea     eax, [esp+16Ch+var_134]
0x4AB915: fstp    [esp+16Ch+var_16C]; float
0x4AB918: push    eax; int
0x4AB919: mov     ecx, esi
0x4AB91B: call    sub_4A98D0
0x4AB920: lea     ecx, [esp+164h+var_134]
0x4AB924: push    ecx
0x4AB925: lea     edx, [esp+168h+var_CC]
0x4AB92C: push    offset aDodgeNotUnderA; "Dodge Not Under Attack Mult: %s"
0x4AB931: push    edx
0x4AB932: call    __sprintf
0x4AB937: fild    [esp+170h+var_154]
0x4AB93B: add     esp, 0Ch
0x4AB93E: push    0FFFFFFFFh; int
0x4AB940: push    3; int
0x4AB942: sub     esp, 8
0x4AB945: fstp    [esp+174h+var_170]; float
0x4AB949: lea     eax, [esp+174h+var_CC]
0x4AB950: fld     [esp+174h+var_14C]
0x4AB954: fstp    [esp+174h+var_174]; float
0x4AB957: push    eax; int
0x4AB958: call    InterfaceMgr_DebugTextLine
0x4AB95D: add     ebp, edi
0x4AB95F: add     esp, 14h
0x4AB962: mov     ecx, offset dword_B35788
0x4AB967: mov     [esp+164h+var_154], ebp
0x4AB96B: call    sub_4A9E30
0x4AB970: push    ecx
0x4AB971: mov     ecx, esi
0x4AB973: fstp    [esp+168h+var_168]; float
0x4AB976: call    sub_4A9E30
0x4AB97B: push    ecx
0x4AB97C: lea     ecx, [esp+16Ch+var_134]
0x4AB980: fstp    [esp+16Ch+var_16C]; float
0x4AB983: push    ecx; int
0x4AB984: mov     ecx, esi
0x4AB986: call    sub_4A98D0
0x4AB98B: lea     edx, [esp+164h+var_134]
0x4AB98F: push    edx
0x4AB990: lea     eax, [esp+168h+var_CC]
0x4AB997: push    offset aDodgeBackWhile; "Dodge Back While Under Attack Mult: %s"
0x4AB99C: push    eax
0x4AB99D: call    __sprintf
0x4AB9A2: fild    [esp+170h+var_154]
0x4AB9A6: add     esp, 0Ch
0x4AB9A9: push    0FFFFFFFFh; int
0x4AB9AB: push    3; int
0x4AB9AD: sub     esp, 8
0x4AB9B0: fstp    [esp+174h+var_170]; float
0x4AB9B4: lea     ecx, [esp+174h+var_CC]
0x4AB9BB: fld     [esp+174h+var_14C]
0x4AB9BF: fstp    [esp+174h+var_174]; float
0x4AB9C2: push    ecx; int
0x4AB9C3: call    InterfaceMgr_DebugTextLine
0x4AB9C8: add     ebp, edi
0x4AB9CA: add     esp, 14h
0x4AB9CD: mov     ecx, offset dword_B35788
0x4AB9D2: mov     [esp+164h+var_154], ebp
0x4AB9D6: call    sub_4A9E70
0x4AB9DB: push    ecx
0x4AB9DC: mov     ecx, esi
0x4AB9DE: fstp    [esp+168h+var_168]; float
0x4AB9E1: call    sub_4A9E70
0x4AB9E6: push    ecx
0x4AB9E7: lea     edx, [esp+16Ch+var_134]
0x4AB9EB: fstp    [esp+16Ch+var_16C]; float
0x4AB9EE: push    edx; int
0x4AB9EF: mov     ecx, esi
0x4AB9F1: call    sub_4A98D0
0x4AB9F6: lea     eax, [esp+164h+var_134]
0x4AB9FA: push    eax
0x4AB9FB: lea     ecx, [esp+168h+var_CC]
0x4ABA02: push    offset aDodgeBackNotUn; "Dodge Back Not Under Attack Mult: %s"
0x4ABA07: push    ecx
0x4ABA08: call    __sprintf
0x4ABA0D: fild    [esp+170h+var_154]
0x4ABA11: add     esp, 0Ch
0x4ABA14: push    0FFFFFFFFh; int
0x4ABA16: push    3; int
0x4ABA18: sub     esp, 8
0x4ABA1B: fstp    [esp+174h+var_170]; float
0x4ABA1F: lea     edx, [esp+174h+var_CC]
0x4ABA26: fld     [esp+174h+var_14C]
0x4ABA2A: fstp    [esp+174h+var_174]; float
0x4ABA2D: push    edx; int
0x4ABA2E: call    InterfaceMgr_DebugTextLine
0x4ABA33: add     ebp, edi
0x4ABA35: add     esp, 14h
0x4ABA38: mov     ecx, offset dword_B35788
0x4ABA3D: mov     [esp+164h+var_154], ebp
0x4ABA41: call    sub_4A9EB0
0x4ABA46: push    ecx
0x4ABA47: mov     ecx, esi
0x4ABA49: fstp    [esp+168h+var_168]; float
0x4ABA4C: call    sub_4A9EB0
0x4ABA51: push    ecx
0x4ABA52: lea     eax, [esp+16Ch+var_134]
0x4ABA56: fstp    [esp+16Ch+var_16C]; float
0x4ABA59: push    eax; int
0x4ABA5A: mov     ecx, esi
0x4ABA5C: call    sub_4A98D0
0x4ABA61: lea     ecx, [esp+164h+var_134]
0x4ABA65: push    ecx
0x4ABA66: lea     edx, [esp+168h+var_CC]
0x4ABA6D: push    offset aDodgeForwardWh; "Dodge Forward While Attacking Mult: %s"
0x4ABA72: push    edx
0x4ABA73: call    __sprintf
0x4ABA78: fild    [esp+170h+var_154]
0x4ABA7C: add     esp, 0Ch
0x4ABA7F: push    0FFFFFFFFh; int
0x4ABA81: push    3; int
0x4ABA83: sub     esp, 8
0x4ABA86: fstp    [esp+174h+var_170]; float
0x4ABA8A: lea     eax, [esp+174h+var_CC]
0x4ABA91: fld     [esp+174h+var_14C]
0x4ABA95: fstp    [esp+174h+var_174]; float
0x4ABA98: push    eax; int
0x4ABA99: call    InterfaceMgr_DebugTextLine
0x4ABA9E: add     ebp, edi
0x4ABAA0: add     esp, 14h
0x4ABAA3: mov     ecx, offset dword_B35788
0x4ABAA8: mov     [esp+164h+var_154], ebp
0x4ABAAC: call    sub_4A9EF0
0x4ABAB1: push    ecx
0x4ABAB2: mov     ecx, esi
0x4ABAB4: fstp    [esp+168h+var_168]; float
0x4ABAB7: call    sub_4A9EF0
0x4ABABC: push    ecx
0x4ABABD: lea     ecx, [esp+16Ch+var_134]
0x4ABAC1: fstp    [esp+16Ch+var_16C]; float
0x4ABAC4: push    ecx; int
0x4ABAC5: mov     ecx, esi
0x4ABAC7: call    sub_4A98D0
0x4ABACC: lea     edx, [esp+164h+var_134]
0x4ABAD0: push    edx
0x4ABAD1: lea     eax, [esp+168h+var_CC]
0x4ABAD8: push    offset aDodgeForwardNo; "Dodge Forward Not Attacking Mult: %s"
0x4ABADD: push    eax
0x4ABADE: call    __sprintf
0x4ABAE3: fild    [esp+170h+var_154]
0x4ABAE7: add     esp, 0Ch
0x4ABAEA: push    0FFFFFFFFh; int
0x4ABAEC: push    3; int
0x4ABAEE: sub     esp, 8
0x4ABAF1: fstp    [esp+174h+var_170]; float
0x4ABAF5: lea     ecx, [esp+174h+var_CC]
0x4ABAFC: fld     [esp+174h+var_14C]
0x4ABB00: fstp    [esp+174h+var_174]; float
0x4ABB03: push    ecx; int
0x4ABB04: call    InterfaceMgr_DebugTextLine
0x4ABB09: add     esp, 14h
0x4ABB0C: add     ebp, edi
0x4ABB0E: mov     esi, [esp+164h+var_144]
0x4ABB12: mov     edi, [esp+164h+var_140]
0x4ABB16: cmp     ebx, ebp
0x4ABB18: mov     [esi], ebx
0x4ABB1A: jle     short loc_4ABB20
0x4ABB1C: mov     [edi], ebx
0x4ABB1E: jmp     short loc_4ABB22
0x4ABB20: mov     [edi], ebp
0x4ABB22: mov     ecx, [esp+164h+var_4]
0x4ABB29: pop     edi
0x4ABB2A: pop     esi
0x4ABB2B: pop     ebp
0x4ABB2C: pop     ebx
0x4ABB2D: xor     ecx, esp
0x4ABB2F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4ABB34: add     esp, 154h
0x4ABB3A: retn
