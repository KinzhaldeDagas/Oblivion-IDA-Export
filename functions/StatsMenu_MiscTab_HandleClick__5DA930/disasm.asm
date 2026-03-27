0x5DA930: sub     esp, 34h
0x5DA933: push    ebx
0x5DA934: push    ebp
0x5DA935: push    esi
0x5DA936: push    edi
0x5DA937: mov     esi, ecx
0x5DA939: mov     ecx, [esi+50h]
0x5DA93C: push    0FB5h
0x5DA941: call    Tile_GetFloat
0x5DA946: call    Double_To_SInt32
0x5DA94B: mov     ecx, [esi+4Ch]
0x5DA94E: mov     [esp+44h+var_28], eax
0x5DA952: call    sub_5893F0
0x5DA957: mov     edi, ds:0B383E8h
0x5DA95D: xor     ebp, ebp
0x5DA95F: push    ebp
0x5DA960: mov     ecx, offset TimeGlobals
0x5DA965: call    TimeGlobals_GetGameDaysPassed
0x5DA96A: push    eax
0x5DA96B: push    edi
0x5DA96C: mov     ecx, esi
0x5DA96E: call    sub_5DA8C0
0x5DA973: push    1
0x5DA975: push    ebp
0x5DA976: lea     eax, [esp+4Ch+var_1C]
0x5DA97A: push    ebp
0x5DA97B: xor     edi, edi
0x5DA97D: push    eax
0x5DA97E: mov     [esp+54h+var_34], edi
0x5DA982: xor     ebx, ebx
0x5DA984: mov     [esp+54h+var_1C], ebp
0x5DA988: mov     [esp+54h+var_18], ebp
0x5DA98C: call    sub_52A8A0
0x5DA991: add     esp, 10h
0x5DA994: cmp     [esp+44h+var_18], ebp
0x5DA998: jnz     short loc_5DA9A0
0x5DA99A: cmp     [esp+44h+var_1C], ebp
0x5DA99E: jz      short loc_5DA9B2
0x5DA9A0: lea     eax, [esp+44h+var_1C]
0x5DA9A4: mov     eax, [eax+4]
0x5DA9A7: add     edi, 1
0x5DA9AA: cmp     eax, ebp
0x5DA9AC: jnz     short loc_5DA9A4
0x5DA9AE: mov     [esp+44h+var_34], edi
0x5DA9B2: push    1
0x5DA9B4: push    1
0x5DA9B6: lea     ecx, [esp+4Ch+var_1C]
0x5DA9BA: push    ebp
0x5DA9BB: push    ecx
0x5DA9BC: call    sub_52A8A0
0x5DA9C1: mov     ecx, [esp+54h+var_18]
0x5DA9C5: add     esp, 10h
0x5DA9C8: cmp     ecx, ebp
0x5DA9CA: jnz     short loc_5DA9D2
0x5DA9CC: cmp     [esp+44h+var_1C], ebp
0x5DA9D0: jz      short loc_5DA9FE
0x5DA9D2: lea     eax, [esp+44h+var_1C]
0x5DA9D6: mov     eax, [eax+4]
0x5DA9D9: add     ebx, 1
0x5DA9DC: cmp     eax, ebp
0x5DA9DE: jnz     short loc_5DA9D6
0x5DA9E0: cmp     ecx, ebp
0x5DA9E2: jz      short loc_5DA9FE
0x5DA9E4: mov     edi, [ecx+4]
0x5DA9E7: push    ecx
0x5DA9E8: call    FormHeapFree
0x5DA9ED: add     esp, 4
0x5DA9F0: cmp     edi, ebp
0x5DA9F2: mov     ecx, edi
0x5DA9F4: mov     [esp+44h+var_18], ecx
0x5DA9F8: jnz     short loc_5DA9E4
0x5DA9FA: mov     edi, [esp+44h+var_34]
0x5DA9FE: mov     edx, ds:0B38540h
0x5DAA04: push    1
0x5DAA06: push    edi
0x5DAA07: push    edx
0x5DAA08: mov     ecx, esi
0x5DAA0A: mov     [esp+50h+var_1C], ebp
0x5DAA0E: call    sub_5DA8C0
0x5DAA13: mov     eax, ds:0B38548h
0x5DAA18: push    2
0x5DAA1A: push    ebx
0x5DAA1B: push    eax
0x5DAA1C: mov     ecx, esi
0x5DAA1E: call    sub_5DA8C0
0x5DAA23: mov     ecx, ds:0B333C4h
0x5DAA29: mov     edx, [ecx+660h]
0x5DAA2F: mov     eax, ds:0B384C0h
0x5DAA34: push    4
0x5DAA36: push    edx
0x5DAA37: push    eax
0x5DAA38: mov     ecx, esi
0x5DAA3A: call    sub_5DA8C0
0x5DAA3F: mov     ecx, ds:0B333C4h
0x5DAA45: mov     edx, [ecx+664h]
0x5DAA4B: mov     eax, ds:0B384B8h
0x5DAA50: push    5
0x5DAA52: push    edx
0x5DAA53: push    eax
0x5DAA54: mov     ecx, esi
0x5DAA56: call    sub_5DA8C0
0x5DAA5B: mov     edi, 6
0x5DAA60: mov     [esp+44h+var_14], ebp
0x5DAA64: mov     [esp+44h+var_10], ebp
0x5DAA68: mov     [esp+44h+var_C], ebp
0x5DAA6C: mov     [esp+44h+var_8], ebp
0x5DAA70: mov     [esp+44h+var_4], ebp
0x5DAA74: xor     ebx, ebx
