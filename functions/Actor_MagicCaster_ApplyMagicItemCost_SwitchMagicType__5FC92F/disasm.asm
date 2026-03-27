0x5FC92F: mov     eax, [esi]
0x5FC931: mov     edx, [eax+18h]
0x5FC934: add     esp, 14h
0x5FC937: mov     ecx, esi
0x5FC939: call    edx
0x5FC93B: cmp     eax, 8; switch 9 cases
0x5FC93E: ja      Actor_MagicCaster_ApplyMagicItemCost___Actor_MagicCaster_ApplyMagicItemCost_Apply; jumptable 005FC944 default case, cases 1,4,6,7
0x5FC944: jmp     ds:jpt_5FC944[eax*4]; switch jump
0x5FC94B: mov     ecx, edi; jumptable 005FC944 cases 0,5
0x5FC94D: xor     ebx, ebx
0x5FC94F: call    EffectItemList_GetSchoolAV
0x5FC954: fld     [esp-14h+arg_20]
0x5FC958: cmp     [esp-14h+arg_38], bl
0x5FC95C: mov     [esp-14h+arg_24], eax
0x5FC960: jz      short loc_5FC97B
0x5FC962: push    ecx
0x5FC963: fst     [esp-10h+arg_34]
0x5FC967: fstp    [esp-10h+arg_C]; float
0x5FC96A: call    Calc_FatigueCastUse
0x5FC96F: fstp    [esp-10h+arg_28]
0x5FC973: add     esp, 4
0x5FC976: jmp     Actor_MagicCaster_ApplyMagicItemCost___Actor_MagicCaster_ApplyMagicItemCost_Apply; jumptable 005FC944 default case, cases 1,4,6,7
0x5FC97B: fldz
0x5FC97D: push    ecx
0x5FC97E: fstp    [esp-10h+arg_34]
0x5FC982: fstp    [esp-10h+arg_C]; float
0x5FC985: call    Calc_FatigueCastUse
0x5FC98A: fstp    [esp-10h+arg_28]
0x5FC98E: add     esp, 4
0x5FC991: jmp     short Actor_MagicCaster_ApplyMagicItemCost___Actor_MagicCaster_ApplyMagicItemCost_Apply; jumptable 005FC944 default case, cases 1,4,6,7
0x5FC993: cmp     [esp-14h+arg_38], 0; jumptable 005FC944 case 2
0x5FC998: jz      short loc_5FC9C6
0x5FC99A: push    0; int
0x5FC99C: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x5FC9A1: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x5FC9A6: push    0; int
0x5FC9A8: push    esi; void *
0x5FC9A9: call    OblivionDynamicCast
0x5FC9AE: add     esp, 14h
0x5FC9B1: push    eax
0x5FC9B2: mov     ecx, ebp
0x5FC9B4: call    Actor_ApplyMagicItemCooldown
0x5FC9B9: cmp     [esp-14h+arg_38], 0; jumptable 005FC944 case 3
0x5FC9BE: jz      short loc_5FC9C6
0x5FC9C0: fld     [esp-14h+arg_20]
0x5FC9C4: jmp     short loc_5FC9C8
0x5FC9C6: fldz
0x5FC9C8: fstp    [esp-14h+arg_34]
0x5FC9CC: push    ecx
0x5FC9CD: fld     [esp-10h+arg_20]
0x5FC9D1: fstp    [esp-10h+arg_C]; float
0x5FC9D4: call    Calc_FatigueCastUse
0x5FC9D9: fstp    [esp-10h+arg_28]
0x5FC9DD: add     esp, 4
0x5FC9E0: jmp     short Actor_MagicCaster_ApplyMagicItemCost___Actor_MagicCaster_ApplyMagicItemCost_Apply; jumptable 005FC944 default case, cases 1,4,6,7
0x5FC9E2: mov     eax, [esp-14h+arg_2C]; jumptable 005FC944 case 8
0x5FC9E6: test    eax, eax
0x5FC9E8: jz      short loc_5FC9F3
0x5FC9EA: test    [eax+7Ch], bl
0x5FC9ED: jnz     Actor_MagicCaster_ApplyMagicItemCost___Done_
0x5FC9F3: mov     ebx, 1
0x5FC9F8: mov     [esp-14h+arg_24], 13h
0x5FCA00: cmp     [esp-14h+arg_38], 0; jumptable 005FC944 default case, cases 1,4,6,7
0x5FCA05: jz      short Actor_MagicCaster_ApplyMagicItemCost___Done_
0x5FCA07: cmp     ebx, 2
0x5FCA0A: jz      short loc_5FCA2A
0x5FCA0C: mov     eax, [esp-14h+arg_24]
0x5FCA10: cmp     eax, 48h ; 'H'
0x5FCA13: jz      short loc_5FCA2A
0x5FCA15: fldz
0x5FCA17: mov     edx, [ebp+0]
0x5FCA1A: push    ecx
0x5FCA1B: fstp    [esp-10h+arg_C]
0x5FCA1E: push    ebx
0x5FCA1F: push    eax
0x5FCA20: mov     eax, [edx+39Ch]
0x5FCA26: mov     ecx, ebp
0x5FCA28: call    eax
0x5FCA2A: fldz
0x5FCA2C: fld     [esp-8+arg_28]
0x5FCA30: fcom    st(1)
0x5FCA32: fnstsw  ax
0x5FCA34: fstp    st(1)
0x5FCA36: test    ah, 41h
0x5FCA39: jnz     short loc_5FCA54
0x5FCA3B: mov     edx, [ebp+0]
0x5FCA3E: fchs
0x5FCA40: mov     eax, [edx+2A4h]
0x5FCA46: push    0
0x5FCA48: push    ecx
0x5FCA49: fstp    dword ptr [esp+0]
0x5FCA4C: push    9
0x5FCA4E: mov     ecx, ebp
0x5FCA50: call    eax
0x5FCA52: jmp     short loc_5FCA56
0x5FCA54: fstp    st
0x5FCA56: fldz
0x5FCA58: fld     [esp+4+arg_10]
0x5FCA5C: fcom    st(1)
0x5FCA5E: fnstsw  ax
0x5FCA60: fstp    st(1)
0x5FCA62: test    ah, 41h
0x5FCA65: jnz     short Actor_MagicCaster_ApplyMagicItemCost___Done__
0x5FCA67: push    ecx
0x5FCA68: fchs
0x5FCA6A: mov     ecx, ebp
0x5FCA6C: fstp    [esp+8+var_8]; float
0x5FCA6F: call    Actor_ModFatigue?
0x5FCA74: pop     ebx
0x5FCA75: pop     ebp
0x5FCA76: pop     edi
0x5FCA77: pop     esi
0x5FCA78: add     esp, 10h
0x5FCA7B: retn    8
