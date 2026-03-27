0x73D160: sub     esp, 0Ch
0x73D163: push    esi
0x73D164: mov     esi, ecx
0x73D166: call    ??0NiLight@@QAE@XZ; NiLight::NiLight(void)
0x73D16B: fldz
0x73D16D: fst     dword ptr [esi+108h]
0x73D173: mov     dword ptr [esi], offset ??_7NiSpotLight@@6B@; const NiSpotLight::`vftable'
0x73D179: fld1
0x73D17B: fst     dword ptr [esi+10Ch]
0x73D181: fxch    st(1)
0x73D183: fst     dword ptr [esi+110h]
0x73D189: fxch    st(1)
0x73D18B: fst     [esp+10h+var_C]
0x73D18F: fxch    st(1)
0x73D191: mov     eax, [esp+10h+var_C]
0x73D195: fst     [esp+10h+var_8]
0x73D199: fst     [esp+10h+var_4]
0x73D19D: mov     [esi+114h], eax
0x73D1A3: mov     ecx, [esp+10h+var_8]
0x73D1A7: fxch    st(1)
0x73D1A9: mov     edx, [esp+10h+var_4]
0x73D1AD: fstp    dword ptr [esi+124h]
0x73D1B3: mov     [esi+118h], ecx
0x73D1B9: mov     [esi+11Ch], edx
0x73D1BF: mov     eax, esi
0x73D1C1: fstp    dword ptr [esi+120h]
0x73D1C7: pop     esi
0x73D1C8: add     esp, 0Ch
0x73D1CB: retn
