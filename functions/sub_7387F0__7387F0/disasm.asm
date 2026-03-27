0x7387F0: push    esi
0x7387F1: mov     esi, ecx
0x7387F3: mov     eax, [esi+8]
0x7387F6: push    eax
0x7387F7: mov     dword ptr [esi], offset ??_7ScreenElement@NiScreenGeometryData@@6B@; const NiScreenGeometryData::ScreenElement::`vftable'
0x7387FD: call    FormHeapFree
0x738802: mov     ecx, [esi+0Ch]
0x738805: push    ecx
0x738806: call    FormHeapFree
0x73880B: mov     edx, [esi+10h]
0x73880E: push    edx
0x73880F: call    FormHeapFree
0x738814: add     esp, 0Ch
0x738817: pop     esi
0x738818: retn
