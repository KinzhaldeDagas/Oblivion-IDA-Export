0x8C47C0: push    esi
0x8C47C1: mov     esi, ecx
0x8C47C3: mov     eax, [esi+14h]
0x8C47C6: test    eax, eax
0x8C47C8: mov     dword ptr [esi], offset ??_7hkPackedNiTriStripsData@@6B@; const hkPackedNiTriStripsData::`vftable'
0x8C47CE: jz      short loc_8C47D9
0x8C47D0: push    eax
0x8C47D1: call    FormHeapFree
0x8C47D6: add     esp, 4
0x8C47D9: mov     eax, [esi+18h]
0x8C47DC: test    eax, eax
0x8C47DE: jz      short loc_8C47E9
0x8C47E0: push    eax
0x8C47E1: call    FormHeapFree
0x8C47E6: add     esp, 4
0x8C47E9: mov     eax, [esi+1Ch]
0x8C47EC: test    eax, eax
0x8C47EE: jz      short loc_8C47F9
0x8C47F0: push    eax
0x8C47F1: call    FormHeapFree
0x8C47F6: add     esp, 4
0x8C47F9: mov     ecx, esi
0x8C47FB: call    NiRefObject_destr
0x8C4800: test    [esp+4+arg_0], 1
0x8C4805: jz      short loc_8C4810
0x8C4807: push    esi
0x8C4808: call    FormHeapFree
0x8C480D: add     esp, 4
0x8C4810: mov     eax, esi
0x8C4812: pop     esi
0x8C4813: retn    4
