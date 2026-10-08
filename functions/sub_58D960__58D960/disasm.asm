0x58D960: sub     esp, 8
0x58D963: push    esi
0x58D964: mov     esi, ecx
0x58D966: push    esi; index
0x58D967: call    InterfaceManager__GetTimerPercent; Verified: searches timer by owner/index; missing timer returns 1; positive duration returns elapsed/duration clamped to [0,1]. Consumed by menu fade processing and Tile animation.
0x58D96C: fstp    [esp+10h+var_8]
0x58D970: fld     dword ptr [esi+0Ch]
0x58D973: mov     eax, [esi+4]
0x58D976: fsub    dword ptr [esi+8]
0x58D979: mov     ecx, [esi]; this
0x58D97B: add     esp, 4
0x58D97E: push    eax; trait
0x58D97F: fmul    [esp+10h+var_8]
0x58D983: fadd    dword ptr [esi+8]
0x58D986: fstp    [esp+10h+var_4]
0x58D98A: call    Tile__GetOrCreateValue; Verified: sorted trait lookup; if absent allocates 0x1C bytes, constructs Value at 0x589DF0, stores owner Tile at +0 and inserts into Tile value list. Corrects misleading existing-property-only interpretation.
0x58D98F: test    eax, eax
0x58D991: jz      short loc_58D9A2
0x58D993: fld     [esp+0Ch+var_4]
0x58D997: push    ecx
0x58D998: mov     ecx, eax; this
0x58D99A: fstp    [esp+10h+value]; value
0x58D99D: call    Tile__Value__SetFloat; Verified: marks numeric; if changed or string trait 0xFDE, clears string, stores number, clears own expression actions via 0x588930, then CalculateValue(this,true). Same-value ordinary traits bypass clear/evaluation. Unlike Fallout SetFloat, no abClearActions parameter.
0x58D9A2: fld1
0x58D9A4: mov     eax, [esi]
0x58D9A6: fcomp   [esp+0Ch+var_8]
0x58D9AA: or      dword ptr [eax+2Ch], 80h
0x58D9B1: fnstsw  ax
0x58D9B3: test    ah, 44h
0x58D9B6: jp      short loc_58D9EB
0x58D9B8: mov     eax, [esi+4]
0x58D9BB: fld     dword ptr [esi+0Ch]
0x58D9BE: mov     ecx, [esi]; this
0x58D9C0: fstp    [esp+0Ch+var_4]
0x58D9C4: push    eax; trait
0x58D9C5: call    Tile__GetOrCreateValue; Verified: sorted trait lookup; if absent allocates 0x1C bytes, constructs Value at 0x589DF0, stores owner Tile at +0 and inserts into Tile value list. Corrects misleading existing-property-only interpretation.
0x58D9CA: test    eax, eax
0x58D9CC: jz      short loc_58D9DD
0x58D9CE: fld     [esp+0Ch+var_4]
0x58D9D2: push    ecx
0x58D9D3: mov     ecx, eax; this
0x58D9D5: fstp    [esp+10h+value]; value
0x58D9D8: call    Tile__Value__SetFloat; Verified: marks numeric; if changed or string trait 0xFDE, clears string, stores number, clears own expression actions via 0x588930, then CalculateValue(this,true). Same-value ordinary traits bypass clear/evaluation. Unlike Fallout SetFloat, no abClearActions parameter.
0x58D9DD: mov     ecx, esi
0x58D9DF: call    sub_5895E0
0x58D9E4: mov     al, 1
0x58D9E6: pop     esi
0x58D9E7: add     esp, 8
0x58D9EA: retn
0x58D9EB: xor     al, al
0x58D9ED: pop     esi
0x58D9EE: add     esp, 8
0x58D9F1: retn
