0x7ABE30: push    0FFFFFFFFh
0x7ABE32: push    offset ??0BSShaderAccumulator@@QAE@XZ_SEH
0x7ABE37: mov     eax, large fs:0
0x7ABE3D: push    eax
0x7ABE3E: sub     esp, 0Ch
0x7ABE41: push    ebx
0x7ABE42: push    ebp
0x7ABE43: push    esi
0x7ABE44: push    edi
0x7ABE45: mov     eax, ds:0B30AACh
0x7ABE4A: xor     eax, esp
0x7ABE4C: push    eax
0x7ABE4D: lea     eax, [esp+2Ch+var_C]
0x7ABE51: mov     large fs:0, eax
0x7ABE57: mov     esi, ecx
0x7ABE59: mov     [esp+2Ch+var_10], esi
0x7ABE5D: call    NiAlphaAccumulator_Constructor
0x7ABE62: xor     ebx, ebx
0x7ABE64: lea     ebp, [esi+3Ch]
0x7ABE67: mov     dword ptr [esi], offset ??_7BSShaderAccumulator@@6B@; const BSShaderAccumulator::`vftable'
0x7ABE6D: mov     [esp+2Ch+var_4], ebx
0x7ABE71: mov     [ebp+0Ch], ebx
0x7ABE74: mov     [ebp+4], ebx
0x7ABE77: mov     [ebp+8], ebx
0x7ABE7A: mov     dword ptr [ebp+0], offset ??_7?$NiTPointerList@PAUGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTPointerList<BSShaderAccumulator::GeometryGroup *>::`vftable'
0x7ABE81: mov     [esi+58h], ebx
0x7ABE84: mov     [esi+50h], ebx
0x7ABE87: mov     [esi+54h], ebx
0x7ABE8A: mov     dword ptr [esi+4Ch], offset ??_7?$NiTPointerList@PAUGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTPointerList<BSShaderAccumulator::GeometryGroup *>::`vftable'
0x7ABE91: mov     [esi+70h], ebx
0x7ABE94: mov     [esi+68h], ebx
0x7ABE97: mov     [esi+6Ch], ebx
0x7ABE9A: mov     dword ptr [esi+64h], offset ??_7?$NiTPointerList@PAUImmediateGeometryGroup@BSShaderAccumulator@@@@6B@; const NiTPointerList<BSShaderAccumulator::ImmediateGeometryGroup *>::`vftable'
0x7ABEA1: mov     dword ptr [esi+7Ch], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7ABEA8: mov     [esi+80h], ebx
0x7ABEAE: mov     [esi+84h], ebx
0x7ABEB4: mov     [esi+88h], ebx
0x7ABEBA: mov     dword ptr [esi+90h], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7ABEC4: mov     [esi+94h], ebx
0x7ABECA: mov     [esi+98h], ebx
0x7ABED0: mov     [esi+9Ch], ebx
0x7ABED6: mov     dword ptr [esi+0A4h], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7ABEE0: mov     [esi+0A8h], ebx
0x7ABEE6: mov     [esi+0ACh], ebx
0x7ABEEC: mov     [esi+0B0h], ebx
0x7ABEF2: fldz
0x7ABEF4: push    offset sub_7A9AE0; a5
0x7ABEF9: fst     dword ptr [esi+0D0h]
0x7ABEFF: push    offset sub_7A9AC0; a4
0x7ABF04: fst     dword ptr [esi+0E4h]
0x7ABF0A: push    1A3h; size
0x7ABF0F: fstp    dword ptr [esi+0F8h]
0x7ABF15: push    14h; a2
0x7ABF17: lea     eax, [esi+104h]
0x7ABF1D: push    eax; a1
0x7ABF1E: mov     byte ptr [esp+40h+var_4], 6
0x7ABF23: mov     [esi+0C8h], ebx
0x7ABF29: mov     [esi+0CCh], bl
0x7ABF2F: mov     [esi+0D4h], ebx
0x7ABF35: mov     [esi+0D8h], ebx
0x7ABF3B: mov     [esi+0DCh], ebx
0x7ABF41: mov     [esi+0E0h], bl
0x7ABF47: mov     [esi+0E8h], ebx
0x7ABF4D: mov     [esi+0ECh], ebx
0x7ABF53: mov     [esi+0F0h], ebx
0x7ABF59: mov     [esi+0F4h], bl
0x7ABF5F: mov     [esi+0FCh], ebx
0x7ABF65: mov     [esi+100h], ebx
0x7ABF6B: call    ArrayConstructor
0x7ABF70: mov     [esi+21CCh], ebx
0x7ABF76: mov     [esi+21C4h], ebx
0x7ABF7C: mov     [esi+21C8h], ebx
0x7ABF82: mov     dword ptr [esi+21C0h], offset ??_7?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@6B@; const NiTPointerList<BSShaderProperty::RenderPass *>::`vftable'
0x7ABF8C: lea     edi, [esi+21D0h]
0x7ABF92: mov     [edi+0Ch], ebx
0x7ABF95: mov     [edi+4], ebx
0x7ABF98: mov     [edi+8], ebx
0x7ABF9B: mov     dword ptr [edi], offset ??_7?$NiTPointerList@PAVShadowVolumeRPList@BSShaderAccumulator@@@@6B@; const NiTPointerList<BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'
0x7ABFA1: mov     dword ptr [esi+21ECh], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7ABFAB: mov     [esi+21F0h], ebx
0x7ABFB1: mov     [esi+21F4h], ebx
0x7ABFB7: mov     [esi+21F8h], ebx
0x7ABFBD: mov     dword ptr [esi+2200h], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7ABFC7: mov     [esi+2204h], ebx
0x7ABFCD: mov     [esi+2208h], ebx
0x7ABFD3: mov     [esi+220Ch], ebx
0x7ABFD9: mov     dword ptr [esi+2214h], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVNiGeometry@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,NiGeometry *>::`vftable'
0x7ABFE3: mov     [esi+2218h], ebx
0x7ABFE9: mov     [esi+221Ch], ebx
0x7ABFEF: mov     [esi+2220h], ebx
0x7ABFF5: mov     [esi+2228h], ebx
0x7ABFFB: mov     [esi+2238h], ebx
0x7AC001: mov     [esi+2230h], ebx
0x7AC007: mov     [esi+2234h], ebx
0x7AC00D: mov     dword ptr [esi+222Ch], offset ??_7?$NiTPointerList@PAUReferenceVolume@@@@6B@; const NiTPointerList<ReferenceVolume *>::`vftable'
0x7AC017: mov     eax, offset ??_7?$NiTPointerList@PAVNiGeometry@@@@6B@; const NiTPointerList<NiGeometry *>::`vftable'
0x7AC01C: mov     [esi+2250h], ebx
0x7AC022: mov     [esi+2248h], ebx
0x7AC028: mov     [esi+224Ch], ebx
0x7AC02E: mov     [esi+2244h], eax
0x7AC034: mov     [esi+2260h], ebx
0x7AC03A: mov     [esi+2258h], ebx
0x7AC040: mov     [esi+225Ch], ebx
0x7AC046: mov     [esi+2254h], eax
0x7AC04C: lea     ecx, [esi+108h]
0x7AC052: mov     byte ptr [esi+21E0h], 1
0x7AC059: mov     [esi+21E1h], bl
0x7AC05F: mov     [esi+21E2h], bl
0x7AC065: mov     byte ptr [esi+21E3h], 1
0x7AC06C: mov     byte ptr [esp+2Ch+var_4], 10h
0x7AC071: mov     ds:0B42CDDh, bl
0x7AC077: mov     [esp+2Ch+var_18], ecx
0x7AC07B: mov     [esp+2Ch+var_14], 1A3h
0x7AC083: mov     ecx, [esp+2Ch+var_18]
0x7AC087: add     ecx, 0FFFFFFFCh
0x7AC08A: call    sub_7A9C30
0x7AC08F: mov     eax, [esp+2Ch+var_18]
0x7AC093: mov     edx, [eax]
0x7AC095: mov     [eax+8], edx
0x7AC098: mov     [eax], ebx
0x7AC09A: mov     [eax+4], ebx
0x7AC09D: mov     [eax+0Ch], ebx
0x7AC0A0: add     eax, 14h
0x7AC0A3: sub     [esp+2Ch+var_14], 1
0x7AC0A8: mov     [esp+2Ch+var_18], eax
0x7AC0AC: jnz     short loc_7AC083
0x7AC0AE: mov     eax, [edi+4]
0x7AC0B1: cmp     eax, ebx
0x7AC0B3: jz      short loc_7AC0D1
0x7AC0B5: jmp     short loc_7AC0BB
0x7AC0B7: mov     eax, [esp+2Ch+var_14]
0x7AC0BB: mov     ecx, [eax]
0x7AC0BD: mov     edx, [edi]
0x7AC0BF: mov     [esp+2Ch+var_14], ecx
0x7AC0C3: push    eax
0x7AC0C4: mov     eax, [edx+8]
0x7AC0C7: mov     ecx, edi
0x7AC0C9: call    eax
0x7AC0CB: cmp     [esp+2Ch+var_14], ebx
0x7AC0CF: jnz     short loc_7AC0B7
0x7AC0D1: push    0C8h ; 'È'; Size
0x7AC0D6: mov     [edi+0Ch], ebx
0x7AC0D9: mov     [edi+4], ebx
0x7AC0DC: mov     [edi+8], ebx
0x7AC0DF: call    FormHeapAlloc
0x7AC0E4: add     esp, 4
0x7AC0E7: mov     [esi+21E8h], eax
0x7AC0ED: mov     [esi+21E4h], bx
0x7AC0F4: mov     word ptr [esi+21E6h], 32h ; '2'
0x7AC0FD: xor     eax, eax
0x7AC0FF: nop
0x7AC100: mov     ecx, [esi+21E8h]
0x7AC106: mov     [eax+ecx], ebx
0x7AC109: add     eax, 4
0x7AC10C: cmp     eax, 0C8h ; 'È'
0x7AC111: jl      short loc_7AC100
0x7AC113: lea     edi, [esi+21ECh]
0x7AC119: mov     ecx, edi
0x7AC11B: call    sub_7A9C30
0x7AC120: mov     edx, [edi+4]
0x7AC123: mov     [edi+0Ch], edx
0x7AC126: mov     [edi+4], ebx
0x7AC129: mov     [edi+8], ebx
0x7AC12C: mov     [edi+10h], ebx
0x7AC12F: lea     edi, [esi+2200h]
0x7AC135: mov     ecx, edi
0x7AC137: call    sub_7A9C30
0x7AC13C: mov     eax, [edi+4]
0x7AC13F: mov     [edi+0Ch], eax
0x7AC142: mov     [edi+4], ebx
0x7AC145: mov     [edi+8], ebx
0x7AC148: mov     [edi+10h], ebx
0x7AC14B: lea     edi, [esi+2214h]
0x7AC151: mov     ecx, edi
0x7AC153: call    sub_7A9C30
0x7AC158: mov     ecx, [edi+4]
0x7AC15B: mov     [edi+0Ch], ecx
0x7AC15E: mov     [edi+4], ebx
0x7AC161: mov     [edi+8], ebx
0x7AC164: mov     [edi+10h], ebx
0x7AC167: mov     edi, [ebp+4]
0x7AC16A: cmp     edi, ebx
0x7AC16C: jz      short loc_7AC183
0x7AC16E: mov     edi, edi
0x7AC170: mov     edx, [ebp+0]
0x7AC173: mov     eax, edi
0x7AC175: mov     edi, [edi]
0x7AC177: push    eax
0x7AC178: mov     eax, [edx+8]
0x7AC17B: mov     ecx, ebp
0x7AC17D: call    eax
0x7AC17F: cmp     edi, ebx
0x7AC181: jnz     short loc_7AC170
0x7AC183: lea     edi, [esi+90h]
0x7AC189: mov     [ebp+0Ch], ebx
0x7AC18C: mov     [ebp+4], ebx
0x7AC18F: mov     [ebp+8], ebx
0x7AC192: mov     ecx, edi
0x7AC194: mov     [esi+78h], ebx
0x7AC197: call    sub_7A9C30
0x7AC19C: mov     ecx, [edi+4]
0x7AC19F: mov     [edi+0Ch], ecx
0x7AC1A2: mov     [edi+4], ebx
0x7AC1A5: mov     [edi+8], ebx
0x7AC1A8: mov     [edi+10h], ebx
0x7AC1AB: lea     edi, [esi+7Ch]
0x7AC1AE: mov     ecx, edi
0x7AC1B0: call    sub_7A9C30
0x7AC1B5: mov     edx, [edi+4]
0x7AC1B8: lea     ebp, [esi+4Ch]
0x7AC1BB: mov     [edi+0Ch], edx
0x7AC1BE: mov     [edi+4], ebx
0x7AC1C1: mov     [edi+8], ebx
0x7AC1C4: mov     [edi+10h], ebx
0x7AC1C7: mov     edi, [ebp+4]
0x7AC1CA: cmp     edi, ebx
0x7AC1CC: jz      short loc_7AC1E3
0x7AC1CE: mov     edi, edi
0x7AC1D0: mov     edx, [ebp+0]
0x7AC1D3: mov     eax, edi
0x7AC1D5: mov     edi, [edi]
0x7AC1D7: push    eax
0x7AC1D8: mov     eax, [edx+8]
0x7AC1DB: mov     ecx, ebp
0x7AC1DD: call    eax
0x7AC1DF: cmp     edi, ebx
0x7AC1E1: jnz     short loc_7AC1D0
0x7AC1E3: mov     [ebp+0Ch], ebx
0x7AC1E6: mov     [ebp+4], ebx
0x7AC1E9: mov     [ebp+8], ebx
0x7AC1EC: lea     ebp, [esi+64h]
0x7AC1EF: mov     [esi+5Ch], ebx
0x7AC1F2: mov     [esi+60h], ebx
0x7AC1F5: mov     edi, [ebp+4]
0x7AC1F8: cmp     edi, ebx
0x7AC1FA: jz      short loc_7AC213
0x7AC1FC: lea     esp, [esp+0]
0x7AC200: mov     edx, [ebp+0]
0x7AC203: mov     eax, edi
0x7AC205: mov     edi, [edi]
0x7AC207: push    eax
0x7AC208: mov     eax, [edx+8]
0x7AC20B: mov     ecx, ebp
0x7AC20D: call    eax
0x7AC20F: cmp     edi, ebx
0x7AC211: jnz     short loc_7AC200
0x7AC213: fld1
0x7AC215: mov     [ebp+0Ch], ebx
0x7AC218: mov     [ebp+4], ebx
0x7AC21B: mov     [ebp+8], ebx
0x7AC21E: mov     [esi+74h], ebx
0x7AC221: fstp    dword ptr [esi+0C4h]
0x7AC227: fldz
0x7AC229: mov     [esi+0C0h], bl
0x7AC22F: mov     [esi+0BCh], ebx
0x7AC235: lea     eax, [esi+0CCh]
0x7AC23B: mov     ecx, 3
0x7AC240: fst     dword ptr [eax+4]
0x7AC243: mov     [eax-4], ebx
0x7AC246: mov     [eax], bl
0x7AC248: mov     [eax+8], ebx
0x7AC24B: mov     [eax+0Ch], ebx
0x7AC24E: add     eax, 14h
0x7AC251: sub     ecx, 1
0x7AC254: jnz     short loc_7AC240
0x7AC256: push    4; Size
0x7AC258: fstp    st
0x7AC25A: mov     [esi+223Ch], ebx
0x7AC260: mov     [esi+2240h], bl
0x7AC266: call    FormHeapAlloc
0x7AC26B: add     esp, 4
0x7AC26E: mov     [esp+2Ch+var_14], eax
0x7AC272: cmp     eax, ebx
0x7AC274: mov     byte ptr [esp+2Ch+var_4], 11h
0x7AC279: jz      short loc_7AC284
0x7AC27B: mov     ecx, eax
0x7AC27D: call    sub_7F5B50
0x7AC282: jmp     short loc_7AC286
0x7AC284: xor     eax, eax
0x7AC286: mov     [esi+2264h], eax
0x7AC28C: mov     [esi+2268h], bl
0x7AC292: mov     eax, esi
0x7AC294: mov     ecx, dword ptr [esp+2Ch+var_C]
0x7AC298: mov     large fs:0, ecx
0x7AC29F: pop     ecx
0x7AC2A0: pop     edi
0x7AC2A1: pop     esi
0x7AC2A2: pop     ebp
0x7AC2A3: pop     ebx
0x7AC2A4: add     esp, 18h
0x7AC2A7: retn
