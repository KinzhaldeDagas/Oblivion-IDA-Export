0x53BDB0: push    0FFFFFFFFh
0x53BDB2: push    offset SEH_53BDB0
0x53BDB7: mov     eax, large fs:0
0x53BDBD: push    eax
0x53BDBE: sub     esp, 4C4h
0x53BDC4: mov     eax, ds:0B30AACh
0x53BDC9: xor     eax, esp
0x53BDCB: mov     [esp+4D0h+var_10], eax
0x53BDD2: push    ebx
0x53BDD3: push    ebp
0x53BDD4: push    esi
0x53BDD5: push    edi
0x53BDD6: mov     eax, ds:0B30AACh
0x53BDDB: xor     eax, esp
0x53BDDD: push    eax; ArgList
0x53BDDE: lea     eax, [esp+4E4h+var_C]
0x53BDE5: mov     large fs:0, eax
0x53BDEB: mov     eax, [esp+4E4h+arg_0]
0x53BDF2: push    eax
0x53BDF3: mov     ebp, ecx
0x53BDF5: call    sub_543D30
0x53BDFA: mov     ecx, [ebp+4]
0x53BDFD: push    offset aCloudRoot; "Cloud Root"
0x53BE02: call    NiObjectNET_SetName
0x53BE07: lea     ecx, [esp+4E4h+var_4A0]; this
0x53BE0B: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x53BE10: xor     ebx, ebx
0x53BE12: mov     [esp+4E4h+var_4A0], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x53BE1A: mov     [esp+4E4h+var_14], ebx
0x53BE21: mov     [esp+4E4h+var_18], ebx
0x53BE28: mov     [esp+4E4h+var_4], ebx
0x53BE2F: mov     [esp+4E4h+Src], ebx
0x53BE33: mov     word ptr [esp+4E4h+var_4C0], bx
0x53BE38: mov     word ptr [esp+4E4h+var_4C0+2], bx
0x53BE3D: lea     eax, [esp+4E4h+Src]
0x53BE41: push    offset aMeshesSkyCloud; "Meshes\\Sky\\Clouds.nif"
0x53BE46: push    eax; int
0x53BE47: mov     byte ptr [esp+4ECh+var_4], 1
0x53BE4F: call    BSStringT_Static_Format
0x53BE54: mov     esi, [esp+4ECh+Src]
0x53BE58: add     esp, 8
0x53BE5B: push    ebx; int
0x53BE5C: push    esi; Src
0x53BE5D: lea     ecx, [esp+4ECh+var_4A0]
0x53BE61: call    sub_6F9980
0x53BE66: test    al, al
0x53BE68: jz      short loc_53BE9E
0x53BE6A: cmp     [esp+4E4h+var_290], 1
0x53BE72: jnz     short loc_53BE9E
0x53BE74: mov     ecx, [esp+4E4h+var_298]
0x53BE7B: mov     ecx, [ecx]
0x53BE7D: cmp     ecx, ebx
0x53BE7F: jz      short loc_53BE9E
0x53BE81: mov     edx, [ecx]
0x53BE83: mov     eax, [edx+4]
0x53BE86: call    eax
0x53BE88: cmp     eax, ebx
0x53BE8A: jz      short loc_53BE9E
0x53BE8C: lea     esp, [esp+0]
0x53BE90: cmp     eax, offset dword_B3FAB0
0x53BE95: jz      short loc_53BEEF
0x53BE97: mov     eax, [eax+4]
0x53BE9A: cmp     eax, ebx
0x53BE9C: jnz     short loc_53BE90
0x53BE9E: push    offset aCannotLoadTheC; "Cannot load the clouds."
0x53BEA3: call    PrintError
0x53BEA8: push    esi
0x53BEA9: call    FormHeapFree
0x53BEAE: add     esp, 8
0x53BEB1: lea     ecx, [esp+4E4h+var_4A0]; this
0x53BEB5: mov     [esp+4E4h+var_4], 0FFFFFFFFh
0x53BEC0: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x53BEC5: mov     ecx, [esp+4E4h+var_C]
0x53BECC: mov     large fs:0, ecx
0x53BED3: pop     ecx
0x53BED4: pop     edi
0x53BED5: pop     esi
0x53BED6: pop     ebp
0x53BED7: pop     ebx
0x53BED8: mov     ecx, [esp+4D0h+var_10]
0x53BEDF: xor     ecx, esp
0x53BEE1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53BEE6: add     esp, 4D0h
0x53BEEC: retn    4
0x53BEEF: mov     ecx, [esp+4E4h+var_298]
0x53BEF6: mov     eax, [ecx]
0x53BEF8: cmp     eax, ebx
0x53BEFA: mov     [esp+4E4h+var_4BC], eax
0x53BEFE: jnz     short loc_53BF07
0x53BF00: push    offset aCouldNotFindTh; "Could not find the root node in Clouds."...
0x53BF05: jmp     short loc_53BEA3
0x53BF07: xor     edi, edi
0x53BF09: jmp     short loc_53BF14
0x53BF0B: jmp     short loc_53BF10
0x53BF0D: align 10h
0x53BF10: mov     eax, [esp+4E4h+var_4BC]
0x53BF14: movzx   edx, word ptr [eax+0B6h]
0x53BF1B: cmp     edx, edi
0x53BF1D: ja      short loc_53BF23
0x53BF1F: xor     eax, eax
0x53BF21: jmp     short loc_53BF2C
0x53BF23: mov     eax, [eax+0B0h]
0x53BF29: mov     eax, [eax+edi*4]
0x53BF2C: lea     esi, [ebp+edi*4+8]
0x53BF30: push    eax; a2
0x53BF31: mov     ecx, esi; this
0x53BF33: call    NiSmartPointer_Set??
0x53BF38: cmp     [esi], ebx
0x53BF3A: jz      loc_53BFFC
0x53BF40: mov     eax, [esi]
0x53BF42: mov     eax, [eax+0B4h]
0x53BF48: and     word ptr [eax+2Eh], 0FFFh
0x53BF4E: mov     eax, [esi]
0x53BF50: or      word ptr [eax+18h], 2
0x53BF55: mov     ecx, [ebp+4]
0x53BF58: mov     esi, [esi]
0x53BF5A: mov     edx, [ecx]
0x53BF5C: mov     eax, [edx+84h]
0x53BF62: push    1
0x53BF64: push    esi
0x53BF65: call    eax
0x53BF67: lea     eax, [edi+1]
0x53BF6A: xor     edx, edx
0x53BF6C: mov     ecx, 3
0x53BF71: div     ecx
0x53BF73: mov     edi, edx
0x53BF75: cmp     edi, 2
0x53BF78: jl      short loc_53BF10
0x53BF7A: push    offset sub_53B6D0
0x53BF7F: push    2
0x53BF81: push    0Ch
0x53BF83: lea     eax, [esp+4F0h+var_4B8]
0x53BF87: push    eax
0x53BF88: call    sub_401080
0x53BF8D: fld1
0x53BF8F: mov     ebp, [ebp+4]
0x53BF92: fst     [esp+4E4h+var_4D0]
0x53BF96: fldz
0x53BF98: mov     ecx, [esp+4E4h+var_4D0]
0x53BF9C: fst     [esp+4E4h+var_4CC]
0x53BFA0: mov     [esp+4E4h+var_4B8], ecx
0x53BFA4: fst     [esp+4E4h+var_4C8]
0x53BFA8: push    ebx
0x53BFA9: mov     edx, [esp+4E8h+var_4CC]
0x53BFAD: fxch    st(1)
0x53BFAF: mov     eax, [esp+4E8h+var_4C8]
0x53BFB3: fstp    [esp+4E8h+var_4D0]
0x53BFB7: mov     [esp+4E8h+var_4B4], edx
0x53BFBB: mov     ecx, [esp+4E8h+var_4D0]
0x53BFBF: mov     [esp+4E8h+var_4AC], ecx
0x53BFC3: lea     ecx, [esp+4E8h+var_4B8]
0x53BFC7: fst     [esp+4E8h+var_4CC]
0x53BFCB: mov     edx, [esp+4E8h+var_4CC]
0x53BFCF: fstp    [esp+4E8h+var_4C8]
0x53BFD3: mov     [esp+4E8h+var_4B0], eax
0x53BFD7: mov     eax, [esp+4E8h+var_4C8]
0x53BFDB: push    ecx
0x53BFDC: push    ebp
0x53BFDD: mov     [esp+4F0h+var_4A8], edx
0x53BFE1: mov     [esp+4F0h+var_4A4], eax
0x53BFE5: call    sub_541790
0x53BFEA: mov     edx, [esp+4F0h+Src]
0x53BFEE: push    edx
0x53BFEF: call    FormHeapFree
0x53BFF4: add     esp, 10h
0x53BFF7: jmp     loc_53BEB1
0x53BFFC: push    offset aMissingExpecte; "Missing expected geometry layer in Clou"...
0x53C001: call    PrintError
0x53C006: mov     edx, [esp+4E8h+Src]
0x53C00A: push    edx
0x53C00B: jmp     loc_53BEA9
