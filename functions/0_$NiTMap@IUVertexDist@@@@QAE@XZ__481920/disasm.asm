0x481920: push    0FFFFFFFFh
0x481922: push    offset ??0?$NiTMap@IUVertexDist@@@@QAE@XZ_SEH
0x481927: mov     eax, large fs:0
0x48192D: push    eax
0x48192E: sub     esp, 114h
0x481934: push    ebx
0x481935: push    ebp
0x481936: push    esi
0x481937: push    edi
0x481938: mov     eax, ds:0B30AACh
0x48193D: xor     eax, esp
0x48193F: push    eax
0x481940: lea     eax, [esp+134h+var_C]
0x481947: mov     large fs:0, eax
0x48194D: xor     ecx, ecx
0x48194F: mov     eax, 25h ; '%'
0x481954: mov     [esp+134h+var_108], eax
0x481958: xor     ebx, ebx
0x48195A: mov     edx, 4
0x48195F: mul     edx
0x481961: seto    cl
0x481964: mov     [esp+134h+var_10C], offset ??_7?$NiTMapBase@V?$DFALL@UVertexDist@@@@IUVertexDist@@@@6B@; const NiTMapBase<DFALL<VertexDist>,uint,VertexDist>::`vftable'
0x48196C: mov     [esp+134h+var_100], ebx
0x481970: neg     ecx
0x481972: or      ecx, eax
0x481974: push    ecx; Size
0x481975: call    FormHeapAlloc
0x48197A: mov     ecx, [esp+138h+var_108]
0x48197E: lea     edx, ds:0[ecx*4]
0x481985: push    edx
0x481986: push    ebx
0x481987: push    eax
0x481988: mov     [esp+144h+var_104], eax
0x48198C: call    __memset
0x481991: add     esp, 10h
0x481994: mov     [esp+134h+var_10C], offset ??_7?$NiTMap@IUVertexDist@@@@6B@; const NiTMap<uint,VertexDist>::`vftable'
0x48199C: mov     ebp, [esp+134h+arg_0]
0x4819A3: cmp     ebp, ebx
0x4819A5: mov     [esp+134h+var_4], ebx
0x4819AC: mov     [esp+134h+var_11D], bl
0x4819B0: jz      loc_481A50
0x4819B6: mov     esi, [esp+134h+arg_4]
0x4819BD: cmp     esi, ebx
0x4819BF: jz      loc_481A50
0x4819C5: cmp     ebp, esi
0x4819C7: jz      loc_481A50
0x4819CD: mov     eax, [ebp+0B4h]
0x4819D3: mov     ecx, [eax+1Ch]
0x4819D6: cmp     ecx, ebx
0x4819D8: mov     edx, [eax+20h]
0x4819DB: movzx   eax, word ptr [eax+8]
0x4819DF: movzx   eax, ax
0x4819E2: mov     [esp+134h+var_D4], ecx
0x4819E6: mov     [esp+134h+var_E8], edx
0x4819EA: mov     [esp+134h+var_110], eax
0x4819EE: jz      short loc_481A50
0x4819F0: cmp     edx, ebx
0x4819F2: jz      short loc_481A50
0x4819F4: cmp     eax, ebx
0x4819F6: jz      short loc_481A50
0x4819F8: mov     eax, [esi+0B4h]
0x4819FE: mov     ecx, [eax+1Ch]
0x481A01: cmp     ecx, ebx
0x481A03: mov     edx, [eax+20h]
0x481A06: movzx   eax, word ptr [eax+8]
0x481A0A: movzx   eax, ax
0x481A0D: mov     [esp+134h+var_D8], ecx
0x481A11: mov     [esp+134h+var_EC], edx
0x481A15: mov     [esp+134h+var_11C], eax
0x481A19: jz      short loc_481A50
0x481A1B: cmp     edx, ebx
0x481A1D: jz      short loc_481A50
0x481A1F: cmp     eax, ebx
0x481A21: jz      short loc_481A50
0x481A23: push    ebp
0x481A24: call    sub_4802E0
0x481A29: mov     edi, eax
0x481A2B: add     esp, 4
0x481A2E: cmp     edi, ebx
0x481A30: mov     [esp+134h+var_F0], edi
0x481A34: jz      short loc_481A50
0x481A36: push    esi
0x481A37: call    sub_4802E0
0x481A3C: add     esp, 4
0x481A3F: cmp     eax, ebx
0x481A41: mov     [esp+134h+var_F4], eax
0x481A45: jnz     short loc_481A80
0x481A47: push    edi
0x481A48: call    FormHeapFree
0x481A4D: add     esp, 4
0x481A50: lea     ecx, [esp+134h+var_10C]
0x481A54: mov     [esp+134h+var_4], 0FFFFFFFFh
0x481A5F: call    ??1?$NiTMap@IUVertexDist@@@@UAE@XZ; NiTMap<uint,VertexDist>::~NiTMap<uint,VertexDist>(void)
0x481A64: xor     al, al
0x481A66: mov     ecx, [esp+134h+var_C]
0x481A6D: mov     large fs:0, ecx
0x481A74: pop     ecx
0x481A75: pop     edi
0x481A76: pop     esi
0x481A77: pop     ebp
0x481A78: pop     ebx
0x481A79: add     esp, 120h
0x481A7F: retn
0x481A80: lea     eax, [esp+134h+var_40]
0x481A87: add     esi, 64h ; 'd'
0x481A8A: push    eax
0x481A8B: mov     ecx, esi
0x481A8D: call    sub_718A80
0x481A92: lea     ecx, [ebp+64h]
0x481A95: push    ecx
0x481A96: lea     edx, [esp+138h+var_64]
0x481A9D: push    edx
0x481A9E: lea     eax, [esp+13Ch+var_88]
0x481AA5: push    eax
0x481AA6: mov     ecx, esi
0x481AA8: call    sub_7103C0
0x481AAD: mov     ecx, eax
0x481AAF: call    NiMAtrix33_Multiply
0x481AB4: fld     dword ptr ds:0A32048h
0x481ABA: cmp     [esp+134h+var_11C], ebx
0x481ABE: fstp    [esp+134h+var_114]
0x481AC2: mov     ecx, 9
0x481AC7: mov     esi, eax
0x481AC9: lea     edi, [esp+134h+var_AC]
0x481AD0: rep movsd
0x481AD2: jbe     loc_481C08
0x481AD8: mov     ecx, [esp+134h+var_F4]
0x481ADC: mov     [esp+134h+var_F8], ecx
0x481AE0: fld     [esp+134h+arg_8]
0x481AE7: mov     ebp, [esp+134h+var_110]
0x481AEB: fldz
0x481AED: fcomp   st(1)
0x481AEF: fnstsw  ax
0x481AF1: test    ah, 41h
0x481AF4: jnp     short loc_481AFE
0x481AF6: fstp    st
0x481AF8: fld     dword ptr ds:0A32048h
0x481AFE: xor     esi, esi
0x481B00: fstp    [esp+134h+var_118]
0x481B04: test    ebp, ebp
0x481B06: jbe     loc_481BEF
0x481B0C: mov     edi, [esp+134h+var_F0]
0x481B10: mov     ecx, [esp+134h+var_F8]
0x481B14: push    edi
0x481B15: lea     edx, [esp+138h+var_C4]
0x481B19: push    edx
0x481B1A: call    sub_4121A0
0x481B1F: mov     ecx, eax
0x481B21: call    sub_404C90
0x481B26: fstp    [esp+134h+var_FC]
0x481B2A: fld     [esp+134h+var_FC]
0x481B2E: fld     [esp+134h+var_118]
0x481B32: fcomp   st(1)
0x481B34: fnstsw  ax
0x481B36: test    ah, 41h
0x481B39: jnz     short loc_481B41
0x481B3B: fst     [esp+134h+var_118]
0x481B3F: mov     ebp, esi
0x481B41: fld     [esp+134h+var_114]
0x481B45: fcomp   st(1)
0x481B47: fnstsw  ax
0x481B49: test    ah, 41h
0x481B4C: jnz     short loc_481B54
0x481B4E: fstp    [esp+134h+var_114]
0x481B52: jmp     short loc_481B56
0x481B54: fstp    st
0x481B56: add     esi, 1
0x481B59: add     edi, 0Ch
0x481B5C: cmp     esi, [esp+134h+var_110]
0x481B60: jb      short loc_481B10
0x481B62: cmp     ebp, [esp+134h+var_110]
0x481B66: jnb     loc_481BEF
0x481B6C: fld     [esp+134h+var_118]
0x481B70: lea     eax, [esp+134h+var_D0]
0x481B74: push    eax
0x481B75: fstp    [esp+138h+var_DC]
0x481B79: push    ebp
0x481B7A: lea     ecx, [esp+13Ch+var_10C]
0x481B7E: call    sub_47DB90
0x481B83: test    al, al
0x481B85: jz      short loc_481BD0
0x481B87: fld     dword ptr ds:0A37080h
0x481B8D: sub     esp, 0Ch
0x481B90: fstp    [esp+140h+var_138]; float
0x481B94: fld     [esp+140h+var_C8]
0x481B98: fstp    [esp+140h+var_13C]; float
0x481B9C: fld     [esp+140h+var_118]
0x481BA0: fstp    [esp+140h+var_140]; float
0x481BA3: call    sub_47DF40
0x481BA8: add     esp, 0Ch
0x481BAB: test    al, al
0x481BAD: jz      short loc_481BBF
0x481BAF: mov     ecx, [esp+134h+var_D0]
0x481BB3: sub     esp, 0Ch
0x481BB6: mov     eax, esp
0x481BB8: mov     [eax], ebx
0x481BBA: mov     [eax+4], ecx
0x481BBD: jmp     short loc_481BDE
0x481BBF: fld     [esp+134h+var_118]
0x481BC3: fld     [esp+134h+var_C8]
0x481BC7: fcompp
0x481BC9: fnstsw  ax
0x481BCB: test    ah, 41h
0x481BCE: jnz     short loc_481BEF
0x481BD0: mov     edx, [esp+134h+var_11C]
0x481BD4: sub     esp, 0Ch
0x481BD7: mov     eax, esp
0x481BD9: mov     [eax], ebx
0x481BDB: mov     [eax+4], edx
0x481BDE: mov     ecx, [esp+140h+var_DC]
0x481BE2: mov     [eax+8], ecx
0x481BE5: push    ebp
0x481BE6: lea     ecx, [esp+144h+var_10C]
0x481BEA: call    sub_47DAD0
0x481BEF: add     [esp+134h+var_F8], 0Ch
0x481BF4: add     ebx, 1
0x481BF7: cmp     ebx, [esp+134h+var_11C]
0x481BFB: jb      loc_481AE0
0x481C01: mov     ebp, [esp+134h+arg_0]
0x481C08: lea     ecx, [esp+134h+var_10C]
0x481C0C: call    sub_6A9030
0x481C11: test    eax, eax
0x481C13: mov     [esp+134h+var_114], eax
0x481C17: jz      loc_481D7F
0x481C1D: mov     [esp+134h+var_11D], 1
0x481C22: lea     edx, [esp+134h+var_E4]
0x481C26: push    edx
0x481C27: lea     eax, [esp+138h+var_FC]
0x481C2B: push    eax
0x481C2C: lea     ecx, [esp+13Ch+var_114]
0x481C30: push    ecx
0x481C31: lea     ecx, [esp+140h+var_10C]
0x481C35: call    sub_47DBF0
0x481C3A: mov     eax, [esp+134h+var_FC]
0x481C3E: mov     edx, [esp+134h+var_E8]
0x481C42: lea     ebp, [eax+eax*2]
0x481C45: add     ebp, ebp
0x481C47: add     ebp, ebp
0x481C49: lea     eax, [edx+ebp]
0x481C4C: push    eax
0x481C4D: lea     eax, [esp+138h+var_C4]
0x481C51: push    eax
0x481C52: lea     ecx, [esp+13Ch+var_AC]
0x481C59: call    sub_7101F0
0x481C5E: mov     ecx, [esp+134h+var_E4]
0x481C62: mov     edx, [eax]
0x481C64: lea     edi, [ecx+ecx*2]
0x481C67: mov     ecx, [esp+134h+var_EC]
0x481C6B: add     edi, edi
0x481C6D: add     edi, edi
0x481C6F: lea     esi, [edi+ecx]
0x481C72: mov     [esi], edx
0x481C74: mov     ecx, [eax+4]
0x481C77: mov     [esi+4], ecx
0x481C7A: mov     edx, [eax+8]
0x481C7D: mov     ecx, esi
0x481C7F: mov     [esi+8], edx
0x481C82: call    sub_43F350
0x481C87: fstp    st
0x481C89: mov     ebx, [esp+134h+var_E0]
0x481C8D: cmp     ebx, [esp+134h+var_11C]
0x481C91: jnb     short loc_481CAD
0x481C93: mov     ecx, [esp+134h+var_EC]
0x481C97: mov     edx, [esi]
0x481C99: lea     eax, [ebx+ebx*2]
0x481C9C: lea     eax, [ecx+eax*4]
0x481C9F: mov     [eax], edx
0x481CA1: mov     ecx, [esi+4]
0x481CA4: mov     [eax+4], ecx
0x481CA7: mov     edx, [esi+8]
0x481CAA: mov     [eax+8], edx
0x481CAD: cmp     [esp+134h+arg_10], 0
0x481CB5: jz      loc_481D3C
0x481CBB: mov     eax, [esp+134h+arg_0]
0x481CC2: cmp     ds:0B34408h, eax
0x481CC8: jz      short loc_481CF6
0x481CCA: mov     ecx, [esp+134h+var_E8]
0x481CCE: fld     dword ptr ds:0A31C80h
0x481CD4: lea     eax, [ecx+ebp]
0x481CD7: push    eax; int
0x481CD8: push    ecx
0x481CD9: lea     edx, [esp+13Ch+var_D0]
0x481CDD: fstp    [esp+13Ch+var_13C]; float
0x481CE0: push    edx; int
0x481CE1: call    sub_47DA10
0x481CE6: add     esp, 0Ch
0x481CE9: push    eax
0x481CEA: mov     eax, [esp+138h+var_D4]
0x481CEE: lea     ecx, [eax+ebp]
0x481CF1: call    sub_4121D0
0x481CF6: fld     dword ptr ds:0A31C80h
0x481CFC: mov     ebp, [esp+134h+var_D8]
0x481D00: push    esi; int
0x481D01: push    ecx
0x481D02: lea     ecx, [esp+13Ch+var_B8]
0x481D09: fstp    [esp+13Ch+var_13C]; float
0x481D0C: push    ecx; int
0x481D0D: add     edi, ebp
0x481D0F: call    sub_47DA10
0x481D14: add     esp, 0Ch
0x481D17: push    eax
0x481D18: mov     ecx, edi
0x481D1A: call    sub_4121D0
0x481D1F: cmp     ebx, [esp+134h+var_11C]
0x481D23: jnb     short loc_481D3C
0x481D25: mov     ecx, [edi]
0x481D27: lea     edx, [ebx+ebx*2]
0x481D2A: lea     eax, [ebp+edx*4+0]
0x481D2E: mov     [eax], ecx
0x481D30: mov     edx, [edi+4]
0x481D33: mov     [eax+4], edx
0x481D36: mov     ecx, [edi+8]
0x481D39: mov     [eax+8], ecx
0x481D3C: cmp     [esp+134h+var_114], 0
0x481D41: jnz     loc_481C22
0x481D47: cmp     [esp+134h+arg_10], 0
0x481D4F: mov     ecx, 3
0x481D54: jz      short loc_481D67
0x481D56: mov     edx, [esp+134h+arg_0]
0x481D5D: mov     eax, [edx+0B4h]
0x481D63: or      [eax+2Eh], cx
0x481D67: mov     eax, [esp+134h+arg_4]
0x481D6E: mov     eax, [eax+0B4h]
0x481D74: or      [eax+2Eh], cx
0x481D78: mov     ebp, [esp+134h+arg_0]
0x481D7F: mov     ecx, [esp+134h+var_F0]
0x481D83: push    ecx
0x481D84: call    FormHeapFree
0x481D89: mov     edx, [esp+138h+var_F4]
0x481D8D: push    edx
0x481D8E: call    FormHeapFree
0x481D93: add     esp, 8
0x481D96: lea     ecx, [esp+134h+var_10C]
0x481D9A: mov     ds:0B34408h, ebp
0x481DA0: mov     [esp+134h+var_4], 0FFFFFFFFh
0x481DAB: call    ??1?$NiTMap@IUVertexDist@@@@UAE@XZ; NiTMap<uint,VertexDist>::~NiTMap<uint,VertexDist>(void)
0x481DB0: mov     al, [esp+134h+var_11D]
0x481DB4: jmp     loc_481A66
