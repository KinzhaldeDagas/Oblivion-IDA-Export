0x60E320: push    ebx
0x60E321: push    esi
0x60E322: mov     esi, ecx
0x60E324: xor     bl, bl
0x60E326: call    TESObjectREFR_GetParentCell
0x60E32B: test    eax, eax
0x60E32D: jz      short loc_60E341
0x60E32F: push    esi
0x60E330: mov     ecx, esi; this
0x60E332: call    TESObjectREFR_GetParentCell
0x60E337: mov     ecx, eax
0x60E339: call    sub_4CABC0
0x60E33E: pop     esi
0x60E33F: pop     ebx
0x60E340: retn
0x60E341: pop     esi
0x60E342: mov     al, bl
0x60E344: pop     ebx
0x60E345: retn
