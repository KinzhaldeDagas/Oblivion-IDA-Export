0x71F860: push    0FFFFFFFFh
0x71F862: push    offset ??0NiDevImageConverter@@QAE@XZ_SEH
0x71F867: mov     eax, large fs:0
0x71F86D: push    eax
0x71F86E: sub     esp, 8
0x71F871: push    ebx
0x71F872: push    ebp
0x71F873: push    esi
0x71F874: push    edi
0x71F875: mov     eax, ds:0B30AACh
0x71F87A: xor     eax, esp
0x71F87C: push    eax
0x71F87D: lea     eax, [esp+28h+var_C]
0x71F881: mov     large fs:0, eax
0x71F887: mov     esi, ecx
0x71F889: mov     [esp+28h+var_14], esi
0x71F88D: call    ??0NiImageConverter@@QAE@XZ; NiImageConverter::NiImageConverter(void)
0x71F892: xor     edi, edi
0x71F894: lea     ecx, [esi+680h]
0x71F89A: mov     [esp+28h+var_4], edi
0x71F89E: mov     dword ptr [esi], offset ??_7NiDevImageConverter@@6B@; const NiDevImageConverter::`vftable'
0x71F8A4: call    sub_734710
0x71F8A9: add     esi, 890h
0x71F8AF: mov     [esi+0Ch], edi
0x71F8B2: mov     [esi+4], edi
0x71F8B5: mov     [esi+8], edi
0x71F8B8: mov     dword ptr [esi], offset ??_7?$NiTPointerList@PAVNiImageReader@@@@6B@; const NiTPointerList<NiImageReader *>::`vftable'
0x71F8BE: mov     bl, 2
0x71F8C0: push    180h; Size
0x71F8C5: mov     byte ptr [esp+2Ch+var_4], bl
0x71F8C9: call    FormHeapAlloc
0x71F8CE: add     esp, 4
0x71F8D1: mov     [esp+28h+var_10], eax
0x71F8D5: cmp     eax, edi
0x71F8D7: mov     byte ptr [esp+28h+var_4], 3
0x71F8DC: jz      short loc_71F8E9
0x71F8DE: mov     ecx, eax
0x71F8E0: call    sub_737750
0x71F8E5: mov     ebp, eax
0x71F8E7: jmp     short loc_71F8EB
0x71F8E9: xor     ebp, ebp
0x71F8EB: mov     eax, [esi]
0x71F8ED: mov     edx, [eax+4]
0x71F8F0: mov     ecx, esi
0x71F8F2: mov     byte ptr [esp+28h+var_4], bl
0x71F8F6: call    edx
0x71F8F8: mov     [eax+8], ebp
0x71F8FB: mov     [eax+4], edi
0x71F8FE: mov     ecx, [esi+4]
0x71F901: mov     [eax], ecx
0x71F903: mov     ecx, [esi+4]
0x71F906: cmp     ecx, edi
0x71F908: jz      short loc_71F90F
0x71F90A: mov     [ecx+4], eax
0x71F90D: jmp     short loc_71F912
0x71F90F: mov     [esi+8], eax
0x71F912: add     dword ptr [esi+0Ch], 1
0x71F916: push    180h; Size
0x71F91B: mov     [esi+4], eax
0x71F91E: call    FormHeapAlloc
0x71F923: add     esp, 4
0x71F926: mov     [esp+28h+var_10], eax
0x71F92A: cmp     eax, edi
0x71F92C: mov     byte ptr [esp+28h+var_4], 4
0x71F931: jz      short loc_71F93E
0x71F933: mov     ecx, eax
0x71F935: call    sub_736360
0x71F93A: mov     ebp, eax
0x71F93C: jmp     short loc_71F940
0x71F93E: xor     ebp, ebp
0x71F940: mov     edx, [esi]
0x71F942: mov     eax, [edx+4]
0x71F945: mov     ecx, esi
0x71F947: mov     byte ptr [esp+28h+var_4], bl
0x71F94B: call    eax
0x71F94D: mov     [eax+8], ebp
0x71F950: mov     [eax+4], edi
0x71F953: mov     ecx, [esi+4]
0x71F956: mov     [eax], ecx
0x71F958: mov     ecx, [esi+4]
0x71F95B: cmp     ecx, edi
0x71F95D: jz      short loc_71F964
0x71F95F: mov     [ecx+4], eax
0x71F962: jmp     short loc_71F967
0x71F964: mov     [esi+8], eax
0x71F967: add     dword ptr [esi+0Ch], 1
0x71F96B: push    180h; Size
0x71F970: mov     [esi+4], eax
0x71F973: call    FormHeapAlloc
0x71F978: add     esp, 4
0x71F97B: mov     [esp+28h+var_10], eax
0x71F97F: cmp     eax, edi
0x71F981: mov     byte ptr [esp+28h+var_4], 5
0x71F986: jz      short loc_71F993
0x71F988: mov     ecx, eax
0x71F98A: call    sub_735990
0x71F98F: mov     ebp, eax
0x71F991: jmp     short loc_71F995
0x71F993: xor     ebp, ebp
0x71F995: mov     edx, [esi]
0x71F997: mov     eax, [edx+4]
0x71F99A: mov     ecx, esi
0x71F99C: mov     byte ptr [esp+28h+var_4], bl
0x71F9A0: call    eax
0x71F9A2: mov     [eax+8], ebp
0x71F9A5: mov     [eax+4], edi
0x71F9A8: mov     ecx, [esi+4]
0x71F9AB: mov     [eax], ecx
0x71F9AD: mov     ecx, [esi+4]
0x71F9B0: cmp     ecx, edi
0x71F9B2: jz      short loc_71F9B9
0x71F9B4: mov     [ecx+4], eax
0x71F9B7: jmp     short loc_71F9BC
0x71F9B9: mov     [esi+8], eax
0x71F9BC: add     dword ptr [esi+0Ch], 1
0x71F9C0: push    180h; Size
0x71F9C5: mov     [esi+4], eax
0x71F9C8: call    FormHeapAlloc
0x71F9CD: add     esp, 4
0x71F9D0: mov     [esp+28h+var_10], eax
0x71F9D4: cmp     eax, edi
0x71F9D6: mov     byte ptr [esp+28h+var_4], 6
0x71F9DB: jz      short loc_71F9E8
0x71F9DD: mov     ecx, eax
0x71F9DF: call    sub_734B00
0x71F9E4: mov     ebp, eax
0x71F9E6: jmp     short loc_71F9EA
0x71F9E8: xor     ebp, ebp
0x71F9EA: mov     edx, [esi]
0x71F9EC: mov     eax, [edx+4]
0x71F9EF: mov     ecx, esi
0x71F9F1: mov     byte ptr [esp+28h+var_4], bl
0x71F9F5: call    eax
0x71F9F7: mov     [eax+8], ebp
0x71F9FA: mov     [eax+4], edi
0x71F9FD: mov     ecx, [esi+4]
0x71FA00: mov     [eax], ecx
0x71FA02: mov     ecx, [esi+4]
0x71FA05: cmp     ecx, edi
0x71FA07: jz      short loc_71FA0E
0x71FA09: mov     [ecx+4], eax
0x71FA0C: jmp     short loc_71FA11
0x71FA0E: mov     [esi+8], eax
0x71FA11: add     dword ptr [esi+0Ch], 1
0x71FA15: push    600h; Size
0x71FA1A: mov     [esi+4], eax
0x71FA1D: call    FormHeapAlloc
0x71FA22: add     esp, 4
0x71FA25: mov     [esp+28h+var_10], eax
0x71FA29: cmp     eax, edi
0x71FA2B: mov     byte ptr [esp+28h+var_4], 7
0x71FA30: jz      short loc_71FA3D
0x71FA32: mov     ecx, eax; this
0x71FA34: call    ??0NiNIFImageReader@@QAE@XZ; NiNIFImageReader::NiNIFImageReader(void)
0x71FA39: mov     ebp, eax
0x71FA3B: jmp     short loc_71FA3F
0x71FA3D: xor     ebp, ebp
0x71FA3F: mov     edx, [esi]
0x71FA41: mov     eax, [edx+4]
0x71FA44: mov     ecx, esi
0x71FA46: mov     byte ptr [esp+28h+var_4], bl
0x71FA4A: call    eax
0x71FA4C: mov     [eax+8], ebp
0x71FA4F: mov     [eax+4], edi
0x71FA52: mov     ecx, [esi+4]
0x71FA55: mov     [eax], ecx
0x71FA57: mov     ecx, [esi+4]
0x71FA5A: cmp     ecx, edi
0x71FA5C: jz      short loc_71FA63
0x71FA5E: mov     [ecx+4], eax
0x71FA61: jmp     short loc_71FA66
0x71FA63: mov     [esi+8], eax
0x71FA66: add     dword ptr [esi+0Ch], 1
0x71FA6A: mov     [esi+4], eax
0x71FA6D: mov     eax, [esp+28h+var_14]
0x71FA71: mov     ecx, [esp+28h+var_C]
0x71FA75: mov     large fs:0, ecx
0x71FA7C: pop     ecx
0x71FA7D: pop     edi
0x71FA7E: pop     esi
0x71FA7F: pop     ebp
0x71FA80: pop     ebx
0x71FA81: add     esp, 14h
0x71FA84: retn
