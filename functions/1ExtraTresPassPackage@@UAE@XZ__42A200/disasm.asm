0x42A200: push    0FFFFFFFFh
0x42A202: push    offset SEH_42B090
0x42A207: mov     eax, large fs:0
0x42A20D: push    eax
0x42A20E: push    ecx
0x42A20F: push    esi
0x42A210: mov     eax, ___security_cookie
0x42A215: xor     eax, esp
0x42A217: push    eax
0x42A218: lea     eax, [esp+18h+var_C]
0x42A21C: mov     large fs:0, eax
0x42A222: mov     esi, ecx
0x42A224: mov     [esp+18h+var_10], esi
0x42A228: mov     dword ptr [esi], offset ??_7ExtraTresPassPackage@@6B@; const ExtraTresPassPackage::`vftable'
0x42A22E: mov     ecx, [esi+0Ch]
0x42A231: test    ecx, ecx
0x42A233: mov     [esp+18h+var_4], 0
0x42A23B: jz      short loc_42A274
0x42A23D: push    1
0x42A23F: call    sub_566830; 3DTheft decode: dynamic package marker only sets packageFlags bit 0x800 when TESDataHandler_IsFormIDCreated_(formID) returns true. Do not force 0x800 on arbitrary heap packages before Actor_AddPackage_.
0x42A244: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x42A24A: call    sub_45A500
0x42A24F: test    al, al
0x42A251: jz      short loc_42A264
0x42A253: mov     eax, [esi+0Ch]
0x42A256: mov     ecx, g_TESSaveLoadGame; self
0x42A25C: push    eax; form
0x42A25D: call    TESSaveLoadGame_DeleteForm
0x42A262: jmp     short loc_42A274
0x42A264: mov     ecx, [esi+0Ch]
0x42A267: test    ecx, ecx
0x42A269: jz      short loc_42A274
0x42A26B: mov     edx, [ecx]
0x42A26D: mov     eax, [edx+10h]
0x42A270: push    1
0x42A272: call    eax
0x42A274: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42A27A: mov     ecx, dword ptr [esp+18h+var_C]
0x42A27E: mov     large fs:0, ecx
0x42A285: pop     ecx
0x42A286: pop     esi
0x42A287: add     esp, 10h
0x42A28A: retn
0x9ABA50: mov     ecx, [ebp-10h]; this
0x9ABA53: jmp     ??1BSExtraData@@UAE@XZ; BSExtraData::~BSExtraData(void)
0x9ABA58: mov     edx, [esp+arg_4]
0x9ABA5C: lea     eax, [edx-8]
0x9ABA5F: mov     ecx, [edx-0Ch]
0x9ABA62: xor     ecx, eax
0x9ABA64: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABA69: mov     eax, offset stru_AD8848
0x9ABA6E: jmp     ___CxxFrameHandler3
