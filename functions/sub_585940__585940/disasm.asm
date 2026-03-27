0x585940: push    0FFFFFFFFh
0x585942: push    offset SEH_585940
0x585947: mov     eax, large fs:0
0x58594D: push    eax
0x58594E: push    ecx
0x58594F: push    esi
0x585950: push    edi
0x585951: mov     eax, ds:0B30AACh
0x585956: xor     eax, esp
0x585958: push    eax
0x585959: lea     eax, [esp+1Ch+var_C]
0x58595D: mov     large fs:0, eax
0x585963: mov     esi, ecx
0x585965: mov     [esp+1Ch+var_10], esi
0x585969: mov     edi, [esi]
0x58596B: test    edi, edi
0x58596D: mov     [esp+1Ch+var_4], 1
0x585975: jz      short loc_585987
0x585977: mov     ecx, edi; void *
0x585979: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x58597E: push    edi
0x58597F: call    FormHeapFree
0x585984: add     esp, 4
0x585987: lea     ecx, [esi+14h]
0x58598A: mov     byte ptr [esp+1Ch+var_4], 0
0x58598F: call    ??1?$NiTList@V?$BSStringT@D@@@@UAE@XZ; NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>(void)
0x585994: lea     ecx, [esi+4]
0x585997: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x58599F: call    ??1?$NiTList@V?$BSStringT@D@@@@UAE@XZ; NiTList<BSStringT<char>>::~NiTList<BSStringT<char>>(void)
0x5859A4: mov     ecx, [esp+1Ch+var_C]
0x5859A8: mov     large fs:0, ecx
0x5859AF: pop     ecx
0x5859B0: pop     edi
0x5859B1: pop     esi
0x5859B2: add     esp, 10h
0x5859B5: retn
