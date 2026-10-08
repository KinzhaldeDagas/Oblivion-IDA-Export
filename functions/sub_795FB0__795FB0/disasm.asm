0x795FB0: push    0FFFFFFFFh; CIndexedGeometry constructor: stock 0x118-byte geometry writer; records retain-texcoord flag, CWindEngine pointer, vertex-weighting state, 16-bit vertex/LOD/strip counters, index strip vectors, and attribute vectors.
0x795FB2: push    offset SEH_795FB0
0x795FB7: mov     eax, large fs:0
0x795FBD: push    eax
0x795FBE: push    ecx
0x795FBF: mov     eax, ds:0B30AACh
0x795FC4: xor     eax, esp
0x795FC6: push    eax
0x795FC7: lea     eax, [esp+14h+var_C]
0x795FCB: mov     large fs:0, eax
0x795FD1: mov     eax, ecx
0x795FD3: mov     cl, [esp+14h+retainTexcoords]
0x795FD7: mov     edx, [esp+14h+windEngine]
0x795FDB: mov     [eax], cl
0x795FDD: xor     ecx, ecx
0x795FDF: mov     [eax+4], edx
0x795FE2: mov     [eax+8], cl
0x795FE5: mov     [eax+9], cl
0x795FE8: mov     [eax+0Ch], ecx
0x795FEB: mov     [eax+10h], cx
0x795FEF: mov     byte ptr [eax+12h], 1
0x795FF3: mov     dword ptr [eax+14h], 2
0x795FFA: mov     [eax+20h], cx
0x795FFE: mov     [eax+22h], cx
0x796002: mov     [eax+24h], cx
0x796006: mov     [eax+26h], cx
0x79600A: mov     [eax+2Ch], ecx
0x79600D: mov     [eax+30h], ecx
0x796010: mov     [eax+34h], ecx
0x796013: mov     [eax+3Ch], ecx
0x796016: mov     [eax+40h], ecx
0x796019: mov     [eax+44h], ecx
0x79601C: mov     [eax+4Ch], ecx
0x79601F: mov     [eax+50h], ecx
0x796022: mov     [eax+54h], ecx
0x796025: mov     [eax+5Ch], ecx
0x796028: mov     [eax+60h], ecx
0x79602B: mov     [eax+64h], ecx
0x79602E: mov     [eax+6Ch], ecx
0x796031: mov     [eax+70h], ecx
0x796034: mov     [eax+74h], ecx
0x796037: mov     [eax+7Ch], ecx
0x79603A: mov     [eax+80h], ecx
0x796040: mov     [eax+84h], ecx
0x796046: mov     [eax+8Ch], ecx
0x79604C: mov     [eax+90h], ecx
0x796052: mov     [eax+94h], ecx
0x796058: mov     [eax+9Ch], ecx
0x79605E: mov     [eax+0A0h], ecx
0x796064: mov     [eax+0A4h], ecx
0x79606A: mov     [eax+0ACh], ecx
0x796070: mov     [eax+0B0h], ecx
0x796076: mov     [eax+0B4h], ecx
0x79607C: mov     [eax+0BCh], ecx
0x796082: mov     [eax+0C0h], ecx
0x796088: mov     [eax+0C4h], ecx
0x79608E: mov     [eax+0CCh], ecx
0x796094: mov     [eax+0D0h], ecx
0x79609A: mov     [eax+0D4h], ecx
0x7960A0: mov     [eax+0DCh], ecx
0x7960A6: mov     [eax+0E0h], ecx
0x7960AC: mov     [eax+0E4h], ecx
0x7960B2: mov     [eax+0ECh], ecx
0x7960B8: mov     [eax+0F0h], ecx
0x7960BE: mov     [eax+0F4h], ecx
0x7960C4: mov     [eax+0FCh], ecx
0x7960CA: mov     [eax+100h], ecx
0x7960D0: mov     [eax+104h], ecx
0x7960D6: mov     [eax+10Ch], ecx
0x7960DC: mov     [eax+110h], ecx
0x7960E2: mov     [eax+114h], ecx
0x7960E8: mov     ecx, [esp+14h+var_C]
0x7960EC: mov     large fs:0, ecx
0x7960F3: pop     ecx
0x7960F4: add     esp, 10h
0x7960F7: retn    8
0x9CBEA0: mov     ecx, [ebp-10h]
0x9CBEA3: add     ecx, 28h ; '('; this
0x9CBEA6: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBEAB: mov     ecx, [ebp-10h]
0x9CBEAE: add     ecx, 38h ; '8'; this
0x9CBEB1: jmp     OB_stVector_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Full destructor for an outer vector of 0x10-byte vector owners. Destroys every inner owner, frees outer storage, and clears the triplet; structurally shared by multiple specializations.
0x9CBEB6: mov     ecx, [ebp-10h]
0x9CBEB9: add     ecx, 48h ; 'H'; this
0x9CBEBC: jmp     OB_stVector_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Full destructor for an outer vector of 0x10-byte vector owners. Destroys every inner owner, frees outer storage, and clears the triplet; structurally shared by multiple specializations.
0x9CBEC1: mov     ecx, [ebp-10h]
0x9CBEC4: add     ecx, 58h ; 'X'; this
0x9CBEC7: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBECC: mov     ecx, [ebp-10h]
0x9CBECF: add     ecx, 68h ; 'h'; this
0x9CBED2: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBED7: mov     ecx, [ebp-10h]
0x9CBEDA: add     ecx, 78h ; 'x'; this
0x9CBEDD: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBEE2: mov     ecx, [ebp-10h]
0x9CBEE5: add     ecx, 88h ; 'ˆ'; this
0x9CBEEB: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBEF0: mov     ecx, [ebp-10h]
0x9CBEF3: add     ecx, 98h ; '˜'; this
0x9CBEF9: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBEFE: mov     ecx, [ebp-10h]
0x9CBF01: add     ecx, 0A8h ; '¨'; this
0x9CBF07: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBF0C: mov     ecx, [ebp-10h]
0x9CBF0F: add     ecx, 0B8h ; '¸'; this
0x9CBF15: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBF1A: mov     ecx, [ebp-10h]
0x9CBF1D: add     ecx, 0C8h ; 'È'; this
0x9CBF23: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBF28: mov     ecx, [ebp-10h]
0x9CBF2B: add     ecx, 0D8h ; 'Ø'; this
0x9CBF31: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBF36: mov     ecx, [ebp-10h]
0x9CBF39: add     ecx, 0E8h ; 'è'; this
0x9CBF3F: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBF44: mov     ecx, [ebp-10h]
0x9CBF47: add     ecx, 0F8h ; 'ø'; this
0x9CBF4D: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBF52: mov     edx, dword ptr [esp+retainTexcoords]
0x9CBF56: lea     eax, [edx-4]
0x9CBF59: mov     ecx, [edx-8]
0x9CBF5C: xor     ecx, eax
0x9CBF5E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBF63: mov     eax, offset stru_AF4EBC
0x9CBF68: jmp     ___CxxFrameHandler3
