0x7B22C0: push    esi
0x7B22C1: mov     esi, ecx
0x7B22C3: call    ??0BSShaderLightingProperty@@QAE@XZ; [Verified] DECAL_DATA is 0x4C bytes: NiSourceTexture* +0, rotation matrix +8, target reference FormID +0x3C, fade progress +0x40, and NiProperty* +0x48. Fields +4, +0x2C, +0x38 and +0x44 remain Unknown. The property owns a NiTPointerList<DECAL_DATA*> at +0x80; effects add/remove entries and render-pass builders batch from count +0x8C.
0x7B22C8: xor     eax, eax
0x7B22CA: mov     dword ptr [esi], offset ??_7DistantLODShaderProperty@@6B@; const DistantLODShaderProperty::`vftable'
0x7B22D0: mov     [esi+0A0h], eax
0x7B22D6: mov     [esi+9Ch], eax
0x7B22DC: mov     eax, esi
0x7B22DE: pop     esi
0x7B22DF: retn
