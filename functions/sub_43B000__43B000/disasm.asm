0x43B000: push    esi
0x43B001: mov     esi, ecx
0x43B003: cmp     dword ptr [esi+0Ch], 6
0x43B007: jz      short loc_43B082
0x43B009: mov     ecx, [esi+20h]; this
0x43B00C: mov     eax, [ecx+8]
0x43B00F: mov     edx, eax
0x43B011: shr     edx, 0Bh
0x43B014: test    dl, 1
0x43B017: jnz     short loc_43B06F
0x43B019: shr     eax, 5
0x43B01C: test    al, 1
0x43B01E: jnz     short loc_43B06F
0x43B020: push    0; a2
0x43B022: call    TESObjectREFR_GetParentCell
0x43B027: mov     ecx, TES
0x43B02D: push    eax; a1
0x43B02E: call    TESObjectCELL_IsProcessLevel?LowHigh
0x43B033: test    al, al
0x43B035: jz      short loc_43B06F
0x43B037: mov     eax, [esi+28h]
0x43B03A: test    eax, eax
0x43B03C: jz      short loc_43B051
0x43B03E: mov     eax, [eax+8]
0x43B041: mov     ecx, [esi+20h]
0x43B044: push    eax
0x43B045: push    ecx
0x43B046: mov     ecx, ModelLoaderPtr
0x43B04C: call    sub_43A8F0
0x43B051: mov     eax, [esi+2Ch]
0x43B054: mov     ecx, [esi+20h]; this
0x43B057: push    0; a8
0x43B059: push    eax; a7
0x43B05A: call    TESObjectREFR_GetParentCell
0x43B05F: mov     edx, [esi+20h]
0x43B062: mov     ecx, TES; ecx0
0x43B068: push    eax; a6
0x43B069: push    edx; a1
0x43B06A: call    sub_441EF0
0x43B06F: mov     eax, ModelLoaderPtr
0x43B074: mov     ecx, [eax+8]
0x43B077: mov     edx, [ecx]
0x43B079: mov     eax, [esi+20h]
0x43B07C: mov     edx, [edx+10h]
0x43B07F: push    eax
0x43B080: call    edx
0x43B082: pop     esi
0x43B083: retn
