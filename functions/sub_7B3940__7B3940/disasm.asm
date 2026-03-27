0x7B3940: push    0FFFFFFFFh
0x7B3942: push    offset SEH_7B3940
0x7B3947: mov     eax, large fs:0
0x7B394D: push    eax
0x7B394E: push    ecx
0x7B394F: push    ebx
0x7B3950: push    ebp
0x7B3951: push    esi
0x7B3952: push    edi
0x7B3953: mov     eax, ds:0B30AACh
0x7B3958: xor     eax, esp
0x7B395A: push    eax
0x7B395B: lea     eax, [esp+24h+var_C]
0x7B395F: mov     large fs:0, eax
0x7B3965: mov     edi, ecx
0x7B3967: mov     [esp+24h+var_10], edi
0x7B396B: mov     esi, [edi+1Ch]
0x7B396E: test    esi, esi
0x7B3970: mov     [esp+24h+var_4], 2
0x7B3978: jz      short loc_7B399D
0x7B397A: lea     eax, [esi+4]
0x7B397D: push    eax; lpAddend
0x7B397E: call    dword ptr ds:0A2807Ch
0x7B3984: test    eax, eax
0x7B3986: jnz     short loc_7B3996
0x7B3988: test    esi, esi
0x7B398A: jz      short loc_7B3996
0x7B398C: mov     edx, [esi]
0x7B398E: mov     eax, [edx]
0x7B3990: push    1
0x7B3992: mov     ecx, esi
0x7B3994: call    eax
0x7B3996: mov     dword ptr [edi+1Ch], 0
0x7B399D: lea     ebx, [edi+20h]
0x7B39A0: mov     ecx, ebx
0x7B39A2: call    NiTPointerList__FreeAllNodes
0x7B39A7: mov     esi, [edi+10h]
0x7B39AA: test    esi, esi
0x7B39AC: jz      short loc_7B39D0
0x7B39AE: mov     edi, edi
0x7B39B0: mov     ebp, [esi+8]
0x7B39B3: test    ebp, ebp
0x7B39B5: lea     eax, [esi+8]
0x7B39B8: mov     esi, [esi]
0x7B39BA: jz      short loc_7B39CC
0x7B39BC: mov     ecx, ebp
0x7B39BE: call    sub_803210
0x7B39C3: push    ebp
0x7B39C4: call    FormHeapFree
0x7B39C9: add     esp, 4
0x7B39CC: test    esi, esi
0x7B39CE: jnz     short loc_7B39B0
0x7B39D0: lea     esi, [edi+0Ch]
0x7B39D3: mov     ecx, esi
0x7B39D5: call    NiTPointerList__FreeAllNodes
0x7B39DA: mov     ecx, ebx
0x7B39DC: mov     byte ptr [esp+24h+var_4], 1
0x7B39E1: call    ??1?$NiTList@I@@UAE@XZ; NiTList<uint>::~NiTList<uint>(void)
0x7B39E6: mov     edi, [edi+1Ch]
0x7B39E9: test    edi, edi
0x7B39EB: mov     byte ptr [esp+24h+var_4], 0
0x7B39F0: jz      short loc_7B3A0E
0x7B39F2: lea     ecx, [edi+4]
0x7B39F5: push    ecx; lpAddend
0x7B39F6: call    dword ptr ds:0A2807Ch
0x7B39FC: test    eax, eax
0x7B39FE: jnz     short loc_7B3A0E
0x7B3A00: test    edi, edi
0x7B3A02: jz      short loc_7B3A0E
0x7B3A04: mov     edx, [edi]
0x7B3A06: mov     eax, [edx]
0x7B3A08: push    1
0x7B3A0A: mov     ecx, edi
0x7B3A0C: call    eax
0x7B3A0E: mov     ecx, esi
0x7B3A10: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7B3A18: call    ??1?$NiTPointerList@PAVDistantLODGroup@@@@UAE@XZ; NiTPointerList<DistantLODGroup *>::~NiTPointerList<DistantLODGroup *>(void)
0x7B3A1D: mov     ecx, [esp+24h+var_C]
0x7B3A21: mov     large fs:0, ecx
0x7B3A28: pop     ecx
0x7B3A29: pop     edi
0x7B3A2A: pop     esi
0x7B3A2B: pop     ebp
0x7B3A2C: pop     ebx
0x7B3A2D: add     esp, 10h
0x7B3A30: retn
