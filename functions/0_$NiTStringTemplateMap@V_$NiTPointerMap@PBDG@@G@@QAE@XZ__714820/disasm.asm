0x714820: push    0FFFFFFFFh
0x714822: push    offset ??0?$NiTStringTemplateMap@V?$NiTPointerMap@PBDG@@G@@QAE@XZ_SEH
0x714827: mov     eax, large fs:0
0x71482D: push    eax
0x71482E: sub     esp, 20h
0x714831: push    ebx
0x714832: push    ebp
0x714833: push    esi
0x714834: push    edi
0x714835: mov     eax, ds:0B30AACh
0x71483A: xor     eax, esp
0x71483C: push    eax
0x71483D: lea     eax, [esp+40h+var_C]
0x714841: mov     large fs:0, eax
0x714847: mov     edi, ecx
0x714849: xor     ecx, ecx
0x71484B: mov     eax, 25h ; '%'
0x714850: mov     [esp+40h+var_1C], eax
0x714854: xor     ebp, ebp
0x714856: mov     edx, 4
0x71485B: mul     edx
0x71485D: seto    cl
0x714860: mov     [esp+40h+var_20], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDG@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,ushort>::`vftable'
0x714868: mov     [esp+40h+var_14], ebp
0x71486C: neg     ecx
0x71486E: or      ecx, eax
0x714870: push    ecx; Size
0x714871: call    FormHeapAlloc
0x714876: mov     ecx, [esp+44h+var_1C]
0x71487A: lea     edx, ds:0[ecx*4]
0x714881: push    edx
0x714882: push    ebp
0x714883: push    eax
0x714884: mov     [esp+50h+var_18], eax
0x714888: call    __memset
0x71488D: add     esp, 10h
0x714890: mov     [esp+40h+var_10], 0
0x714895: mov     [esp+40h+var_20], offset ??_7?$NiTStringPointerMap@G@@6B@; const NiTStringPointerMap<ushort>::`vftable'
0x71489D: mov     eax, [edi+1F8h]
0x7148A3: xor     esi, esi
0x7148A5: cmp     eax, ebp
0x7148A7: mov     [esp+40h+var_4], ebp
0x7148AB: jbe     short loc_7148EF
0x7148AD: lea     ecx, [ecx+0]
0x7148B0: mov     eax, [edi+1F0h]
0x7148B6: mov     ecx, [eax+esi*4]
0x7148B9: mov     edx, [ecx]
0x7148BB: mov     eax, [edx+4]
0x7148BE: call    eax
0x7148C0: mov     ebx, [eax]
0x7148C2: lea     ecx, [esp+40h+var_2C]
0x7148C6: push    ecx
0x7148C7: push    ebx
0x7148C8: lea     ecx, [esp+48h+var_20]
0x7148CC: call    sub_7123C0
0x7148D1: test    al, al
0x7148D3: jnz     short loc_7148E4
0x7148D5: mov     edx, [esp+40h+var_14]
0x7148D9: push    edx
0x7148DA: push    ebx
0x7148DB: lea     ecx, [esp+48h+var_20]
0x7148DF: call    sub_712330
0x7148E4: add     esi, 1
0x7148E7: cmp     esi, [edi+1F8h]
0x7148ED: jb      short loc_7148B0
0x7148EF: mov     ax, word ptr [esp+40h+var_14]
0x7148F4: movzx   ecx, ax
0x7148F7: mov     [esp+40h+var_28], ecx
0x7148FB: movzx   eax, ax
0x7148FE: xor     ecx, ecx
0x714900: mov     edx, 4
0x714905: mul     edx
0x714907: seto    cl
0x71490A: neg     ecx
0x71490C: or      ecx, eax
0x71490E: push    ecx; Size
0x71490F: call    FormHeapAlloc
0x714914: mov     ecx, [esp+44h+var_1C]
0x714918: mov     ebx, eax
0x71491A: add     esp, 4
0x71491D: xor     eax, eax
0x71491F: cmp     ecx, ebp
0x714921: mov     [esp+40h+var_2C], ebx
0x714925: jbe     short loc_714940
0x714927: mov     edx, [esp+40h+var_18]
0x71492B: jmp     short loc_714930
0x71492D: align 10h
0x714930: cmp     [edx+eax*4], ebp
0x714933: jnz     loc_714A3E
0x714939: add     eax, 1
0x71493C: cmp     eax, ecx
0x71493E: jb      short loc_714930
0x714940: xor     eax, eax
0x714942: cmp     eax, ebp
0x714944: jz      short loc_714994
0x714946: mov     ebx, [eax+4]
0x714949: movzx   ebp, word ptr [eax+8]
0x71494D: mov     eax, [eax]
0x71494F: test    eax, eax
0x714951: jnz     short loc_714984
0x714953: mov     eax, [esp+40h+var_20]
0x714957: mov     edx, [eax+4]
0x71495A: push    ebx
0x71495B: lea     ecx, [esp+44h+var_20]
0x71495F: call    edx
0x714961: mov     edx, [esp+40h+var_1C]
0x714965: add     eax, 1
0x714968: cmp     eax, edx
0x71496A: jnb     short loc_714982
0x71496C: mov     esi, [esp+40h+var_18]
0x714970: mov     ecx, [esi+eax*4]
0x714973: test    ecx, ecx
0x714975: jnz     loc_714A46
0x71497B: add     eax, 1
0x71497E: cmp     eax, edx
0x714980: jb      short loc_714970
0x714982: xor     eax, eax
0x714984: test    eax, eax
0x714986: mov     edx, [esp+40h+var_2C]
0x71498A: movzx   ecx, bp
0x71498D: mov     [edx+ecx*4], ebx
0x714990: jnz     short loc_714946
0x714992: mov     ebx, edx
0x714994: mov     eax, [edi+220h]
0x71499A: push    1
0x71499C: lea     ecx, [esp+44h+var_2C]
0x7149A0: push    ecx
0x7149A1: push    2
0x7149A3: lea     edx, [esp+4Ch+var_28]
0x7149A7: push    edx
0x7149A8: push    eax
0x7149A9: mov     eax, [eax+8]
0x7149AC: mov     [esp+54h+var_2C], 2
0x7149B4: call    eax
0x7149B6: xor     esi, esi
0x7149B8: add     esp, 14h
0x7149BB: cmp     word ptr [esp+40h+var_28], si
0x7149C0: jbe     short loc_7149D9
0x7149C2: mov     ecx, [ebx+esi*4]
0x7149C5: push    ecx
0x7149C6: mov     ecx, edi
0x7149C8: call    sub_713720
0x7149CD: movzx   edx, word ptr [esp+40h+var_28]
0x7149D2: add     esi, 1
0x7149D5: cmp     esi, edx
0x7149D7: jb      short loc_7149C2
0x7149D9: push    ebx
0x7149DA: call    FormHeapFree
0x7149DF: xor     ebp, ebp
0x7149E1: add     esp, 4
0x7149E4: cmp     [edi+1F8h], ebp
0x7149EA: jbe     loc_714A89
0x7149F0: mov     eax, [edi+1F0h]
0x7149F6: mov     ecx, [eax+ebp*4]
0x7149F9: mov     edx, [ecx]
0x7149FB: mov     eax, [edx+4]
0x7149FE: call    eax
0x714A00: mov     ebx, [eax]
0x714A02: mov     edx, [esp+40h+var_20]
0x714A06: mov     eax, [edx+4]
0x714A09: push    ebx
0x714A0A: lea     ecx, [esp+44h+var_20]
0x714A0E: call    eax
0x714A10: mov     ecx, [esp+40h+var_18]
0x714A14: mov     esi, [ecx+eax*4]
0x714A17: test    esi, esi
0x714A19: jz      short loc_714A55
0x714A1B: jmp     short loc_714A20
0x714A1D: align 10h
0x714A20: mov     edx, [esi+4]
0x714A23: mov     eax, [esp+40h+var_20]
0x714A27: push    edx
0x714A28: mov     edx, [eax+8]
0x714A2B: push    ebx
0x714A2C: lea     ecx, [esp+48h+var_20]
0x714A30: call    edx
0x714A32: test    al, al
0x714A34: jnz     short loc_714A4D
0x714A36: mov     esi, [esi]
0x714A38: test    esi, esi
0x714A3A: jnz     short loc_714A20
0x714A3C: jmp     short loc_714A55
0x714A3E: mov     eax, [edx+eax*4]
0x714A41: jmp     loc_714942
0x714A46: mov     eax, ecx
0x714A48: jmp     loc_714984
0x714A4D: movzx   eax, word ptr [esi+8]
0x714A51: mov     [esp+40h+var_24], eax
0x714A55: mov     eax, [edi+220h]
0x714A5B: push    1
0x714A5D: lea     ecx, [esp+44h+var_2C]
0x714A61: push    ecx
0x714A62: push    2
0x714A64: lea     edx, [esp+4Ch+var_24]
0x714A68: push    edx
0x714A69: push    eax
0x714A6A: mov     eax, [eax+8]
0x714A6D: mov     [esp+54h+var_2C], 2
0x714A75: call    eax
0x714A77: add     ebp, 1
0x714A7A: add     esp, 14h
0x714A7D: cmp     ebp, [edi+1F8h]
0x714A83: jb      loc_7149F0
0x714A89: cmp     [esp+40h+var_10], 0
0x714A8E: mov     [esp+40h+var_20], offset ??_7?$NiTStringTemplateMap@V?$NiTPointerMap@PBDG@@G@@6B@; const NiTStringTemplateMap<NiTPointerMap<char const *,ushort>,ushort>::`vftable'
0x714A96: jz      short loc_714ACD
0x714A98: xor     edi, edi
0x714A9A: cmp     [esp+40h+var_1C], edi
0x714A9E: jbe     short loc_714ACD
0x714AA0: mov     ecx, [esp+40h+var_18]
0x714AA4: mov     esi, [ecx+edi*4]
0x714AA7: test    esi, esi
0x714AA9: jz      short loc_714AC4
0x714AAB: jmp     short loc_714AB0
0x714AAD: align 10h
0x714AB0: mov     eax, esi
0x714AB2: mov     eax, [eax+4]
0x714AB5: mov     esi, [esi]
0x714AB7: push    eax
0x714AB8: call    FormHeapFree
0x714ABD: add     esp, 4
0x714AC0: test    esi, esi
0x714AC2: jnz     short loc_714AB0
0x714AC4: add     edi, 1
0x714AC7: cmp     edi, [esp+40h+var_1C]
0x714ACB: jb      short loc_714AA0
0x714ACD: mov     [esp+40h+var_20], offset ??_7?$NiTPointerMap@PBDG@@6B@; const NiTPointerMap<char const *,ushort>::`vftable'
0x714AD5: lea     ecx, [esp+40h+var_20]
0x714AD9: mov     [esp+40h+var_4], 1
0x714AE1: call    NiTMap_Clear
0x714AE6: lea     ecx, [esp+40h+var_20]
0x714AEA: mov     [esp+40h+var_4], 0FFFFFFFFh
0x714AF2: mov     [esp+40h+var_20], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDG@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,ushort>::`vftable'
0x714AFA: call    NiTMap_Clear
0x714AFF: mov     edx, [esp+40h+var_18]
0x714B03: push    edx
0x714B04: call    FormHeapFree
0x714B09: add     esp, 4
0x714B0C: mov     ecx, dword ptr [esp+40h+var_C]
0x714B10: mov     large fs:0, ecx
0x714B17: pop     ecx
0x714B18: pop     edi
0x714B19: pop     esi
0x714B1A: pop     ebp
0x714B1B: pop     ebx
0x714B1C: add     esp, 2Ch
0x714B1F: retn
