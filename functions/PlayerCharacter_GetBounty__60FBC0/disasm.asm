0x60FBC0: push    ecx
0x60FBC1: push    esi
0x60FBC2: mov     esi, ecx
0x60FBC4: lea     ecx, [esi+44h]
0x60FBC7: call    ExtraDataList_GetCrimeGold
0x60FBCC: fstp    [esp+8+var_4]
0x60FBD0: mov     eax, ds:0B333C4h
0x60FBD5: cmp     esi, eax
0x60FBD7: pop     esi
0x60FBD8: jnz     short PlayerCharacter_GetBounty___EnforceMinimumOfZero
0x60FBDA: cmp     byte ptr [eax+116h], 0
0x60FBE1: jz      short PlayerCharacter_GetBounty___EnforceMinimumOfZero
0x60FBE3: fld     dword ptr [eax+700h]
0x60FBE9: fstp    [esp+4+var_4]
