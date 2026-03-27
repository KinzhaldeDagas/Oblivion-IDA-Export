0x66A740: push    0FFFFFFFFh
0x66A742: push    offset PlayerCharacter_constr_SEH
0x66A747: mov     eax, large fs:0
0x66A74D: push    eax
0x66A74E: sub     esp, 8
0x66A751: push    ebx
0x66A752: push    ebp
0x66A753: push    esi
0x66A754: push    edi; int
0x66A755: mov     eax, ds:0B30AACh
0x66A75A: xor     eax, esp
0x66A75C: push    eax; int
0x66A75D: lea     eax, [esp+28h+var_C]
0x66A761: mov     large fs:0, eax
0x66A767: mov     esi, ecx
0x66A769: mov     [esp+28h+var_10], esi
0x66A76D: call    Character_constr
0x66A772: xor     ebx, ebx
0x66A774: mov     dword ptr [esi], offset ??_7PlayerCharacter@@6BPlayerCharacter@@@; const PlayerCharacter::`vftable'{for `PlayerCharacter'}
0x66A77A: mov     dword ptr [esi+18h], offset ??_7PlayerCharacter@@6BTESChildCell@@@; const PlayerCharacter::`vftable'{for `TESChildCell'}
0x66A781: mov     dword ptr [esi+5Ch], offset ??_7PlayerCharacter@@6BMagicCaster@@@; const PlayerCharacter::`vftable'{for `MagicCaster'}
0x66A788: mov     dword ptr [esi+68h], offset ??_7PlayerCharacter@@6BMagicTarget@@@; const PlayerCharacter::`vftable'{for `MagicTarget'}
0x66A78F: mov     [esp+28h+var_4], ebx
0x66A793: mov     [esi+574h], ebx
0x66A799: mov     [esi+5D0h], ebx
0x66A79F: mov     [esi+5D8h], ebx
0x66A7A5: mov     [esi+5E4h], ebx
0x66A7AB: mov     [esi+5E8h], ebx
0x66A7B1: mov     [esi+5ECh], ebx
0x66A7B7: mov     [esi+5F0h], ebx
0x66A7BD: mov     [esi+5F8h], ebx
0x66A7C3: mov     [esi+5FCh], ebx
0x66A7C9: mov     [esi+6ECh], ebx
0x66A7CF: mov     [esi+6F0h], ebx
0x66A7D5: mov     [esi+704h], ebx
0x66A7DB: mov     [esi+708h], ebx
0x66A7E1: mov     [esi+73Ch], ebx
0x66A7E7: mov     [esi+740h], ebx
0x66A7ED: mov     [esi+780h], ebx
0x66A7F3: mov     [esi+784h], ebx
0x66A7F9: xor     ecx, ecx
0x66A7FB: mov     eax, 25h ; '%'
0x66A800: mov     [esi+78Ch], eax
0x66A806: mov     edx, 4
0x66A80B: mul     edx
0x66A80D: seto    cl
0x66A810: mov     byte ptr [esp+28h+var_4], 3
0x66A815: mov     dword ptr [esi+788h], offset ??_7?$NiTMapBase@V?$DFALL@E@@IE@@6B@; const NiTMapBase<DFALL<uchar>,uint,uchar>::`vftable'
0x66A81F: mov     [esi+794h], ebx
0x66A825: neg     ecx
0x66A827: or      ecx, eax
0x66A829: push    ecx; Size
0x66A82A: call    FormHeapAlloc
0x66A82F: mov     ecx, [esi+78Ch]
0x66A835: add     ecx, ecx
0x66A837: add     ecx, ecx
0x66A839: push    ecx
0x66A83A: push    ebx
0x66A83B: push    eax
0x66A83C: mov     [esi+790h], eax
0x66A842: call    __memset
0x66A847: add     esp, 10h
0x66A84A: mov     dword ptr [esi+788h], offset ??_7?$NiTMap@IE@@6B@; const NiTMap<uint,uchar>::`vftable'
0x66A854: mov     [esi+798h], ebx
0x66A85A: mov     [esi+79Ch], ebx
0x66A860: push    ebx; a2
0x66A861: mov     ecx, esi; this
0x66A863: mov     byte ptr [esp+2Ch+var_4], 6
0x66A868: call    TESForm_SetIsLinked
0x66A86D: fld     dword ptr ds:0B36B70h
0x66A873: fstp    dword ptr ds:0B3BB24h
0x66A879: lea     eax, [esi+324h]
0x66A87F: fldz
0x66A881: mov     ecx, 48h ; 'H'
0x66A886: fst     dword ptr [eax-120h]
0x66A88C: add     eax, 4
0x66A88F: sub     ecx, 1
0x66A892: fst     dword ptr [eax-4]
0x66A895: fst     dword ptr [eax+128h]
0x66A89B: jnz     short loc_66A886
0x66A89D: fst     dword ptr [esi+44Ch]
0x66A8A3: push    54h ; 'T'; Size
0x66A8A5: fst     dword ptr [esi+444h]
0x66A8AB: mov     [esi+590h], ebx
0x66A8B1: fst     dword ptr [esi+448h]
0x66A8B7: mov     [esi+11Ch], ebx
0x66A8BD: fst     dword ptr [esi+59Ch]
0x66A8C3: mov     [esi+120h], ebx
0x66A8C9: fst     dword ptr [esi+5A0h]
0x66A8CF: mov     [esi+128h], ebx
0x66A8D5: fstp    dword ptr [esi+5A4h]
0x66A8DB: mov     [esi+10Ch], bl
0x66A8E1: mov     [esi+614h], ebx
0x66A8E7: mov     [esi+648h], ebx
0x66A8ED: mov     [esi+12Ch], bl
0x66A8F3: mov     byte ptr [esi+5A9h], 1
0x66A8FA: mov     [esi+6E5h], bl
0x66A900: mov     [esi+1E0h], ebx
0x66A906: mov     dword ptr [esi+64Ch], 48h ; 'H'
0x66A910: mov     [esi+650h], ebx
0x66A916: call    FormHeapAlloc
0x66A91B: fldz
0x66A91D: add     esp, 4
0x66A920: mov     [esi+5B0h], eax
0x66A926: xor     eax, eax
0x66A928: mov     edx, [esi+5B0h]
0x66A92E: fst     dword ptr [eax+edx]
0x66A931: add     eax, 4
0x66A934: cmp     eax, 54h ; 'T'
0x66A937: jl      short loc_66A928
0x66A939: mov     ebp, ds:0A2807Ch
0x66A93F: fstp    st
0x66A941: mov     [esi+6F4h], ebx
0x66A947: mov     [esi+6F8h], ebx
0x66A94D: mov     [esi+654h], ebx
0x66A953: mov     [esi+114h], bl
0x66A959: mov     edi, [esi+798h]
0x66A95F: cmp     edi, ebx
0x66A961: jz      short loc_66A981
0x66A963: lea     eax, [edi+4]
0x66A966: push    eax; lpAddend
0x66A967: call    ebp ; InterlockedDecrement
0x66A969: test    eax, eax
0x66A96B: jnz     short loc_66A97B
0x66A96D: cmp     edi, ebx
0x66A96F: jz      short loc_66A97B
0x66A971: mov     edx, [edi]
0x66A973: mov     eax, [edx]
0x66A975: push    1
0x66A977: mov     ecx, edi
0x66A979: call    eax
0x66A97B: mov     [esi+798h], ebx
0x66A981: mov     edi, [esi+79Ch]
0x66A987: cmp     edi, ebx
0x66A989: jz      short loc_66A9A9
0x66A98B: lea     ecx, [edi+4]
0x66A98E: push    ecx; lpAddend
0x66A98F: call    ebp ; InterlockedDecrement
0x66A991: test    eax, eax
0x66A993: jnz     short loc_66A9A3
0x66A995: cmp     edi, ebx
0x66A997: jz      short loc_66A9A3
0x66A999: mov     edx, [edi]
0x66A99B: mov     eax, [edx]
0x66A99D: push    1
0x66A99F: mov     ecx, edi
0x66A9A1: call    eax
0x66A9A3: mov     [esi+79Ch], ebx
0x66A9A9: push    2ECh; Size
0x66A9AE: mov     byte ptr [esi+115h], 1
0x66A9B5: call    FormHeapAlloc
0x66A9BA: add     esp, 4
0x66A9BD: mov     [esp+28h+var_14], eax
0x66A9C1: cmp     eax, ebx
0x66A9C3: mov     byte ptr [esp+28h+var_4], 7
0x66A9C8: jz      short loc_66A9D5
0x66A9CA: mov     ecx, eax; this
0x66A9CC: call    ??0HighProcess@@QAE@XZ; HighProcess::HighProcess(void)
0x66A9D1: mov     edi, eax
0x66A9D3: jmp     short loc_66A9D7
0x66A9D5: xor     edi, edi
0x66A9D7: mov     edx, [edi]
0x66A9D9: mov     eax, [esi+58h]
0x66A9DC: mov     edx, [edx+4]
0x66A9DF: push    eax
0x66A9E0: mov     ecx, edi
0x66A9E2: mov     byte ptr [esp+2Ch+var_4], 6
0x66A9E7: call    edx
0x66A9E9: mov     ecx, esi; this
0x66A9EB: call    Actor__GetProcessLevel
0x66A9F0: push    eax
0x66A9F1: push    esi
0x66A9F2: mov     ecx, offset ActorProcessManager_ptr
0x66A9F7: call    sub_674550
0x66A9FC: mov     ecx, [esi+58h]
0x66A9FF: cmp     ecx, ebx
0x66AA01: jz      short loc_66AA0B
0x66AA03: mov     eax, [ecx]
0x66AA05: mov     edx, [eax]
0x66AA07: push    1
0x66AA09: call    edx
0x66AA0B: mov     ecx, esi; this
0x66AA0D: mov     [esi+58h], edi
0x66AA10: call    Actor__GetProcessLevel
0x66AA15: push    eax
0x66AA16: push    esi
0x66AA17: mov     ecx, offset ActorProcessManager_ptr
0x66AA1C: call    sub_674550
0x66AA21: push    8; Size
0x66AA23: mov     [esi+1E8h], ebx
0x66AA29: mov     [esi+1ECh], ebx
0x66AA2F: call    FormHeapAlloc
0x66AA34: add     esp, 4
0x66AA37: cmp     eax, ebx
0x66AA39: jz      short loc_66AA42
0x66AA3B: mov     [eax], ebx
0x66AA3D: mov     [eax+4], ebx
0x66AA40: jmp     short loc_66AA44
0x66AA42: xor     eax, eax
0x66AA44: mov     ecx, esi; int
0x66AA46: mov     [esi+1E4h], eax
0x66AA4C: call    sub_65B750
0x66AA51: mov     ecx, esi; this
0x66AA53: call    MobileObject_GetCharProxy
0x66AA58: mov     edi, eax
0x66AA5A: cmp     edi, ebx
0x66AA5C: jz      loc_66AB21
0x66AA62: push    1; a2
0x66AA64: mov     ecx, esi; this
0x66AA66: mov     dword ptr [edi+3B0h], 3E8h
0x66AA70: call    sub_65A310
0x66AA75: mov     ecx, [edi+364h]
0x66AA7B: cmp     ecx, ebx
0x66AA7D: jz      short loc_66AA86
0x66AA7F: push    9
0x66AA81: call    sub_89F4D0
0x66AA86: mov     ecx, [edi+368h]
0x66AA8C: cmp     ecx, ebx
0x66AA8E: jz      short loc_66AA97
0x66AA90: push    9
0x66AA92: call    sub_89F4D0
0x66AA97: mov     edi, [edi+364h]
0x66AA9D: push    8; Size
0x66AA9F: call    FormHeapAlloc
0x66AAA4: add     esp, 4
0x66AAA7: mov     [esp+28h+var_14], eax
0x66AAAB: cmp     eax, ebx
0x66AAAD: mov     byte ptr [esp+28h+var_4], 8
0x66AAB2: jz      short loc_66AAC9
0x66AAB4: fld     dword ptr ds:0A58E1Ch
0x66AABA: push    9; int
0x66AABC: push    ecx
0x66AABD: mov     ecx, eax
0x66AABF: fstp    [esp+30h+a2]; float
0x66AAC2: call    sub_532BC0
0x66AAC7: jmp     short loc_66AACB
0x66AAC9: xor     eax, eax
0x66AACB: push    1
0x66AACD: push    1C0h
0x66AAD2: mov     ecx, offset FormHeap
0x66AAD7: mov     byte ptr [esp+30h+var_4], 6
0x66AADC: mov     [esi+1F0h], eax
0x66AAE2: call    j_MemoryHeap_Alloc
0x66AAE7: mov     dl, al
0x66AAE9: and     dl, 0Fh
0x66AAEC: mov     cl, 10h
0x66AAEE: sub     cl, dl
0x66AAF0: movzx   edx, cl
0x66AAF3: add     eax, edx
0x66AAF5: mov     [eax-1], cl
0x66AAF8: mov     [esp+28h+var_14], eax
0x66AAFC: push    9; int
0x66AAFE: fld     dword ptr ds:0A379B4h
0x66AB04: push    ecx
0x66AB05: mov     ecx, eax
0x66AB07: fstp    [esp+30h+a2]; float
0x66AB0A: mov     byte ptr [esp+30h+var_4], 9
0x66AB0F: call    sub_5358F0
0x66AB14: mov     byte ptr [esp+28h+var_4], 6
0x66AB19: mov     [esi+1F4h], eax
0x66AB1F: jmp     short loc_66AB2D
0x66AB21: mov     [esi+1F0h], ebx
0x66AB27: mov     [esi+1F4h], ebx
0x66AB2D: mov     [esi+588h], bl
0x66AB33: mov     [esi+589h], bl
0x66AB39: mov     [esi+58Ah], bl
0x66AB3F: mov     [esi+58Bh], bl
0x66AB45: mov     [esi+58Ch], bl
0x66AB4B: fld     dword ptr ds:0B0313Ch
0x66AB51: fst     [esp+28h+var_14]
0x66AB55: push    ebx; a3
0x66AB56: fstp    dword ptr [esi+598h]
0x66AB5C: push    ecx
0x66AB5D: fld     dword ptr [esi+598h]
0x66AB63: mov     ecx, ds:0B333CCh; this
0x66AB69: fstp    [esp+30h+a2]; a2
0x66AB6C: call    SetCameraFOV_0
0x66AB71: fld     [esp+28h+var_14]
0x66AB75: push    ecx
0x66AB76: fstp    [esp+2Ch+var_2C]; float
0x66AB79: call    UpdateParticleShaderFOVData
0x66AB7E: mov     [esi+5C8h], ebx
0x66AB84: mov     [esi+5CCh], ebx
0x66AB8A: mov     edi, [esi+5D0h]
0x66AB90: add     esp, 4
0x66AB93: cmp     edi, ebx
0x66AB95: jz      short loc_66ABB5
0x66AB97: lea     eax, [edi+4]
0x66AB9A: push    eax; lpAddend
0x66AB9B: call    ebp ; InterlockedDecrement
0x66AB9D: test    eax, eax
0x66AB9F: jnz     short loc_66ABAF
0x66ABA1: cmp     edi, ebx
0x66ABA3: jz      short loc_66ABAF
0x66ABA5: mov     edx, [edi]
0x66ABA7: mov     eax, [edx]
0x66ABA9: push    1
0x66ABAB: mov     ecx, edi
0x66ABAD: call    eax
0x66ABAF: mov     [esi+5D0h], ebx
0x66ABB5: fld     dword ptr ds:0A73980h
0x66ABBB: fstp    dword ptr [esi+5D4h]
0x66ABC1: mov     edi, [esi+5D8h]
0x66ABC7: cmp     edi, ebx
0x66ABC9: jz      short loc_66ABE9
0x66ABCB: lea     ecx, [edi+4]
0x66ABCE: push    ecx; lpAddend
0x66ABCF: call    ebp ; InterlockedDecrement
0x66ABD1: test    eax, eax
0x66ABD3: jnz     short loc_66ABE3
0x66ABD5: cmp     edi, ebx
0x66ABD7: jz      short loc_66ABE3
0x66ABD9: mov     edx, [edi]
0x66ABDB: mov     eax, [edx]
0x66ABDD: push    1
0x66ABDF: mov     ecx, edi
0x66ABE1: call    eax
0x66ABE3: mov     [esi+5D8h], ebx
0x66ABE9: mov     [esi+5DCh], ebx
0x66ABEF: mov     [esi+124h], bl
0x66ABF5: fld     dword ptr ds:0B3BB24h
0x66ABFB: mov     ecx, ds:0B3F9A8h
0x66AC01: fstp    dword ptr ds:0B3BACCh
0x66AC07: mov     edx, ds:0B3F9ACh
0x66AC0D: fldz
0x66AC0F: mov     eax, ds:0B3F9B0h
0x66AC14: mov     ds:0B3BB38h, ecx
0x66AC1A: mov     ds:0B3BB3Ch, edx
0x66AC20: mov     ds:0B3BB40h, eax
0x66AC25: mov     byte ptr ds:0B14E4Dh, 1
0x66AC2C: fstp    dword ptr [esi+700h]
0x66AC32: mov     ecx, esi
0x66AC34: mov     [esi+6FCh], ebx
0x66AC3A: call    sub_668030
0x66AC3F: mov     ecx, esi
0x66AC41: mov     [esi+5B4h], ebx
0x66AC47: call    sub_65FBB0
0x66AC4C: mov     [esi+5B8h], bx
0x66AC53: mov     ecx, esi
0x66AC55: mov     [esi+5BAh], bl
0x66AC5B: call    sub_65D560
0x66AC60: fldz
0x66AC62: fstp    dword ptr [esi+61Ch]
0x66AC68: mov     [esi+184h], ebx
0x66AC6E: mov     [esi+1DCh], bl
0x66AC74: mov     [esi+600h], bl
0x66AC7A: mov     [esi+5C0h], bl
0x66AC80: mov     [esi+118h], ebx
0x66AC86: mov     [esi+608h], ebx
0x66AC8C: mov     [esi+60Ch], ebx
0x66AC92: mov     [esi+610h], bl
0x66AC98: mov     [esi+611h], bl
0x66AC9E: mov     [esi+620h], bl
0x66ACA4: mov     [esi+624h], ebx
0x66ACAA: mov     [esi+628h], ebx
0x66ACB0: mov     ecx, ds:0B3F9A8h
0x66ACB6: mov     [esi+62Ch], ecx
0x66ACBC: mov     edx, ds:0B3F9ACh
0x66ACC2: mov     [esi+630h], edx
0x66ACC8: mov     eax, ds:0B3F9B0h
0x66ACCD: push    8; Size
0x66ACCF: mov     [esi+634h], eax
0x66ACD5: mov     [esi+638h], ebx
0x66ACDB: mov     [esi+63Ch], ebx
0x66ACE1: mov     [esi+5F4h], ebx
0x66ACE7: call    FormHeapAlloc
0x66ACEC: add     esp, 4
0x66ACEF: cmp     eax, ebx
0x66ACF1: jz      short loc_66ACFA
0x66ACF3: mov     [eax], ebx
0x66ACF5: mov     [eax+4], ebx
0x66ACF8: jmp     short loc_66ACFC
0x66ACFA: xor     eax, eax
0x66ACFC: fldz
0x66ACFE: mov     [esi+1F8h], eax
0x66AD04: fst     dword ptr [esi+640h]
0x66AD0A: mov     [esi+1FCh], ebx
0x66AD10: fst     dword ptr ds:0B3BAFCh
0x66AD16: mov     [esi+644h], ebx
0x66AD1C: mov     [esi+5BCh], ebx
0x66AD22: mov     [esi+5C4h], ebx
0x66AD28: mov     [esi+594h], bl
0x66AD2E: mov     [esi+6E0h], ebx
0x66AD34: mov     [esi+6E4h], bl
0x66AD3A: mov     [esi+6E6h], bl
0x66AD40: mov     [esi+6E8h], ebx
0x66AD46: mov     edi, [esi+574h]
0x66AD4C: cmp     edi, ebx
0x66AD4E: jz      short loc_66AD72
0x66AD50: lea     ecx, [edi+4]
0x66AD53: fstp    st
0x66AD55: push    ecx; lpAddend
0x66AD56: call    ebp ; InterlockedDecrement
0x66AD58: test    eax, eax
0x66AD5A: jnz     short loc_66AD6A
0x66AD5C: cmp     edi, ebx
0x66AD5E: jz      short loc_66AD6A
0x66AD60: mov     edx, [edi]
0x66AD62: mov     eax, [edx]
0x66AD64: push    1
0x66AD66: mov     ecx, edi
0x66AD68: call    eax
0x66AD6A: fldz
0x66AD6C: mov     [esi+574h], ebx
0x66AD72: fst     dword ptr [esi+580h]
0x66AD78: mov     [esi+578h], ebx
0x66AD7E: fstp    dword ptr [esi+584h]
0x66AD84: mov     [esi+57Ch], ebx
0x66AD8A: mov     [esi+70Ch], ebx
0x66AD90: mov     [esi+714h], ebx
0x66AD96: call    dword ptr ds:0A280D0h
0x66AD9C: mov     [esi+710h], eax
0x66ADA2: mov     [esi+6C8h], ebx
0x66ADA8: mov     [esi+6CCh], ebx
0x66ADAE: mov     [esi+6D0h], ebx
0x66ADB4: mov     [esi+6D4h], ebx
0x66ADBA: mov     [esi+6D8h], ebx
0x66ADC0: mov     [esi+6DCh], ebx
0x66ADC6: mov     [esi+658h], ebx
0x66ADCC: mov     [esi+65Ch], ebx
0x66ADD2: mov     [esi+660h], ebx
0x66ADD8: mov     [esi+664h], ebx
0x66ADDE: mov     [esi+668h], ebx
0x66ADE4: mov     [esi+66Ch], ebx
0x66ADEA: mov     [esi+670h], ebx
0x66ADF0: mov     [esi+674h], ebx
0x66ADF6: mov     [esi+678h], ebx
0x66ADFC: mov     [esi+67Ch], ebx
0x66AE02: mov     [esi+680h], ebx
0x66AE08: mov     [esi+684h], ebx
0x66AE0E: mov     [esi+688h], ebx
0x66AE14: mov     [esi+68Ch], ebx
0x66AE1A: mov     [esi+690h], ebx
0x66AE20: mov     [esi+694h], ebx
0x66AE26: mov     [esi+698h], ebx
0x66AE2C: mov     [esi+69Ch], ebx
0x66AE32: mov     [esi+6A0h], ebx
0x66AE38: mov     [esi+6A4h], ebx
0x66AE3E: mov     [esi+6A8h], ebx
0x66AE44: mov     [esi+6ACh], ebx
0x66AE4A: mov     [esi+6B0h], ebx
0x66AE50: mov     [esi+6B4h], ebx
0x66AE56: mov     [esi+6B8h], ebx
0x66AE5C: mov     [esi+6BCh], ebx
0x66AE62: mov     [esi+6C0h], ebx
0x66AE68: mov     [esi+6C4h], ebx
0x66AE6E: mov     [esi+7A4h], ebx
0x66AE74: mov     [esi+7A8h], ebx
0x66AE7A: mov     [esi+7ACh], ebx
0x66AE80: mov     [esi+7B0h], ebx
0x66AE86: mov     [esi+7B4h], ebx
0x66AE8C: mov     [esi+7B8h], ebx
0x66AE92: mov     [esi+7BCh], ebx
0x66AE98: mov     [esi+7C0h], ebx
0x66AE9E: mov     [esi+7C4h], ebx
0x66AEA4: mov     [esi+7C8h], ebx
0x66AEAA: mov     [esi+7CCh], ebx
0x66AEB0: mov     [esi+7D0h], ebx
0x66AEB6: mov     [esi+7D4h], ebx
0x66AEBC: mov     [esi+7D8h], ebx
0x66AEC2: mov     [esi+7DCh], ebx
0x66AEC8: mov     [esi+7E0h], ebx
0x66AECE: mov     [esi+7E4h], ebx
0x66AED4: mov     [esi+7E8h], ebx
0x66AEDA: mov     [esi+7ECh], ebx
0x66AEE0: mov     [esi+7F0h], ebx
0x66AEE6: push    ebx; Time
0x66AEE7: mov     [esi+7F4h], ebx
0x66AEED: call    __time64
0x66AEF2: mov     edx, [esi]
0x66AEF4: add     esp, 4
0x66AEF7: cmp     [esi+71Dh], bl
0x66AEFD: mov     [esi+718h], eax
0x66AF03: mov     eax, [edx+1BCh]
0x66AF09: mov     [esi+71Ch], bl
0x66AF0F: mov     ecx, esi
0x66AF11: jz      short loc_66AF16
0x66AF13: push    ebx
0x66AF14: jmp     short loc_66AF18
0x66AF16: push    1
0x66AF18: call    eax
0x66AF1A: cmp     [esi+71Ch], bl
0x66AF20: mov     edx, [esi]
0x66AF22: mov     eax, [edx+1BCh]
0x66AF28: mov     [esi+71Dh], bl
0x66AF2E: mov     ecx, esi
0x66AF30: jz      short loc_66AF35
0x66AF32: push    ebx
0x66AF33: jmp     short loc_66AF37
0x66AF35: push    1
0x66AF37: call    eax
0x66AF39: mov     [esi+71Eh], bl
0x66AF3F: mov     [esi+71Fh], bl
0x66AF45: mov     ecx, ds:0B3F9A8h
0x66AF4B: mov     [esi+720h], ecx
0x66AF51: mov     edx, ds:0B3F9ACh
0x66AF57: mov     [esi+724h], edx
0x66AF5D: mov     eax, ds:0B3F9B0h
0x66AF62: mov     [esi+728h], eax
0x66AF68: mov     [esi+72Ch], ebx
0x66AF6E: mov     [esi+730h], ebx
0x66AF74: fld     dword ptr ds:0B14EB0h
0x66AF7A: fstp    dword ptr [esi+734h]
0x66AF80: mov     [esi+5E0h], ebx
0x66AF86: fldz
0x66AF88: mov     [esi+738h], bl
0x66AF8E: mov     [esi+110h], ebx
0x66AF94: mov     [esi+744h], ebx
0x66AF9A: mov     [esi+748h], bl
0x66AFA0: fst     dword ptr [esi+74Ch]
0x66AFA6: fst     dword ptr [esi+750h]
0x66AFAC: mov     ecx, ds:0B3F9A8h
0x66AFB2: mov     [esi+754h], ecx
0x66AFB8: mov     edx, ds:0B3F9ACh
0x66AFBE: mov     [esi+758h], edx
0x66AFC4: mov     eax, ds:0B3F9B0h
0x66AFC9: mov     [esi+75Ch], eax
0x66AFCF: mov     [esi+200h], bl
0x66AFD5: mov     [esi+760h], ebx
0x66AFDB: mov     [esi+764h], ebx
0x66AFE1: xor     eax, eax
0x66AFE3: mov     [esi+768h], eax
0x66AFE9: mov     [esi+76Ch], eax
0x66AFEF: mov     [esi+770h], eax
0x66AFF5: mov     [esi+774h], eax
0x66AFFB: mov     [esi+778h], eax
0x66B001: mov     [esi+77Ch], eax
0x66B007: mov     [esi+570h], ebx
0x66B00D: cmp     [esi+784h], ebx
0x66B013: jz      short loc_66B035
0x66B015: fstp    st
0x66B017: mov     eax, [esi+784h]
0x66B01D: mov     edi, [eax+4]
0x66B020: push    eax
0x66B021: call    FormHeapFree
0x66B026: add     esp, 4
0x66B029: cmp     edi, ebx
0x66B02B: mov     [esi+784h], edi
0x66B031: jnz     short loc_66B017
0x66B033: fldz
0x66B035: mov     [esi+780h], ebx
0x66B03B: mov     [esi+7A0h], ebx
0x66B041: mov     [esi+7F8h], bl
0x66B047: mov     [esi+5ACh], ebx
0x66B04D: mov     [esi+7F9h], bl
0x66B053: fst     dword ptr [esi+618h]
0x66B059: fst     dword ptr [esi+7FCh]
0x66B05F: mov     eax, esi
0x66B061: fstp    dword ptr [esi+800h]
0x66B067: mov     [esi+116h], bl
0x66B06D: or      dword ptr [esi+8], 400h
0x66B074: mov     ecx, dword ptr [esp+28h+var_C]
0x66B078: mov     large fs:0, ecx
0x66B07F: pop     ecx
0x66B080: pop     edi
0x66B081: pop     esi
0x66B082: pop     ebp
0x66B083: pop     ebx
0x66B084: add     esp, 14h
0x66B087: retn
