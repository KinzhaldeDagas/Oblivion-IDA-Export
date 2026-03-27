0x7D7350: push    esi
0x7D7351: mov     esi, ecx
0x7D7353: cmp     byte ptr [esi+8], 0
0x7D7357: mov     dword ptr [esi], offset ??_7TangentSpaceData@BSShaderPPLightingProperty@@6B@; const BSShaderPPLightingProperty::TangentSpaceData::`vftable'
0x7D735D: jz      short loc_7D736F
0x7D735F: mov     eax, [esi+0Ch]
0x7D7362: test    eax, eax
0x7D7364: jz      short loc_7D736F
0x7D7366: push    eax
0x7D7367: call    FormHeapFree
0x7D736C: add     esp, 4
0x7D736F: cmp     byte ptr [esi+8], 0
0x7D7373: mov     dword ptr [esi+0Ch], 0
0x7D737A: jz      short loc_7D738C
0x7D737C: mov     eax, [esi+10h]
0x7D737F: test    eax, eax
0x7D7381: jz      short loc_7D738C
0x7D7383: push    eax
0x7D7384: call    FormHeapFree
0x7D7389: add     esp, 4
0x7D738C: push    offset NiRefObject_objcount; lpAddend
0x7D7391: mov     dword ptr [esi+10h], 0
0x7D7398: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7D739E: call    dword ptr ds:0A2807Ch
0x7D73A4: pop     esi
0x7D73A5: retn
