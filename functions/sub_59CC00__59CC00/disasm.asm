0x59CC00: push    0FFFFFFFFh
0x59CC02: push    offset SEH_59CC00
0x59CC07: mov     eax, large fs:0
0x59CC0D: push    eax
0x59CC0E: sub     esp, 18h
0x59CC11: push    ebx
0x59CC12: push    ebp
0x59CC13: push    esi
0x59CC14: push    edi
0x59CC15: mov     eax, ds:0B30AACh
0x59CC1A: xor     eax, esp
0x59CC1C: push    eax
0x59CC1D: lea     eax, [esp+38h+var_C]
0x59CC21: mov     large fs:0, eax
0x59CC27: mov     [esp+38h+Src], ecx
0x59CC2B: push    30h ; '0'; Size
0x59CC2D: call    FormHeapAlloc
0x59CC32: push    20h ; ' '; Size
0x59CC34: mov     esi, eax
0x59CC36: call    FormHeapAlloc
0x59CC3B: push    0Ch; Size
0x59CC3D: mov     edi, eax
0x59CC3F: call    FormHeapAlloc
0x59CC44: fldz
0x59CC46: fst     [esp+44h+var_18]
0x59CC4A: mov     ebx, eax
0x59CC4C: mov     eax, [esp+44h+var_18]
0x59CC50: fld     dword ptr ds:0A34BA0h
0x59CC56: fst     [esp+44h+var_14]
0x59CC5A: mov     [esi], eax
0x59CC5C: mov     ecx, [esp+44h+var_14]
0x59CC60: fxch    st(1)
0x59CC62: mov     eax, [esp+44h+arg_8]
0x59CC66: fst     [esp+44h+var_10]
0x59CC6A: mov     edx, [esp+44h+var_10]
0x59CC6E: fst     [esp+44h+var_18]
0x59CC72: neg     eax
0x59CC74: fxch    st(1)
0x59CC76: fst     [esp+44h+var_14]
0x59CC7A: mov     [esp+44h+arg_8], eax
0x59CC7E: fild    [esp+44h+arg_8]
0x59CC82: mov     [esi+4], ecx
0x59CC85: mov     ecx, [esp+44h+var_18]
0x59CC89: mov     [esi+8], edx
0x59CC8C: mov     edx, [esp+44h+var_14]
0x59CC90: fstp    [esp+44h+arg_8]
0x59CC94: mov     [esi+0Ch], ecx
0x59CC97: fld     [esp+44h+arg_8]
0x59CC9B: mov     [esi+10h], edx
0x59CC9E: fst     [esp+44h+var_10]
0x59CCA2: mov     eax, [esp+44h+var_10]
0x59CCA6: fild    [esp+44h+a2]
0x59CCAA: mov     [esi+14h], eax
0x59CCAD: fstp    [esp+44h+var_24]
0x59CCB1: fld     [esp+44h+var_24]
0x59CCB5: fst     [esp+44h+var_18]
0x59CCB9: mov     ecx, [esp+44h+var_18]
0x59CCBD: fxch    st(2)
0x59CCBF: mov     [esi+18h], ecx
0x59CCC2: fst     [esp+44h+var_14]
0x59CCC6: mov     edx, [esp+44h+var_14]
0x59CCCA: fxch    st(3)
0x59CCCC: mov     [esi+1Ch], edx
0x59CCCF: fst     [esp+44h+var_10]
0x59CCD3: mov     eax, [esp+44h+var_10]
0x59CCD7: fxch    st(2)
0x59CCD9: mov     [esi+20h], eax
0x59CCDC: fstp    [esp+44h+var_18]
0x59CCE0: mov     ecx, [esp+44h+var_18]
0x59CCE4: fxch    st(2)
0x59CCE6: mov     [esi+24h], ecx
0x59CCE9: fstp    [esp+44h+var_14]
0x59CCED: mov     edx, [esp+44h+var_14]
0x59CCF1: fxch    st(1)
0x59CCF3: mov     [esi+28h], edx
0x59CCF6: fstp    [esp+44h+var_10]
0x59CCFA: mov     eax, [esp+44h+var_10]
0x59CCFE: mov     [esi+2Ch], eax
0x59CD01: fst     [esp+44h+var_18]
0x59CD05: mov     ecx, [esp+44h+var_18]
0x59CD09: fst     [esp+44h+var_14]
0x59CD0D: mov     edx, [esp+44h+var_14]
0x59CD11: fst     [esp+44h+var_18]
0x59CD15: mov     eax, [esp+44h+var_18]
0x59CD19: fld1
0x59CD1B: mov     [edi], ecx
0x59CD1D: fst     [esp+44h+var_14]
0x59CD21: mov     [edi+4], edx
0x59CD24: mov     ecx, [esp+44h+var_14]
0x59CD28: fst     [esp+44h+var_18]
0x59CD2C: mov     edx, [esp+44h+var_18]
0x59CD30: fxch    st(1)
0x59CD32: fstp    [esp+44h+var_14]
0x59CD36: mov     [edi+8], eax
0x59CD39: mov     [edi+0Ch], ecx
0x59CD3C: mov     [edi+10h], edx
0x59CD3F: mov     eax, [esp+44h+var_14]
0x59CD43: fst     [esp+44h+var_18]
0x59CD47: mov     ecx, [esp+44h+var_18]
0x59CD4B: fstp    [esp+44h+var_14]
0x59CD4F: mov     edx, [esp+44h+var_14]
0x59CD53: mov     [edi+14h], eax
0x59CD56: mov     [edi+18h], ecx
0x59CD59: mov     [edi+1Ch], edx
0x59CD5C: mov     ecx, 1
0x59CD61: mov     eax, 2
0x59CD66: xor     ebp, ebp
0x59CD68: push    0DCh ; 'Ü'; Size
0x59CD6D: mov     [ebx], bp
0x59CD70: mov     [ebx+2], cx
0x59CD74: mov     [ebx+4], ax
0x59CD78: mov     [ebx+6], ax
0x59CD7C: mov     [ebx+8], cx
0x59CD80: mov     word ptr [ebx+0Ah], 3
0x59CD86: call    FormHeapAlloc
0x59CD8B: add     esp, 10h
0x59CD8E: mov     [esp+38h+arg_8], eax
0x59CD92: cmp     eax, ebp
0x59CD94: mov     [esp+38h+var_4], ebp
0x59CD98: jz      short loc_59CDA4
0x59CD9A: push    ebp
0x59CD9B: mov     ecx, eax; this
0x59CD9D: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x59CDA2: mov     ebp, eax
0x59CDA4: mov     eax, [esp+38h+arg_0]
0x59CDA8: mov     eax, [eax]
0x59CDAA: push    eax; Src
0x59CDAB: mov     ecx, ebp
0x59CDAD: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x59CDB5: call    NiObjectNET_SetName
0x59CDBA: mov     ecx, [esp+38h+Src]
0x59CDBE: mov     eax, [ecx+40h]
0x59CDC1: cmp     eax, 2
0x59CDC4: mov     edx, [ecx+44h]
0x59CDC7: mov     [esp+38h+arg_8], edx
0x59CDCB: jnz     short loc_59CDEC
0x59CDCD: fild    [esp+38h+arg_8]
0x59CDD1: fld     [esp+38h+var_24]
0x59CDD5: fmul    qword ptr ds:0A2FAA0h
0x59CDDB: fsubp   st(1), st
0x59CDDD: call    Double_To_SInt32
0x59CDE2: mov     ecx, [esp+38h+Src]
0x59CDE6: mov     [esp+38h+arg_8], eax
0x59CDEA: jmp     short loc_59CDF9
0x59CDEC: cmp     eax, 4
0x59CDEF: jnz     short loc_59CDF9
0x59CDF1: sub     edx, [esp+38h+a2]
0x59CDF5: mov     [esp+38h+arg_8], edx
0x59CDF9: fild    dword ptr [ecx+48h]
0x59CDFC: push    1Ch; Size
0x59CDFE: fstp    [esp+3Ch+a2]
0x59CE02: fild    [esp+3Ch+arg_8]
0x59CE06: fstp    [esp+3Ch+var_18]
0x59CE0A: mov     ecx, [esp+3Ch+var_18]
0x59CE0E: fldz
0x59CE10: mov     [ebp+54h], ecx
0x59CE13: fstp    [esp+3Ch+var_14]
0x59CE17: fld     [esp+3Ch+a2]
0x59CE1B: mov     edx, [esp+3Ch+var_14]
0x59CE1F: fstp    [esp+3Ch+var_10]
0x59CE23: mov     [ebp+58h], edx
0x59CE26: mov     eax, [esp+3Ch+var_10]
0x59CE2A: mov     [ebp+5Ch], eax
0x59CE2D: call    FormHeapAlloc
0x59CE32: add     esp, 4
0x59CE35: mov     [esp+38h+a2], eax
0x59CE39: test    eax, eax
0x59CE3B: mov     [esp+38h+var_4], 1
0x59CE43: jz      short loc_59CE62
0x59CE45: mov     ecx, eax; this
0x59CE47: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x59CE4C: mov     eax, [esp+38h+a2]
0x59CE50: mov     dword ptr [eax], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x59CE56: mov     word ptr [eax+18h], 0ECh ; 'ì'
0x59CE5C: mov     byte ptr [eax+1Ah], 0
0x59CE60: jmp     short loc_59CE64
0x59CE62: xor     eax, eax
0x59CE64: or      word ptr [eax+18h], 1
0x59CE69: push    eax; a2
0x59CE6A: mov     ecx, ebp; this
0x59CE6C: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x59CE74: call    sub_405680
0x59CE79: push    0C0h ; 'À'; Size
0x59CE7E: call    FormHeapAlloc
0x59CE83: add     esp, 4
0x59CE86: mov     [esp+38h+a2], eax
0x59CE8A: test    eax, eax
0x59CE8C: mov     [esp+38h+var_4], 2
0x59CE94: jz      short loc_59CEB0
0x59CE96: push    ebx
0x59CE97: push    2
0x59CE99: push    0
0x59CE9B: push    1
0x59CE9D: push    edi
0x59CE9E: push    0
0x59CEA0: push    0
0x59CEA2: push    esi
0x59CEA3: push    4
0x59CEA5: mov     ecx, eax
0x59CEA7: call    sub_7174B0
0x59CEAC: mov     edi, eax
0x59CEAE: jmp     short loc_59CEB2
0x59CEB0: xor     edi, edi
0x59CEB2: mov     edx, [ebp+0]
0x59CEB5: mov     eax, [edx+84h]
0x59CEBB: push    1
0x59CEBD: push    edi
0x59CEBE: mov     ecx, ebp
0x59CEC0: mov     [esp+40h+var_4], 0FFFFFFFFh
0x59CEC8: call    eax
0x59CECA: xor     eax, eax
0x59CECC: mov     [esp+38h+Src], eax
0x59CED0: mov     [esp+38h+var_1C], ax
0x59CED5: mov     [esp+38h+var_1A], ax
0x59CEDA: mov     ecx, [esp+38h+arg_0]
0x59CEDE: mov     eax, [ecx]
0x59CEE0: push    eax; ArgList
0x59CEE1: lea     edx, [esp+3Ch+Src]
0x59CEE5: push    offset aTexturesMenusC; "Textures\\Menus\\Credits\\%s"
0x59CEEA: push    edx; int
0x59CEEB: mov     [esp+44h+var_4], 3
0x59CEF3: call    BSStringT_Static_Format
0x59CEF8: mov     ebx, [esp+44h+Src]
0x59CEFC: add     esp, 0Ch
0x59CEFF: push    ebx; Src
0x59CF00: mov     ecx, edi
0x59CF02: call    NiObjectNET_SetName
0x59CF07: push    1; char
0x59CF09: push    offset dword_B256D0; int
0x59CF0E: push    ebx; Src
0x59CF0F: call    NiSourceTexture__LoadTextureByFilename
0x59CF14: push    30h ; '0'; Size
0x59CF16: mov     [esp+48h+a2], eax
0x59CF1A: call    FormHeapAlloc
0x59CF1F: add     esp, 10h
0x59CF22: mov     [esp+38h+arg_0], eax
0x59CF26: test    eax, eax
0x59CF28: mov     byte ptr [esp+38h+var_4], 4
0x59CF2D: jz      short loc_59CF3A
0x59CF2F: mov     ecx, eax
0x59CF31: call    NiTexturingProperty__NiTexturingProperty
0x59CF36: mov     ebx, eax
0x59CF38: jmp     short loc_59CF3C
0x59CF3A: xor     ebx, ebx
0x59CF3C: mov     eax, [esp+38h+a2]
0x59CF40: push    eax
0x59CF41: mov     ecx, ebx
0x59CF43: mov     byte ptr [esp+3Ch+var_4], 3
0x59CF48: call    NiTexturingProperty__SetUnk08
0x59CF4D: mov     cx, [ebx+18h]
0x59CF51: and     cx, 0FFF5h
0x59CF56: or      cx, 4
0x59CF5A: mov     [ebx+18h], cx
0x59CF5E: push    ebx; a2
0x59CF5F: mov     ecx, edi; this
0x59CF61: call    sub_405680
0x59CF66: push    5Ch ; '\'; Size
0x59CF68: call    FormHeapAlloc
0x59CF6D: add     esp, 4
0x59CF70: mov     [esp+38h+a2], eax
0x59CF74: test    eax, eax
0x59CF76: mov     byte ptr [esp+38h+var_4], 5
0x59CF7B: jz      short loc_59CF86
0x59CF7D: mov     ecx, eax; this
0x59CF7F: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x59CF84: jmp     short loc_59CF88
0x59CF86: xor     eax, eax
0x59CF88: mov     edx, ds:0B25AC4h
0x59CF8E: mov     [eax+40h], edx
0x59CF91: mov     ecx, ds:0B25AC8h
0x59CF97: mov     [eax+44h], ecx
0x59CF9A: mov     edx, ds:0B25ACCh
0x59CFA0: add     dword ptr [eax+54h], 1
0x59CFA4: mov     ecx, [eax+54h]
0x59CFA7: mov     [eax+48h], edx
0x59CFAA: mov     edx, ds:0B25AC4h
0x59CFB0: mov     [eax+1Ch], edx
0x59CFB3: mov     edx, ds:0B25AC8h
0x59CFB9: mov     [eax+20h], edx
0x59CFBC: mov     edx, ds:0B25ACCh
0x59CFC2: add     ecx, 1
0x59CFC5: mov     [eax+54h], ecx
0x59CFC8: push    eax; a2
0x59CFC9: mov     ecx, edi; this
0x59CFCB: mov     byte ptr [esp+3Ch+var_4], 3
0x59CFD0: mov     [eax+24h], edx
0x59CFD3: call    sub_405680
0x59CFD8: mov     edi, [edi+0B4h]
0x59CFDE: push    esi
0x59CFDF: push    4
0x59CFE1: lea     ecx, [edi+0Ch]
0x59CFE4: call    sub_72A0F0
0x59CFE9: push    1
0x59CFEB: push    0
0x59CFED: push    1
0x59CFEF: push    ebp
0x59CFF0: call    sub_7B8940
0x59CFF5: fld     [esp+48h+arg_C]
0x59CFF9: add     esp, 0Ch
0x59CFFC: fstp    [esp+3Ch+var_3C]; float
0x59CFFF: push    ebp; int
0x59D000: call    sub_4A2A90
0x59D005: mov     eax, [esp+40h+Src]
0x59D009: push    eax
0x59D00A: call    FormHeapFree
0x59D00F: add     esp, 0Ch
0x59D012: mov     eax, ebp
0x59D014: mov     ecx, [esp+38h+var_C]
0x59D018: mov     large fs:0, ecx
0x59D01F: pop     ecx
0x59D020: pop     edi
0x59D021: pop     esi
0x59D022: pop     ebp
0x59D023: pop     ebx
0x59D024: add     esp, 24h
0x59D027: retn    10h
