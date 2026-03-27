0x514B50: push    ebp
0x514B51: mov     ebp, esp
0x514B53: and     esp, 0FFFFFFF0h
0x514B56: push    0FFFFFFFFh
0x514B58: push    offset Cmd_PlaceAtMe_SEH
0x514B5D: mov     eax, large fs:0
0x514B63: push    eax
0x514B64: sub     esp, 208h
0x514B6A: mov     eax, ds:0B30AACh
0x514B6F: xor     eax, esp
0x514B71: mov     [esp+214h+var_14], eax
0x514B78: push    ebx
0x514B79: push    esi
0x514B7A: push    edi
0x514B7B: mov     eax, ds:0B30AACh
0x514B80: xor     eax, esp
0x514B82: push    eax
0x514B83: lea     eax, [esp+224h+var_C]
0x514B8A: mov     large fs:0, eax
0x514B90: mov     edi, [ebp+arg_1C]
0x514B93: fldz
0x514B95: mov     esi, [ebp+arg_10]
0x514B98: mov     edx, [ebp+arg_C]
0x514B9B: mov     ebx, [ebp+arg_8]
0x514B9E: mov     ecx, [ebp+arg_4]
0x514BA1: mov     eax, [ebp+a1]
0x514BA4: mov     [esp+224h+a3], edi
0x514BA8: lea     edi, [esp+224h+var_19C]
0x514BAF: push    edi
0x514BB0: lea     edi, [esp+228h+var_1BC]
0x514BB4: push    edi
0x514BB5: mov     [esp+22Ch+var_1D0], esi
0x514BB9: mov     esi, [ebp+arg_14]
0x514BBC: lea     edi, [esp+22Ch+var_1D4]
0x514BC0: push    edi
0x514BC1: mov     [esp+230h+l], esi
0x514BC5: mov     esi, [ebp+arg_18]
0x514BC8: lea     edi, [esp+230h+var_1D8]
0x514BCC: fstp    qword ptr [esi]
0x514BCE: push    edi; UInt16
0x514BCF: mov     edi, [esp+234h+l]
0x514BD3: push    edi; l
0x514BD4: mov     edi, [esp+238h+var_1D0]
0x514BD8: push    edi; a6
0x514BD9: push    edx; a5
0x514BDA: mov     edx, [esp+240h+a3]
0x514BDE: push    ebx; a4
0x514BDF: push    edx; a3
0x514BE0: push    ecx; a2
0x514BE1: mov     [esp+24Ch+var_164], esi
0x514BE8: xor     esi, esi
0x514BEA: push    eax; a1
0x514BEB: mov     dword ptr [esp+250h+var_1D8], esi
0x514BEF: mov     [esp+250h+var_1D4], 1
0x514BF7: mov     [esp+250h+var_1BC], esi
0x514BFE: mov     [esp+250h+var_19C], esi
0x514C05: call    Script_ExtractArgs
0x514C0A: add     esp, 2Ch
0x514C0D: test    al, al
0x514C0F: jnz     short loc_514C18
0x514C11: xor     al, al
0x514C13: jmp     loc_51530C
0x514C18: cmp     ebx, esi
0x514C1A: mov     [esp+224h+var_1D0], esi
0x514C1E: jz      loc_51530A
0x514C24: mov     eax, [ebx+20h]
0x514C27: mov     ecx, [ebx+24h]
0x514C2A: mov     edx, [ebx+28h]
0x514C2D: mov     [esp+224h+var_160], eax
0x514C34: mov     eax, [ebx]
0x514C36: mov     [esp+224h+var_15C], ecx
0x514C3D: mov     [esp+224h+var_158], edx
0x514C44: mov     edx, [eax+174h]
0x514C4A: mov     ecx, ebx
0x514C4C: call    edx
0x514C4E: cmp     [esp+224h+var_1BC], esi
0x514C52: mov     ecx, [eax]
0x514C54: mov     [esp+224h+var_204], ecx
0x514C58: mov     edx, [eax+4]
0x514C5B: mov     [esp+224h+var_200], edx
0x514C5F: mov     eax, [eax+8]
0x514C62: mov     [esp+224h+var_1FC], eax
0x514C66: jz      loc_514D70
0x514C6C: mov     edx, [ebx]
0x514C6E: mov     eax, [edx+154h]
0x514C74: mov     ecx, ebx
0x514C76: call    eax
0x514C78: cmp     eax, esi
0x514C7A: jz      loc_514D70
0x514C80: lea     esi, [eax+30h]
0x514C83: mov     ecx, 9
0x514C88: lea     edi, [esp+224h+var_154]
0x514C8F: rep movsd
0x514C91: mov     ecx, [eax+54h]
0x514C94: mov     [esp+224h+var_204], ecx
0x514C98: mov     edx, [eax+58h]
0x514C9B: mov     [esp+224h+var_200], edx
0x514C9F: mov     eax, [eax+5Ch]
0x514CA2: mov     [esp+224h+var_1FC], eax
0x514CA6: mov     eax, [esp+224h+var_19C]
0x514CAD: cmp     eax, 2
0x514CB0: jl      short loc_514CD6
0x514CB2: cmp     eax, 3
0x514CB5: jg      short loc_514CD6
0x514CB7: fld     [esp+224h+var_154]
0x514CBE: fstp    dword ptr [esp+224h+var_1F0]
0x514CC2: fld     [esp+224h+var_148]
0x514CC9: fstp    dword ptr [esp+224h+var_1F0+4]
0x514CCD: fld     [esp+224h+var_13C]
0x514CD4: jmp     short loc_514CF3
0x514CD6: fld     [esp+224h+var_150]
0x514CDD: fstp    dword ptr [esp+224h+var_1F0]
0x514CE1: fld     [esp+224h+var_144]
0x514CE8: fstp    dword ptr [esp+224h+var_1F0+4]
0x514CEC: fld     [esp+224h+var_138]
0x514CF3: test    eax, eax
0x514CF5: fstp    [esp+224h+var_1E8]
0x514CF9: fild    [esp+224h+var_1BC]
0x514CFD: fstp    [esp+224h+l]
0x514D01: fld     [esp+224h+l]
0x514D05: fld     dword ptr [esp+224h+var_1F0]
0x514D09: fmul    st, st(1)
0x514D0B: fstp    dword ptr [esp+224h+var_1F0]
0x514D0F: fld     dword ptr [esp+224h+var_1F0+4]
0x514D13: fmul    st, st(1)
0x514D15: fstp    dword ptr [esp+224h+var_1F0+4]
0x514D19: fmul    [esp+224h+var_1E8]
0x514D1D: fstp    [esp+224h+var_1E8]
0x514D21: jle     short loc_514D4A
0x514D23: cmp     eax, 2
0x514D26: jg      short loc_514D4A
0x514D28: fld     [esp+224h+var_204]
0x514D2C: fsub    dword ptr [esp+224h+var_1F0]
0x514D30: fstp    [esp+224h+var_204]
0x514D34: fld     [esp+224h+var_200]
0x514D38: fsub    dword ptr [esp+224h+var_1F0+4]
0x514D3C: fstp    [esp+224h+var_200]
0x514D40: fld     [esp+224h+var_1FC]
0x514D44: fsub    [esp+224h+var_1E8]
0x514D48: jmp     short loc_514D6A
0x514D4A: fld     [esp+224h+var_204]
0x514D4E: fadd    dword ptr [esp+224h+var_1F0]
0x514D52: fstp    [esp+224h+var_204]
0x514D56: fld     [esp+224h+var_200]
0x514D5A: fadd    dword ptr [esp+224h+var_1F0+4]
0x514D5E: fstp    [esp+224h+var_200]
0x514D62: fld     [esp+224h+var_1FC]
0x514D66: fadd    [esp+224h+var_1E8]
0x514D6A: fstp    [esp+224h+var_1FC]
0x514D6E: xor     esi, esi
0x514D70: mov     ecx, [esp+224h+var_204]
0x514D74: mov     edx, [esp+224h+var_200]
0x514D78: mov     eax, [esp+224h+var_1FC]
0x514D7C: push    esi; Seed
0x514D7D: mov     [esp+228h+var_130], ecx
0x514D84: mov     [esp+228h+var_12C], edx
0x514D8B: mov     [esp+228h+var_128], eax
0x514D92: call    GetRandomLargeInteger?
0x514D97: mov     [esp+228h+l], eax
0x514D9B: fild    [esp+228h+l]
0x514D9F: add     esp, 4
0x514DA2: lea     edi, [esp+224h+var_124]
0x514DA9: fmul    qword ptr ds:0A4D918h
0x514DAF: fdiv    qword ptr ds:0A3D5A8h
0x514DB5: fstp    [esp+224h+a3]
0x514DB9: fldz
0x514DBB: fmul    qword ptr ds:0A309F0h
0x514DC1: fstp    [esp+224h+l]
0x514DC5: fld     [esp+224h+var_204]
0x514DC9: fstp    [esp+224h+var_170]
0x514DD0: fld     [esp+224h+var_200]
0x514DD4: fstp    [esp+224h+var_1F0]
0x514DD8: fld     [esp+224h+l]
0x514DDC: mov     [esp+224h+l], 8
0x514DE4: fadd    [esp+224h+var_1FC]
0x514DE8: fstp    [esp+224h+var_1C0]
0x514DEC: lea     esp, [esp+0]
0x514DF0: fld     [esp+224h+a3]
0x514DF4: fst     [esp+224h+var_198]
0x514DFB: call    __CIsin
0x514E00: fstp    [esp+224h+a3]
0x514E04: fld     [esp+224h+a3]
0x514E08: fstp    [esp+224h+var_1E0]
0x514E0C: fld     [esp+224h+var_198]
0x514E13: call    __CIcos
0x514E18: fstp    [esp+224h+a3]
0x514E1C: fld     [esp+224h+a3]
0x514E20: mov     eax, [esp+224h+var_1C0]
0x514E24: fstp    [esp+224h+var_1AC]
0x514E28: add     edi, 0Ch
0x514E2B: sub     [esp+224h+l], 1
0x514E30: fld     [esp+224h+var_1AC]
0x514E34: fld     qword ptr ds:0A309F0h
0x514E3A: fmul    st(1), st
0x514E3C: fxch    st(1)
0x514E3E: fstp    [esp+224h+a3]
0x514E42: fmul    [esp+224h+var_1E0]
0x514E46: fstp    [esp+224h+var_1E0]
0x514E4A: fld     [esp+224h+a3]
0x514E4E: fadd    [esp+224h+var_170]
0x514E55: fstp    [esp+224h+a3]
0x514E59: fld     [esp+224h+var_1E0]
0x514E5D: fadd    [esp+224h+var_1F0]
0x514E61: fstp    [esp+224h+var_1E0]
0x514E65: fld     [esp+224h+a3]
0x514E69: fstp    [esp+224h+var_1C8]
0x514E6D: mov     ecx, [esp+224h+var_1C8]
0x514E71: fld     [esp+224h+var_1E0]
0x514E75: mov     [edi-0Ch], ecx
0x514E78: fstp    [esp+224h+var_1C4]
0x514E7C: mov     edx, [esp+224h+var_1C4]
0x514E80: fld     [esp+224h+var_198]
0x514E87: mov     [edi-8], edx
0x514E8A: fadd    qword ptr ds:0A4D918h
0x514E90: mov     [edi-4], eax
0x514E93: fstp    [esp+224h+a3]
0x514E97: jnz     loc_514DF0
0x514E9D: mov     edi, dword ptr [esp+224h+var_1D8]
0x514EA1: cmp     byte ptr [edi+4], 25h ; '%'
0x514EA5: jnz     loc_514FBF
0x514EAB: lea     ecx, [esp+224h+var_1AC]
0x514EAF: mov     [esp+224h+var_1E0], edi
0x514EB3: call    TESContainer_constr
0x514EB8: mov     edx, [esp+224h+var_1D4]
0x514EBC: lea     ecx, [esp+224h+var_1AC]
0x514EC0: push    ecx; int
0x514EC1: mov     ecx, ds:0B333C4h
0x514EC7: push    edx
0x514EC8: mov     [esp+22Ch+var_4], esi
0x514ECF: call    Actor_GetLevel
0x514ED4: lea     ecx, [edi+24h]; this
0x514ED7: push    eax; int
0x514ED8: call    TESLeveledList_CalcLeveledForm
0x514EDD: push    esi
0x514EDE: mov     ecx, offset FormHeap
0x514EE3: call    nullsub_returnFalse_1arg
0x514EE8: test    al, al
0x514EEA: jz      short loc_514EF8
0x514EEC: lea     eax, [esp+224h+var_1AC]
0x514EF0: push    eax
0x514EF1: mov     ecx, edi
0x514EF3: call    sub_4AFA80
0x514EF8: lea     eax, [esp+224h+var_1A4]
0x514EFF: mov     [esp+224h+a3], eax
0x514F03: jmp     short loc_514F09
0x514F05: mov     eax, [esp+224h+a3]
0x514F09: cmp     [eax+4], esi
0x514F0C: jnz     short loc_514F16
0x514F0E: cmp     [eax], esi
0x514F10: jz      loc_514FA6
0x514F16: mov     edi, [eax]
0x514F18: cmp     edi, esi
0x514F1A: mov     [esp+224h+l], edi
0x514F1E: jz      short loc_514F97
0x514F20: cmp     [edi+4], esi
0x514F23: jz      short loc_514F97
0x514F25: cmp     [edi], esi
0x514F27: jle     short loc_514F97
0x514F29: lea     esp, [esp+0]
0x514F30: push    esi
0x514F31: mov     ecx, ebx; this
0x514F33: call    TESObjectREFR_GetWorldSpace
0x514F38: push    eax
0x514F39: mov     ecx, ebx; this
0x514F3B: call    TESObjectREFR_GetParentCell
0x514F40: push    eax
0x514F41: mov     eax, [edi+4]
0x514F44: lea     ecx, [esp+230h+var_160]
0x514F4B: push    ecx
0x514F4C: mov     ecx, ds:0B33A98h
0x514F52: lea     edx, [esp+234h+var_204]
0x514F56: push    edx
0x514F57: push    eax
0x514F58: call    TESDataHandler_PlaceObjectRef
0x514F5D: mov     esi, eax
0x514F5F: test    esi, esi
0x514F61: mov     [esp+224h+var_1D0], esi
0x514F65: jz      short loc_514F8A
0x514F67: mov     ecx, [esp+224h+var_1E0]; this
0x514F6B: mov     edi, [esi]
0x514F6D: call    TESObjectREFR_GetParentCell
0x514F72: mov     edx, [edi+12Ch]
0x514F78: push    eax
0x514F79: mov     ecx, esi
0x514F7B: call    edx
0x514F7D: push    1
0x514F7F: mov     ecx, esi
0x514F81: call    sub_4D7A90
0x514F86: mov     edi, [esp+224h+l]
0x514F8A: add     dword ptr [edi], 0FFFFFFFFh
0x514F8D: xor     esi, esi
0x514F8F: cmp     [edi], esi
0x514F91: jg      short loc_514F30
0x514F93: mov     eax, [esp+224h+a3]
0x514F97: mov     eax, [eax+4]
0x514F9A: cmp     eax, esi
0x514F9C: mov     [esp+224h+a3], eax
0x514FA0: jnz     loc_514F05
0x514FA6: lea     ecx, [esp+224h+var_1AC]
0x514FAA: mov     [esp+224h+var_4], 0FFFFFFFFh
0x514FB5: call    TESContainer_destr
0x514FBA: jmp     loc_5152D9
0x514FBF: xor     edi, edi
0x514FC1: cmp     [esp+224h+var_1D4], esi
0x514FC5: mov     [esp+224h+l], esi
0x514FC9: jle     loc_5152D9
0x514FCF: mov     eax, [ebx]
0x514FD1: fld1
0x514FD3: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x514FDA: fstp    [esp+224h+a2.WorldRayCastOutput.HitFraction]
0x514FE1: mov     edx, [eax+174h]
0x514FE7: mov     ecx, ebx
0x514FE9: mov     [esp+224h+a2.WorldRayCastInput.EnableShapeCollectionFilter], 0
0x514FF1: mov     [esp+224h+a2.WorldRayCastOutput.RootCollidable], esi
0x514FF8: mov     [esp+224h+a2.BroadPhaseAabbCache], esi
0x514FFF: mov     [esp+224h+a2.RayHitCollector1], esi
0x515006: mov     [esp+224h+a2.RayHitCollector2], esi
0x51500D: movaps  xmmword ptr [esp+224h+a2.unk60.x], xmm0
0x515015: mov     [esp+224h+a2.WorldRayCastInput.FilterInfo], 3001Bh
0x515020: call    edx
0x515022: mov     ecx, [eax]
0x515024: mov     edx, [eax+4]
0x515027: mov     eax, [eax+8]
0x51502A: mov     [esp+224h+var_180], eax
0x515031: fld     [esp+224h+var_180]
0x515038: fld     qword ptr ds:0A4D910h
0x51503E: lea     eax, [edi+edi*2]
0x515041: fadd    st(1), st
0x515043: lea     eax, [esp+eax*4+224h+var_130]
0x51504A: mov     [esp+224h+var_188], ecx
0x515051: fxch    st(1)
0x515053: mov     ecx, [eax]
0x515055: fstp    [esp+224h+var_180]
0x51505C: mov     [esp+224h+var_184], edx
0x515063: mov     edx, [eax+4]
0x515066: mov     eax, [eax+8]
0x515069: mov     [esp+224h+var_1B0], eax
0x51506D: fadd    [esp+224h+var_1B0]
0x515071: mov     [esp+224h+var_1B8], ecx
0x515075: mov     [esp+224h+var_1B4], edx
0x515079: fstp    [esp+224h+var_1B0]
0x51507D: fld     [esp+224h+var_188]
0x515084: fst     [esp+224h+var_1F0]
0x515088: fld     st
0x51508A: fld     qword ptr ds:0A39088h
0x515090: fmul    st(1), st
0x515092: fxch    st(1)
0x515094: fstp    dword ptr [esp+224h+var_C0]
0x51509B: fld     [esp+224h+var_184]
0x5150A2: fst     qword ptr [esp+224h+var_1E0]
0x5150A6: fld     st
0x5150A8: fmul    st, st(2)
0x5150AA: fstp    dword ptr [esp+224h+var_C0+4]
0x5150B1: fld     [esp+224h+var_180]
0x5150B8: fst     [esp+224h+var_170]
0x5150BF: fld     st
0x5150C1: fmul    st, st(3)
0x5150C3: fstp    dword ptr [esp+224h+var_C0+8]
0x5150CA: movaps  xmm0, [esp+224h+var_C0]
0x5150D2: fld     [esp+224h+var_1B8]
0x5150D6: movaps  xmmword ptr [esp+224h+a2.WorldRayCastInput.From.x], xmm0
0x5150DE: fst     [esp+224h+var_198]
0x5150E5: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x5150EC: fld     st
0x5150EE: movaps  xmmword ptr [esp+224h+a2.unk60.x], xmm0
0x5150F6: fmul    st, st(4)
0x5150F8: fstp    dword ptr [esp+224h+var_B0]
0x5150FF: fld     [esp+224h+var_1B4]
0x515103: fst     qword ptr [esp+224h+var_1D0]
0x515107: fld     st
0x515109: fmul    st, st(5)
0x51510B: fstp    dword ptr [esp+224h+var_B0+4]
0x515112: fld     [esp+224h+var_1B0]
0x515116: fst     qword ptr [esp+224h+a3]
0x51511A: fld     st
0x51511C: fmulp   st(6), st
0x51511E: fxch    st(5)
0x515120: fstp    dword ptr [esp+224h+var_B0+8]
0x515127: movaps  xmm0, [esp+224h+var_B0]
0x51512F: fld     st(1)
0x515131: movaps  xmmword ptr [esp+224h+a2.WorldRayCastInput.To.x], xmm0
0x515139: fucomp  st(6)
0x51513B: fnstsw  ax
0x51513D: test    ah, 44h
0x515140: jp      short loc_515158
0x515142: fld     st
0x515144: fucomp  st(4)
0x515146: fnstsw  ax
0x515148: test    ah, 44h
0x51514B: jp      short loc_515158
0x51514D: fld     st(4)
0x51514F: fucomp  st(3)
0x515151: fnstsw  ax
0x515153: test    ah, 44h
0x515156: jnp     short loc_51519B
0x515158: fstp    st(5)
0x51515A: lea     ecx, [esp+224h+a2]
0x515161: fstp    st
0x515163: push    ecx; a2
0x515164: mov     ecx, ds:0B333A0h; this
0x51516A: fstp    st(1)
0x51516C: fstp    st
0x51516E: fstp    st(1)
0x515170: fstp    st
0x515172: call    TES__CastRay
0x515177: fld     [esp+224h+var_1F0]
0x51517B: fld     qword ptr [esp+224h+a3]
0x51517F: fld     [esp+224h+var_170]
0x515186: fld     qword ptr [esp+224h+var_1E0]
0x51518A: fld     [esp+224h+var_198]
0x515191: fld     qword ptr [esp+224h+var_1D0]
0x515195: fxch    st(2)
0x515197: fxch    st(3)
0x515199: fxch    st(2)
0x51519B: cmp     [esp+224h+a2.WorldRayCastOutput.RootCollidable], esi
0x5151A2: jz      loc_515249
0x5151A8: fxch    st(1)
0x5151AA: lea     ecx, [esp+224h+var_1C8]
0x5151AE: fsubrp  st(5), st
0x5151B0: fxch    st(4)
0x5151B2: fstp    [esp+224h+var_1C8]
0x5151B6: fxch    st(3)
0x5151B8: fsubrp  st(1), st
0x5151BA: fstp    [esp+224h+var_1C4]
0x5151BE: fsubrp  st(1), st
0x5151C0: fstp    [esp+224h+var_1C0]
0x5151C4: call    sub_43F350
0x5151C9: mov     edx, dword ptr [esp+224h+var_1D8]
0x5151CD: fstp    st
0x5151CF: push    edx
0x5151D0: call    sub_46D5C0
0x5151D5: fstp    [esp+228h+var_1E0]
0x5151D9: fld     [esp+228h+var_1E0]
0x5151DD: add     esp, 4
0x5151E0: fld     [esp+224h+var_1C8]
0x5151E4: fmul    st, st(1)
0x5151E6: fstp    [esp+224h+var_17C]
0x5151ED: fld     [esp+224h+var_1C4]
0x5151F1: fmul    st, st(1)
0x5151F3: fstp    [esp+224h+var_178]
0x5151FA: fmul    [esp+224h+var_1C0]
0x5151FE: fstp    [esp+224h+var_174]
0x515205: fld     [esp+224h+var_17C]
0x51520C: fsubr   [esp+224h+var_198]
0x515213: fstp    [esp+224h+var_1AC]
0x515217: mov     eax, [esp+224h+var_1AC]
0x51521B: fld     [esp+224h+var_178]
0x515222: fsubr   qword ptr [esp+224h+var_1D0]
0x515226: fstp    [esp+224h+var_1A8]
0x51522A: mov     ecx, [esp+224h+var_1A8]
0x51522E: fld     [esp+224h+var_174]
0x515235: fsubr   qword ptr [esp+224h+a3]
0x515239: fstp    [esp+224h+var_1A4]
0x515240: mov     edx, [esp+224h+var_1A4]
0x515247: jmp     short loc_515261
0x515249: mov     eax, [esp+224h+var_1B8]
0x51524D: fstp    st(5)
0x51524F: mov     ecx, [esp+224h+var_1B4]
0x515253: fstp    st
0x515255: mov     edx, [esp+224h+var_1B0]
0x515259: fstp    st(1)
0x51525B: fstp    st
0x51525D: fstp    st(1)
0x51525F: fstp    st
0x515261: mov     [esp+224h+var_204], eax
0x515265: mov     eax, [ebx]
0x515267: mov     [esp+224h+var_1FC], edx
0x51526B: mov     edx, [eax+174h]
0x515271: mov     [esp+224h+var_200], ecx
0x515275: mov     ecx, ebx
0x515277: call    edx
0x515279: fld     dword ptr [eax+8]
0x51527C: push    esi
0x51527D: fstp    [esp+228h+var_1FC]
0x515281: mov     ecx, ebx; this
0x515283: call    TESObjectREFR_GetWorldSpace
0x515288: push    eax
0x515289: mov     ecx, ebx; this
0x51528B: call    TESObjectREFR_GetParentCell
0x515290: mov     edx, dword ptr [esp+22Ch+var_1D8]
0x515294: push    eax
0x515295: lea     eax, [esp+230h+var_160]
0x51529C: push    eax
0x51529D: lea     ecx, [esp+234h+var_204]
0x5152A1: push    ecx
0x5152A2: mov     ecx, ds:0B33A98h
0x5152A8: push    edx
0x5152A9: call    TESDataHandler_PlaceObjectRef
0x5152AE: cmp     eax, esi
0x5152B0: mov     [esp+224h+var_1D0], eax
0x5152B4: jz      loc_514C11
0x5152BA: add     edi, 1
0x5152BD: cmp     edi, 9
0x5152C0: jnz     short loc_5152C4
0x5152C2: xor     edi, edi
0x5152C4: mov     eax, [esp+224h+l]
0x5152C8: add     eax, 1
0x5152CB: cmp     eax, [esp+224h+var_1D4]
0x5152CF: mov     [esp+224h+l], eax
0x5152D3: jl      loc_514FCF
0x5152D9: mov     eax, [esp+224h+var_1D0]
0x5152DD: cmp     eax, esi
0x5152DF: mov     [esp+224h+var_18C], esi
0x5152E6: jz      short loc_51530A
0x5152E8: mov     ecx, [esp+224h+var_164]
0x5152EF: mov     eax, [eax+0Ch]
0x5152F2: push    ecx
0x5152F3: lea     edx, [esp+228h+var_18C]
0x5152FA: push    edx
0x5152FB: mov     [esp+22Ch+var_18C], eax
0x515302: call    sub_4F9FB0
0x515307: add     esp, 8
0x51530A: mov     al, 1
0x51530C: mov     ecx, [esp+224h+var_C]
0x515313: mov     large fs:0, ecx
0x51531A: pop     ecx
0x51531B: pop     edi
0x51531C: pop     esi
0x51531D: pop     ebx
0x51531E: mov     ecx, [esp+214h+var_14]
0x515325: xor     ecx, esp
0x515327: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51532C: mov     esp, ebp
0x51532E: pop     ebp
0x51532F: retn
