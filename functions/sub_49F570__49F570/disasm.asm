0x49F570: push    esi; Serializes BSAnimGroupSequence effective sample time, active state, fields +0x34/+0x38 and +0x54; save versions below 0x71 include the legacy extra time copy.
0x49F571: mov     esi, ecx
0x49F573: fld     dword ptr [esi+48h]
0x49F576: mov     ecx, ds:0B33B00h; self
0x49F57C: fadd    [esp+4+Src]
0x49F580: push    4; byteCount
0x49F582: lea     eax, [esp+8+Src]
0x49F586: push    eax; source
0x49F587: fstp    [esp+0Ch+Src]
0x49F58B: call    SaveLoad_SaveData
0x49F590: push    4; byteCount
0x49F592: lea     ecx, [esi+44h]
0x49F595: push    ecx; source
0x49F596: mov     ecx, ds:0B33B00h; self
0x49F59C: call    SaveLoad_SaveData
0x49F5A1: mov     ecx, ds:0B33B00h; self
0x49F5A7: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x49F5AB: jnb     short loc_49F5BF
0x49F5AD: push    4; byteCount
0x49F5AF: lea     edx, [esp+8+Src]
0x49F5B3: push    edx; source
0x49F5B4: call    SaveLoad_SaveData
0x49F5B9: mov     ecx, ds:0B33B00h; self
0x49F5BF: push    4; byteCount
0x49F5C1: lea     eax, [esi+34h]
0x49F5C4: push    eax; source
0x49F5C5: call    SaveLoad_SaveData
0x49F5CA: push    4; byteCount
0x49F5CC: lea     ecx, [esi+38h]
0x49F5CF: push    ecx; source
0x49F5D0: mov     ecx, ds:0B33B00h; self
0x49F5D6: call    SaveLoad_SaveData
0x49F5DB: mov     ecx, ds:0B33B00h; self
0x49F5E1: push    4; byteCount
0x49F5E3: add     esi, 54h ; 'T'
0x49F5E6: push    esi; source
0x49F5E7: call    SaveLoad_SaveData
0x49F5EC: pop     esi
0x49F5ED: retn    4
