0x7334D0: push    0FFFFFFFFh
0x7334D2: push    offset ??1NiBackToFrontAccumulator@@UAE@XZ_SEH
0x7334D7: mov     eax, large fs:0
0x7334DD: push    eax
0x7334DE: push    ecx
0x7334DF: push    ebx
0x7334E0: push    esi
0x7334E1: push    edi
0x7334E2: mov     eax, ds:0B30AACh
0x7334E7: xor     eax, esp
0x7334E9: push    eax
0x7334EA: lea     eax, [esp+20h+var_C]
0x7334EE: mov     large fs:0, eax
0x7334F4: mov     edi, ecx
0x7334F6: mov     [esp+20h+var_10], edi
0x7334FA: mov     dword ptr [edi], offset ??_7NiBackToFrontAccumulator@@6B@; const NiBackToFrontAccumulator::`vftable'
0x733500: mov     eax, [edi+28h]
0x733503: push    eax
0x733504: mov     [esp+24h+var_4], 1
0x73350C: call    FormHeapFree
0x733511: mov     eax, [edi+2Ch]
0x733514: push    eax
0x733515: call    FormHeapFree
0x73351A: mov     eax, [edi+18h]
0x73351D: xor     ebx, ebx
0x73351F: add     esp, 8
0x733522: cmp     eax, ebx
0x733524: jz      short loc_733557
0x733526: lea     esi, [edi+0Ch]
0x733529: lea     esp, [esp+0]
0x733530: mov     ecx, [esi+4]
0x733533: mov     eax, [ecx]
0x733535: cmp     eax, ebx
0x733537: mov     [esi+4], eax
0x73353A: jz      short loc_733541
0x73353C: mov     [eax+4], ebx
0x73353F: jmp     short loc_733544
0x733541: mov     [esi+8], ebx
0x733544: mov     eax, [esi]
0x733546: mov     edx, [eax+8]
0x733549: push    ecx
0x73354A: mov     ecx, esi
0x73354C: call    edx
0x73354E: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x733552: cmp     [edi+18h], ebx
0x733555: jnz     short loc_733530
0x733557: lea     ecx, [edi+0Ch]
0x73355A: mov     byte ptr [esp+20h+var_4], bl
0x73355E: call    ??1?$NiTPointerList@PAVNiGeometry@@@@UAE@XZ; NiTPointerList<NiGeometry *>::~NiTPointerList<NiGeometry *>(void)
0x733563: mov     ecx, edi
0x733565: mov     [esp+20h+var_4], 0FFFFFFFFh
0x73356D: mov     dword ptr [edi], offset ??_7NiAccumulator@@6B@; const NiAccumulator::`vftable'
0x733573: call    NiRefObject_destr
0x733578: mov     ecx, dword ptr [esp+20h+var_C]
0x73357C: mov     large fs:0, ecx
0x733583: pop     ecx
0x733584: pop     edi
0x733585: pop     esi
0x733586: pop     ebx
0x733587: add     esp, 10h
0x73358A: retn
