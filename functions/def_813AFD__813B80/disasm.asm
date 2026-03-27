0x813B80: and     eax, [esp+arg_30]; jumptable 00813AFD default case
0x813B84: test    ax, ax
0x813B87: jnz     loc_813CE9
0x813B8D: fldz
0x813B8F: push    1; a3
0x813B91: push    ecx
0x813B92: fstp    [esp+8+a2]; a2
0x813B95: mov     ecx, edi; this
0x813B97: call    NiAVObject_UpdateNiAVObject
0x813B9C: cmp     word ptr ds:0B42EACh, 5
0x813BA4: jz      loc_813D25
0x813BAA: cmp     dword ptr [edi+148h], 0
0x813BB1: jz      loc_813CE9
0x813BB7: call    InitBSShaderAccumulator
0x813BBC: mov     esi, eax
0x813BBE: test    esi, esi
0x813BC0: mov     [esp+arg_14], esi
0x813BC4: jz      short loc_813BCC
0x813BC6: lea     eax, [esi+4]
0x813BC9: push    eax; lpAddend
0x813BCA: call    ebp ; InterlockedIncrement
0x813BCC: cmp     dword ptr [esi+4], 1
0x813BD0: lea     ebx, [esi+4]
0x813BD3: mov     [esp+arg_150], 0
0x813BDE: jnz     short loc_813BE3
0x813BE0: push    ebx; lpAddend
0x813BE1: call    ebp ; InterlockedIncrement
0x813BE3: mov     ecx, ds:0B3F928h
0x813BE9: mov     ebp, [ecx+8]
0x813BEC: test    ebp, ebp
0x813BEE: mov     dword ptr [esp+arg_B0.UseAppendVirtual], ebp
0x813BF5: jz      short loc_813C01
0x813BF7: lea     edx, [ebp+4]
0x813BFA: push    edx; lpAddend
0x813BFB: call    dword ptr ds:0A28078h
0x813C01: mov     ecx, ds:0B3F928h; this
0x813C07: push    esi; a2
0x813C08: mov     [esp+8+arg_14C], 1
0x813C10: call    NiDX9Renderer__SetShaderAccumulator
0x813C15: mov     eax, [esi]
0x813C17: mov     edx, [eax+4Ch]
0x813C1A: push    edi
0x813C1B: mov     ecx, esi
0x813C1D: call    edx
0x813C1F: push    0
0x813C21: lea     ecx, [esp+0Ch+arg_B0]
0x813C28: mov     byte ptr [esi+21E0h], 1
0x813C2F: call    NiCullingProcess_NiCullingProcess
0x813C34: lea     eax, [edi+0ECh]
0x813C3A: push    eax; a2
0x813C3B: lea     ecx, [esp+0Ch+arg_B0]; this
0x813C42: mov     byte ptr [esp+0Ch+arg_148], 2
0x813C4A: mov     [esp+0Ch+arg_B0.Camera], edi
0x813C51: call    NiCullingProcess__SetFrustum
0x813C56: mov     eax, [edi+148h]
0x813C5C: push    0
0x813C5E: lea     ecx, [esp+0Ch+arg_B0]
0x813C65: push    ecx
0x813C66: push    eax
0x813C67: push    edi
0x813C68: call    sub_70C0B0
0x813C6D: mov     byte ptr [esi+21E1h], 1
0x813C74: mov     edx, [esi]
0x813C76: mov     eax, [edx+50h]
0x813C79: add     esp, 10h
0x813C7C: mov     ecx, esi
0x813C7E: call    eax
0x813C80: mov     ecx, ds:0B3F928h; this
0x813C86: push    ebp; a2
0x813C87: call    NiDX9Renderer__SetShaderAccumulator
0x813C8C: lea     ecx, [esp+8+arg_B0]; this
0x813C93: mov     byte ptr [esp+8+arg_148], 1
0x813C9B: call    ??1BSCullingProcess@@UAE@XZ; BSCullingProcess::~BSCullingProcess(void)
0x813CA0: test    ebp, ebp
0x813CA2: mov     byte ptr [esp+8+arg_148], 0
0x813CAA: jz      short loc_813CC5
0x813CAC: lea     ecx, [ebp+4]
0x813CAF: push    ecx; lpAddend
0x813CB0: call    dword ptr ds:0A2807Ch
0x813CB6: test    eax, eax
0x813CB8: jnz     short loc_813CC5
0x813CBA: mov     edx, [ebp+0]
0x813CBD: mov     eax, [edx]
0x813CBF: push    1
0x813CC1: mov     ecx, ebp
0x813CC3: call    eax
0x813CC5: push    ebx; lpAddend
0x813CC6: mov     dword ptr [esp+158h], 0FFFFFFFFh
0x813CD1: call    dword ptr ds:0A2807Ch
0x813CD7: test    eax, eax
0x813CD9: jnz     short loc_813CE5
0x813CDB: mov     edx, [esi]
0x813CDD: mov     eax, [edx]
0x813CDF: push    1
0x813CE1: mov     ecx, esi
0x813CE3: call    eax
0x813CE5: mov     ebx, [esp+18h+var_4]
0x813CE9: mov     ecx, [edi+14Ch]; this
0x813CEF: call    j_NiTPointerList__FreeAllNodes
0x813CF4: push    0Ch; a1
0x813CF6: call    GetShaderDefinition
0x813CFB: add     esp, 4
0x813CFE: test    eax, eax
0x813D00: jz      short loc_813D15
0x813D02: mov     eax, [eax+4]
0x813D05: test    eax, eax
0x813D07: jz      short loc_813D15
0x813D09: mov     ecx, [edi+14Ch]
0x813D0F: push    eax
0x813D10: call    AddImageSpaceShader
0x813D15: cmp     ebx, 5; switch 6 cases
0x813D18: ja      def_813D1E; jumptable 00813D1E default case, case 4
0x813D1E: jmp     ds:jpt_813D1E[ebx*4]; switch jump
0x813D25: mov     eax, [edi+144h]
0x813D2B: test    eax, eax
0x813D2D: jz      short loc_813CE9
0x813D2F: fld1
0x813D31: push    ecx
0x813D32: fstp    [esp+4+var_4]; float
0x813D35: push    eax; int
0x813D36: push    0; int
0x813D38: call    sub_7EE390
0x813D3D: mov     ecx, [edi+144h]
0x813D43: mov     edx, [ecx+114h]
0x813D49: add     esp, 0Ch
0x813D4C: push    edx; a2
0x813D4D: lea     ecx, [edi+140h]; this
0x813D53: call    NiSmartPointer_Set??
0x813D58: mov     eax, [edi+144h]
0x813D5E: push    eax; a2
0x813D5F: mov     ecx, edi; this
0x813D61: call    sub_813300
0x813D66: jmp     short loc_813CE9
0x813D68: fld     dword ptr ds:0B3F9A4h; jumptable 00813D1E case 0
0x813D6E: fmul    qword ptr ds:0A65A18h
0x813D74: fdiv    qword ptr ds:0A3F418h
0x813D7A: fstp    [esp+18h+var_4]
0x813D7E: fld     [esp+18h+var_4]
0x813D82: call    __CIcos
0x813D87: fstp    dword ptr [esp+18h]
0x813D8B: fld     dword ptr [esp+18h]
0x813D8F: fstp    [esp+18h+arg_7C]
0x813D96: fld     [esp+18h+var_4]
0x813D9A: call    __CIsin
0x813D9F: fstp    [esp+18h+var_4]
0x813DA3: fld     [esp+18h+var_4]
0x813DA7: mov     ecx, [esp+18h+arg_7C]
0x813DAE: fst     [esp+18h+arg_80]
0x813DB5: mov     edx, [esp+18h+arg_80]
0x813DBC: fldz
0x813DBE: mov     ds:0B474CCh, ecx
0x813DC4: fst     [esp+18h+arg_84]
0x813DCB: mov     ds:0B474D0h, edx
0x813DD1: mov     eax, [esp+18h+arg_84]
0x813DD8: fst     [esp+18h+arg_88]
0x813DDF: mov     ecx, [esp+18h+arg_88]
0x813DE6: fxch    st(1)
0x813DE8: fchs
0x813DEA: mov     ds:0B474D4h, eax
0x813DEF: fstp    [esp+18h+arg_1C]
0x813DF3: mov     ds:0B474D8h, ecx
0x813DF9: fld     dword ptr [esp+18h]
0x813DFD: mov     edx, [esp+18h+arg_1C]
0x813E01: fstp    [esp+18h+arg_20]
0x813E05: mov     ds:0B474DCh, edx
0x813E0B: mov     eax, [esp+18h+arg_20]
0x813E0F: mov     ds:0B474E0h, eax
0x813E14: fst     [esp+18h+arg_24]
0x813E18: mov     ecx, [esp+18h+arg_24]
0x813E1C: fstp    [esp+18h+arg_28]
0x813E20: mov     edx, [esp+18h+arg_28]
0x813E24: mov     ds:0B474E4h, ecx
0x813E2A: mov     ds:0B474E8h, edx
0x813E30: mov     eax, [edi+140h]
0x813E36: push    eax
0x813E37: push    eax
0x813E38: mov     eax, ds:0B43104h
0x813E3D: push    eax
0x813E3E: jmp     loc_8140A0
0x813E43: fld     dword ptr ds:0B3F9A4h; jumptable 00813D1E case 1
0x813E49: fmul    qword ptr ds:0A948E0h
0x813E4F: fdiv    qword ptr ds:0A3F418h
0x813E55: fstp    dword ptr [esp+18h]
0x813E59: fld     dword ptr [esp+18h]
0x813E5D: call    __CIcos
0x813E62: fstp    [esp+18h+var_4]
0x813E66: fld     [esp+18h+var_4]
0x813E6A: fstp    [esp+18h+arg_4C]
0x813E6E: fld     dword ptr [esp+18h]
0x813E72: call    __CIsin
0x813E77: fstp    dword ptr [esp+18h]
0x813E7B: fld     dword ptr [esp+18h]
0x813E7F: mov     ecx, [esp+18h+arg_4C]
0x813E83: fst     [esp+18h+arg_50]
0x813E87: mov     edx, [esp+18h+arg_50]
0x813E8B: fldz
0x813E8D: mov     ds:0B474CCh, ecx
0x813E93: fst     [esp+18h+arg_54]
0x813E97: mov     ds:0B474D0h, edx
0x813E9D: mov     eax, [esp+18h+arg_54]
0x813EA1: fst     [esp+18h+arg_58]
0x813EA5: mov     ecx, [esp+18h+arg_58]
0x813EA9: fxch    st(1)
0x813EAB: fchs
0x813EAD: mov     ds:0B474D4h, eax
0x813EB2: fstp    [esp+18h+arg_5C]
0x813EB6: mov     ds:0B474D8h, ecx
0x813EBC: fld     [esp+18h+var_4]
0x813EC0: mov     edx, [esp+18h+arg_5C]
0x813EC4: fstp    [esp+18h+arg_60]
0x813EC8: mov     ds:0B474DCh, edx
0x813ECE: mov     eax, [esp+18h+arg_60]
0x813ED2: mov     ds:0B474E0h, eax
0x813ED7: fst     [esp+18h+arg_64]
0x813EDE: mov     ecx, [esp+18h+arg_64]
0x813EE5: fstp    [esp+18h+arg_68]
0x813EEC: mov     edx, [esp+18h+arg_68]
0x813EF3: mov     ds:0B474E4h, ecx
0x813EF9: mov     ds:0B474E8h, edx
0x813EFF: mov     eax, [edi+140h]
0x813F05: push    eax
0x813F06: push    eax
0x813F07: mov     eax, ds:0B43104h
0x813F0C: push    eax
0x813F0D: jmp     loc_8140A0
0x813F12: fld     dword ptr ds:0B3F9A4h; jumptable 00813D1E case 2
0x813F18: fld     qword ptr ds:0A3F418h
0x813F1E: fmul    st(1), st
0x813F20: fdivp   st(1), st
0x813F22: fstp    dword ptr [esp+18h]
0x813F26: fld     dword ptr [esp+18h]
0x813F2A: call    __CIcos
0x813F2F: fstp    [esp+18h+var_4]
0x813F33: fld     [esp+18h+var_4]
0x813F37: fstp    [esp+18h+arg_3C]
0x813F3B: fld     dword ptr [esp+18h]
0x813F3F: call    __CIsin
0x813F44: fstp    dword ptr [esp+18h]
0x813F48: fld     dword ptr [esp+18h]
0x813F4C: mov     ecx, [esp+18h+arg_3C]
0x813F50: fst     [esp+18h+arg_40]
0x813F54: mov     edx, [esp+18h+arg_40]
0x813F58: fldz
0x813F5A: mov     ds:0B474CCh, ecx
0x813F60: fst     [esp+18h+arg_44]
0x813F64: mov     ds:0B474D0h, edx
0x813F6A: mov     eax, [esp+18h+arg_44]
0x813F6E: fst     [esp+18h+arg_48]
0x813F72: mov     ecx, [esp+18h+arg_48]
0x813F76: fxch    st(1)
0x813F78: fchs
0x813F7A: mov     ds:0B474D4h, eax
0x813F7F: fstp    [esp+18h+arg_2C]
0x813F83: mov     ds:0B474D8h, ecx
0x813F89: fld     [esp+18h+var_4]
0x813F8D: mov     edx, [esp+18h+arg_2C]
0x813F91: fstp    [esp+18h+arg_30]
0x813F95: mov     ds:0B474DCh, edx
0x813F9B: mov     eax, [esp+18h+arg_30]
0x813F9F: mov     ds:0B474E0h, eax
0x813FA4: fst     [esp+18h+arg_34]
0x813FA8: mov     ecx, [esp+18h+arg_34]
0x813FAC: fstp    [esp+18h+arg_38]
0x813FB0: mov     edx, [esp+18h+arg_38]
0x813FB4: mov     ds:0B474E4h, ecx
0x813FBA: mov     ds:0B474E8h, edx
0x813FC0: mov     eax, [edi+140h]
0x813FC6: push    eax
0x813FC7: push    eax
0x813FC8: mov     eax, ds:0B43104h
0x813FCD: push    eax
0x813FCE: jmp     loc_8140A0
0x813FD3: fldz; jumptable 00813D1E case 3
0x813FD5: call    __CIcos
0x813FDA: fstp    dword ptr [esp+18h]
0x813FDE: fld     dword ptr [esp+18h]
0x813FE2: fstp    [esp+18h+arg_6C]
0x813FE9: fldz
0x813FEB: call    __CIsin
0x813FF0: fstp    [esp+18h+var_4]
0x813FF4: fld     [esp+18h+var_4]
0x813FF8: mov     ecx, [esp+18h+arg_6C]
0x813FFF: fst     [esp+18h+arg_70]
0x814006: mov     edx, [esp+18h+arg_70]
0x81400D: fldz
0x81400F: mov     ds:0B474CCh, ecx
0x814015: fst     [esp+18h+arg_74]
0x81401C: mov     ds:0B474D0h, edx
0x814022: mov     eax, [esp+18h+arg_74]
0x814029: fst     [esp+18h+arg_78]
0x814030: mov     ecx, [esp+18h+arg_78]
0x814037: fxch    st(1)
0x814039: fchs
0x81403B: mov     ds:0B474D4h, eax
0x814040: fstp    [esp+18h+arg_4]
0x814044: mov     ds:0B474D8h, ecx
0x81404A: fld     dword ptr [esp+18h]
0x81404E: mov     edx, [esp+18h+arg_4]
0x814052: fstp    [esp+18h+arg_8]
0x814056: mov     ds:0B474DCh, edx
0x81405C: mov     eax, [esp+18h+arg_8]
0x814060: mov     ds:0B474E0h, eax
0x814065: fst     [esp+18h+arg_C]
0x814069: mov     ecx, [esp+18h+arg_C]
0x81406D: fstp    [esp+18h+arg_10]
0x814071: mov     edx, [esp+18h+arg_10]
0x814075: mov     ds:0B474E4h, ecx
0x81407B: mov     ds:0B474E8h, edx
0x814081: mov     eax, [edi+140h]
0x814087: push    eax
0x814088: push    eax
0x814089: mov     eax, ds:0B43104h
0x81408E: push    eax
0x81408F: jmp     short loc_8140A0
0x814091: mov     eax, [edi+140h]; jumptable 00813D1E case 5
0x814097: mov     ecx, ds:0B43104h
0x81409D: push    eax
0x81409E: push    eax
0x81409F: push    ecx
0x8140A0: mov     ecx, [edi+14Ch]
0x8140A6: call    ImageShaderList__ProcessImageSpaceShader
0x8140AB: call    NiRenderer_EndScene; jumptable 00813D1E default case, case 4
0x8140B0: add     ebx, 1
0x8140B3: cmp     ebx, 6
0x8140B6: mov     [esp+18h+var_4], ebx
0x8140BA: jl      loc_813A29
0x8140C0: mov     ecx, ds:0B43104h
0x8140C6: mov     edx, [ecx]
0x8140C8: mov     edx, [edx+60h]
0x8140CB: lea     eax, [esp+18h+arg_8C]
0x8140D2: push    eax
0x8140D3: call    edx
0x8140D5: mov     esi, ds:0B474ECh
0x8140DB: test    esi, esi
0x8140DD: jz      short loc_814105
0x8140DF: lea     eax, [esi+4]
0x8140E2: push    eax; lpAddend
0x8140E3: call    dword ptr ds:0A2807Ch
0x8140E9: test    eax, eax
0x8140EB: jnz     short loc_8140FB
0x8140ED: test    esi, esi
0x8140EF: jz      short loc_8140FB
0x8140F1: mov     edx, [esi]
0x8140F3: mov     eax, [edx]
0x8140F5: push    1
0x8140F7: mov     ecx, esi
0x8140F9: call    eax
0x8140FB: mov     dword ptr ds:0B474ECh, 0
0x814105: mov     ecx, [esp+24h+arg_B0.Planes.CullingPlanes.Normal.x+48h]
0x81410C: mov     large fs:0, ecx
0x814113: pop     ecx
0x814114: pop     edi
0x814115: pop     esi
0x814116: pop     ebp
0x814117: pop     ebx
0x814118: add     esp, 144h
0x81411E: retn    4
