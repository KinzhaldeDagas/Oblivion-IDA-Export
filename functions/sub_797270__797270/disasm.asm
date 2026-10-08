0x797270: push    0FFFFFFFFh; OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry destructor releases CPU-wind state, owned per-strip unsigned-short buffers, nested length/pointer vectors, triangle counts, and all vertex-attribute vector storage.
0x797272: push    offset SEH_797270
0x797277: mov     eax, large fs:0
0x79727D: push    eax
0x79727E: push    ecx
0x79727F: push    ebx
0x797280: push    esi
0x797281: push    edi
0x797282: mov     eax, ds:0B30AACh
0x797287: xor     eax, esp
0x797289: push    eax
0x79728A: lea     eax, [esp+20h+var_C]
0x79728E: mov     large fs:0, eax
0x797294: mov     esi, ecx
0x797296: mov     [esp+20h+var_10], esi
0x79729A: mov     eax, [esi+0Ch]
0x79729D: push    eax
0x79729E: mov     [esp+24h+var_4], 0Eh
0x7972A6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7972AB: xor     edi, edi
0x7972AD: add     esp, 4
0x7972B0: mov     ecx, esi; this
0x7972B2: mov     [esi+0Ch], edi
0x7972B5: call    OB_CIndexedGeometry_DeleteIndexData_010201A0; OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry::DeleteIndexData frees every owned unsigned-short strip buffer, nulls the pointer slots, clears each inner pointer vector, then empties the per-LOD strip container.
0x7972BA: mov     eax, [esi+10Ch]
0x7972C0: cmp     eax, edi
0x7972C2: jz      short loc_7972CD
0x7972C4: push    eax
0x7972C5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7972CA: add     esp, 4
0x7972CD: mov     [esi+10Ch], edi
0x7972D3: mov     [esi+110h], edi
0x7972D9: mov     [esi+114h], edi
0x7972DF: mov     eax, [esi+0FCh]
0x7972E5: cmp     eax, edi
0x7972E7: jz      short loc_7972F2
0x7972E9: push    eax
0x7972EA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7972EF: add     esp, 4
0x7972F2: mov     [esi+0FCh], edi
0x7972F8: mov     [esi+100h], edi
0x7972FE: mov     [esi+104h], edi
0x797304: mov     eax, [esi+0ECh]
0x79730A: cmp     eax, edi
0x79730C: jz      short loc_797317
0x79730E: push    eax
0x79730F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x797314: add     esp, 4
0x797317: mov     [esi+0ECh], edi
0x79731D: mov     [esi+0F0h], edi
0x797323: mov     [esi+0F4h], edi
0x797329: mov     eax, [esi+0DCh]
0x79732F: cmp     eax, edi
0x797331: jz      short loc_79733C
0x797333: push    eax
0x797334: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x797339: add     esp, 4
0x79733C: mov     [esi+0DCh], edi
0x797342: mov     [esi+0E0h], edi
0x797348: mov     [esi+0E4h], edi
0x79734E: mov     eax, [esi+0CCh]
0x797354: cmp     eax, edi
0x797356: jz      short loc_797361
0x797358: push    eax
0x797359: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79735E: add     esp, 4
0x797361: mov     [esi+0CCh], edi
0x797367: mov     [esi+0D0h], edi
0x79736D: mov     [esi+0D4h], edi
0x797373: mov     eax, [esi+0BCh]
0x797379: cmp     eax, edi
0x79737B: jz      short loc_797386
0x79737D: push    eax
0x79737E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x797383: add     esp, 4
0x797386: mov     [esi+0BCh], edi
0x79738C: mov     [esi+0C0h], edi
0x797392: mov     [esi+0C4h], edi
0x797398: mov     eax, [esi+0ACh]
0x79739E: cmp     eax, edi
0x7973A0: jz      short loc_7973AB
0x7973A2: push    eax
0x7973A3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7973A8: add     esp, 4
0x7973AB: mov     [esi+0ACh], edi
0x7973B1: mov     [esi+0B0h], edi
0x7973B7: mov     [esi+0B4h], edi
0x7973BD: mov     eax, [esi+9Ch]
0x7973C3: cmp     eax, edi
0x7973C5: jz      short loc_7973D0
0x7973C7: push    eax
0x7973C8: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7973CD: add     esp, 4
0x7973D0: mov     [esi+9Ch], edi
0x7973D6: mov     [esi+0A0h], edi
0x7973DC: mov     [esi+0A4h], edi
0x7973E2: mov     eax, [esi+8Ch]
0x7973E8: cmp     eax, edi
0x7973EA: jz      short loc_7973F5
0x7973EC: push    eax
0x7973ED: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7973F2: add     esp, 4
0x7973F5: mov     [esi+8Ch], edi
0x7973FB: mov     [esi+90h], edi
0x797401: mov     [esi+94h], edi
0x797407: mov     eax, [esi+7Ch]
0x79740A: cmp     eax, edi
0x79740C: jz      short loc_797417
0x79740E: push    eax
0x79740F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x797414: add     esp, 4
0x797417: mov     [esi+7Ch], edi
0x79741A: mov     [esi+80h], edi
0x797420: mov     [esi+84h], edi
0x797426: mov     eax, [esi+6Ch]
0x797429: cmp     eax, edi
0x79742B: jz      short loc_797436
0x79742D: push    eax
0x79742E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x797433: add     esp, 4
0x797436: mov     [esi+6Ch], edi
0x797439: mov     [esi+70h], edi
0x79743C: mov     [esi+74h], edi
0x79743F: mov     eax, [esi+5Ch]
0x797442: cmp     eax, edi
0x797444: jz      short loc_79744F
0x797446: push    eax
0x797447: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79744C: add     esp, 4
0x79744F: lea     ebx, [esi+48h]
0x797452: mov     [esi+5Ch], edi
0x797455: mov     [esi+60h], edi
0x797458: mov     [esi+64h], edi
0x79745B: mov     eax, [ebx+4]
0x79745E: cmp     eax, edi
0x797460: jz      short loc_79747E
0x797462: mov     ecx, [esp+20h+var_10]
0x797466: mov     edx, [ebx+8]
0x797469: push    ecx
0x79746A: push    ebx
0x79746B: push    edx; last
0x79746C: push    eax; first
0x79746D: call    OB_stVector4_DestroyRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Destroys each 0x10-byte vector owner in [first,last), freeing its owned buffer and clearing the pointer triplet.
0x797472: mov     eax, [ebx+4]
0x797475: push    eax
0x797476: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79747B: add     esp, 14h
0x79747E: mov     [ebx+4], edi
0x797481: mov     [ebx+8], edi
0x797484: mov     [ebx+0Ch], edi
0x797487: mov     eax, [esi+3Ch]
0x79748A: cmp     eax, edi
0x79748C: lea     ebx, [esi+38h]
0x79748F: jz      short loc_7974AD
0x797491: mov     ecx, [esp+20h+var_10]
0x797495: mov     edx, [ebx+8]
0x797498: push    ecx
0x797499: push    ebx
0x79749A: push    edx; last
0x79749B: push    eax; first
0x79749C: call    OB_stVector4_DestroyRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Destroys each 0x10-byte vector owner in [first,last), freeing its owned buffer and clearing the pointer triplet.
0x7974A1: mov     eax, [ebx+4]
0x7974A4: push    eax
0x7974A5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7974AA: add     esp, 14h
0x7974AD: mov     [ebx+4], edi
0x7974B0: mov     [ebx+8], edi
0x7974B3: mov     [ebx+0Ch], edi
0x7974B6: mov     eax, [esi+2Ch]
0x7974B9: cmp     eax, edi
0x7974BB: jz      short loc_7974C6
0x7974BD: push    eax
0x7974BE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7974C3: add     esp, 4
0x7974C6: mov     [esi+2Ch], edi
0x7974C9: mov     [esi+30h], edi
0x7974CC: mov     [esi+34h], edi
0x7974CF: mov     ecx, [esp+20h+var_C]
0x7974D3: mov     large fs:0, ecx
0x7974DA: pop     ecx
0x7974DB: pop     edi
0x7974DC: pop     esi
0x7974DD: pop     ebx
0x7974DE: add     esp, 10h
0x7974E1: retn
0x9CBFE0: mov     ecx, [ebp-10h]
0x9CBFE3: add     ecx, 28h ; '('; this
0x9CBFE6: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBFEB: mov     ecx, [ebp-10h]
0x9CBFEE: add     ecx, 38h ; '8'; this
0x9CBFF1: jmp     OB_stVector_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Full destructor for an outer vector of 0x10-byte vector owners. Destroys every inner owner, frees outer storage, and clears the triplet; structurally shared by multiple specializations.
0x9CBFF6: mov     ecx, [ebp-10h]
0x9CBFF9: add     ecx, 48h ; 'H'; this
0x9CBFFC: jmp     OB_stVector_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Full destructor for an outer vector of 0x10-byte vector owners. Destroys every inner owner, frees outer storage, and clears the triplet; structurally shared by multiple specializations.
0x9CC001: mov     ecx, [ebp-10h]
0x9CC004: add     ecx, 58h ; 'X'; this
0x9CC007: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC00C: mov     ecx, [ebp-10h]
0x9CC00F: add     ecx, 68h ; 'h'; this
0x9CC012: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC017: mov     ecx, [ebp-10h]
0x9CC01A: add     ecx, 78h ; 'x'; this
0x9CC01D: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC022: mov     ecx, [ebp-10h]
0x9CC025: add     ecx, 88h ; 'ˆ'; this
0x9CC02B: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC030: mov     ecx, [ebp-10h]
0x9CC033: add     ecx, 98h ; '˜'; this
0x9CC039: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC03E: mov     ecx, [ebp-10h]
0x9CC041: add     ecx, 0A8h ; '¨'; this
0x9CC047: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC04C: mov     ecx, [ebp-10h]
0x9CC04F: add     ecx, 0B8h ; '¸'; this
0x9CC055: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC05A: mov     ecx, [ebp-10h]
0x9CC05D: add     ecx, 0C8h ; 'È'; this
0x9CC063: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC068: mov     ecx, [ebp-10h]
0x9CC06B: add     ecx, 0D8h ; 'Ø'; this
0x9CC071: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC076: mov     ecx, [ebp-10h]
0x9CC079: add     ecx, 0E8h ; 'è'; this
0x9CC07F: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC084: mov     ecx, [ebp-10h]
0x9CC087: add     ecx, 0F8h ; 'ø'; this
0x9CC08D: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC092: mov     ecx, [ebp-10h]
0x9CC095: add     ecx, 108h; this
0x9CC09B: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC0A0: mov     edx, [esp+arg_4]
0x9CC0A4: lea     eax, [edx-10h]
0x9CC0A7: mov     ecx, [edx-14h]
0x9CC0AA: xor     ecx, eax
0x9CC0AC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC0B1: mov     eax, offset stru_AF5094
0x9CC0B6: jmp     ___CxxFrameHandler3
