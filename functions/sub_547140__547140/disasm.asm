0x547140: sub     esp, 8
0x547143: fldz
0x547145: push    esi
0x547146: mov     esi, [esp+0Ch+arg_0]
0x54714A: fst     [esp+0Ch+var_8]
0x54714E: test    esi, esi
0x547150: jz      loc_547231
0x547156: push    esi
0x547157: fstp    st
0x547159: call    TESHealthForm_GetHealthForForm
0x54715E: add     esp, 4
0x547161: test    eax, eax
0x547163: jz      loc_54722D
0x547169: mov     eax, [esi+88h]
0x54716F: mov     edx, [eax+10h]
0x547172: lea     ecx, [esi+88h]
0x547178: call    edx
0x54717A: fld     dword ptr ds:0A30634h
0x547180: fld     [esp+0Ch+arg_1C]
0x547184: movzx   ecx, ax
0x547187: fucom   st(1)
0x547189: fnstsw  ax
0x54718B: fstp    st(1)
0x54718D: test    ah, 44h
0x547190: jnp     short loc_54719B
0x547192: call    Double_To_SInt32
0x547197: mov     ecx, eax
0x547199: jmp     short loc_54719D
0x54719B: fstp    st
0x54719D: fld1
0x54719F: mov     eax, [esp+0Ch+arg_14]
0x5471A3: mov     edx, [esp+0Ch+arg_C]
0x5471A7: push    0; float
0x5471A9: sub     esp, 8
0x5471AC: fstp    [esp+18h+var_14]; float
0x5471B0: fld     [esp+18h+arg_8]
0x5471B4: fstp    [esp+18h+var_18]; float
0x5471B7: push    ecx; int
0x5471B8: fld     [esp+1Ch+arg_18]
0x5471BC: push    ecx
0x5471BD: mov     ecx, [esp+20h+arg_10]
0x5471C1: fstp    [esp+20h+var_20]; float
0x5471C4: push    eax; int
0x5471C5: push    ecx; int
0x5471C6: push    edx; int
0x5471C7: call    Calc_WeaponDamage
0x5471CC: fstp    [esp+2Ch+var_4]
0x5471D0: fldz
0x5471D2: mov     eax, [esp+2Ch+arg_4]
0x5471D6: add     esp, 20h
0x5471D9: fstp    [esp+0Ch+arg_0]
0x5471DD: test    eax, eax
0x5471DF: jz      short loc_54720B
0x5471E1: lea     esi, [eax+0Ch]
0x5471E4: mov     ecx, esi
0x5471E6: call    EffectItemList_HasHostile
0x5471EB: test    al, al
0x5471ED: jz      short loc_54720B
0x5471EF: mov     eax, [esi]
0x5471F1: mov     edx, [eax]
0x5471F3: push    0
0x5471F5: mov     ecx, esi
0x5471F7: call    edx
0x5471F9: fstp    [esp+0Ch+arg_0]
0x5471FD: fld     dword ptr ds:0B36D20h
0x547203: fmul    [esp+0Ch+arg_0]
0x547207: fstp    [esp+0Ch+arg_0]
0x54720B: fld     dword ptr ds:0B36D00h
0x547211: fstp    [esp+0Ch+var_8]
0x547215: fld     [esp+0Ch+var_8]
0x547219: fmul    [esp+0Ch+var_4]
0x54721D: fstp    [esp+0Ch+var_4]
0x547221: fld     [esp+0Ch+var_4]
0x547225: fadd    [esp+0Ch+arg_0]
0x547229: fstp    [esp+0Ch+var_8]
0x54722D: fld     [esp+0Ch+var_8]
0x547231: pop     esi
0x547232: add     esp, 8
0x547235: retn
