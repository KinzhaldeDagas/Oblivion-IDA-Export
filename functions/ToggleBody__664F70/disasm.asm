0x664F70: push    0FFFFFFFFh
0x664F72: push    offset ToggleBody_SEH
0x664F77: mov     eax, large fs:0
0x664F7D: push    eax
0x664F7E: sub     esp, 4Ch
0x664F81: push    ebx
0x664F82: push    ebp
0x664F83: push    esi
0x664F84: push    edi
0x664F85: mov     eax, ds:0B30AACh
0x664F8A: xor     eax, esp
0x664F8C: push    eax
0x664F8D: lea     eax, [esp+6Ch+var_C]
0x664F91: mov     large fs:0, eax
0x664F97: mov     ebp, ecx
0x664F99: mov     eax, [ebp+5D0h]
0x664F9F: test    eax, eax
0x664FA1: jz      loc_6651FF
0x664FA7: call    TESObjectREFR__GetNiNode
0x664FAC: test    eax, eax
0x664FAE: jz      loc_6651FF
0x664FB4: mov     bl, [esp+6Ch+a3]
0x664FB8: test    bl, bl
0x664FBA: jz      short loc_664FF0
0x664FBC: mov     eax, [ebp+5D0h]
0x664FC2: test    byte ptr [eax+18h], 1
0x664FC6: jz      loc_6651FF
0x664FCC: mov     eax, [ebp+0]
0x664FCF: mov     edx, [eax+198h]
0x664FD5: push    0
0x664FD7: mov     ecx, ebp
0x664FD9: call    edx
0x664FDB: test    al, al
0x664FDD: jnz     loc_6651FF
0x664FE3: cmp     [ebp+589h], al
0x664FE9: jz      short loc_665001
0x664FEB: jmp     loc_6651FF
0x664FF0: mov     ecx, ebp; this
0x664FF2: call    TESObjectREFR__GetNiNode
0x664FF7: test    byte ptr [eax+18h], 1
0x664FFB: jz      loc_6651FF
0x665001: mov     ecx, ebp; this
0x665003: call    TESObjectREFR__GetNiNode
0x665008: test    bl, bl
0x66500A: mov     ecx, 0FFFEh
0x66500F: jz      short loc_665018
0x665011: or      word ptr [eax+18h], 1
0x665016: jmp     short loc_66501C
0x665018: and     [eax+18h], cx
0x66501C: test    bl, bl
0x66501E: mov     eax, [ebp+5D0h]
0x665024: jnz     short loc_665030
0x665026: or      word ptr [eax+18h], 1
0x66502B: jmp     loc_6650C7
0x665030: and     [eax+18h], cx
0x665034: mov     ecx, ebp; this
0x665036: call    TESObjectREFR__GetNiNode
0x66503B: mov     ebx, eax
0x66503D: mov     eax, [ebp+0]
0x665040: mov     edx, [eax+174h]
0x665046: mov     ecx, ebp
0x665048: call    edx
0x66504A: mov     ecx, [eax]
0x66504C: mov     [ebx+54h], ecx
0x66504F: mov     edx, [eax+4]
0x665052: mov     [ebx+58h], edx
0x665055: mov     eax, [eax+8]
0x665058: mov     [ebx+5Ch], eax
0x66505B: mov     edx, [ebp+0]
0x66505E: mov     eax, [edx+1E0h]
0x665064: mov     ecx, ebp
0x665066: call    eax
0x665068: push    ecx
0x665069: lea     ecx, [esp+70h+var_54]
0x66506D: fstp    [esp+70h+var_70]; float
0x665070: call    NiMatrix33_InitRotationTransform
0x665075: push    0
0x665077: lea     ecx, [esp+70h+var_54]
0x66507B: push    ecx
0x66507C: lea     edx, [esp+74h+var_30]
0x665080: push    edx
0x665081: mov     ecx, ebp
0x665083: call    sub_4D7C50
0x665088: fld1
0x66508A: mov     esi, eax
0x66508C: lea     edi, [ebx+30h]
0x66508F: mov     ecx, 9
0x665094: rep movsd
0x665096: fstp    dword ptr ds:0B14E50h
0x66509C: mov     ecx, ebp; a1
0x66509E: call    sub_5EE1B0
0x6650A3: mov     ecx, ebp; this
0x6650A5: call    TESObjectREFR_GetAnimData
0x6650AA: test    eax, eax
0x6650AC: jz      short loc_6650B8
0x6650AE: push    ebp; a2
0x6650AF: mov     ecx, eax; this
0x6650B1: call    sub_474510
0x6650B6: jmp     short loc_6650C7
0x6650B8: fldz
0x6650BA: push    0; a3
0x6650BC: push    ecx
0x6650BD: fstp    [esp+74h+a2]; a2
0x6650C0: mov     ecx, ebx; this
0x6650C2: call    NiAVObject_UpdateNiAVObject
0x6650C7: mov     ecx, ebp
0x6650C9: call    sub_5E5480
0x6650CE: test    al, al
0x6650D0: jz      loc_6651B0
0x6650D6: cmp     [esp+6Ch+a3], 0
0x6650DB: jnz     short loc_665112
0x6650DD: mov     esi, [ebp+5CCh]
0x6650E3: mov     ecx, ebp; this
0x6650E5: call    TESObjectREFR_GetAnimData
0x6650EA: mov     ebx, eax
0x6650EC: mov     eax, [esi+98h]
0x6650F2: mov     ecx, [eax+7Ch]
0x6650F5: mov     eax, [ecx]
0x6650F7: mov     edx, [eax+4Ch]
0x6650FA: push    offset aMagicnode; "magicNode"
0x6650FF: call    edx
0x665101: test    eax, eax
0x665103: jz      short loc_665123
0x665105: mov     edx, [eax]
0x665107: mov     ecx, eax
0x665109: mov     eax, [edx+8]
0x66510C: call    eax
0x66510E: mov     edi, eax
0x665110: jmp     short loc_665125
0x665112: mov     ecx, ebp; this
0x665114: call    TESObjectREFR_GetAnimData
0x665119: mov     ebx, [ebp+5CCh]
0x66511F: mov     esi, eax
0x665121: jmp     short loc_6650EC
0x665123: xor     edi, edi
0x665125: mov     eax, [ebx+98h]
0x66512B: mov     ecx, [eax+7Ch]
0x66512E: mov     edx, [ecx]
0x665130: mov     eax, [edx+4Ch]
0x665133: push    offset aMagicnode; "magicNode"
0x665138: call    eax
0x66513A: test    eax, eax
0x66513C: jz      short loc_66514B
0x66513E: mov     edx, [eax]
0x665140: mov     ecx, eax
0x665142: mov     eax, [edx+8]
0x665145: call    eax
0x665147: mov     ebx, eax
0x665149: jmp     short loc_66514D
0x66514B: xor     ebx, ebx
0x66514D: test    edi, edi
0x66514F: jz      short loc_6651B0
0x665151: test    ebx, ebx
0x665153: jz      short loc_6651B0
0x665155: xor     esi, esi
0x665157: cmp     [edi+0B6h], si
0x66515E: jbe     short loc_6651B0
0x665160: mov     edx, [edi]
0x665162: mov     edx, [edx+8Ch]
0x665168: push    esi
0x665169: lea     eax, [esp+70h+var_58]
0x66516D: push    eax
0x66516E: mov     ecx, edi
0x665170: call    edx
0x665172: mov     eax, [esp+6Ch+var_58]
0x665176: test    eax, eax
0x665178: mov     [esp+6Ch+var_4], 0
0x665180: jz      short loc_665191
0x665182: mov     edx, [ebx]
0x665184: push    1
0x665186: push    eax
0x665187: mov     eax, [edx+84h]
0x66518D: mov     ecx, ebx
0x66518F: call    eax
0x665191: lea     ecx, [esp+6Ch+var_58]; this
0x665195: mov     [esp+6Ch+var_4], 0FFFFFFFFh
0x66519D: call    sub_7016A0
0x6651A2: movzx   ecx, word ptr [edi+0B6h]
0x6651A9: add     esi, 1
0x6651AC: cmp     esi, ecx
0x6651AE: jb      short loc_665160
0x6651B0: mov     edx, [ebp+0]
0x6651B3: mov     eax, [edx+154h]
0x6651B9: mov     ecx, ebp
0x6651BB: call    eax
0x6651BD: cmp     [esp+6Ch+a3], 0
0x6651C2: mov     esi, eax
0x6651C4: jz      short loc_6651DC
0x6651C6: cmp     word ptr [esi+0B6h], 0
0x6651CE: ja      short loc_6651D4
0x6651D0: xor     esi, esi
0x6651D2: jmp     short loc_6651DC
0x6651D4: mov     ecx, [esi+0B0h]
0x6651DA: mov     esi, [ecx]
0x6651DC: mov     ecx, ebp; this
0x6651DE: call    sub_6637C0
0x6651E3: push    esi
0x6651E4: mov     ecx, ebp
0x6651E6: call    sub_5EA1A0
0x6651EB: mov     ecx, [ebp+58h]
0x6651EE: mov     edx, [ecx]
0x6651F0: mov     eax, [edx+42Ch]
0x6651F6: push    0
0x6651F8: push    1
0x6651FA: push    1
0x6651FC: push    ebp
0x6651FD: call    eax
0x6651FF: mov     ecx, dword ptr [esp+6Ch+var_C]
0x665203: mov     large fs:0, ecx
0x66520A: pop     ecx
0x66520B: pop     edi
0x66520C: pop     esi
0x66520D: pop     ebp
0x66520E: pop     ebx
0x66520F: add     esp, 58h
0x665212: retn    4
