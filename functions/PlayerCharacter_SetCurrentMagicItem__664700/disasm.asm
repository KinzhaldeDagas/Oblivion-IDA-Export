0x664700: sub     esp, 108h
0x664706: mov     eax, ds:0B30AACh
0x66470B: xor     eax, esp
0x66470D: mov     [esp+108h+var_4], eax
0x664714: push    esi
0x664715: mov     esi, ecx
0x664717: mov     ecx, [esi+624h]
0x66471D: push    edi
0x66471E: mov     edi, [esp+110h+arg_0]
0x664725: cmp     ecx, edi
0x664727: jz      loc_66482C
0x66472D: test    ecx, ecx
0x66472F: jz      short loc_664738
0x664731: push    1
0x664733: call    sub_419F10
0x664738: test    edi, edi
0x66473A: mov     [esi+624h], edi
0x664740: jz      short loc_66477A
0x664742: push    0
0x664744: push    3
0x664746: lea     ecx, [edi+0Ch]
0x664749: call    EffectItemList_GetStrongestItem
0x66474E: mov     eax, [eax+1Ch]
0x664751: add     eax, 44h ; 'D'
0x664754: mov     eax, [eax+4]
0x664757: test    eax, eax
0x664759: jnz     short loc_664760
0x66475B: mov     eax, offset EmptyString
0x664760: push    eax
0x664761: push    offset aIcons; "Icons"
0x664766: lea     eax, [esp+118h+var_108]
0x66476A: push    offset aSS_2; "%s\\%s"
0x66476F: push    eax
0x664770: call    __sprintf
0x664775: add     esp, 10h
0x664778: jmp     short loc_6647D9
0x66477A: call    Magic_GetDefaultPlayerSpell
0x66477F: test    eax, eax
0x664781: jz      short loc_6647C2
0x664783: push    0
0x664785: push    3
0x664787: call    Magic_GetDefaultPlayerSpell
0x66478C: mov     ecx, eax
0x66478E: add     ecx, 24h ; '$'
0x664791: call    EffectItemList_GetStrongestItem
0x664796: mov     eax, [eax+1Ch]
0x664799: add     eax, 44h ; 'D'
0x66479C: mov     eax, [eax+4]
0x66479F: test    eax, eax
0x6647A1: jnz     short loc_6647A8
0x6647A3: mov     eax, offset EmptyString
0x6647A8: push    eax
0x6647A9: push    offset aIcons; "Icons"
0x6647AE: lea     ecx, [esp+118h+var_108]
0x6647B2: push    offset aSS_2; "%s\\%s"
0x6647B7: push    ecx
0x6647B8: call    __sprintf
0x6647BD: add     esp, 10h
0x6647C0: jmp     short loc_6647D9
0x6647C2: push    offset aIcons; "Icons"
0x6647C7: lea     edx, [esp+114h+var_108]
0x6647CB: push    offset aSIcon_hud_defa; "%s\\icon_hud_default_magic.dds"
0x6647D0: push    edx
0x6647D1: call    __sprintf
0x6647D6: add     esp, 0Ch
0x6647D9: lea     eax, [esp+110h+var_108]
0x6647DD: push    eax
0x6647DE: call    sub_57B2D0
0x6647E3: mov     ecx, [esi+624h]
0x6647E9: add     esp, 4
0x6647EC: test    ecx, ecx
0x6647EE: jz      short loc_6647F7
0x6647F0: push    0
0x6647F2: call    sub_41A610
0x6647F7: mov     ecx, esi
0x6647F9: call    sub_662DA0
0x6647FE: mov     edi, [esi+764h]
0x664804: test    edi, edi
0x664806: jz      short loc_66482C
0x664808: mov     ecx, edi; this
0x66480A: call    sub_6B73E0
0x66480F: push    edi
0x664810: call    FormHeapFree
0x664815: add     esp, 4
0x664818: mov     dword ptr [esi+764h], 0
0x664822: mov     dword ptr [esi+760h], 0
0x66482C: mov     ecx, [esp+110h+var_4]
0x664833: pop     edi
0x664834: pop     esi
0x664835: xor     ecx, esp
0x664837: call    @__security_check_cookie@4; __security_check_cookie(x)
0x66483C: add     esp, 108h
0x664842: retn    4
