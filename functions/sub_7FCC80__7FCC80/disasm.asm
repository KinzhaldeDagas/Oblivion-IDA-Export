0x7FCC80: push    0FFFFFFFFh; Oblivion Lighting30Shader constant-map builder. The principal SM3 map uses grouped constants; alternate/projected maps explicitly bind FogParam/FogColor, shadow projection, material, eye, light, skinning, and texture-effect data.
0x7FCC82: push    offset MobileObject_LoadModifiedForm_SEH
0x7FCC87: mov     eax, large fs:0
0x7FCC8D: push    eax
0x7FCC8E: push    ecx
0x7FCC8F: push    ebx
0x7FCC90: push    ebp
0x7FCC91: push    esi
0x7FCC92: push    edi
0x7FCC93: mov     eax, ds:0B30AACh
0x7FCC98: xor     eax, esp
0x7FCC9A: push    eax
0x7FCC9B: lea     eax, [esp+24h+var_C]
0x7FCC9F: mov     large fs:0, eax
0x7FCCA5: mov     ebx, ecx
0x7FCCA7: cmp     dword ptr [ebx+30h], 0
0x7FCCAB: lea     esi, [ebx+30h]
0x7FCCAE: jnz     loc_7FCEE5
0x7FCCB4: push    34h ; '4'; Size
0x7FCCB6: call    FormHeapAlloc
0x7FCCBB: add     esp, 4
0x7FCCBE: mov     [esp+24h+var_10], eax
0x7FCCC2: test    eax, eax
0x7FCCC4: mov     [esp+24h+var_4], 0
0x7FCCCC: jz      short loc_7FCCDB
0x7FCCCE: mov     ecx, [ebx+14h]
0x7FCCD1: push    ecx
0x7FCCD2: mov     ecx, eax
0x7FCCD4: call    NiD3DShaderCostantMapVertex__Construct
0x7FCCD9: jmp     short loc_7FCCDD
0x7FCCDB: xor     eax, eax
0x7FCCDD: push    eax; a2
0x7FCCDE: mov     ecx, esi; this
0x7FCCE0: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7FCCE8: call    NiSmartPointer_Set??
0x7FCCED: mov     ecx, [esi]
0x7FCCEF: mov     edx, [ecx]
0x7FCCF1: mov     eax, [edx+1Ch]
0x7FCCF4: push    offset EmptyString
0x7FCCF9: push    0
0x7FCCFB: push    20000009h
0x7FCD00: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x7FCD05: call    eax; Add automatic main-vertex-map WorldViewProjTranspose at VS c0 (non-skinned matrix c0..c3).
0x7FCD07: mov     ecx, [esi]
0x7FCD09: mov     edx, [ecx]
0x7FCD0B: mov     eax, [edx+38h]
0x7FCD0E: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x7FCD13: call    eax
0x7FCD15: mov     edi, eax
0x7FCD17: mov     eax, ds:0B46B98h
0x7FCD1C: cmp     eax, edi
0x7FCD1E: jz      short loc_7FCD57
0x7FCD20: test    eax, eax
0x7FCD22: jz      short loc_7FCD43
0x7FCD24: mov     ebp, eax
0x7FCD26: add     eax, 4
0x7FCD29: push    eax; lpAddend
0x7FCD2A: call    dword ptr ds:0A2807Ch
0x7FCD30: test    eax, eax
0x7FCD32: jnz     short loc_7FCD43
0x7FCD34: test    ebp, ebp
0x7FCD36: jz      short loc_7FCD43
0x7FCD38: mov     edx, [ebp+0]
0x7FCD3B: mov     eax, [edx]
0x7FCD3D: push    1
0x7FCD3F: mov     ecx, ebp
0x7FCD41: call    eax
0x7FCD43: test    edi, edi
0x7FCD45: mov     ds:0B46B98h, edi; Retain the WorldViewProjTranspose constant-map entry for selector-mask activation.
0x7FCD4B: jz      short loc_7FCD57
0x7FCD4D: add     edi, 4
0x7FCD50: push    edi; lpAddend
0x7FCD51: call    dword ptr ds:0A28078h
0x7FCD57: mov     ecx, [esi]
0x7FCD59: mov     edx, [ecx]
0x7FCD5B: mov     eax, [edx+1Ch]
0x7FCD5E: push    offset EmptyString
0x7FCD63: push    1
0x7FCD65: push    20000009h
0x7FCD6A: push    offset aSkinworldviewp; "SkinWorldViewProjTranspose"
0x7FCD6F: call    eax; Add automatic SkinWorldViewProjTranspose at VS c1 (skinned matrix c1..c4).
0x7FCD71: mov     ecx, [esi]
0x7FCD73: mov     edx, [ecx]
0x7FCD75: mov     eax, [edx+38h]
0x7FCD78: push    offset aSkinworldviewp; "SkinWorldViewProjTranspose"
0x7FCD7D: call    eax
0x7FCD7F: push    eax; a2
0x7FCD80: mov     ecx, offset unk_B46B9C; this
0x7FCD85: call    NiSmartPointer_Set??; Retain the SkinWorldViewProjTranspose entry for selector-mask activation.
0x7FCD8A: mov     ecx, [esi]
0x7FCD8C: mov     edx, [ecx]
0x7FCD8E: mov     eax, [edx+1Ch]
0x7FCD91: push    offset EmptyString
0x7FCD96: push    5
0x7FCD98: push    20000009h
0x7FCD9D: push    offset aWorldviewtrans; "WorldViewTranspose"
0x7FCDA2: call    eax; Add automatic WorldViewTranspose at VS c5.
0x7FCDA4: mov     ecx, [esi]
0x7FCDA6: mov     edx, [ecx]
0x7FCDA8: mov     eax, [edx+38h]
0x7FCDAB: push    offset aWorldviewtrans; "WorldViewTranspose"
0x7FCDB0: call    eax
0x7FCDB2: push    eax; a2
0x7FCDB3: mov     ecx, offset unk_B46BA4; this
0x7FCDB8: call    NiSmartPointer_Set??; Retain the WorldViewTranspose entry for selector-mask activation.
0x7FCDBD: mov     ecx, [esi]
0x7FCDBF: mov     edx, [ecx]
0x7FCDC1: mov     eax, [edx+1Ch]
0x7FCDC4: push    offset EmptyString
0x7FCDC9: push    6
0x7FCDCB: push    20000009h
0x7FCDD0: push    offset aSkinworldviewt; "SkinWorldViewTranspose"
0x7FCDD5: call    eax; Add automatic SkinWorldViewTranspose at VS c6.
0x7FCDD7: mov     ecx, [esi]
0x7FCDD9: mov     edx, [ecx]
0x7FCDDB: mov     eax, [edx+38h]
0x7FCDDE: push    offset aSkinworldviewt; "SkinWorldViewTranspose"
0x7FCDE3: call    eax
0x7FCDE5: push    eax; a2
0x7FCDE6: mov     ecx, offset unk_B46BA8; this
0x7FCDEB: call    NiSmartPointer_Set??; Retain the SkinWorldViewTranspose entry for selector-mask activation.
0x7FCDF0: mov     ecx, [esi]
0x7FCDF2: mov     edx, [ecx]
0x7FCDF4: mov     eax, [edx+18h]
0x7FCDF7: push    0
0x7FCDF9: push    0
0x7FCDFB: push    0
0x7FCDFD: push    0
0x7FCDFF: push    0
0x7FCE01: push    36h ; '6'
0x7FCE03: push    1Fh
0x7FCE05: push    120000h
0x7FCE0A: push    20000009h
0x7FCE0F: push    offset aBonematrix3; "BoneMatrix3"
0x7FCE14: call    eax; Add automatic BoneMatrix3 at VS c31, count 54 registers (18 affine bone matrices at three float4 registers each).
0x7FCE16: mov     ecx, [esi]
0x7FCE18: mov     edx, [ecx]
0x7FCE1A: mov     eax, [edx+38h]
0x7FCE1D: push    offset aBonematrix3; "BoneMatrix3"
0x7FCE22: call    eax
0x7FCE24: push    eax; a2
0x7FCE25: mov     ecx, offset unk_B46BA0; this
0x7FCE2A: call    NiSmartPointer_Set??; Retain the BoneMatrix3 entry for selector-mask activation.
0x7FCE2F: mov     ecx, [esi]
0x7FCE31: mov     edx, [ecx]
0x7FCE33: push    0
0x7FCE35: push    offset unk_B46D68
0x7FCE3A: push    4
0x7FCE3C: push    150h
0x7FCE41: push    offset EmptyString
0x7FCE46: push    15h
0x7FCE48: push    0Ah
0x7FCE4A: push    0
0x7FCE4C: push    10000009h
0x7FCE51: mov     eax, [edx+18h]
0x7FCE54: push    offset aConstantgroup; "ConstantGroup"
0x7FCE59: call    eax; Add Lighting30 vertex ConstantGroup at VS c10, count 21, backed by global slot 0x3D5.
0x7FCE5B: mov     ecx, [esi]
0x7FCE5D: mov     edx, [ecx]
0x7FCE5F: mov     eax, [edx+18h]
0x7FCE62: push    0
0x7FCE64: push    offset unk_B46218
0x7FCE69: push    4
0x7FCE6B: push    80h ; '€'
0x7FCE70: push    offset EmptyString
0x7FCE75: push    8
0x7FCE77: push    20h ; ' '
0x7FCE79: push    0
0x7FCE7B: push    10000009h
0x7FCE80: push    offset aDecalFade; "decal fade"
0x7FCE85: call    eax
0x7FCE87: mov     ecx, [esi]
0x7FCE89: mov     edx, [ecx]
0x7FCE8B: mov     eax, [edx+38h]
0x7FCE8E: push    offset aDecalFade; "decal fade"
0x7FCE93: call    eax
0x7FCE95: push    eax; a2
0x7FCE96: mov     ecx, offset g_Lighting30_DecalFadeConstantEntry; this
0x7FCE9B: call    NiSmartPointer_Set??
0x7FCEA0: mov     ecx, [esi]
0x7FCEA2: mov     edx, [ecx]
0x7FCEA4: mov     eax, [edx+18h]
0x7FCEA7: push    0
0x7FCEA9: push    offset unk_B46298
0x7FCEAE: push    4
0x7FCEB0: push    200h
0x7FCEB5: push    offset EmptyString
0x7FCEBA: push    20h ; ' '
0x7FCEBC: push    28h ; '('
0x7FCEBE: push    0
0x7FCEC0: push    10000009h
0x7FCEC5: push    offset aDecalProj; "decal proj"
0x7FCECA: call    eax
0x7FCECC: mov     ecx, [esi]
0x7FCECE: mov     edx, [ecx]
0x7FCED0: mov     eax, [edx+38h]
0x7FCED3: push    offset aDecalProj; "decal proj"
0x7FCED8: call    eax
0x7FCEDA: push    eax; a2
0x7FCEDB: mov     ecx, offset g_Lighting30_DecalProjectionConstantEntry; this
0x7FCEE0: call    NiSmartPointer_Set??
0x7FCEE5: cmp     dword ptr [ebx+2Ch], 0
0x7FCEE9: lea     edi, [ebx+2Ch]
0x7FCEEC: jnz     short loc_7FCF67
0x7FCEEE: push    34h ; '4'; Size
0x7FCEF0: call    FormHeapAlloc
0x7FCEF5: add     esp, 4
0x7FCEF8: mov     [esp+24h+var_10], eax
0x7FCEFC: test    eax, eax
0x7FCEFE: mov     [esp+24h+var_4], 1
0x7FCF06: jz      short loc_7FCF15
0x7FCF08: mov     ecx, [ebx+14h]
0x7FCF0B: push    ecx
0x7FCF0C: mov     ecx, eax
0x7FCF0E: call    NiD3DShaderCostantMapPixel__Construct
0x7FCF13: jmp     short loc_7FCF17
0x7FCF15: xor     eax, eax
0x7FCF17: push    eax; a2
0x7FCF18: mov     ecx, edi; this
0x7FCF1A: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7FCF22: call    NiSmartPointer_Set??
0x7FCF27: mov     ecx, [edi]
0x7FCF29: mov     edx, [ecx]
0x7FCF2B: mov     eax, [edx+18h]
0x7FCF2E: push    0
0x7FCF30: push    offset flt_B46F78; DeferredRendering near-wall fix: native Lighting30 pixel ConstantGroup remains c0..c48. Plugin scratch constants c220-c222 are outside this native group; c222 carries pixel EyePosition c1 plus an enable flag for specular-family deferred position reconstruction.
0x7FCF35: push    4
0x7FCF37: push    310h
0x7FCF3C: push    offset EmptyString
0x7FCF41: push    31h ; '1'
0x7FCF43: push    0
0x7FCF45: push    0
0x7FCF47: push    10000009h
0x7FCF4C: push    offset aConstantgroup; "ConstantGroup"
0x7FCF51: call    eax; Build Lighting30 pixel ConstantGroup at PS c0, count 49, backed by global slot 0x459.
0x7FCF53: mov     ecx, [edi]
0x7FCF55: mov     edx, [ecx]
0x7FCF57: mov     eax, [edx+38h]
0x7FCF5A: push    offset aConstantgroup; "ConstantGroup"
0x7FCF5F: call    eax
0x7FCF61: mov     [ebx+9Ch], eax
0x7FCF67: mov     ebp, [ebx+88h]
0x7FCF6D: cmp     ebp, [esi]
0x7FCF6F: jz      short loc_7FCFA8
0x7FCF71: test    ebp, ebp
0x7FCF73: jz      short loc_7FCF92
0x7FCF75: lea     ecx, [ebp+4]
0x7FCF78: push    ecx; lpAddend
0x7FCF79: call    dword ptr ds:0A2807Ch
0x7FCF7F: test    eax, eax
0x7FCF81: jnz     short loc_7FCF92
0x7FCF83: test    ebp, ebp
0x7FCF85: jz      short loc_7FCF92
0x7FCF87: mov     edx, [ebp+0]
0x7FCF8A: mov     eax, [edx]
0x7FCF8C: push    1
0x7FCF8E: mov     ecx, ebp
0x7FCF90: call    eax
0x7FCF92: mov     esi, [esi]
0x7FCF94: test    esi, esi
0x7FCF96: mov     [ebx+88h], esi
0x7FCF9C: jz      short loc_7FCFA8
0x7FCF9E: add     esi, 4
0x7FCFA1: push    esi; lpAddend
0x7FCFA2: call    dword ptr ds:0A28078h
0x7FCFA8: mov     esi, [ebx+84h]
0x7FCFAE: cmp     esi, [edi]
0x7FCFB0: jz      short loc_7FCFE8
0x7FCFB2: test    esi, esi
0x7FCFB4: jz      short loc_7FCFD2
0x7FCFB6: lea     ecx, [esi+4]
0x7FCFB9: push    ecx; lpAddend
0x7FCFBA: call    dword ptr ds:0A2807Ch
0x7FCFC0: test    eax, eax
0x7FCFC2: jnz     short loc_7FCFD2
0x7FCFC4: test    esi, esi
0x7FCFC6: jz      short loc_7FCFD2
0x7FCFC8: mov     edx, [esi]
0x7FCFCA: mov     eax, [edx]
0x7FCFCC: push    1
0x7FCFCE: mov     ecx, esi
0x7FCFD0: call    eax
0x7FCFD2: mov     edi, [edi]
0x7FCFD4: test    edi, edi
0x7FCFD6: mov     [ebx+84h], edi
0x7FCFDC: jz      short loc_7FCFE8
0x7FCFDE: add     edi, 4
0x7FCFE1: push    edi; lpAddend
0x7FCFE2: call    dword ptr ds:0A28078h
0x7FCFE8: cmp     dword ptr [ebx+80h], 0
0x7FCFEF: lea     esi, [ebx+80h]
0x7FCFF5: jnz     loc_7FD184
0x7FCFFB: push    34h ; '4'; Size
0x7FCFFD: call    FormHeapAlloc
0x7FD002: add     esp, 4
0x7FD005: mov     [esp+24h+var_10], eax
0x7FD009: test    eax, eax
0x7FD00B: mov     [esp+24h+var_4], 2
0x7FD013: jz      short loc_7FD022
0x7FD015: mov     ecx, [ebx+14h]
0x7FD018: push    ecx
0x7FD019: mov     ecx, eax
0x7FD01B: call    NiD3DShaderCostantMapVertex__Construct
0x7FD020: jmp     short loc_7FD024
0x7FD022: xor     eax, eax
0x7FD024: push    eax; a2
0x7FD025: mov     ecx, esi; this
0x7FD027: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7FD02F: call    NiSmartPointer_Set??
0x7FD034: mov     ecx, [esi]
0x7FD036: mov     edx, [ecx]
0x7FD038: mov     eax, [edx+1Ch]
0x7FD03B: push    offset EmptyString
0x7FD040: push    0
0x7FD042: push    20000009h
0x7FD047: push    offset aWorldviewprojt; "WorldViewProjTranspose"
0x7FD04C: call    eax
0x7FD04E: mov     ecx, [esi]
0x7FD050: mov     edx, [ecx]
0x7FD052: mov     eax, [edx+1Ch]
0x7FD055: push    offset EmptyString
0x7FD05A: push    4
0x7FD05C: push    20000009h
0x7FD061: push    offset aSkinworldviewp; "SkinWorldViewProjTranspose"
0x7FD066: call    eax
0x7FD068: mov     ecx, [esi]
0x7FD06A: mov     edx, [ecx]
0x7FD06C: mov     eax, [edx+18h]
0x7FD06F: push    0
0x7FD071: push    0
0x7FD073: push    0
0x7FD075: push    0
0x7FD077: push    0
0x7FD079: push    36h ; '6'
0x7FD07B: push    0Eh
0x7FD07D: push    120000h
0x7FD082: push    20000009h
0x7FD087: push    offset aBonematrix3; "BoneMatrix3"
0x7FD08C: call    eax
0x7FD08E: mov     ecx, [esi]
0x7FD090: mov     edx, [ecx]
0x7FD092: mov     eax, [edx+18h]
0x7FD095: push    0
0x7FD097: push    offset unk_B46DA8
0x7FD09C: push    4
0x7FD09E: push    10h
0x7FD0A0: push    offset EmptyString
0x7FD0A5: push    1
0x7FD0A7: push    8
0x7FD0A9: push    0
0x7FD0AB: push    10000007h
0x7FD0B0: push    offset aEyeposition; "EyePosition"
0x7FD0B5: call    eax; DeferredRendering near-wall audit: primary Lighting30 object/projected vertex shaders observed in Oblivion bytecode do not bind EyePosition here; do not use this vertex c8 map for primary G-buffer position. Specular-family pixel c1 is the authoritative eye source.
0x7FD0B7: mov     ecx, [esi]
0x7FD0B9: mov     edx, [ecx]
0x7FD0BB: mov     eax, [edx+18h]
0x7FD0BE: push    0
0x7FD0C0: push    offset unk_B46B3C
0x7FD0C5: push    4
0x7FD0C7: push    4
0x7FD0C9: push    offset EmptyString
0x7FD0CE: push    1
0x7FD0D0: push    9
0x7FD0D2: push    0
0x7FD0D4: push    10000004h
0x7FD0D9: push    offset aUOffset; "U Offset"
0x7FD0DE: call    eax
0x7FD0E0: mov     ecx, [esi]
0x7FD0E2: mov     edx, [ecx]
0x7FD0E4: mov     eax, [edx+18h]
0x7FD0E7: push    0
0x7FD0E9: push    offset unk_B46B40
0x7FD0EE: push    4
0x7FD0F0: push    4
0x7FD0F2: push    offset EmptyString
0x7FD0F7: push    1
0x7FD0F9: push    0Ah
0x7FD0FB: push    0
0x7FD0FD: push    10000004h
0x7FD102: push    offset aVOffset; "V Offset"
0x7FD107: call    eax
0x7FD109: mov     ecx, [esi]
0x7FD10B: mov     edx, [ecx]
0x7FD10D: push    0
0x7FD10F: push    offset unk_B46B44
0x7FD114: push    4
0x7FD116: mov     eax, [edx+18h]
0x7FD119: push    4
0x7FD11B: push    offset EmptyString
0x7FD120: push    1
0x7FD122: push    0Bh
0x7FD124: push    0
0x7FD126: push    10000004h
0x7FD12B: push    offset aInvbounddiamet; "InvBoundDiameter"
0x7FD130: call    eax
0x7FD132: mov     ecx, [esi]
0x7FD134: mov     edx, [ecx]
0x7FD136: mov     eax, [edx+18h]
0x7FD139: push    0
0x7FD13B: push    offset unk_B46B88
0x7FD140: push    4
0x7FD142: push    10h
0x7FD144: push    offset EmptyString
0x7FD149: push    1
0x7FD14B: push    0Ch
0x7FD14D: push    0
0x7FD14F: push    10000007h
0x7FD154: push    offset aFogparam; "FogParam"
0x7FD159: call    eax; Fog constant-map decode: Lighting30 TexEffect alternate declares FogParam at vs c12 from B45E14[0x35D] / B46B88; writer is 0x7FEE40.
0x7FD15B: mov     ecx, [esi]
0x7FD15D: mov     edx, [ecx]
0x7FD15F: mov     eax, [edx+18h]
0x7FD162: push    0
0x7FD164: push    offset unk_B46B78
0x7FD169: push    4
0x7FD16B: push    10h
0x7FD16D: push    offset EmptyString
0x7FD172: push    1
0x7FD174: push    0Dh
0x7FD176: push    0
0x7FD178: push    10000007h
0x7FD17D: push    offset aFogcolor; "FogColor"
0x7FD182: call    eax; Fog constant-map decode: Lighting30 TexEffect alternate declares FogColor at vs c13 from B45E14[0x359] / B46B78; writer is 0x7FEE40.
0x7FD184: cmp     dword ptr [ebx+7Ch], 0
0x7FD188: lea     esi, [ebx+7Ch]
0x7FD18B: jnz     loc_7FD245
0x7FD191: push    34h ; '4'; Size
0x7FD193: call    FormHeapAlloc
0x7FD198: add     esp, 4
0x7FD19B: mov     [esp+24h+var_10], eax
0x7FD19F: test    eax, eax
0x7FD1A1: mov     [esp+24h+var_4], 3
0x7FD1A9: jz      short loc_7FD1B8
0x7FD1AB: mov     ecx, [ebx+14h]
0x7FD1AE: push    ecx
0x7FD1AF: mov     ecx, eax
0x7FD1B1: call    NiD3DShaderCostantMapPixel__Construct
0x7FD1B6: jmp     short loc_7FD1BA
0x7FD1B8: xor     eax, eax
0x7FD1BA: push    eax; a2
0x7FD1BB: mov     ecx, esi; this
0x7FD1BD: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7FD1C5: call    NiSmartPointer_Set??
0x7FD1CA: mov     ecx, [esi]
0x7FD1CC: mov     edx, [ecx]
0x7FD1CE: mov     eax, [edx+18h]
0x7FD1D1: push    0
0x7FD1D3: push    offset unk_B46B48; Fog decode: Fill Color declaration is serviced by TexEffect writer 0x7FEE40.
0x7FD1D8: push    4
0x7FD1DA: push    10h
0x7FD1DC: push    offset EmptyString
0x7FD1E1: push    1
0x7FD1E3: push    0
0x7FD1E5: push    0
0x7FD1E7: push    10000007h
0x7FD1EC: push    offset aFillColor; "Fill Color"
0x7FD1F1: call    eax
0x7FD1F3: mov     ecx, [esi]
0x7FD1F5: mov     edx, [ecx]
0x7FD1F7: mov     eax, [edx+18h]
0x7FD1FA: push    0
0x7FD1FC: push    offset unk_B46B58; Fog decode: Rim Color declaration is serviced by TexEffect writer 0x7FEE40.
0x7FD201: push    4
0x7FD203: push    10h
0x7FD205: push    offset EmptyString
0x7FD20A: push    1
0x7FD20C: push    1
0x7FD20E: push    0
0x7FD210: push    10000007h
0x7FD215: push    offset aRimColor; "Rim Color"
0x7FD21A: call    eax
0x7FD21C: mov     ecx, [esi]
0x7FD21E: mov     edx, [ecx]
0x7FD220: mov     eax, [edx+18h]
0x7FD223: push    0
0x7FD225: push    offset unk_B46B68; Fog decode: fVars declaration is serviced by TexEffect writer 0x7FEE40.
0x7FD22A: push    4
0x7FD22C: push    10h
0x7FD22E: push    offset EmptyString
0x7FD233: push    1
0x7FD235: push    2
0x7FD237: push    0
0x7FD239: push    10000007h
0x7FD23E: push    offset aVars; "Vars"
0x7FD243: call    eax
0x7FD245: mov     ecx, dword ptr [esp+24h+var_C]
0x7FD249: mov     large fs:0, ecx
0x7FD250: pop     ecx
0x7FD251: pop     edi
0x7FD252: pop     esi
0x7FD253: pop     ebp
0x7FD254: pop     ebx
0x7FD255: add     esp, 10h
0x7FD258: retn
0x9D05C0: mov     eax, [ebp-10h]; Microsoft VisualC 2-14/net runtime
0x9D05C3: push    eax
0x9D05C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D05C9: pop     ecx
0x9D05CA: retn
0x9D05CB: mov     eax, [ebp-10h]
0x9D05CE: push    eax
0x9D05CF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D05D4: pop     ecx
0x9D05D5: retn
0x9D05D6: mov     eax, [ebp-10h]
0x9D05D9: push    eax
0x9D05DA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D05DF: pop     ecx
0x9D05E0: retn
0x9D05E1: mov     eax, [ebp-10h]
0x9D05E4: push    eax
0x9D05E5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D05EA: pop     ecx
0x9D05EB: retn
0x9D05EC: mov     edx, [esp+currentFlags]
0x9D05F0: lea     eax, [edx-14h]
0x9D05F3: mov     ecx, [edx-18h]
0x9D05F6: xor     ecx, eax
0x9D05F8: call    @__security_check_cookie@4
0x9D05FD: mov     eax, offset stru_AF8F64
0x9D0602: jmp     ___CxxFrameHandler3
