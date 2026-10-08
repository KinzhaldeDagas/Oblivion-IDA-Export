0x738A40: push    0FFFFFFFFh
0x738A42: push    offset ??0NiScreenGeometryData@@QAE@XZ_SEH
0x738A47: mov     eax, large fs:0
0x738A4D: push    eax
0x738A4E: push    ecx
0x738A4F: push    esi
0x738A50: mov     eax, ds:0B30AACh
0x738A55: xor     eax, esp
0x738A57: push    eax
0x738A58: lea     eax, [esp+18h+var_C]
0x738A5C: mov     large fs:0, eax
0x738A62: mov     esi, ecx
0x738A64: mov     [esp+18h+var_10], esi
0x738A68: call    NiTriShapeData_Construct; Default-construct NiTriShapeData with empty triangle and shared-normal storage.
0x738A6D: xor     ecx, ecx
0x738A6F: mov     [esi+58h], cl
0x738A72: mov     [esi+59h], cl
0x738A75: mov     [esi+5Ch], ecx
0x738A78: mov     dword ptr [esi], offset ??_7NiScreenGeometryData@@6B@; const NiScreenGeometryData::`vftable'
0x738A7E: mov     eax, 4
0x738A83: mov     edx, eax
0x738A85: mov     [esi+68h], ax
0x738A89: mov     [esi+6Eh], ax
0x738A8D: mul     edx
0x738A8F: mov     [esp+18h+var_4], ecx
0x738A93: mov     [esi+6Ah], cx
0x738A97: mov     [esi+6Ch], cx
0x738A9B: seto    cl
0x738A9E: mov     dword ptr [esi+60h], offset ??_7?$NiTArray@PAVScreenElement@NiScreenGeometryData@@@@6B@; const NiTArray<NiScreenGeometryData::ScreenElement *>::`vftable'
0x738AA5: neg     ecx
0x738AA7: or      ecx, eax
0x738AA9: push    ecx; Size
0x738AAA: call    FormHeapAlloc
0x738AAF: mov     [esi+64h], eax
0x738AB2: add     esp, 4
0x738AB5: mov     eax, esi
0x738AB7: mov     ecx, [esp+18h+var_C]
0x738ABB: mov     large fs:0, ecx
0x738AC2: pop     ecx
0x738AC3: pop     esi
0x738AC4: add     esp, 10h
0x738AC7: retn
0x9CAB30: mov     ecx, [ebp-10h]; self
0x9CAB33: jmp     NiTriShapeData_Destruct; Destroy NiTriShapeData triangle indices, linked shared-normal index-pool blocks, and the per-entry shared-normal array.
0x9CAB38: mov     edx, [esp+arg_4]
0x9CAB3C: lea     eax, [edx-8]
0x9CAB3F: mov     ecx, [edx-0Ch]
0x9CAB42: xor     ecx, eax
0x9CAB44: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAB49: mov     eax, offset stru_AF317C
0x9CAB4E: jmp     ___CxxFrameHandler3
