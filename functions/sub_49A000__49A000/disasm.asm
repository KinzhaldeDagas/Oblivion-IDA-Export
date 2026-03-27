0x49A000: sub     esp, 0Ch
0x49A003: push    esi
0x49A004: push    edi
0x49A005: mov     edi, [esp+14h+arg_0]
0x49A009: mov     esi, ecx
0x49A00B: cmp     edi, [esi+14h]
0x49A00E: jz      loc_49A0A9
0x49A014: test    edi, edi
0x49A016: jz      loc_49A0A6
0x49A01C: cmp     dword ptr [esi+8], 0
0x49A020: jz      loc_49A0A6
0x49A026: mov     ecx, edi; this
0x49A028: call    TESObjectCELL__GetWaterForm
0x49A02D: mov     ecx, edi; this
0x49A02F: call    TESObjectCELL_GetXCoordinate
0x49A034: shl     eax, 0Ch
0x49A037: add     eax, 800h
0x49A03C: mov     [esp+14h+arg_0], eax
0x49A040: fild    [esp+14h+arg_0]
0x49A044: mov     ecx, edi; this
0x49A046: fstp    [esp+14h+var_C]
0x49A04A: call    TESObjectCELL_GetYCoordinate
0x49A04F: shl     eax, 0Ch
0x49A052: add     eax, 800h
0x49A057: mov     [esp+14h+arg_0], eax
0x49A05B: movzx   eax, byte ptr [edi+24h]
0x49A05F: fild    [esp+14h+arg_0]
0x49A063: shr     eax, 1
0x49A065: test    al, 1
0x49A067: fstp    [esp+14h+var_8]
0x49A06B: jz      short loc_49A076
0x49A06D: mov     ecx, edi
0x49A06F: call    TESObjectCELL_GetWaterHeight
0x49A074: jmp     short loc_49A078
0x49A076: fldz
0x49A078: mov     eax, [esi+4]
0x49A07B: fstp    [esp+14h+var_4]
0x49A07F: mov     ecx, [esp+14h+var_C]
0x49A083: fldz
0x49A085: mov     edx, [esp+14h+var_8]
0x49A089: add     eax, 54h ; 'T'
0x49A08C: mov     [eax], ecx
0x49A08E: mov     ecx, [esp+14h+var_4]
0x49A092: mov     [eax+4], edx
0x49A095: push    1; a3
0x49A097: push    ecx
0x49A098: mov     [eax+8], ecx
0x49A09B: fstp    [esp+1Ch+a2]; a2
0x49A09E: mov     ecx, [esi+4]; this
0x49A0A1: call    NiAVObject_UpdateNiAVObject
0x49A0A6: mov     [esi+14h], edi
0x49A0A9: test    edi, edi
0x49A0AB: jz      short loc_49A0C6
0x49A0AD: movzx   edx, byte ptr [edi+24h]
0x49A0B1: shr     edx, 1
0x49A0B3: test    dl, 1
0x49A0B6: jz      short loc_49A0C6
0x49A0B8: mov     byte ptr [esi], 1
0x49A0BB: mov     esi, [esi+4]
0x49A0BE: and     word ptr [esi+18h], 0FFFEh
0x49A0C4: jmp     short loc_49A0D1
0x49A0C6: mov     byte ptr [esi], 0
0x49A0C9: mov     esi, [esi+4]
0x49A0CC: or      word ptr [esi+18h], 1
0x49A0D1: mov     ecx, ds:0B333C4h; this
0x49A0D7: call    TESObjectREFR_GetParentCell
0x49A0DC: cmp     eax, edi
0x49A0DE: jnz     short loc_49A0F5
0x49A0E0: test    edi, edi
0x49A0E2: jz      short loc_49A0F5
0x49A0E4: movzx   eax, byte ptr [edi+24h]
0x49A0E8: shr     eax, 1
0x49A0EA: test    al, 1
0x49A0EC: jz      short loc_49A0F5
0x49A0EE: mov     byte ptr ds:0B3521Dh, 1
0x49A0F5: pop     edi
0x49A0F6: pop     esi
0x49A0F7: add     esp, 0Ch
0x49A0FA: retn    4
