0x7A14E0: push    0FFFFFFFFh; Oblivion CFrondEngine destructor invoked by the final CSpeedTreeRT ownership-release path before FormHeapFree. Deletes the profile spline and destroys/frees the +0x40 SFrondTexture, +0x18 guide-LOD, and +0x08 SFrondGuide vectors. RT 4.1 corroborates the explicit profile deletion; the executable establishes the implicit member-vector destruction order.
0x7A14E2: push    offset SEH_7A14E0
0x7A14E7: mov     eax, large fs:0
0x7A14ED: push    eax
0x7A14EE: push    ecx
0x7A14EF: push    ebx
0x7A14F0: push    esi
0x7A14F1: push    edi
0x7A14F2: mov     eax, ds:0B30AACh
0x7A14F7: xor     eax, esp
0x7A14F9: push    eax
0x7A14FA: lea     eax, [esp+20h+var_C]
0x7A14FE: mov     large fs:0, eax
0x7A1504: mov     edi, ecx
0x7A1506: mov     [esp+20h+var_10], edi
0x7A150A: mov     esi, [edi+30h]
0x7A150D: xor     ebx, ebx
0x7A150F: cmp     esi, ebx
0x7A1511: mov     [esp+20h+var_4], 2
0x7A1519: jz      short loc_7A152B
0x7A151B: mov     ecx, esi; this
0x7A151D: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x7A1522: push    esi
0x7A1523: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A1528: add     esp, 4
0x7A152B: lea     esi, [edi+40h]
0x7A152E: mov     [edi+30h], ebx
0x7A1531: mov     eax, [esi+4]; CFrondEngine destruction path releases the +0x40 SFrondTexture range with the decoded 0x2C-stride destructor before freeing vector storage.
0x7A1534: cmp     eax, ebx
0x7A1536: jz      short loc_7A1554
0x7A1538: mov     ecx, [esp+20h+var_10]
0x7A153C: mov     edx, [esi+8]
0x7A153F: push    ecx
0x7A1540: push    esi
0x7A1541: push    edx; last
0x7A1542: push    eax; first
0x7A1543: call    OB_SFrondTexture_DestroyRange_010201A0; Destroys [first,last) SFrondTexture records at 0x2C-byte stride by releasing each embedded filename string.
0x7A1548: mov     eax, [esi+4]
0x7A154B: push    eax
0x7A154C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A1551: add     esp, 14h
0x7A1554: mov     [esi+4], ebx
0x7A1557: mov     [esi+8], ebx
0x7A155A: mov     [esi+0Ch], ebx
0x7A155D: mov     eax, [edi+1Ch]
0x7A1560: cmp     eax, ebx
0x7A1562: lea     esi, [edi+18h]
0x7A1565: jz      short loc_7A1583
0x7A1567: mov     ecx, [esp+20h+var_10]
0x7A156B: mov     edx, [esi+8]
0x7A156E: push    ecx
0x7A156F: push    esi
0x7A1570: push    edx; last
0x7A1571: push    eax; first
0x7A1572: call    OB_stVector_stVector_SFrondGuide_DestroyRange_010201A0; CFrondEngine destructor releases CFrondEngine+0x18 as vector<st_vector<SFrondGuide>>, deep-destroying every level and every contained compact guide.
0x7A1577: mov     eax, [esi+4]
0x7A157A: push    eax
0x7A157B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A1580: add     esp, 14h
0x7A1583: mov     [esi+4], ebx
0x7A1586: mov     [esi+8], ebx
0x7A1589: mov     [esi+0Ch], ebx
0x7A158C: mov     eax, [edi+0Ch]
0x7A158F: cmp     eax, ebx
0x7A1591: lea     esi, [edi+8]
0x7A1594: jz      short loc_7A15B2
0x7A1596: mov     ecx, [esp+20h+var_10]
0x7A159A: mov     edx, [esi+8]
0x7A159D: push    ecx
0x7A159E: push    esi
0x7A159F: push    edx; last
0x7A15A0: push    eax; first
0x7A15A1: call    OB_SFrondGuide_DestroyRange_010201A0; Destroys every compact SFrondGuide in [first,last), freeing each embedded SFrondVertex vector.
0x7A15A6: mov     eax, [esi+4]
0x7A15A9: push    eax
0x7A15AA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A15AF: add     esp, 14h
0x7A15B2: mov     [esi+4], ebx
0x7A15B5: mov     [esi+8], ebx
0x7A15B8: mov     [esi+0Ch], ebx
0x7A15BB: mov     ecx, [esp+20h+var_C]
0x7A15BF: mov     large fs:0, ecx
0x7A15C6: pop     ecx
0x7A15C7: pop     edi
0x7A15C8: pop     esi
0x7A15C9: pop     ebx
0x7A15CA: add     esp, 10h
0x7A15CD: retn
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
0x9CC6E0: mov     ecx, [ebp-10h]
0x9CC6E3: add     ecx, 8; this
0x9CC6E6: jmp     OB_stVector_SFrondGuide_Destroy_010201A0; Destroys one st_vector<SFrondGuide>: deep-destroys the initialized 0x30 guide range, frees its allocation, and clears begin/end/capacityEnd.
0x9CC6EB: mov     ecx, [ebp-10h]
0x9CC6EE: add     ecx, 18h
0x9CC6F1: jmp     loc_7A12E0
0x9CC6F6: mov     ecx, [ebp-10h]
0x9CC6F9: add     ecx, 40h ; '@'
0x9CC6FC: jmp     loc_79DFE0
0x9CC701: mov     edx, [esp+arg_4]
0x9CC705: lea     eax, [edx-10h]
0x9CC708: mov     ecx, [edx-14h]
0x9CC70B: xor     ecx, eax
0x9CC70D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC712: mov     eax, offset stru_AF5AC8
0x9CC717: jmp     ___CxxFrameHandler3
