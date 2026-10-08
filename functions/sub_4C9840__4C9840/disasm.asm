0x4C9840: cmp     [esp+isPublic], 0; Verified body: sets/clears TESObjectCELL flags0 bit 0x20 and calls MarkAsModified(mask 8). Probable semantic identity: Public flag, supported by TESObjectCELL_HasPublicFlag20 and door trespass-access checks; Fallout independently names the homolog SetPublic. This comment records the confidence boundary; Fallout similarity alone is not treated as proof.
0x4C9845: jz      short loc_4C984D
0x4C9847: or      byte ptr [ecx+24h], 20h
0x4C984B: jmp     short loc_4C9851
0x4C984D: and     byte ptr [ecx+24h], 0DFh
0x4C9851: mov     eax, [ecx]
0x4C9853: mov     edx, [eax+40h]
0x4C9856: mov     dword ptr [esp+isPublic], 8
0x4C985E: jmp     edx
