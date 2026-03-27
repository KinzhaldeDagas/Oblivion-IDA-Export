0x52DED0: push    0FFFFFFFFh
0x52DED2: push    offset SEH_52DED0
0x52DED7: mov     eax, large fs:0
0x52DEDD: push    eax
0x52DEDE: sub     esp, 0CCh
0x52DEE4: push    ebx
0x52DEE5: push    ebp
0x52DEE6: push    esi
0x52DEE7: push    edi
0x52DEE8: mov     eax, ds:0B30AACh
0x52DEED: xor     eax, esp
0x52DEEF: push    eax
0x52DEF0: lea     eax, [esp+0ECh+var_C]
0x52DEF7: mov     large fs:0, eax
0x52DEFD: mov     [esp+0ECh+var_D4], ecx
0x52DF01: mov     esi, [esp+0ECh+arg_0]
0x52DF08: mov     edi, [esp+0ECh+arg_4]
0x52DF0F: xor     ebp, ebp
0x52DF11: mov     [esi], ebp
0x52DF13: push    1E0h; Size
0x52DF18: mov     [edi], ebp
0x52DF1A: call    FormHeapAlloc
0x52DF1F: add     esp, 4
0x52DF22: mov     [esp+0ECh+var_D8], eax
0x52DF26: cmp     eax, ebp
0x52DF28: mov     [esp+0ECh+var_4], ebp
0x52DF2F: jz      short loc_52DF3A
0x52DF31: mov     ecx, eax; this
0x52DF33: call    ??0BSFaceGenAnimationData@@QAE@XZ; BSFaceGenAnimationData::BSFaceGenAnimationData(void)
0x52DF38: mov     ebp, eax
0x52DF3A: or      ebx, 0FFFFFFFFh
0x52DF3D: push    118h; Size
0x52DF42: mov     [esp+0F0h+var_4], ebx
0x52DF49: call    FormHeapAlloc
0x52DF4E: add     esp, 4
0x52DF51: mov     [esp+0ECh+var_D8], eax
0x52DF55: test    eax, eax
0x52DF57: mov     [esp+0ECh+var_4], 1
0x52DF62: jz      short loc_52DF6D
0x52DF64: mov     ecx, eax; this
0x52DF66: call    ??0BSFaceGenNiNode@@QAE@XZ; BSFaceGenNiNode::BSFaceGenNiNode(void)
0x52DF6B: jmp     short loc_52DF6F
0x52DF6D: xor     eax, eax
0x52DF6F: push    offset aBsfacegenninod; "BSFaceGenNiNodeBiped"
0x52DF74: mov     ecx, eax
0x52DF76: mov     [esp+0F0h+var_4], ebx
0x52DF7D: mov     [esi], eax
0x52DF7F: call    NiObjectNET_SetName
0x52DF84: mov     ecx, [esi]
0x52DF86: mov     eax, [ecx]
0x52DF88: mov     edx, [eax+0A0h]
0x52DF8E: push    ebp
0x52DF8F: call    edx
0x52DF91: mov     ecx, [esi]
0x52DF93: mov     eax, [ecx]
0x52DF95: mov     edx, [eax+0B0h]
0x52DF9B: push    1
0x52DF9D: call    edx
0x52DF9F: mov     ecx, [esi]
0x52DFA1: mov     eax, [ecx]
0x52DFA3: mov     edx, [eax+0B8h]
0x52DFA9: push    1
0x52DFAB: call    edx
0x52DFAD: push    118h; Size
0x52DFB2: call    FormHeapAlloc
0x52DFB7: add     esp, 4
0x52DFBA: mov     [esp+0ECh+var_D8], eax
0x52DFBE: test    eax, eax
0x52DFC0: mov     [esp+0ECh+var_4], 2
0x52DFCB: jz      short loc_52DFD6
0x52DFCD: mov     ecx, eax; this
0x52DFCF: call    ??0BSFaceGenNiNode@@QAE@XZ; BSFaceGenNiNode::BSFaceGenNiNode(void)
0x52DFD4: jmp     short loc_52DFD8
0x52DFD6: xor     eax, eax
0x52DFD8: push    offset aBsfacegennin_0; "BSFaceGenNiNodeSkinned"
0x52DFDD: mov     ecx, eax
0x52DFDF: mov     [esp+0F0h+var_4], ebx
0x52DFE6: mov     [edi], eax
0x52DFE8: call    NiObjectNET_SetName
0x52DFED: mov     ecx, [edi]
0x52DFEF: mov     eax, [ecx]
0x52DFF1: mov     edx, [eax+0A0h]
0x52DFF7: push    ebp
0x52DFF8: call    edx
0x52DFFA: mov     ecx, [edi]
0x52DFFC: mov     eax, [ecx]
0x52DFFE: mov     edx, [eax+0B0h]
0x52E004: push    0
0x52E006: call    edx
0x52E008: mov     ecx, [edi]
0x52E00A: mov     eax, [ecx]
0x52E00C: mov     edx, [eax+0B8h]
0x52E012: push    0
0x52E014: call    edx
0x52E016: lea     ecx, [esp+0ECh+var_D0]
0x52E01A: call    FaceGenHeadParameters_Ctor
0x52E01F: mov     ebp, [esp+0ECh+arg_8]
0x52E026: mov     ecx, [esp+0ECh+var_D4]
0x52E02A: lea     eax, [esp+0ECh+var_D0]
0x52E02E: push    eax
0x52E02F: push    ebp
0x52E030: mov     [esp+0F4h+var_4], 3
0x52E03B: call    TESRace_GetFaceGenHeadParameters
0x52E040: mov     ecx, [esp+0ECh+arg_10]
0x52E047: push    ecx
0x52E048: lea     edx, [esp+0F0h+var_D0]
0x52E04C: push    edx
0x52E04D: push    edi
0x52E04E: push    esi
0x52E04F: call    sub_555A80
0x52E054: add     esp, 10h
0x52E057: cmp     [esp+0ECh+arg_C], 0
0x52E05F: jz      short loc_52E07E
0x52E061: mov     ecx, [esi]
0x52E063: lea     eax, [esp+0ECh+var_D0]
0x52E067: push    eax
0x52E068: push    ecx
0x52E069: call    BSFaceGen_DoSomethingWithFaceGenNode
0x52E06E: mov     eax, [edi]
0x52E070: lea     edx, [esp+0F4h+var_D0]
0x52E074: push    edx
0x52E075: push    eax
0x52E076: call    BSFaceGen_DoSomethingWithFaceGenNode
0x52E07B: add     esp, 10h
0x52E07E: test    ebp, ebp
0x52E080: jz      short loc_52E09A
0x52E082: cmp     dword ptr [ebp+0Ch], 7
0x52E086: jnz     short loc_52E09A
0x52E088: mov     esi, [esi]
0x52E08A: mov     byte ptr [esi+111h], 1
0x52E091: mov     edi, [edi]
0x52E093: mov     byte ptr [edi+111h], 1
0x52E09A: lea     ecx, [esp+0ECh+var_D0]
0x52E09E: mov     [esp+0ECh+var_4], ebx
0x52E0A5: call    FaceGenHeadParameters_Dtor
0x52E0AA: mov     al, 1
0x52E0AC: mov     ecx, [esp+0ECh+var_C]
0x52E0B3: mov     large fs:0, ecx
0x52E0BA: pop     ecx
0x52E0BB: pop     edi
0x52E0BC: pop     esi
0x52E0BD: pop     ebp
0x52E0BE: pop     ebx
0x52E0BF: add     esp, 0D8h
0x52E0C5: retn    14h
