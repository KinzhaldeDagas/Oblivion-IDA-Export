0x4C64E0: push    0FFFFFFFFh
0x4C64E2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x4C64E7: mov     eax, large fs:0
0x4C64ED: push    eax
0x4C64EE: push    ecx
0x4C64EF: push    ebx
0x4C64F0: push    ebp
0x4C64F1: push    esi
0x4C64F2: push    edi
0x4C64F3: mov     eax, ds:0B30AACh
0x4C64F8: xor     eax, esp
0x4C64FA: push    eax
0x4C64FB: lea     eax, [esp+24h+var_C]
0x4C64FF: mov     large fs:0, eax
0x4C6505: mov     ebx, ecx
0x4C6507: mov     eax, [ebx+24h]
0x4C650A: xor     ebp, ebp
0x4C650C: cmp     eax, ebp
0x4C650E: jz      short loc_4C652B
0x4C6510: cmp     [eax+4], ebp
0x4C6513: jz      short loc_4C652B
0x4C6515: xor     al, al
0x4C6517: mov     ecx, [esp+24h+var_C]
0x4C651B: mov     large fs:0, ecx
0x4C6522: pop     ecx
0x4C6523: pop     edi
0x4C6524: pop     esi
0x4C6525: pop     ebp
0x4C6526: pop     ebx
0x4C6527: add     esp, 10h
0x4C652A: retn
0x4C652B: push    0A0h ; ' '; Size
0x4C6530: call    FormHeapAlloc
0x4C6535: add     esp, 4
0x4C6538: mov     [esp+24h+var_10], eax
0x4C653C: cmp     eax, ebp
0x4C653E: mov     [esp+24h+var_4], ebp
0x4C6542: jz      short loc_4C654D
0x4C6544: mov     ecx, eax
0x4C6546: call    sub_4C6170
0x4C654B: jmp     short loc_4C654F
0x4C654D: xor     eax, eax
0x4C654F: mov     ecx, [ebx+20h]; this
0x4C6552: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4C655A: mov     [ebx+24h], eax
0x4C655D: call    TESObjectCELL_GetXCoordinate
0x4C6562: mov     ecx, [ebx+24h]
0x4C6565: mov     [ecx+98h], eax
0x4C656B: mov     ecx, [ebx+20h]; this
0x4C656E: call    TESObjectCELL_GetYCoordinate
0x4C6573: mov     edx, [ebx+24h]
0x4C6576: push    10h; Size
0x4C6578: mov     [edx+9Ch], eax
0x4C657E: call    FormHeapAlloc
0x4C6583: mov     ecx, [ebx+24h]
0x4C6586: push    10h; Size
0x4C6588: mov     [ecx+4], eax
0x4C658B: call    FormHeapAlloc
0x4C6590: mov     edx, [ebx+24h]
0x4C6593: push    10h; Size
0x4C6595: mov     [edx+0Ch], eax
0x4C6598: call    FormHeapAlloc
0x4C659D: mov     ecx, [ebx+24h]
0x4C65A0: push    10h; Size
0x4C65A2: mov     [ecx+8], eax
0x4C65A5: call    FormHeapAlloc
0x4C65AA: mov     edx, [ebx+24h]
0x4C65AD: mov     esi, offset dword_B35BB8
0x4C65B2: add     esp, 10h
0x4C65B5: sub     esi, 40h ; '@'
0x4C65B8: mov     [edx+10h], eax
0x4C65BB: mov     [esp+24h+var_10], esi
0x4C65BF: jmp     short loc_4C65C5
0x4C65C1: mov     esi, [esp+24h+var_10]
0x4C65C5: push    0D8Ch; Size
0x4C65CA: call    FormHeapAlloc
0x4C65CF: mov     ecx, [ebx+24h]
0x4C65D2: mov     edx, [ecx+4]
0x4C65D5: mov     [edx+ebp], eax
0x4C65D8: mov     eax, [ebx+24h]
0x4C65DB: mov     edx, [eax+4]
0x4C65DE: mov     esi, [esi+ebp+40h]
0x4C65E2: mov     edi, [edx+ebp]
0x4C65E5: mov     ecx, 363h
0x4C65EA: push    1210h; Size
0x4C65EF: rep movsd
0x4C65F1: call    FormHeapAlloc
0x4C65F6: add     esp, 8
0x4C65F9: test    eax, eax
0x4C65FB: jz      short loc_4C661F
0x4C65FD: fldz
0x4C65FF: mov     edx, 120h
0x4C6604: lea     ecx, [eax+8]
0x4C6607: fst     dword ptr [ecx-8]
0x4C660A: add     ecx, 10h
0x4C660D: sub     edx, 1
0x4C6610: fst     dword ptr [ecx-14h]
0x4C6613: fst     dword ptr [ecx-10h]
0x4C6616: fst     dword ptr [ecx-0Ch]
0x4C6619: jns     short loc_4C6607
0x4C661B: fstp    st
0x4C661D: jmp     short loc_4C6621
0x4C661F: xor     eax, eax
0x4C6621: mov     ecx, [ebx+24h]
0x4C6624: mov     edx, [ecx+0Ch]
0x4C6627: mov     [edx+ebp], eax
0x4C662A: mov     eax, ds:0B35BCCh
0x4C662F: mov     ecx, [ebx+24h]
0x4C6632: mov     edx, [ecx+0Ch]
0x4C6635: push    1210h; Size
0x4C663A: push    eax; Src
0x4C663B: mov     eax, [edx+ebp]
0x4C663E: push    eax; Dst
0x4C663F: call    _memcpy
0x4C6644: push    0D8Ch; Size
0x4C6649: call    FormHeapAlloc
0x4C664E: mov     ecx, [ebx+24h]
0x4C6651: mov     edx, [ecx+8]
0x4C6654: mov     [edx+ebp], eax
0x4C6657: mov     eax, [ebx+24h]
0x4C665A: mov     edx, [eax+8]
0x4C665D: mov     esi, ds:0B35BD0h
0x4C6663: mov     edi, [edx+ebp]
0x4C6666: mov     ecx, 363h
0x4C666B: push    121h; Size
0x4C6670: rep movsd
0x4C6672: call    FormHeapAlloc
0x4C6677: mov     ecx, [ebx+24h]
0x4C667A: mov     edx, [ecx+10h]
0x4C667D: mov     [edx+ebp], eax
0x4C6680: mov     eax, [ebx+24h]
0x4C6683: mov     edx, [eax+10h]
0x4C6686: mov     esi, ds:0B35BD8h
0x4C668C: mov     edi, [edx+ebp]
0x4C668F: mov     ecx, 48h ; 'H'
0x4C6694: rep movsd
0x4C6696: push    484h; Size
0x4C669B: movsb
0x4C669C: call    FormHeapAlloc
0x4C66A1: mov     ecx, [ebx+24h]
0x4C66A4: push    2420h; Size
0x4C66A9: mov     [ecx+ebp+40h], eax
0x4C66AD: call    FormHeapAlloc
0x4C66B2: push    2420h
0x4C66B7: mov     esi, eax
0x4C66B9: push    0
0x4C66BB: push    esi
0x4C66BC: call    __memset
0x4C66C1: add     esp, 28h
0x4C66C4: xor     eax, eax
0x4C66C6: mov     edx, [ebx+24h]
0x4C66C9: mov     ecx, [edx+ebp+40h]
0x4C66CD: mov     [eax+ecx], esi
0x4C66D0: add     eax, 4
0x4C66D3: add     esi, 20h ; ' '
0x4C66D6: cmp     eax, 484h
0x4C66DB: jl      short loc_4C66C6
0x4C66DD: push    20h ; ' '; Size
0x4C66DF: call    FormHeapAlloc
0x4C66E4: mov     edx, [ebx+24h]
0x4C66E7: mov     [edx+ebp+30h], eax
0x4C66EB: mov     ecx, [ebx+24h]
0x4C66EE: mov     ecx, [ecx+ebp+30h]
0x4C66F2: xor     eax, eax
0x4C66F4: mov     [ecx], eax
0x4C66F6: mov     [ecx+4], eax
0x4C66F9: mov     [ecx+8], eax
0x4C66FC: mov     [ecx+0Ch], eax
0x4C66FF: mov     [ecx+10h], eax
0x4C6702: mov     [ecx+14h], eax
0x4C6705: add     ebp, 4
0x4C6708: add     esp, 4
0x4C670B: cmp     ebp, 10h
0x4C670E: mov     [ecx+18h], eax
0x4C6711: mov     [ecx+1Ch], eax
0x4C6714: jl      loc_4C65C1
0x4C671A: mov     al, 1
0x4C671C: mov     ecx, [esp+24h+var_C]
0x4C6720: mov     large fs:0, ecx
0x4C6727: pop     ecx
0x4C6728: pop     edi
0x4C6729: pop     esi
0x4C672A: pop     ebp
0x4C672B: pop     ebx
0x4C672C: add     esp, 10h
0x4C672F: retn
