0x43B990: push    ecx
0x43B991: push    ebx
0x43B992: push    esi
0x43B993: mov     esi, [esp+0Ch+arg_10]
0x43B997: push    edi
0x43B998: mov     edi, [esp+10h+form]
0x43B99C: push    esi
0x43B99D: push    edi
0x43B99E: mov     [esp+18h+var_4], 0
0x43B9A6: call    sub_435580
0x43B9AB: push    edi; form
0x43B9AC: mov     ebx, eax
0x43B9AE: call    TESForm_GetLODMult; Verified control flow: returns 2 for form-type bytes {0x13,0x14,0x15,0x16,0x19,0x1B,0x21,0x22,0x26,0x27,0x28,0x2A}, 3 for {0x23,0x24}, otherwise 1. Probable semantic name TESForm_GetLODMult is supported by the direct queued-tree argument use and Fallout's named TES::GetLODMult; individual type-group meanings are not decoded here.
0x43B9B3: add     esp, 4
0x43B9B6: test    esi, esi
0x43B9B8: mov     edi, eax
0x43B9BA: jz      short loc_43B9F5
0x43B9BC: mov     ecx, esi; this
0x43B9BE: call    TESObjectREFR_HasVisibleDistantFlag; Probable visible-distant behavior: when the reference's TESForm +0x08 bit 0x8000 is set, the generic bound-object queue promotes its LOD multiplier to 6. The flag check is local and verified; its visible-distant name is corroborated by Fallout's named getter.
0x43B9C3: test    al, al
0x43B9C5: jz      short loc_43B9CC
0x43B9C7: mov     edi, 6
0x43B9CC: mov     ecx, [esi+1Ch]
0x43B9CF: test    ecx, ecx
0x43B9D1: jz      short loc_43B9E8
0x43B9D3: mov     eax, [ecx]
0x43B9D5: mov     edx, [eax+0F4h]
0x43B9DB: call    edx
0x43B9DD: xor     ecx, ecx
0x43B9DF: test    al, al
0x43B9E1: setz    cl
0x43B9E4: mov     eax, ecx
0x43B9E6: jmp     short loc_43B9F7
0x43B9E8: xor     al, al
0x43B9EA: xor     ecx, ecx
0x43B9EC: test    al, al
0x43B9EE: setz    cl
0x43B9F1: mov     eax, ecx
0x43B9F3: jmp     short loc_43B9F7
0x43B9F5: xor     eax, eax
0x43B9F7: mov     edx, [esp+10h+arg_C]
0x43B9FB: mov     esi, [esp+10h+arg_0]
0x43B9FF: mov     ecx, ds:0B33A1Ch
0x43BA05: push    0
0x43BA07: push    1
0x43BA09: push    eax
0x43BA0A: mov     eax, [esp+1Ch+arg_8]
0x43BA0E: push    edi
0x43BA0F: push    edx
0x43BA10: push    eax
0x43BA11: push    ebx
0x43BA12: push    esi
0x43BA13: call    sub_43B280
0x43BA18: pop     edi
0x43BA19: mov     eax, esi
0x43BA1B: pop     esi
0x43BA1C: pop     ebx
0x43BA1D: pop     ecx
0x43BA1E: retn    14h
