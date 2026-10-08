0x7A13B0: push    0FFFFFFFFh; SpeedTree decode: compact stock CFrondEngine ctor. Object is 0x6C bytes in CSpeedTreeRT construction; initializes geometry/lighting pointers, MSVC vector containers for guides/guide-LODs/textures, stock frond fields through min cross segments, and default Bezier profile. Later 4.1 supplemental frond fields are not present in this stock allocation.
0x7A13B2: push    offset SEH_7A13B0
0x7A13B7: mov     eax, large fs:0
0x7A13BD: push    eax
0x7A13BE: sub     esp, 28h
0x7A13C1: push    ebx
0x7A13C2: push    esi
0x7A13C3: push    edi
0x7A13C4: mov     eax, ds:0B30AACh
0x7A13C9: xor     eax, esp
0x7A13CB: push    eax
0x7A13CC: lea     eax, [esp+44h+var_C]
0x7A13D0: mov     large fs:0, eax
0x7A13D6: mov     esi, ecx
0x7A13D8: mov     [esp+44h+var_30], esi
0x7A13DC: xor     ebx, ebx
0x7A13DE: mov     [esp+44h+var_34], ebx
0x7A13E2: mov     [esi], ebx
0x7A13E4: mov     [esi+4], ebx
0x7A13E7: mov     [esi+0Ch], ebx
0x7A13EA: mov     [esi+10h], ebx
0x7A13ED: mov     [esi+14h], ebx
0x7A13F0: mov     [esp+44h+var_4], ebx
0x7A13F4: mov     [esi+1Ch], ebx
0x7A13F7: mov     [esi+20h], ebx
0x7A13FA: mov     [esi+24h], ebx
0x7A13FD: mov     dword ptr [esi+28h], 1
0x7A1404: mov     eax, 2
0x7A1409: mov     [esi+2Ch], eax
0x7A140C: mov     ecx, 4
0x7A1411: mov     [esi+34h], ecx
0x7A1414: mov     dword ptr [esi+38h], 1
0x7A141B: mov     [esi+3Ch], bl
0x7A141E: mov     [esi+44h], ebx
0x7A1421: mov     [esi+48h], ebx
0x7A1424: mov     [esi+4Ch], ebx
0x7A1427: fld1
0x7A1429: fstp    dword ptr [esi+54h]
0x7A142C: push    5Ch ; '\'; Size
0x7A142E: fldz
0x7A1430: mov     byte ptr [esp+48h+var_4], al
0x7A1434: fst     dword ptr [esi+58h]
0x7A1437: mov     [esi+50h], ecx
0x7A143A: fstp    dword ptr [esi+5Ch]
0x7A143D: mov     [esi+64h], eax
0x7A1440: fld     dword ptr ds:0A43328h
0x7A1446: mov     dword ptr [esi+68h], 1
0x7A144D: fstp    dword ptr [esi+60h]
0x7A1450: call    FormHeapAlloc
0x7A1455: mov     edi, eax
0x7A1457: add     esp, 4
0x7A145A: mov     [esp+44h+var_2C], edi
0x7A145E: cmp     edi, ebx
0x7A1460: mov     byte ptr [esp+44h+var_4], 3
0x7A1465: jz      short loc_7A14A6
0x7A1467: push    99h ; '™'; count
0x7A146C: push    offset aBezierspline0_; "BezierSpline 0.0 1.0 0.0 { 3 0 0.001388"...
0x7A1471: lea     ecx, [esp+4Ch+stringObject]; this
0x7A1475: mov     [esp+4Ch+var_10], 0Fh
0x7A147D: mov     [esp+4Ch+var_14], ebx
0x7A1481: mov     byte ptr [esp+4Ch+var_24], bl
0x7A1485: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A148A: lea     eax, [esp+44h+stringObject]
0x7A148E: mov     ebx, 1
0x7A1493: push    eax; stringObject
0x7A1494: mov     ecx, edi; this
0x7A1496: mov     byte ptr [esp+48h+var_4], 4
0x7A149B: mov     [esp+48h+var_34], ebx
0x7A149F: call    OB_StBezierSpline_ctor_cachedFromString_010201A0; Oblivion cached-string stBezierSpline constructor. Initializes five compact 16-byte vectors, performs cache lookup/copy or parse/build/cache, and allocates exactly 0x5C bytes for cached copies. Confirms the shipped vector-only layout; RT4.1 source is corroborative, not layout-authoritative.
0x7A14A4: jmp     short loc_7A14A8
0x7A14A6: xor     eax, eax
0x7A14A8: test    bl, 1
0x7A14AB: mov     [esi+30h], eax
0x7A14AE: jz      short loc_7A14C4
0x7A14B0: cmp     [esp+44h+var_10], 10h
0x7A14B5: jb      short loc_7A14C4
0x7A14B7: mov     ecx, [esp+44h+var_24]
0x7A14BB: push    ecx
0x7A14BC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A14C1: add     esp, 4
0x7A14C4: mov     eax, esi
0x7A14C6: mov     ecx, [esp+44h+var_C]
0x7A14CA: mov     large fs:0, ecx
0x7A14D1: pop     ecx
0x7A14D2: pop     edi
0x7A14D3: pop     esi
0x7A14D4: pop     ebx
0x7A14D5: add     esp, 34h
0x7A14D8: retn
0x79DFE0: push    ecx
0x79DFE1: push    esi
0x79DFE2: mov     esi, ecx
0x79DFE4: mov     eax, [esi+4]
0x79DFE7: test    eax, eax
0x79DFE9: jz      short loc_79E007
0x79DFEB: mov     ecx, [esp+8+var_4]
0x79DFEF: mov     edx, [esi+8]
0x79DFF2: push    ecx
0x79DFF3: push    esi
0x79DFF4: push    edx; last
0x79DFF5: push    eax; first
0x79DFF6: call    OB_SFrondTexture_DestroyRange_010201A0; Destroys [first,last) SFrondTexture records at 0x2C-byte stride by releasing each embedded filename string.
0x79DFFB: mov     eax, [esi+4]
0x79DFFE: push    eax
0x79DFFF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79E004: add     esp, 14h
0x79E007: mov     dword ptr [esi+4], 0
0x79E00E: mov     dword ptr [esi+8], 0
0x79E015: mov     dword ptr [esi+0Ch], 0
0x79E01C: pop     esi
0x79E01D: pop     ecx
0x79E01E: retn
0x7A12E0: push    ecx
0x7A12E1: push    esi
0x7A12E2: mov     esi, ecx
0x7A12E4: mov     eax, [esi+4]
0x7A12E7: test    eax, eax
0x7A12E9: jz      short loc_7A1307
0x7A12EB: mov     ecx, [esp+8+var_4]
0x7A12EF: mov     edx, [esi+8]
0x7A12F2: push    ecx
0x7A12F3: push    esi
0x7A12F4: push    edx; last
0x7A12F5: push    eax; first
0x7A12F6: call    OB_stVector_stVector_SFrondGuide_DestroyRange_010201A0; CFrondEngine constructor cleanup destroys any partially constructed outer guide-LOD level range through the decoded nested-vector destructor.
0x7A12FB: mov     eax, [esi+4]
0x7A12FE: push    eax
0x7A12FF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A1304: add     esp, 14h
0x7A1307: mov     dword ptr [esi+4], 0
0x7A130E: mov     dword ptr [esi+8], 0
0x7A1315: mov     dword ptr [esi+0Ch], 0
0x7A131C: pop     esi
0x7A131D: pop     ecx
0x7A131E: retn
0x9CC680: mov     ecx, [ebp-30h]
0x9CC683: add     ecx, 8; this
0x9CC686: jmp     OB_stVector_SFrondGuide_Destroy_010201A0; Destroys one st_vector<SFrondGuide>: deep-destroys the initialized 0x30 guide range, frees its allocation, and clears begin/end/capacityEnd.
0x9CC68B: mov     ecx, [ebp-30h]
0x9CC68E: add     ecx, 18h
0x9CC691: jmp     loc_7A12E0
0x9CC696: mov     ecx, [ebp-30h]
0x9CC699: add     ecx, 40h ; '@'
0x9CC69C: jmp     loc_79DFE0
0x9CC6A1: mov     eax, [ebp-2Ch]
0x9CC6A4: push    eax
0x9CC6A5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CC6AA: pop     ecx
0x9CC6AB: retn
0x9CC6AC: mov     eax, [ebp-34h]
0x9CC6AF: and     eax, 1
0x9CC6B2: jz      locret_9CC6C4
0x9CC6B8: and     dword ptr [ebp-34h], 0FFFFFFFEh
0x9CC6BC: lea     ecx, [ebp-28h]; this
0x9CC6BF: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC6C4: retn
0x9CC6C5: mov     edx, [esp+arg_4]
0x9CC6C9: lea     eax, [edx-34h]
0x9CC6CC: mov     ecx, [edx-38h]
0x9CC6CF: xor     ecx, eax
0x9CC6D1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC6D6: mov     eax, offset stru_AF5A5C
0x9CC6DB: jmp     ___CxxFrameHandler3
