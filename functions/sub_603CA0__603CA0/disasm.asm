0x603CA0: push    0FFFFFFFFh
0x603CA2: push    offset SEH_603CA0
0x603CA7: mov     eax, large fs:0
0x603CAD: push    eax
0x603CAE: sub     esp, 0C8h
0x603CB4: push    ebx
0x603CB5: push    ebp
0x603CB6: push    esi
0x603CB7: push    edi; int
0x603CB8: mov     eax, ds:0B30AACh
0x603CBD: xor     eax, esp
0x603CBF: push    eax; int
0x603CC0: lea     eax, [esp+0E8h+var_C]
0x603CC7: mov     large fs:0, eax
0x603CCD: mov     ebp, ecx
0x603CCF: xor     edi, edi
0x603CD1: mov     dword ptr [esp+0E8h+var_D0], edi
0x603CD5: mov     eax, [ebp+0]
0x603CD8: mov     edx, [eax+154h]
0x603CDE: call    edx
0x603CE0: mov     ecx, [ebp+58h]
0x603CE3: cmp     ecx, edi
0x603CE5: mov     esi, eax
0x603CE7: mov     [esp+0E8h+var_C4], esi
0x603CEB: jz      short loc_603D00
0x603CED: mov     eax, [ecx]
0x603CEF: mov     edx, [eax+0E8h]
0x603CF5: push    ebp
0x603CF6: call    edx
0x603CF8: mov     edi, eax
0x603CFA: mov     [esp+0E8h+var_A8], eax
0x603CFE: jmp     short loc_603D04
0x603D00: mov     [esp+0E8h+var_A8], edi
0x603D04: mov     ecx, ebp; this
0x603D06: call    MobileObject_GetCharProxy
0x603D0B: mov     [esp+0E8h+var_AC], eax
0x603D0F: mov     eax, [ebp+0]
0x603D12: mov     edx, [eax+164h]
0x603D18: mov     ecx, ebp
0x603D1A: call    edx
0x603D1C: test    esi, esi
0x603D1E: mov     ebx, eax
0x603D20: mov     [esp+0E8h+var_A4], ebx
0x603D24: jz      loc_605740
0x603D2A: mov     ecx, ebp; this
0x603D2C: call    TESObjectREFR_GetParentCell
0x603D31: test    eax, eax
0x603D33: jz      loc_605740
0x603D39: mov     ecx, ebp; this
0x603D3B: call    TESObjectREFR_GetParentCell
0x603D40: cmp     byte ptr [eax+26h], 6
0x603D44: jnz     loc_605740
0x603D4A: fld     [esp+0E8h+arg_0]
0x603D51: fcomp   qword ptr ds:0A6C820h
0x603D57: fnstsw  ax
0x603D59: test    ah, 1
0x603D5C: jnz     short loc_603D7D
0x603D5E: mov     ebp, [ebp+58h]
0x603D61: test    ebp, ebp
0x603D63: jz      loc_605740
0x603D69: mov     eax, [ebp+0]
0x603D6C: mov     edx, [eax+474h]
0x603D72: push    1
0x603D74: mov     ecx, ebp
0x603D76: call    edx
0x603D78: jmp     loc_605740
0x603D7D: mov     eax, ds:0B333C4h
0x603D82: cmp     ebp, eax
0x603D84: jnz     short loc_603D94
0x603D86: cmp     byte ptr [eax+588h], 0
0x603D8D: mov     [esp+0E8h+var_D3], 1
0x603D92: jz      short loc_603D99
0x603D94: mov     [esp+0E8h+var_D3], 0
0x603D99: mov     ecx, ebp; this
0x603D9B: call    MobileObject_GetCharProxy
0x603DA0: test    eax, eax
0x603DA2: jz      short loc_603E20
0x603DA4: test    ebx, ebx
0x603DA6: mov     [esp+0E8h+var_D2], 0
0x603DAB: jz      short loc_603E00
0x603DAD: push    3
0x603DAF: mov     ecx, ebx
0x603DB1: call    ActorAnimData_GetAnimGroupFromField8Value
0x603DB6: movzx   esi, ax
0x603DB9: push    esi
0x603DBA: call    sub_51ACC0
0x603DBF: add     esp, 4
0x603DC2: test    al, al
0x603DC4: jz      short loc_603DD4
0x603DC6: push    esi
0x603DC7: call    sub_51AA00
0x603DCC: add     esp, 4
0x603DCF: cmp     eax, 1Ah
0x603DD2: jl      short loc_603DFB
0x603DD4: push    1
0x603DD6: mov     ecx, ebx
0x603DD8: call    ActorAnimData_GetAnimGroupFromField8Value
0x603DDD: movzx   esi, ax
0x603DE0: push    esi
0x603DE1: call    sub_51ACC0
0x603DE6: add     esp, 4
0x603DE9: test    al, al
0x603DEB: jz      short loc_603E00
0x603DED: push    esi
0x603DEE: call    sub_51AA00
0x603DF3: add     esp, 4
0x603DF6: cmp     eax, 1Ah
0x603DF9: jge     short loc_603E00
0x603DFB: mov     [esp+0E8h+var_D2], 1
0x603E00: mov     ecx, ebp; this
0x603E02: call    MobileObject_GetCharProxy
0x603E07: test    eax, eax
0x603E09: jz      short loc_603E12
0x603E0B: add     eax, 1F0h
0x603E10: jmp     short loc_603E14
0x603E12: xor     eax, eax
0x603E14: lea     ecx, [esp+0E8h+var_D2]
0x603E18: push    ecx
0x603E19: mov     ecx, eax
0x603E1B: call    sub_5E14E0
0x603E20: mov     ecx, [ebp+58h]
0x603E23: test    ecx, ecx
0x603E25: jz      loc_603F5D
0x603E2B: mov     edx, [ecx]
0x603E2D: mov     eax, [edx+2F4h]
0x603E33: push    ebp
0x603E34: call    eax
0x603E36: mov     ecx, [ebp+58h]
0x603E39: mov     edx, [ecx]
0x603E3B: mov     eax, [edx+440h]
0x603E41: push    ebp
0x603E42: call    eax
0x603E44: cmp     byte ptr ds:0B14E90h, 0
0x603E4B: jz      short loc_603E58
0x603E4D: mov     ecx, [ebp+58h]
0x603E50: mov     edx, [ecx]
0x603E52: mov     eax, [edx+60h]
0x603E55: push    ebp
0x603E56: call    eax
0x603E58: mov     edx, [ebp+0]
0x603E5B: mov     eax, [edx+18Ch]
0x603E61: mov     ecx, ebp
0x603E63: call    eax
0x603E65: cmp     eax, 9
0x603E68: jz      short loc_603E73
0x603E6A: cmp     dword ptr [ebp+0B0h], 3
0x603E71: jnz     short loc_603E97
0x603E73: test    edi, edi
0x603E75: jz      short loc_603E97
0x603E77: mov     edx, [edi]
0x603E79: mov     eax, [edx+98h]
0x603E7F: mov     ecx, edi
0x603E81: call    eax
0x603E83: test    al, al
0x603E85: jnz     short loc_603E97
0x603E87: mov     edx, [edi]
0x603E89: mov     eax, [edx+9Ch]
0x603E8F: push    0
0x603E91: push    1
0x603E93: mov     ecx, edi
0x603E95: call    eax
0x603E97: cmp     dword ptr [ebp+0B0h], 6
0x603E9E: jnz     loc_603F5D
0x603EA4: mov     ecx, [ebp+58h]
0x603EA7: mov     edx, [ecx]
0x603EA9: mov     eax, [edx+2E4h]
0x603EAF: call    eax
0x603EB1: cmp     eax, 3
0x603EB4: jz      short loc_603ECC
0x603EB6: mov     ecx, [ebp+58h]
0x603EB9: mov     edx, [ecx]
0x603EBB: mov     eax, [edx+2E4h]
0x603EC1: call    eax
0x603EC3: cmp     eax, 1
0x603EC6: jnz     loc_603F5D
0x603ECC: mov     ecx, [ebp+58h]
0x603ECF: mov     edx, [ecx]
0x603ED1: mov     eax, [edx+98h]
0x603ED7: call    eax
0x603ED9: mov     ecx, [ebp+58h]
0x603EDC: mov     edx, [ecx]
0x603EDE: mov     eax, [edx+9Ch]
0x603EE4: call    eax
0x603EE6: fcomp   dword ptr ds:0A2FAA8h
0x603EEC: fnstsw  ax
0x603EEE: test    ah, 41h
0x603EF1: jp      short loc_603F5D
0x603EF3: push    0; newDeadState
0x603EF5: mov     ecx, ebp; this
0x603EF7: call    Actor_HandleDeathSTate????
0x603EFC: push    8
0x603EFE: mov     ecx, ebp
0x603F00: call    Actor_GetBaseCalcAVi
0x603F05: mov     [esp+0E8h+var_C0], eax
0x603F09: fild    [esp+0E8h+var_C0]
0x603F0D: mov     ecx, offset flt_B37D10
0x603F12: fstp    [esp+0E8h+var_C0]
0x603F16: call    GameSetting_GetSafeFloatPointer
0x603F1B: fld     dword ptr [eax]
0x603F1D: mov     edx, [ebp+0]
0x603F20: fmul    [esp+0E8h+var_C0]
0x603F24: mov     eax, [edx+288h]
0x603F2A: push    8
0x603F2C: mov     ecx, ebp
0x603F2E: fstp    [esp+0ECh+var_C0]
0x603F32: call    eax
0x603F34: mov     edx, [ebp+0]
0x603F37: fstp    dword ptr [esp+0E8h+var_B9+1]
0x603F3B: fld     [esp+0E8h+var_C0]
0x603F3F: mov     eax, [edx+2A4h]
0x603F45: fsub    dword ptr [esp+0E8h+var_B9+1]
0x603F49: push    0
0x603F4B: push    ecx
0x603F4C: mov     ecx, ebp
0x603F4E: fstp    [esp+0F0h+var_C0]
0x603F52: fld     [esp+0F0h+var_C0]
0x603F56: fstp    [esp+0F0h+a3]; a3
0x603F59: push    8; a2
0x603F5B: call    eax
0x603F5D: cmp     ebp, ds:0B333C4h
0x603F63: jz      loc_603FEC
0x603F69: mov     ecx, [ebp+58h]
0x603F6C: xor     esi, esi
0x603F6E: test    ecx, ecx
0x603F70: jz      short loc_603F7E
0x603F72: mov     edx, [ecx]
0x603F74: mov     eax, [edx+184h]
0x603F7A: call    eax
0x603F7C: mov     esi, eax
0x603F7E: mov     edx, [ebp+0]
0x603F81: mov     eax, [edx+334h]
0x603F87: push    1
0x603F89: mov     ecx, ebp
0x603F8B: call    eax
0x603F8D: test    al, al
0x603F8F: jnz     short loc_603FAF
0x603F91: test    esi, esi
0x603F93: jz      short loc_603F9B
0x603F95: cmp     byte ptr [esi+20h], 8
0x603F99: jz      short loc_603FAF
0x603F9B: mov     ecx, ebp
0x603F9D: call    Actor_IsBlocking
0x603FA2: test    al, al
0x603FA4: jz      short loc_603FAF
0x603FA6: push    0; float
0x603FA8: mov     ecx, ebp
0x603FAA: call    sub_5F4AE0
0x603FAF: cmp     byte ptr [ebp+0C9h], 0
0x603FB6: jnz     short loc_603FE0
0x603FB8: test    esi, esi
0x603FBA: jz      short loc_603FC7
0x603FBC: mov     ecx, [esi+1Ch]
0x603FBF: shr     ecx, 11h
0x603FC2: test    cl, 1
0x603FC5: jnz     short loc_603FE0
0x603FC7: mov     ecx, ebp
0x603FC9: call    Actor_IsSneaking
0x603FCE: test    al, al
0x603FD0: jz      short loc_603FEC
0x603FD2: push    400h
0x603FD7: mov     ecx, ebp
0x603FD9: call    sub_5E05F0
0x603FDE: jmp     short loc_603FEC
0x603FE0: push    400h
0x603FE5: mov     ecx, ebp
0x603FE7: call    sub_5E0610
0x603FEC: mov     edx, [ebp+0]
0x603FEF: mov     eax, [edx+27Ch]
0x603FF5: mov     ecx, ebp
0x603FF7: call    eax
0x603FF9: cmp     eax, 2
0x603FFC: jz      short loc_604006
0x603FFE: push    ebp
0x603FFF: mov     ecx, ebp
0x604001: call    sub_5E0CE0
0x604006: mov     ecx, ebp
0x604008: call    sub_5E1030
0x60400D: test    al, al
0x60400F: mov     edx, [ebp+0]
0x604012: mov     ecx, ebp
0x604014: jz      short loc_604072
0x604016: mov     eax, [edx+380h]
0x60401C: call    eax
0x60401E: mov     edx, [eax]
0x604020: mov     esi, [ebp+0]
0x604023: mov     ecx, eax
0x604025: mov     eax, [edx+1E0h]
0x60402B: call    eax
0x60402D: mov     edx, [esi+1E8h]
0x604033: push    ecx
0x604034: mov     ecx, ebp
0x604036: fstp    [esp+0ECh+a4]; a4
0x604039: call    edx
0x60403B: mov     eax, [ebp+0]
0x60403E: mov     edx, [eax+380h]
0x604044: mov     ecx, ebp
0x604046: call    edx
0x604048: mov     edx, [eax]
0x60404A: mov     ecx, eax
0x60404C: mov     eax, [edx+174h]
0x604052: call    eax
0x604054: mov     edx, [eax]
0x604056: sub     esp, 0Ch
0x604059: mov     ecx, esp
0x60405B: mov     [ecx], edx
0x60405D: mov     edx, [eax+4]
0x604060: mov     eax, [eax+8]
0x604063: mov     [ecx+4], edx
0x604066: mov     [ecx+8], eax
0x604069: mov     ecx, ebp; this
0x60406B: call    TESObjectREFR_SetPosition
0x604070: jmp     short loc_604085
0x604072: mov     eax, [edx+388h]
0x604078: call    eax
0x60407A: test    eax, eax
0x60407C: jz      short loc_604085
0x60407E: mov     byte ptr ds:0B3CBD0h, 1
0x604085: cmp     [esp+0E8h+var_D3], 0
0x60408A: mov     esi, [ebp+2Ch]
0x60408D: mov     edi, [ebp+30h]
0x604090: jz      short loc_6040F6
0x604092: mov     ecx, [ebp+34h]
0x604095: mov     [esp+0E8h+var_C8], ecx
0x604099: mov     ecx, ebp
0x60409B: call    sub_5E1030
0x6040A0: test    al, al
0x6040A2: jz      short loc_6040BA
0x6040A4: mov     edx, ds:0B3F9B0h
0x6040AA: mov     esi, ds:0B3F9A8h
0x6040B0: mov     edi, ds:0B3F9ACh
0x6040B6: mov     [esp+0E8h+var_C8], edx
0x6040BA: mov     eax, ds:0B333C4h
0x6040BF: fld     dword ptr [eax+5D4h]
0x6040C5: mov     eax, [esp+0E8h+var_C4]
0x6040C9: fstp    dword ptr [esp+0E8h+var_B9+1]
0x6040CD: mov     [eax+54h], esi
0x6040D0: fld     dword ptr [esp+0E8h+var_B9+1]
0x6040D4: mov     [eax+58h], edi
0x6040D7: fadd    [esp+0E8h+var_C8]
0x6040DB: fstp    [esp+0E8h+var_C8]
0x6040DF: mov     ecx, [esp+0E8h+var_C8]
0x6040E3: mov     [eax+5Ch], ecx
0x6040E6: mov     ecx, ds:0B333C4h
0x6040EC: call    sub_660130
0x6040F1: jmp     loc_604229
0x6040F6: mov     edx, [ebp+34h]
0x6040F9: mov     ecx, ebp; this
0x6040FB: mov     [esp+0E8h+var_C8], edx
0x6040FF: call    MobileObject_GetZRotation
0x604104: fstp    [esp+0E8h+var_C0]
0x604108: mov     ecx, ebp
0x60410A: call    sub_5E1030
0x60410F: test    al, al
0x604111: jz      short loc_60412E
0x604113: fldz
0x604115: mov     eax, ds:0B3F9B0h
0x60411A: mov     esi, ds:0B3F9A8h
0x604120: fstp    [esp+0E8h+var_C0]
0x604124: mov     edi, ds:0B3F9ACh
0x60412A: mov     [esp+0E8h+var_C8], eax
0x60412E: cmp     byte ptr ds:0B3BAA8h, 0
0x604135: jnz     short loc_60419B
0x604137: mov     edx, [ebp+0]
0x60413A: mov     eax, [edx+18Ch]
0x604140: mov     ecx, ebp
0x604142: call    eax
0x604144: test    eax, eax
0x604146: jnz     short loc_60418A
0x604148: mov     edx, [ebp+0]
0x60414B: push    eax
0x60414C: mov     eax, [edx+198h]
0x604152: mov     ecx, ebp
0x604154: call    eax
0x604156: test    al, al
0x604158: jnz     short loc_60418A
0x60415A: mov     edx, [ebp+0]
0x60415D: mov     eax, [edx+19Ch]
0x604163: mov     ecx, ebp
0x604165: call    eax
0x604167: test    al, al
0x604169: jnz     short loc_60418A
0x60416B: mov     ecx, ebp
0x60416D: call    sub_5E1030
0x604172: test    al, al
0x604174: jnz     short loc_60418A
0x604176: mov     ecx, offset fActorAnimZAdjust
0x60417B: call    GameSetting_GetSafeFloatPointer
0x604180: fld     dword ptr [eax]
0x604182: fadd    [esp+0E8h+var_C8]
0x604186: fstp    [esp+0E8h+var_C8]
0x60418A: mov     eax, [esp+0E8h+var_C4]
0x60418E: mov     ecx, [esp+0E8h+var_C8]
0x604192: mov     [eax+54h], esi
0x604195: mov     [eax+58h], edi
0x604198: mov     [eax+5Ch], ecx
0x60419B: fld     [esp+0E8h+var_C0]
0x60419F: push    ecx
0x6041A0: lea     ecx, [esp+0ECh+var_84]
0x6041A4: fstp    [esp+0ECh+a4]; float
0x6041A7: call    NiMatrix33_InitRotationTransform
0x6041AC: mov     eax, [esp+0E8h+var_AC]
0x6041B0: test    eax, eax
0x6041B2: jz      short loc_604203
0x6041B4: fldz
0x6041B6: fcomp   dword ptr [eax+32Ch]
0x6041BC: fnstsw  ax
0x6041BE: test    ah, 44h
0x6041C1: jnp     short loc_604203
0x6041C3: mov     edx, [esp+0E8h+var_AC]
0x6041C7: fld     dword ptr [edx+32Ch]
0x6041CD: push    ecx
0x6041CE: lea     ecx, [esp+0ECh+var_60]
0x6041D5: fstp    [esp+0ECh+a4]; float
0x6041D8: call    NiMatrix33_InitRotationTransposedTransform???
0x6041DD: lea     eax, [esp+0E8h+var_60]
0x6041E4: push    eax
0x6041E5: lea     ecx, [esp+0ECh+var_3C]
0x6041EC: push    ecx
0x6041ED: lea     ecx, [esp+0F0h+var_84]
0x6041F1: call    NiMAtrix33_Multiply
0x6041F6: mov     ecx, 9
0x6041FB: mov     esi, eax
0x6041FD: lea     edi, [esp+0E8h+var_84]
0x604201: rep movsd
0x604203: push    0
0x604205: lea     edx, [esp+0ECh+var_84]
0x604209: push    edx
0x60420A: lea     eax, [esp+0F0h+var_3C]
0x604211: push    eax
0x604212: mov     ecx, ebp
0x604214: call    sub_4D7C50
0x604219: mov     edi, [esp+0E8h+var_C4]
0x60421D: add     edi, 30h ; '0'
0x604220: mov     ecx, 9
0x604225: mov     esi, eax
0x604227: rep movsd
0x604229: mov     ecx, ebp
0x60422B: call    sub_4D7FC0
0x604230: test    eax, eax
0x604232: jz      short loc_60424C
0x604234: mov     eax, [eax]
0x604236: test    eax, eax
0x604238: jz      short loc_60424C
0x60423A: push    eax
0x60423B: push    0
0x60423D: call    GetShadowSceneNode
0x604242: add     esp, 4
0x604245: mov     ecx, eax
0x604247: call    sub_7C6FF0
0x60424C: test    ebx, ebx
0x60424E: jz      def_604401; jumptable 00604401 default case, cases 4,6,7,9
0x604254: push    ebp; a2
0x604255: mov     ecx, ebx; this
0x604257: call    sub_471C00
0x60425C: cmp     [esp+0E8h+var_D3], 0
0x604261: jnz     loc_604382
0x604267: mov     ecx, ebp
0x604269: call    sub_5E1030
0x60426E: test    al, al
0x604270: jz      loc_604382
0x604276: mov     edx, [ebp+0]
0x604279: mov     eax, [edx+380h]
0x60427F: mov     ecx, ebp
0x604281: call    eax
0x604283: mov     ecx, eax; this
0x604285: call    MobileObject_GetCharProxy
0x60428A: mov     edi, eax
0x60428C: test    edi, edi
0x60428E: jz      loc_604382
0x604294: mov     eax, [ebx+98h]
0x60429A: mov     ecx, [eax+7Ch]
0x60429D: mov     edx, [ecx]
0x60429F: mov     eax, [edx+4Ch]
0x6042A2: push    offset aBip01Spine; "Bip01 Spine"
0x6042A7: call    eax
0x6042A9: mov     esi, eax
0x6042AB: mov     eax, [ebx+98h]
0x6042B1: mov     ecx, [eax+7Ch]
0x6042B4: mov     edx, [ecx]
0x6042B6: mov     eax, [edx+4Ch]
0x6042B9: push    offset aBip01Spine1; "Bip01 Spine1"
0x6042BE: call    eax
0x6042C0: test    esi, esi
0x6042C2: mov     [esp+0E8h+var_C4], eax
0x6042C6: jz      loc_604382
0x6042CC: test    eax, eax
0x6042CE: jz      loc_604382
0x6042D4: fld     dword ptr [edi+32Ch]
0x6042DA: push    ecx
0x6042DB: fmul    qword ptr ds:0A2FAA0h
0x6042E1: lea     ecx, [esp+0ECh+var_60]
0x6042E8: fstp    dword ptr [esp+0ECh+var_B9+1]
0x6042EC: fld     dword ptr [esp+0ECh+var_B9+1]
0x6042F0: fstp    [esp+0ECh+a4]; float
0x6042F3: call    NiMatrix33_InitRotationTransform
0x6042F8: lea     ebx, [esi+30h]
0x6042FB: mov     ecx, 9
0x604300: mov     esi, ebx
0x604302: lea     edi, [esp+0E8h+var_84]
0x604306: rep movsd
0x604308: lea     ecx, [esp+0E8h+var_60]
0x60430F: push    ecx
0x604310: lea     edx, [esp+0ECh+var_3C]
0x604317: push    edx
0x604318: lea     ecx, [esp+0F0h+var_84]
0x60431C: call    NiMAtrix33_Multiply
0x604321: mov     esi, eax
0x604323: mov     ecx, 9
0x604328: lea     edi, [esp+0E8h+var_84]
0x60432C: rep movsd
0x60432E: mov     edi, ebx
0x604330: mov     ebx, [esp+0E8h+var_C4]
0x604334: mov     esi, eax
0x604336: mov     ecx, 9
0x60433B: rep movsd
0x60433D: add     ebx, 30h ; '0'
0x604340: mov     ecx, 9
0x604345: mov     esi, ebx
0x604347: lea     edi, [esp+0E8h+var_84]
0x60434B: rep movsd
0x60434D: lea     eax, [esp+0E8h+var_60]
0x604354: push    eax
0x604355: lea     ecx, [esp+0ECh+var_3C]
0x60435C: push    ecx
0x60435D: lea     ecx, [esp+0F0h+var_84]
0x604361: call    NiMAtrix33_Multiply
0x604366: mov     ecx, 9
0x60436B: mov     esi, eax
0x60436D: lea     edi, [esp+0E8h+var_84]
0x604371: rep movsd
0x604373: mov     edi, ebx
0x604375: mov     ebx, [esp+0E8h+var_A4]
0x604379: mov     ecx, 9
0x60437E: mov     esi, eax
0x604380: rep movsd
0x604382: cmp     dword ptr [ebp+0B0h], 3
0x604389: jz      short loc_6043DA
0x60438B: mov     edx, [ebp+0]
0x60438E: mov     eax, [edx+198h]
0x604394: push    0
0x604396: mov     ecx, ebp
0x604398: call    eax
0x60439A: test    al, al
0x60439C: jz      short loc_6043A7
0x60439E: cmp     dword ptr [ebp+0B0h], 1
0x6043A5: jnz     short loc_6043DA
0x6043A7: mov     ecx, ebp
0x6043A9: call    sub_5E0F30
0x6043AE: test    al, al
0x6043B0: jnz     short loc_6043DA
0x6043B2: cmp     [esp+0E8h+var_D3], al
0x6043B6: jnz     short loc_6043DA
0x6043B8: mov     edx, [ebp+0]
0x6043BB: mov     eax, [edx+19Ch]
0x6043C1: mov     ecx, ebp
0x6043C3: call    eax
0x6043C5: test    al, al
0x6043C7: jnz     short loc_6043DA
0x6043C9: fld     dword ptr ds:0B33E9Ch
0x6043CF: push    ecx
0x6043D0: mov     ecx, ebp; int
0x6043D2: fstp    [esp+0ECh+a4]; int
0x6043D5: call    sub_603500
0x6043DA: mov     ecx, ebx; this
0x6043DC: call    ActorAnimData__ApplyActorAnimData
0x6043E1: mov     edx, [ebp+0]
0x6043E4: mov     eax, [edx+18Ch]
0x6043EA: mov     ecx, ebp
0x6043EC: call    eax
0x6043EE: add     eax, 0FFFFFFFDh; switch 8 cases
0x6043F1: cmp     eax, 7
0x6043F4: ja      def_604401; jumptable 00604401 default case, cases 4,6,7,9
0x6043FA: movzx   ecx, ds:byte_605764[eax]
0x604401: jmp     ds:jpt_604401[ecx*4]; switch jump
0x604408: mov     edx, ds:0B3F9A8h; jumptable 00604401 cases 3,5,8,10
0x60440E: mov     eax, ds:0B3F9ACh
0x604413: mov     ecx, ds:0B3F9B0h
0x604419: mov     dword ptr [esp+0E8h+var_D0], edx
0x60441D: mov     edx, [ebp+0]
0x604420: mov     dword ptr [esp+0E8h+var_D0+4], eax
0x604424: mov     eax, [edx+0ECh]
0x60442A: mov     [esp+0E8h+var_C8], ecx
0x60442E: mov     ecx, ebp
0x604430: call    eax
0x604432: fstp    [esp+0E8h+var_C4]
0x604436: fld1
0x604438: fcomp   [esp+0E8h+var_C4]
0x60443C: fnstsw  ax
0x60443E: test    ah, 44h
0x604441: jnp     short def_604401; jumptable 00604401 default case, cases 4,6,7,9
0x604443: mov     ecx, [ebp+8]
0x604446: shr     ecx, 4
0x604449: push    0
0x60444B: and     ecx, 0FFFFFF01h
0x604451: push    ecx
0x604452: push    ebp
0x604453: lea     edx, [esp+0F4h+var_D0]
0x604457: push    edx; int
0x604458: mov     ecx, ebx
0x60445A: call    sub_4723A0
0x60445F: fldz
0x604461: fld     [esp+0E8h+var_C8]
0x604465: fucom   st(1)
0x604467: fnstsw  ax
0x604469: fstp    st(1)
0x60446B: test    ah, 44h
0x60446E: jnp     short loc_6044A7
0x604470: mov     eax, [ebp+0]
0x604473: fld     st
0x604475: fld     [esp+0E8h+var_C4]
0x604479: mov     edx, [eax+174h]
0x60447F: fmulp   st(2), st
0x604481: mov     ecx, ebp
0x604483: fsubrp  st(1), st
0x604485: fstp    dword ptr [esp+0E8h+var_B9+1]
0x604489: call    edx
0x60448B: fld     dword ptr [eax+8]
0x60448E: push    ecx
0x60448F: fsub    [esp+0E8h+var_B4]
0x604493: mov     ecx, ebp
0x604495: fstp    [esp+0E8h+var_B4]
0x604499: fld     [esp+0E8h+var_B4]
0x60449D: fstp    dword ptr [esp+0E8h+var_E8]; float
0x6044A0: call    sub_4D8A60
0x6044A5: jmp     short def_604401; jumptable 00604401 default case, cases 4,6,7,9
0x6044A7: fstp    st
0x6044A9: cmp     [esp+0E8h+var_D3], 0; jumptable 00604401 default case, cases 4,6,7,9
0x6044AE: mov     byte ptr ds:0B3CBD0h, 0
0x6044B5: jnz     loc_6054CD
0x6044BB: cmp     [esp+0E8h+var_AC], 0
0x6044C0: jz      loc_604E12
0x6044C6: call    InterfaceManager_IsMenuMode
0x6044CB: test    al, al
0x6044CD: jnz     loc_604E12
0x6044D3: mov     eax, [ebp+0]
0x6044D6: mov     edx, [eax+198h]
0x6044DC: push    0
0x6044DE: mov     ecx, ebp
0x6044E0: call    edx
0x6044E2: test    al, al
0x6044E4: jnz     loc_604E12
0x6044EA: fld     dword ptr ds:0A34BA0h
0x6044F0: push    ecx
0x6044F1: mov     ecx, ebp; this
0x6044F3: fstp    [esp+0ECh+a4]; float
0x6044F6: call    TESObjectREFR_GetParentCell
0x6044FB: push    eax; int
0x6044FC: lea     esi, [ebp+2Ch]
0x6044FF: push    esi; int
0x604500: mov     ecx, ebp
0x604502: call    Actor_IsUnderwater??
0x604507: fld     dword ptr ds:0A41724h
0x60450D: push    ecx
0x60450E: mov     bl, al
0x604510: fstp    [esp+0ECh+a4]; float
0x604513: mov     ecx, ebp; this
0x604515: mov     [esp+0ECh+var_D2], bl
0x604519: call    TESObjectREFR_GetParentCell
0x60451E: push    eax; int
0x60451F: push    esi; int
0x604520: mov     ecx, ebp
0x604522: call    Actor_IsUnderwater??
0x604527: fld     dword ptr ds:0A6E688h
0x60452D: push    ecx
0x60452E: mov     ecx, ebp; this
0x604530: fstp    [esp+0ECh+a4]; float
0x604533: mov     [esp+0ECh+var_D1], al
0x604537: call    TESObjectREFR_GetParentCell
0x60453C: push    eax; int
0x60453D: push    esi; int
0x60453E: mov     ecx, ebp
0x604540: call    Actor_IsUnderwater??
0x604545: mov     [esp+0E8h+var_D3], al
0x604549: mov     eax, [ebp+0]
0x60454C: mov     edx, [eax+284h]
0x604552: push    5
0x604554: mov     ecx, ebp
0x604556: call    edx
0x604558: push    eax
0x604559: call    Actor_CalcMaxBreath
0x60455E: fstp    [esp+0ECh+var_C4]
0x604562: add     esp, 4
0x604565: cmp     byte ptr [ebp+0D8h], 0
0x60456C: jnz     short loc_604577
0x60456E: test    bl, bl
0x604570: mov     [esp+0E8h+var_B9], 1
0x604575: jnz     short loc_60457C
0x604577: mov     [esp+0E8h+var_B9], 0
0x60457C: mov     eax, [ebp+0]
0x60457F: mov     edx, [eax+198h]
0x604585: push    0
0x604587: mov     ecx, ebp
0x604589: mov     [ebp+0D8h], bl
0x60458F: call    edx
0x604591: test    al, al
0x604593: jnz     loc_604763
0x604599: mov     ecx, ebp
0x60459B: call    sub_5EA680
0x6045A0: test    al, al
0x6045A2: jz      short loc_6045C6
0x6045A4: cmp     [esp+0E8h+var_D3], 0
0x6045A9: jz      short loc_6045C2
0x6045AB: mov     ecx, [ebp+58h]
0x6045AE: mov     eax, [ecx]
0x6045B0: mov     edx, [eax+2C0h]
0x6045B6: call    edx
0x6045B8: test    ax, 800h
0x6045BC: jz      short loc_6045C2
0x6045BE: xor     bl, bl
0x6045C0: jmp     short loc_6045CA
0x6045C2: mov     bl, 1
0x6045C4: jmp     short loc_6045CA
0x6045C6: mov     bl, [esp+0E8h+var_D3]
0x6045CA: cmp     ebp, ds:0B333C4h
0x6045D0: jnz     short loc_6045DB
0x6045D2: call    GetGodMode
0x6045D7: test    al, al
0x6045D9: jnz     short loc_6045DF
0x6045DB: test    bl, bl
0x6045DD: jz      short loc_6045F9
0x6045DF: mov     ecx, [ebp+58h]
0x6045E2: fld     [esp+0E8h+var_C4]
0x6045E6: mov     eax, [ecx]
0x6045E8: mov     edx, [eax+1F0h]
0x6045EE: push    ecx
0x6045EF: fstp    [esp+0ECh+a4]
0x6045F2: call    edx
0x6045F4: jmp     loc_604763
0x6045F9: mov     ecx, [ebp+58h]
0x6045FC: mov     eax, [ecx]
0x6045FE: mov     edx, [eax+1F4h]
0x604604: call    edx
0x604606: fstp    [esp+0E8h+var_C0]
0x60460A: mov     eax, [ebp+0]
0x60460D: mov     edx, [eax+284h]
0x604613: push    37h ; '7'
0x604615: mov     ecx, ebp
0x604617: call    edx
0x604619: fld     [esp+0E8h+var_C0]
0x60461D: test    eax, eax
0x60461F: fld     dword ptr ds:0B33E9Ch
0x604625: fld     st
0x604627: jz      short loc_60462D
0x604629: faddp   st(2), st
0x60462B: jmp     short loc_60462F
0x60462D: fsubp   st(2), st
0x60462F: fxch    st(1)
0x604631: fstp    [esp+0E8h+var_C0]
0x604635: fldz
0x604637: fld     [esp+0E8h+var_C0]
0x60463B: fcom    st(1)
0x60463D: fnstsw  ax
0x60463F: test    ah, 5
0x604642: jp      short loc_6046BE
0x604644: mov     esi, [ebp+0]
0x604647: fstp    st
0x604649: push    0
0x60464B: fxch    st(1)
0x60464D: push    ecx
0x60464E: fstp    dword ptr [esp+0F0h+var_B9+1]
0x604652: mov     ecx, ebp
0x604654: fstp    [esp+0F0h+a3]
0x604657: push    8
0x604659: call    Actor_GetBaseCalcAVi
0x60465E: push    eax
0x60465F: call    sub_548980
0x604664: fmul    dword ptr [esp+0F4h+var_B9+1]
0x604668: mov     eax, [esi+220h]
0x60466E: mov     ecx, ebp
0x604670: fstp    dword ptr [esp+0F4h+var_B9+1]
0x604674: fld     dword ptr [esp+0F4h+var_B9+1]
0x604678: fstp    [esp+0F4h+var_F4]
0x60467B: call    eax
0x60467D: push    0
0x60467F: push    102h
0x604684: push    0
0x604686: push    offset aNpchumandrowni; "NPCHumanDrowning"
0x60468B: mov     ecx, ebp
0x60468D: call    sub_65A970
0x604692: mov     esi, eax
0x604694: test    esi, esi
0x604696: jz      short loc_6046A8
0x604698: mov     ecx, esi; this
0x60469A: call    sub_6B73E0
0x60469F: push    esi
0x6046A0: call    FormHeapFree
0x6046A5: add     esp, 4
0x6046A8: push    1
0x6046AA: push    1
0x6046AC: mov     ecx, ebp
0x6046AE: call    Actor_PlayPainFX
0x6046B3: fldz
0x6046B5: fstp    [esp+0E8h+var_C0]
0x6046B9: jmp     loc_60474E
0x6046BE: fstp    st(1)
0x6046C0: fstp    st(1)
0x6046C2: fld     [esp+0E8h+var_C4]
0x6046C6: fcom    st(1)
0x6046C8: fnstsw  ax
0x6046CA: fstp    st(1)
0x6046CC: test    ah, 5
0x6046CF: jp      short loc_6046D7
0x6046D1: fstp    [esp+0E8h+var_C0]
0x6046D5: jmp     short loc_6046D9
0x6046D7: fstp    st
0x6046D9: mov     ecx, ebp
0x6046DB: call    sub_5E3920
0x6046E0: fstp    dword ptr [esp+0E8h+var_D0]
0x6046E4: mov     ecx, ebp; this
0x6046E6: call    TESObjectREFR_GetParentCell
0x6046EB: mov     ecx, eax
0x6046ED: call    TESObjectCELL_GetWaterHeight
0x6046F2: fstp    qword ptr [esp+0E8h+var_B9+1]
0x6046F6: mov     edx, [ebp+0]
0x6046F9: mov     eax, [edx+174h]
0x6046FF: mov     ecx, ebp
0x604701: call    eax
0x604703: fld     dword ptr [eax+8]
0x604706: fsubr   qword ptr [esp+0E8h+var_B9+1]
0x60470A: fstp    dword ptr [esp+0E8h+var_B9+1]
0x60470E: fld     dword ptr [esp+0E8h+var_B9+1]
0x604712: fdiv    dword ptr [esp+0E8h+var_D0]
0x604716: fstp    dword ptr [esp+0E8h+var_D0]
0x60471A: fld     [esp+0E8h+var_C0]
0x60471E: fld     dword ptr [esp+0E8h+var_D0]
0x604722: fadd    qword ptr ds:0A2F928h
0x604728: fcompp
0x60472A: fnstsw  ax
0x60472C: test    ah, 41h
0x60472F: jnz     short loc_60474E
0x604731: mov     ecx, ebp
0x604733: call    sub_5E1E90
0x604738: test    al, al
0x60473A: jnz     short loc_60474E
0x60473C: mov     ecx, ebp
0x60473E: call    sub_5E6FE0
0x604743: test    al, al
0x604745: jnz     short loc_60474E
0x604747: mov     ecx, ebp; int
0x604749: call    sub_5F5730
0x60474E: mov     ecx, [ebp+58h]
0x604751: fld     [esp+0E8h+var_C0]
0x604755: mov     edx, [ecx]
0x604757: mov     eax, [edx+1F0h]
0x60475D: push    ecx
0x60475E: fstp    [esp+0ECh+a4]
0x604761: call    eax
0x604763: cmp     ebp, ds:0B333C4h
0x604769: jnz     loc_604879
0x60476F: push    415h
0x604774: call    Menu_GetOpenMenuTile
0x604779: mov     bl, [esp+0ECh+var_D2]
0x60477D: add     esp, 4
0x604780: test    bl, bl
0x604782: mov     edi, eax
0x604784: jz      short loc_604791
0x604786: test    edi, edi
0x604788: jnz     short loc_604791
0x60478A: call    sub_5965C0
0x60478F: mov     edi, eax
0x604791: cmp     [esp+0E8h+var_D3], 0
0x604796: jz      short loc_6047B1
0x604798: mov     al, ds:0B3B77Dh
0x60479D: test    al, al
0x60479F: jnz     loc_60484A
0x6047A5: call    sub_5964E0
0x6047AA: mov     al, 1
0x6047AC: jmp     loc_604845
0x6047B1: test    edi, edi
0x6047B3: jz      loc_604884
0x6047B9: test    bl, bl
0x6047BB: jnz     short loc_6047DE
0x6047BD: mov     ecx, edi
0x6047BF: call    Tile_GetParentMenu
0x6047C4: test    eax, eax
0x6047C6: jz      short loc_6047D2
0x6047C8: mov     edx, [eax]
0x6047CA: mov     ecx, eax
0x6047CC: mov     eax, [edx]
0x6047CE: push    1
0x6047D0: call    eax
0x6047D2: mov     byte ptr ds:0B3B77Dh, 0
0x6047D9: jmp     loc_604884
0x6047DE: mov     al, ds:0B3B77Dh
0x6047E3: test    al, al
0x6047E5: jz      short loc_60484A
0x6047E7: call    sub_596470
0x6047EC: fstp    dword ptr [esp+0E8h+var_D0]
0x6047F0: fld     dword ptr ds:0A34BA0h
0x6047F6: fcomp   dword ptr [esp+0E8h+var_D0]
0x6047FA: fnstsw  ax
0x6047FC: test    ah, 41h
0x6047FF: jnz     short loc_60483E
0x604801: mov     ecx, ebp; this
0x604803: call    Actor_IsFemale
0x604808: test    eax, eax
0x60480A: push    1
0x60480C: push    102h
0x604811: mov     ecx, ebp
0x604813: push    0
0x604815: jz      short loc_60481E
0x604817: push    offset aNpchumangaspfe; "NPCHumanGaspFemale"
0x60481C: jmp     short loc_604823
0x60481E: push    offset aNpchumangaspma; "NPCHumanGaspMale"
0x604823: call    sub_65A970
0x604828: mov     esi, eax
0x60482A: test    esi, esi
0x60482C: jz      short loc_60483E
0x60482E: mov     ecx, esi; this
0x604830: call    sub_6B73E0
0x604835: push    esi
0x604836: call    FormHeapFree
0x60483B: add     esp, 4
0x60483E: call    sub_5964B0
0x604843: xor     al, al
0x604845: mov     ds:0B3B77Dh, al
0x60484A: test    edi, edi
0x60484C: jz      short loc_60487D
0x60484E: test    al, al
0x604850: jz      short loc_60487D
0x604852: mov     ecx, [ebp+58h]
0x604855: mov     edx, [ecx]
0x604857: mov     eax, [edx+1F4h]
0x60485D: call    eax
0x60485F: fdiv    [esp+0E8h+var_C4]
0x604863: push    ecx
0x604864: fstp    dword ptr [esp+0ECh+var_D0]
0x604868: fld     dword ptr [esp+0ECh+var_D0]
0x60486C: fstp    [esp+0ECh+a4]; float
0x60486F: call    sub_596550
0x604874: add     esp, 4
0x604877: jmp     short loc_60487D
0x604879: mov     bl, [esp+0E8h+var_D2]
0x60487D: cmp     [esp+0E8h+var_D3], 0
0x604882: jnz     short loc_604897
0x604884: mov     edx, [ebp+0]
0x604887: mov     eax, [edx+284h]
0x60488D: push    38h ; '8'
0x60488F: mov     ecx, ebp
0x604891: call    eax
0x604893: test    eax, eax
0x604895: jnz     short loc_6048A2
0x604897: mov     ecx, ebp
0x604899: call    Actor_CanFly
0x60489E: test    al, al
0x6048A0: jz      short loc_6048AA
0x6048A2: fld     dword ptr ds:0A2FAACh
0x6048A8: jmp     short loc_6048B0
0x6048AA: fld     dword ptr ds:0A5742Ch
0x6048B0: mov     esi, [esp+0E8h+var_AC]
0x6048B4: fstp    dword ptr [esi+338h]
0x6048BA: mov     edx, [ebp+0]
0x6048BD: mov     eax, [edx+284h]
0x6048C3: push    38h ; '8'
0x6048C5: mov     ecx, ebp
0x6048C7: call    eax
0x6048C9: test    eax, eax
0x6048CB: jnz     loc_604BED
0x6048D1: mov     ecx, ebp
0x6048D3: call    Actor_CanFly
0x6048D8: test    al, al
0x6048DA: jnz     loc_604BED
0x6048E0: cmp     [esp+0E8h+var_D1], al
0x6048E4: jz      short loc_604938
0x6048E6: mov     ecx, [ebp+58h]
0x6048E9: mov     edx, [ecx]
0x6048EB: mov     eax, [edx+0F0h]
0x6048F1: push    1
0x6048F3: call    eax
0x6048F5: test    eax, eax
0x6048F7: jz      short loc_60491D
0x6048F9: mov     ecx, [ebp+58h]
0x6048FC: mov     edx, [ecx]
0x6048FE: mov     eax, [edx+0F0h]
0x604904: push    1
0x604906: call    eax
0x604908: mov     eax, [eax+8]
0x60490B: push    0
0x60490D: push    0
0x60490F: push    0
0x604911: push    0
0x604913: push    1
0x604915: push    eax
0x604916: mov     ecx, ebp
0x604918: call    Actor_UnequipItem
0x60491D: push    800h
0x604922: mov     ecx, ebp
0x604924: call    sub_5E0610
0x604929: mov     dword ptr [esi+2A0h], 5
0x604933: jmp     loc_604D50
0x604938: mov     ecx, ebp
0x60493A: call    Actor_IsSwimming
0x60493F: test    al, al
0x604941: jnz     loc_604BC0
0x604947: lea     ecx, [esi+1E0h]
0x60494D: call    sub_88D370
0x604952: cmp     eax, 5
0x604955: jz      loc_604BC0
0x60495B: cmp     [esp+0E8h+var_B9], 0
0x604960: jz      loc_604D50
0x604966: fld     dword ptr ds:0A3D65Ch
0x60496C: fcomp   dword ptr [esi+324h]
0x604972: fnstsw  ax
0x604974: test    ah, 5
0x604977: jp      loc_604D50
0x60497D: fld     dword ptr ds:0A30634h
0x604983: fcomp   dword ptr [esi+2E8h]
0x604989: fnstsw  ax
0x60498B: test    ah, 41h
0x60498E: jnz     loc_604D50
0x604994: fld     dword ptr [esi+2E8h]
0x60499A: fstp    dword ptr [esp+0E8h+var_D0]
0x60499E: fld1
0x6049A0: fstp    [esp+0E8h+var_AC]
0x6049A4: fld     dword ptr [esp+0E8h+var_D0]
0x6049A8: fcom    qword ptr ds:0A6EDF0h
0x6049AE: fnstsw  ax
0x6049B0: test    ah, 41h
0x6049B3: jnz     short loc_6049C7
0x6049B5: fmul    qword ptr ds:0A3D360h
0x6049BB: fdiv    qword ptr ds:0A3F3D0h
0x6049C1: fstp    [esp+0E8h+var_AC]
0x6049C5: jmp     short loc_6049C9
0x6049C7: fstp    st
0x6049C9: fld     [esp+0E8h+var_AC]
0x6049CD: fld     qword ptr ds:0A30E48h
0x6049D3: call    __CIpow
0x6049D8: fstp    dword ptr [esp+0E8h+var_D0]
0x6049DC: mov     ecx, ds:0B33398h
0x6049E2: fld     dword ptr [esp+0E8h+var_D0]
0x6049E6: mov     esi, [ecx+24h]
0x6049E9: fstp    [esp+0E8h+var_AC]
0x6049ED: test    esi, esi
0x6049EF: jz      loc_604D50
0x6049F5: mov     edx, [ebp+0]
0x6049F8: mov     eax, [edx+154h]
0x6049FE: mov     ecx, ebp
0x604A00: call    eax
0x604A02: test    eax, eax
0x604A04: jz      loc_604D50
0x604A0A: push    1
0x604A0C: push    102h
0x604A11: push    offset aCwaterhumanoid; "CWaterHumanoid"
0x604A16: mov     ecx, esi
0x604A18: call    PlaySound???
0x604A1D: mov     esi, eax
0x604A1F: test    esi, esi
0x604A21: jz      loc_604D50
0x604A27: mov     ecx, esi
0x604A29: call    sub_6B7260
0x604A2E: test    al, al
0x604A30: jnz     loc_604D50
0x604A36: mov     edx, [ebp+0]
0x604A39: mov     eax, [edx+174h]
0x604A3F: mov     ecx, ebp
0x604A41: call    eax
0x604A43: mov     edx, [eax+8]
0x604A46: mov     ecx, [eax+4]
0x604A49: mov     ebx, [eax]
0x604A4B: sub     esp, 0Ch
0x604A4E: mov     [esp+0F4h+var_B0], edx
0x604A52: fld     [esp+0F4h+var_B0]
0x604A56: fstp    [esp+0F4h+a4]; float
0x604A5A: mov     [esp+0F4h+var_B4], ecx
0x604A5E: fld     [esp+0F4h+var_B4]
0x604A62: mov     dword ptr [esp+0F4h+var_B9+1], ebx
0x604A66: fstp    [esp+0F4h+a3]; float
0x604A6A: mov     ecx, esi
0x604A6C: fld     dword ptr [esp+0F4h+var_B9+1]
0x604A70: fstp    [esp+0F4h+var_F4]; float
0x604A73: call    sub_6B7360
0x604A78: fld     [esp+0E8h+var_AC]
0x604A7C: push    ecx
0x604A7D: mov     ecx, esi
0x604A7F: fstp    [esp+0ECh+a4]; float
0x604A82: call    sub_6B7280
0x604A87: push    0
0x604A89: mov     ecx, esi
0x604A8B: call    sub_6B7190
0x604A90: mov     ecx, esi; this
0x604A92: call    sub_6B73E0
0x604A97: push    esi
0x604A98: call    FormHeapFree
0x604A9D: add     esp, 4
0x604AA0: mov     ecx, ebp; this
0x604AA2: call    TESObjectREFR_GetParentCell
0x604AA7: test    eax, eax
0x604AA9: jz      loc_604D50
0x604AAF: mov     ecx, ebp; this
0x604AB1: call    TESObjectREFR_GetParentCell
0x604AB6: mov     ecx, eax; this
0x604AB8: call    TESObjectCELL__GetWaterForm
0x604ABD: test    eax, eax
0x604ABF: jz      loc_604D50
0x604AC5: mov     ecx, ebp; this
0x604AC7: call    TESObjectREFR_GetParentCell
0x604ACC: mov     ecx, eax; this
0x604ACE: call    TESObjectCELL__GetWaterForm
0x604AD3: mov     edx, [eax]
0x604AD5: mov     ecx, eax
0x604AD7: mov     eax, [edx+88h]
0x604ADD: call    eax
0x604ADF: test    al, al
0x604AE1: jnz     loc_604D50
0x604AE7: mov     ecx, ebp; this
0x604AE9: call    TESObjectREFR_GetParentCell
0x604AEE: mov     ecx, eax
0x604AF0: call    TESObjectCELL_GetWaterHeight
0x604AF5: fstp    st
0x604AF7: mov     ecx, ebp; this
0x604AF9: call    TESObjectREFR_GetParentCell
0x604AFE: mov     ecx, ds:0B333C4h; TESObjectREFR *
0x604B04: push    ecx; TESObjectREFR *
0x604B05: call    sub_4C9BE0
0x604B0A: add     esp, 4
0x604B0D: push    3
0x604B0F: push    eax
0x604B10: mov     ecx, ebp; this
0x604B12: call    TESObjectREFR_GetParentCell
0x604B17: mov     ecx, eax
0x604B19: call    sub_441800
0x604B1E: push    20h ; ' '; Size
0x604B20: mov     edi, eax
0x604B22: call    FormHeapAlloc
0x604B27: mov     esi, eax
0x604B29: add     esp, 4
0x604B2C: mov     dword ptr [esp+0E8h+var_D0], esi
0x604B30: test    esi, esi
0x604B32: mov     [esp+0E8h+var_4], 0
0x604B3D: jz      short loc_604BA3
0x604B3F: mov     ecx, offset flt_B37B40
0x604B44: call    GameSetting_GetSafeFloatPointer
0x604B49: fld     dword ptr [eax]
0x604B4B: mov     edx, [esp+0E8h+var_B4]
0x604B4F: mov     ecx, [esp+0E8h+var_B0]
0x604B53: push    1; float
0x604B55: sub     esp, 10h
0x604B58: fstp    [esp+0FCh+a3]; float
0x604B5C: mov     eax, esp
0x604B5E: fld1
0x604B60: mov     [eax], ebx
0x604B62: mov     [eax+4], edx
0x604B65: mov     edx, ds:0B258DCh
0x604B6B: mov     [eax+8], ecx
0x604B6E: mov     ecx, ds:0B258E0h
0x604B74: sub     esp, 0Ch
0x604B77: mov     eax, esp
0x604B79: mov     [eax], edx
0x604B7B: mov     edx, ds:0B258E4h
0x604B81: mov     [eax+4], ecx
0x604B84: mov     [eax+8], edx
0x604B87: mov     eax, ds:0B37B38h
0x604B8C: push    eax; float
0x604B8D: push    edi; int
0x604B8E: push    ecx
0x604B8F: mov     ecx, ebp; this
0x604B91: fstp    [esp+114h+var_114]; float
0x604B94: call    TESObjectREFR_GetParentCell
0x604B99: push    eax; int
0x604B9A: mov     ecx, esi
0x604B9C: call    sub_5713F0
0x604BA1: jmp     short loc_604BA5
0x604BA3: xor     eax, eax
0x604BA5: push    eax
0x604BA6: mov     ecx, offset ActorProcessManager_ptr
0x604BAB: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x604BB6: call    sub_678D30
0x604BBB: jmp     loc_604D50
0x604BC0: mov     ecx, [esi+1F4h]
0x604BC6: shr     ecx, 8
0x604BC9: test    cl, 1
0x604BCC: jz      loc_604D50
0x604BD2: push    800h
0x604BD7: mov     ecx, ebp
0x604BD9: call    sub_5E05F0
0x604BDE: mov     dword ptr [esi+2A0h], 0
0x604BE8: jmp     loc_604D50
0x604BED: cmp     [esp+0E8h+var_D1], 0
0x604BF2: push    800h
0x604BF7: mov     ecx, ebp
0x604BF9: jz      short loc_604C02
0x604BFB: call    sub_5E0610
0x604C00: jmp     short loc_604C07
0x604C02: call    sub_5E05F0
0x604C07: lea     edi, [esi+1E0h]
0x604C0D: mov     ecx, edi
0x604C0F: call    sub_88D370
0x604C14: cmp     eax, 5
0x604C17: jnz     short loc_604C29
0x604C19: test    bl, bl
0x604C1B: jnz     short loc_604C29
0x604C1D: mov     dword ptr [esi+2A0h], 0
0x604C27: jmp     short loc_604C52
0x604C29: mov     ecx, edi
0x604C2B: call    sub_88D370
0x604C30: cmp     eax, 5
0x604C33: jz      short loc_604C52
0x604C35: test    bl, bl
0x604C37: jz      short loc_604C52
0x604C39: fld1
0x604C3B: fcomp   dword ptr [esi+2E8h]
0x604C41: fnstsw  ax
0x604C43: test    ah, 41h
0x604C46: jnz     short loc_604C52
0x604C48: mov     dword ptr [esi+2A0h], 5
0x604C52: mov     ecx, edi
0x604C54: call    sub_88D370
0x604C59: cmp     eax, 5
0x604C5C: jnz     loc_604D50
0x604C62: fld     dword ptr ds:0A34BA0h
0x604C68: fcomp   dword ptr [esi+300h]
0x604C6E: fnstsw  ax
0x604C70: test    ah, 41h
0x604C73: jnz     loc_604D50
0x604C79: cmp     [esp+0E8h+var_D2], 0
0x604C7E: jz      loc_604E12
0x604C84: cmp     [esp+0E8h+var_D1], 0
0x604C89: jnz     loc_604D50
0x604C8F: fld     dword ptr [esi+348h]
0x604C95: mov     ecx, esi
0x604C97: fstp    dword ptr [esp+0E8h+var_D0]
0x604C9B: call    sub_531E00
0x604CA0: fld     dword ptr [esp+0E8h+var_D0]
0x604CA4: fld     st
0x604CA6: fld     qword ptr ds:0A2FC80h
0x604CAC: fmul    st(1), st
0x604CAE: fld     dword ptr [esi+334h]
0x604CB4: fmulp   st(2), st
0x604CB6: fld     dword ptr [eax+8]
0x604CB9: fsubrp  st(3), st
0x604CBB: fxch    st(1)
0x604CBD: faddp   st(2), st
0x604CBF: fxch    st(1)
0x604CC1: fstp    dword ptr [esp+0E8h+var_D0]
0x604CC5: fld     dword ptr [esp+0E8h+var_D0]
0x604CC9: fld     dword ptr [esi+318h]
0x604CCF: fsub    qword ptr ds:0A3F3F0h
0x604CD5: fstp    dword ptr [esp+0E8h+var_D0]
0x604CD9: fld     dword ptr [esp+0E8h+var_D0]
0x604CDD: fmul    qword ptr ds:0A39088h
0x604CE3: fstp    dword ptr [esp+0E8h+var_D0]
0x604CE7: fsub    dword ptr [esp+0E8h+var_D0]
0x604CEB: fstp    dword ptr [esp+0E8h+var_D0]
0x604CEF: fld     dword ptr [esp+0E8h+var_D0]
0x604CF3: fcom    st(1)
0x604CF5: fnstsw  ax
0x604CF7: test    ah, 5
0x604CFA: jp      short loc_604D21
0x604CFC: fstp    st(1)
0x604CFE: push    ecx
0x604CFF: fstp    st
0x604D01: lea     edx, [esp+0ECh+var_D0]
0x604D05: fldz
0x604D07: fst     dword ptr [esp+0ECh+var_D0]
0x604D0B: fstp    dword ptr [esp+0ECh+var_D0+4]
0x604D0F: fld     dword ptr ds:0A31E2Ch
0x604D15: fstp    [esp+0ECh+var_C8]
0x604D19: fld1
0x604D1B: fstp    [esp+0ECh+a4]
0x604D1E: push    edx
0x604D1F: jmp     short loc_604D49
0x604D21: fcompp
0x604D23: fnstsw  ax
0x604D25: test    ah, 41h
0x604D28: jnz     short loc_604D50
0x604D2A: fldz
0x604D2C: push    ecx
0x604D2D: fst     dword ptr [esp+0ECh+var_D0]
0x604D31: lea     eax, [esp+0ECh+var_D0]
0x604D35: fstp    dword ptr [esp+0ECh+var_D0+4]
0x604D39: fld     dword ptr ds:0A5A5F8h
0x604D3F: fstp    [esp+0ECh+var_C8]
0x604D43: fld1
0x604D45: fstp    [esp+0ECh+a4]; float
0x604D48: push    eax; int
0x604D49: mov     ecx, esi
0x604D4B: call    sub_8907A0
0x604D50: cmp     [esp+0E8h+var_D2], 0
0x604D55: jz      loc_604E12
0x604D5B: mov     ecx, ebp
0x604D5D: call    Actor_CanFly
0x604D62: test    al, al
0x604D64: jnz     loc_604E12
0x604D6A: mov     ecx, ebp; this
0x604D6C: call    TESObjectREFR_GetParentCell
0x604D71: test    eax, eax
0x604D73: jz      loc_604E12
0x604D79: mov     ecx, eax; this
0x604D7B: call    TESObjectCELL__GetWaterForm
0x604D80: mov     esi, eax
0x604D82: test    esi, esi
0x604D84: jz      loc_604E12
0x604D8A: mov     edx, [esi]
0x604D8C: mov     eax, [edx+88h]
0x604D92: mov     ecx, esi
0x604D94: call    eax
0x604D96: test    al, al
0x604D98: jz      short loc_604E12
0x604D9A: mov     edx, [ebp+0]
0x604D9D: mov     eax, [edx+284h]
0x604DA3: push    47h ; 'G'
0x604DA5: mov     ecx, ebp
0x604DA7: call    eax
0x604DA9: test    eax, eax
0x604DAB: jg      short loc_604E12
0x604DAD: mov     edx, [esi+18h]
0x604DB0: fld     dword ptr ds:0B33E9Ch
0x604DB6: mov     eax, [edx+10h]
0x604DB9: fstp    dword ptr [esp+0E8h+var_B9+1]
0x604DBD: add     esi, 18h
0x604DC0: mov     ecx, esi
0x604DC2: call    eax
0x604DC4: movzx   ecx, ax
0x604DC7: mov     dword ptr [esp+0E8h+var_D0], ecx
0x604DCB: fild    dword ptr [esp+0E8h+var_D0]
0x604DCF: fmul    dword ptr [esp+0E8h+var_B9+1]
0x604DD3: fstp    dword ptr [esp+0E8h+var_D0]
0x604DD7: fldz
0x604DD9: fld     dword ptr [esp+0E8h+var_D0]
0x604DDD: fcom    st(1)
0x604DDF: fnstsw  ax
0x604DE1: test    ah, 41h
0x604DE4: jnz     short loc_604E0E
0x604DE6: mov     edx, [ebp+0]
0x604DE9: fxch    st(1)
0x604DEB: mov     eax, [edx+220h]
0x604DF1: push    0
0x604DF3: sub     esp, 8
0x604DF6: fstp    [esp+0F4h+a3]
0x604DFA: mov     ecx, ebp
0x604DFC: fstp    [esp+0F4h+var_F4]
0x604DFF: call    eax
0x604E01: push    1
0x604E03: push    1
0x604E05: mov     ecx, ebp
0x604E07: call    Actor_PlayPainFX
0x604E0C: jmp     short loc_604E12
0x604E0E: fstp    st
0x604E10: fstp    st
0x604E12: cmp     ebp, ds:0B333C4h
0x604E18: mov     byte ptr [esp+0E8h+var_C4], 0
0x604E1D: jz      short loc_604E32
0x604E1F: mov     edx, [ebp+0]
0x604E22: mov     eax, [edx+334h]
0x604E28: push    1
0x604E2A: mov     ecx, ebp
0x604E2C: call    eax
0x604E2E: mov     byte ptr [esp+0E8h+var_C4], al
0x604E32: push    0
0x604E34: mov     ecx, ebp
0x604E36: call    sub_5E6CD0
0x604E3B: test    al, al
0x604E3D: jnz     loc_605114
0x604E43: cmp     ebp, ds:0B333C4h
0x604E49: jz      loc_605114
0x604E4F: mov     edx, [ebp+0]
0x604E52: mov     eax, [edx+164h]
0x604E58: mov     ecx, ebp
0x604E5A: call    eax
0x604E5C: test    eax, eax
0x604E5E: jz      loc_605114
0x604E64: mov     edx, [ebp+0]
0x604E67: mov     eax, [edx+164h]
0x604E6D: mov     ecx, ebp
0x604E6F: call    eax
0x604E71: mov     ecx, eax
0x604E73: call    sub_472EA0
0x604E78: test    al, al
0x604E7A: jz      loc_605114
0x604E80: cmp     dword ptr [ebp+0B0h], 3
0x604E87: jz      loc_605114
0x604E8D: mov     edx, [ebp+0]
0x604E90: mov     eax, [edx+198h]
0x604E96: push    0
0x604E98: mov     ecx, ebp
0x604E9A: call    eax
0x604E9C: test    al, al
0x604E9E: jnz     loc_605114
0x604EA4: mov     ecx, ebp
0x604EA6: call    sub_5E0F30
0x604EAB: test    al, al
0x604EAD: jnz     loc_605114
0x604EB3: mov     edx, [ebp+0]
0x604EB6: mov     eax, [edx+19Ch]
0x604EBC: mov     ecx, ebp
0x604EBE: call    eax
0x604EC0: test    al, al
0x604EC2: jnz     loc_605114
0x604EC8: mov     ecx, ds:0B333C4h
0x604ECE: call    Actor_IsSneaking
0x604ED3: test    al, al
0x604ED5: jnz     loc_605114
0x604EDB: mov     ecx, [ebp+58h]
0x604EDE: mov     edx, [ecx]
0x604EE0: mov     eax, [edx+244h]
0x604EE6: call    eax
0x604EE8: test    al, al
0x604EEA: jnz     loc_605114
0x604EF0: mov     ecx, ds:0B333C4h
0x604EF6: mov     edx, [ecx]
0x604EF8: mov     eax, [edx+354h]
0x604EFE: call    eax
0x604F00: test    al, al
0x604F02: jnz     loc_605114
0x604F08: mov     ecx, ebp
0x604F0A: call    sub_5E32D0
0x604F0F: test    al, al
0x604F11: jz      loc_605114
0x604F17: mov     ecx, [ebp+58h]
0x604F1A: mov     edx, [ecx]
0x604F1C: mov     eax, [edx+33Ch]
0x604F22: push    0
0x604F24: call    eax
0x604F26: test    eax, eax
0x604F28: jnz     loc_605114
0x604F2E: mov     ecx, [ebp+58h]
0x604F31: mov     edx, [ecx]
0x604F33: mov     eax, [edx+200h]
0x604F39: call    eax
0x604F3B: test    al, al
0x604F3D: jnz     loc_605114
0x604F43: mov     eax, ds:0B333C4h
0x604F48: cmp     byte ptr [eax+600h], 0
0x604F4F: jnz     loc_605114
0x604F55: mov     ecx, [esp+0E8h+var_C4]
0x604F59: push    0; int
0x604F5B: push    0; int
0x604F5D: push    ecx; int
0x604F5E: lea     edx, [esp+0F4h+var_B9]
0x604F62: push    edx; int
0x604F63: push    eax; int
0x604F64: push    0; int
0x604F66: mov     ecx, ebp; int
0x604F68: call    Actor_GetDetectionLevel
0x604F6D: test    eax, eax
0x604F6F: jle     loc_60515F
0x604F75: cmp     ebp, ds:0B333C4h
0x604F7B: jz      loc_60515F
0x604F81: mov     ecx, ebp
0x604F83: call    sub_5EAE10
0x604F88: cmp     eax, ds:0B333C4h
0x604F8E: jz      loc_60515F
0x604F94: mov     ecx, [ebp+58h]
0x604F97: mov     eax, [ecx]
0x604F99: mov     edx, [eax+4C0h]
0x604F9F: call    edx
0x604FA1: test    al, al
0x604FA3: jz      loc_60515F
0x604FA9: mov     ecx, ds:0B333C4h; this
0x604FAF: push    0; unk000
0x604FB1: push    ebp; a2
0x604FB2: call    TesObjectREF_GetDistance
0x604FB7: fstp    [esp+0E8h+var_D0]
0x604FBB: mov     ecx, offset unk_B36AD8
0x604FC0: call    GameSetting_GetSafeFloatPointer
0x604FC5: fld     dword ptr [eax]
0x604FC7: fcomp   [esp+0E8h+var_D0]
0x604FCB: fnstsw  ax
0x604FCD: test    ah, 1
0x604FD0: jnz     loc_60515F
0x604FD6: mov     ecx, ds:0B333C4h
0x604FDC: push    0
0x604FDE: call    PlayerCharacter_IsPlayerInCombat
0x604FE3: test    al, al
0x604FE5: jnz     loc_60515F
0x604FEB: mov     eax, [ebp+58h]
0x604FEE: test    eax, eax
0x604FF0: jz      loc_60515F
0x604FF6: mov     eax, [eax+8]
0x604FF9: test    eax, eax
0x604FFB: jz      short loc_60500B
0x604FFD: mov     eax, [eax+1Ch]
0x605000: shr     eax, 0Ch
0x605003: test    al, 1
0x605005: jnz     loc_60515F
0x60500B: mov     ecx, ebp
0x60500D: call    sub_5E0E80
0x605012: test    al, al
0x605014: jnz     loc_60515F
0x60501A: mov     edx, [ebp+0]
0x60501D: mov     eax, [edx+334h]
0x605023: push    1
0x605025: mov     ecx, ebp
0x605027: call    eax
0x605029: test    al, al
0x60502B: jnz     loc_60515F
0x605031: mov     ecx, ebp
0x605033: call    sub_5E6BA0
0x605038: test    al, al
0x60503A: jnz     loc_60515F
0x605040: call    sub_5E6B40
0x605045: test    al, al
0x605047: jz      short loc_605058
0x605049: mov     ecx, ebp
0x60504B: call    sub_5E05B0
0x605050: test    al, al
0x605052: jz      loc_60515F
0x605058: mov     ecx, [ebp+58h]
0x60505B: mov     edx, [ecx]
0x60505D: mov     eax, [edx+360h]
0x605063: call    eax
0x605065: fcomp   dword ptr ds:0A2FAA8h
0x60506B: fnstsw  ax
0x60506D: test    ah, 41h
0x605070: jp      loc_60515F
0x605076: cmp     dword ptr ds:0B333C4h, 0
0x60507D: jz      loc_60515F
0x605083: push    0
0x605085: push    1
0x605087: call    TESTopic__GEtTopic
0x60508C: mov     esi, eax
0x60508E: add     esp, 8
0x605091: test    esi, esi
0x605093: jz      loc_60515F
0x605099: lea     ecx, [esi+28h]
0x60509C: test    ecx, ecx
0x60509E: jz      loc_60515F
0x6050A4: call    BSSimpleList_IsEmpty
0x6050A9: test    al, al
0x6050AB: jnz     loc_60515F
0x6050B1: mov     ecx, [ebp+58h]
0x6050B4: mov     edx, [ecx]
0x6050B6: mov     eax, ds:0B333C4h
0x6050BB: mov     edx, [edx+484h]
0x6050C1: push    eax
0x6050C2: call    edx
0x6050C4: mov     eax, ds:0B333C4h
0x6050C9: mov     [ebp+0E4h], eax
0x6050CF: mov     cl, ds:0B1490Ch
0x6050D5: mov     byte ptr [esp+0E8h+var_D0], cl
0x6050D9: mov     eax, dword ptr [esp+0E8h+var_D0]
0x6050DD: mov     ecx, [ebp+58h]
0x6050E0: mov     edx, [ecx]
0x6050E2: mov     edx, [edx+1A4h]
0x6050E8: push    eax
0x6050E9: push    1
0x6050EB: push    0
0x6050ED: push    esi
0x6050EE: push    ebp
0x6050EF: call    edx
0x6050F1: mov     ecx, [ebp+58h]
0x6050F4: mov     eax, [ecx]
0x6050F6: mov     edx, [eax+36Ch]
0x6050FC: call    edx
0x6050FE: test    eax, eax
0x605100: jnz     short loc_60515F
0x605102: mov     ecx, [ebp+58h]
0x605105: mov     eax, [ecx]
0x605107: mov     edx, [eax+158h]
0x60510D: push    1
0x60510F: push    ebp
0x605110: call    edx
0x605112: jmp     short loc_60515F
0x605114: mov     ecx, [ebp+58h]
0x605117: test    ecx, ecx
0x605119: jz      short loc_60515F
0x60511B: mov     eax, [ecx]
0x60511D: mov     edx, [eax+200h]
0x605123: call    edx
0x605125: test    al, al
0x605127: jz      short loc_60515F
0x605129: mov     ecx, [ebp+58h]
0x60512C: mov     eax, [ecx]
0x60512E: mov     edx, [eax+34Ch]
0x605134: call    edx
0x605136: mov     ecx, [ebp+58h]
0x605139: mov     edx, [ecx]
0x60513B: mov     edx, [edx+1A4h]
0x605141: mov     [esp+0E8h+var_B9+1], al
0x605145: mov     al, ds:0B1490Ch
0x60514A: mov     byte ptr [esp+0E8h+var_D0], al
0x60514E: mov     eax, dword ptr [esp+0E8h+var_D0]
0x605152: push    eax
0x605153: mov     eax, dword ptr [esp+0ECh+var_B9+1]
0x605157: push    eax
0x605158: push    0
0x60515A: push    0
0x60515C: push    ebp
0x60515D: call    edx
0x60515F: mov     eax, [ebp+0]
0x605162: mov     edx, [eax+1F8h]
0x605168: mov     ecx, ebp
0x60516A: call    edx
0x60516C: test    al, al
0x60516E: jz      loc_60544C
0x605174: mov     ecx, [esp+0E8h+var_A4]
0x605178: test    ecx, ecx
0x60517A: jz      loc_60544C
0x605180: push    0
0x605182: mov     [esp+0ECh+var_D1], 1
0x605187: call    ActorAnimData_GetAnimGroupFromField8Value
0x60518C: push    eax
0x60518D: call    sub_51AA00
0x605192: mov     ecx, [ebp+58h]
0x605195: add     esp, 4
0x605198: cmp     eax, 20h ; ' '
0x60519B: mov     eax, [ecx]
0x60519D: mov     edx, [eax+360h]
0x6051A3: setz    bl
0x6051A6: call    edx
0x6051A8: fcomp   qword ptr ds:0A3A5B0h
0x6051AE: fnstsw  ax
0x6051B0: test    ah, 44h
0x6051B3: jnp     short loc_60520B
0x6051B5: mov     ecx, [ebp+58h]
0x6051B8: mov     eax, [ecx]
0x6051BA: mov     edx, [eax+360h]
0x6051C0: call    edx
0x6051C2: fcomp   dword ptr ds:0A2FAA8h
0x6051C8: fnstsw  ax
0x6051CA: test    ah, 41h
0x6051CD: jp      short loc_6051D8
0x6051CF: mov     ecx, ebp
0x6051D1: call    sub_5E9E70
0x6051D6: jmp     short loc_60520B
0x6051D8: mov     esi, [ebp+58h]
0x6051DB: fld     dword ptr ds:0B33E9Ch
0x6051E1: mov     edi, [esi]
0x6051E3: fstp    dword ptr [esp+0E8h+var_D0]
0x6051E7: mov     eax, [edi+360h]
0x6051ED: mov     ecx, esi
0x6051EF: call    eax
0x6051F1: fsub    dword ptr [esp+0E8h+var_D0]
0x6051F5: mov     edx, [edi+364h]
0x6051FB: push    ecx
0x6051FC: fstp    dword ptr [esp+0ECh+var_D0]
0x605200: mov     ecx, esi
0x605202: fld     dword ptr [esp+0ECh+var_D0]
0x605206: fstp    [esp+0ECh+a4]
0x605209: call    edx
0x60520B: test    bl, bl
0x60520D: jnz     short loc_605279
0x60520F: mov     ecx, [ebp+58h]
0x605212: mov     eax, [ecx]
0x605214: mov     edx, [eax+28h]
0x605217: call    edx
0x605219: fstp    dword ptr [esp+0E8h+var_B9+1]
0x60521D: mov     ecx, offset TimeGlobals
0x605222: call    TimeGlobals_GetGameHour
0x605227: fstp    dword ptr [esp+0E8h+var_D0]
0x60522B: fld     dword ptr [esp+0E8h+var_D0]
0x60522F: fld     dword ptr [esp+0E8h+var_B9+1]
0x605233: fcom    st(1)
0x605235: fnstsw  ax
0x605237: test    ah, 41h
0x60523A: jnz     short loc_605246
0x60523C: fadd    qword ptr ds:0A492B8h
0x605242: fsubrp  st(1), st
0x605244: jmp     short loc_605248
0x605246: fsubp   st(1), st
0x605248: fstp    [esp+0E8h+var_C4]
0x60524C: mov     ecx, offset TimeGlobals
0x605251: fld     [esp+0E8h+var_C4]
0x605255: fstp    [esp+0E8h+var_D0]
0x605259: call    sub_4029D0
0x60525E: fmul    qword ptr ds:0A6EDD8h
0x605264: mov     [esp+0E8h+var_D1], 1
0x605269: fcomp   [esp+0E8h+var_D0]
0x60526D: fnstsw  ax
0x60526F: test    ah, 41h
0x605272: jz      short loc_605279
0x605274: mov     [esp+0E8h+var_D1], 0
0x605279: mov     esi, [esp+0E8h+var_A4]
0x60527D: mov     ecx, [esi+8]
0x605280: test    ecx, ecx
0x605282: jz      loc_6053B1
0x605288: mov     eax, [ecx]
0x60528A: mov     edx, [eax+8]
0x60528D: call    edx
0x60528F: test    eax, eax
0x605291: jz      loc_6053B1
0x605297: push    eax
0x605298: call    sub_88FA30
0x60529D: fcomp   dword ptr ds:0A2FAA8h
0x6052A3: add     esp, 4
0x6052A6: fnstsw  ax
0x6052A8: test    ah, 41h
0x6052AB: jp      loc_6053B1
0x6052B1: mov     ecx, ds:0B333C4h; this
0x6052B7: cmp     ebp, ecx
0x6052B9: push    0
0x6052BB: push    1
0x6052BD: jnz     loc_605373
0x6052C3: push    0; a2
0x6052C5: call    Player_GetAnimData
0x6052CA: mov     ecx, eax
0x6052CC: call    sub_475440
0x6052D1: fldz
0x6052D3: push    ecx
0x6052D4: fstp    [esp+0ECh+a4]; float
0x6052D7: mov     ecx, ds:0B333C4h; this
0x6052DD: push    5; int
0x6052DF: push    0; a2
0x6052E1: call    Player_GetAnimData
0x6052E6: mov     ecx, eax
0x6052E8: call    sub_470FC0
0x6052ED: mov     ecx, ds:0B333C4h; this
0x6052F3: push    0; a2
0x6052F5: call    Player_GetAnimData
0x6052FA: mov     ecx, ds:0B3F9A8h
0x605300: mov     [eax+18h], ecx
0x605303: mov     edx, ds:0B3F9ACh
0x605309: mov     [eax+1Ch], edx
0x60530C: mov     ecx, ds:0B3F9B0h
0x605312: push    0
0x605314: push    1
0x605316: mov     [eax+20h], ecx
0x605319: mov     ecx, ds:0B333C4h; this
0x60531F: push    1; a2
0x605321: call    Player_GetAnimData
0x605326: mov     ecx, eax
0x605328: call    sub_475440
0x60532D: fldz
0x60532F: push    ecx
0x605330: fstp    [esp+0ECh+a4]; float
0x605333: mov     ecx, ds:0B333C4h; this
0x605339: push    5; int
0x60533B: push    1; a2
0x60533D: call    Player_GetAnimData
0x605342: mov     ecx, eax
0x605344: call    sub_470FC0
0x605349: mov     ecx, ds:0B333C4h; this
0x60534F: push    1; a2
0x605351: call    Player_GetAnimData
0x605356: mov     edx, ds:0B3F9A8h
0x60535C: mov     [eax+18h], edx
0x60535F: mov     ecx, ds:0B3F9ACh
0x605365: mov     [eax+1Ch], ecx
0x605368: mov     edx, ds:0B3F9B0h
0x60536E: mov     [eax+20h], edx
0x605371: jmp     short loc_6053A3
0x605373: mov     ecx, esi
0x605375: call    sub_475440
0x60537A: fldz
0x60537C: push    ecx
0x60537D: fstp    [esp+0ECh+a4]; float
0x605380: push    5; int
0x605382: mov     ecx, esi
0x605384: call    sub_470FC0
0x605389: mov     eax, ds:0B3F9A8h
0x60538E: mov     [esi+18h], eax
0x605391: mov     ecx, ds:0B3F9ACh
0x605397: mov     [esi+1Ch], ecx
0x60539A: mov     edx, ds:0B3F9B0h
0x6053A0: mov     [esi+20h], edx
0x6053A3: mov     ecx, [ebp+58h]
0x6053A6: mov     eax, [ecx]
0x6053A8: mov     edx, [eax+194h]
0x6053AE: push    ebp
0x6053AF: call    edx
0x6053B1: mov     esi, [esp+0E8h+var_A8]
0x6053B5: test    esi, esi
0x6053B7: jz      short loc_6053F0
0x6053B9: mov     eax, [esi]
0x6053BB: mov     edx, [eax+98h]
0x6053C1: mov     ecx, esi
0x6053C3: call    edx
0x6053C5: test    al, al
0x6053C7: jnz     short loc_6053F0
0x6053C9: mov     ecx, [ebp+58h]
0x6053CC: test    ecx, ecx
0x6053CE: jz      short loc_6053E0
0x6053D0: mov     eax, [ecx]
0x6053D2: mov     edx, [eax+33Ch]
0x6053D8: push    0
0x6053DA: call    edx
0x6053DC: test    eax, eax
0x6053DE: jnz     short loc_6053F0
0x6053E0: mov     eax, [esi]
0x6053E2: mov     edx, [eax+9Ch]
0x6053E8: push    0
0x6053EA: push    1
0x6053EC: mov     ecx, esi
0x6053EE: call    edx
0x6053F0: cmp     [esp+0E8h+var_D1], 0
0x6053F5: jnz     loc_6054BF
0x6053FB: mov     ecx, [esp+0E8h+var_A4]
0x6053FF: push    20h ; ' '
0x605401: mov     bl, 1
0x605403: call    sub_470D00
0x605408: test    al, al
0x60540A: jz      short loc_605430
0x60540C: mov     eax, [ebp+0]
0x60540F: mov     edx, [eax+27Ch]
0x605415: mov     ecx, ebp
0x605417: call    edx
0x605419: test    eax, eax
0x60541B: jnz     short loc_605430
0x60541D: mov     eax, [ebp+0]
0x605420: mov     edx, [eax+278h]
0x605426: mov     ecx, ebp
0x605428: call    edx
0x60542A: test    al, al
0x60542C: jnz     short loc_605430
0x60542E: xor     bl, bl
0x605430: mov     eax, [ebp+0]
0x605433: mov     edx, [eax+9Ch]
0x605439: push    1
0x60543B: mov     ecx, ebp
0x60543D: call    edx
0x60543F: test    bl, bl
0x605441: jz      short loc_6054BF
0x605443: mov     ecx, ebp
0x605445: call    sub_4DC550
0x60544A: jmp     short loc_6054BF
0x60544C: mov     eax, [ebp+0]
0x60544F: mov     edx, [eax+198h]
0x605455: push    0
0x605457: mov     ecx, ebp
0x605459: call    edx
0x60545B: test    al, al
0x60545D: jz      short loc_6054BF
0x60545F: mov     ecx, [ebp+58h]
0x605462: mov     eax, [ecx]
0x605464: mov     edx, [eax+360h]
0x60546A: call    edx
0x60546C: fcomp   qword ptr ds:0A3A5B0h
0x605472: fnstsw  ax
0x605474: test    ah, 44h
0x605477: jp      short loc_60548C
0x605479: mov     ecx, [ebp+58h]
0x60547C: fldz
0x60547E: mov     eax, [ecx]
0x605480: mov     edx, [eax+364h]
0x605486: push    ecx
0x605487: fstp    [esp+0ECh+a4]
0x60548A: call    edx
0x60548C: mov     esi, [ebp+58h]
0x60548F: fld     dword ptr ds:0B33E9Ch
0x605495: mov     edi, [esi]
0x605497: fstp    dword ptr [esp+0E8h+var_D0]
0x60549B: mov     eax, [edi+360h]
0x6054A1: mov     ecx, esi
0x6054A3: call    eax
0x6054A5: fsub    dword ptr [esp+0E8h+var_D0]
0x6054A9: mov     edx, [edi+364h]
0x6054AF: push    ecx
0x6054B0: fstp    dword ptr [esp+0ECh+var_D0]
0x6054B4: mov     ecx, esi
0x6054B6: fld     dword ptr [esp+0ECh+var_D0]
0x6054BA: fstp    [esp+0ECh+a4]
0x6054BD: call    edx
0x6054BF: mov     ecx, [ebp+58h]
0x6054C2: mov     eax, [ecx]
0x6054C4: mov     edx, [eax+318h]
0x6054CA: push    ebp
0x6054CB: call    edx
0x6054CD: mov     ecx, [ebp+58h]
0x6054D0: mov     eax, [ecx]
0x6054D2: mov     edx, [eax+424h]
0x6054D8: call    edx
0x6054DA: test    al, al
0x6054DC: jz      short loc_6054F2
0x6054DE: mov     ecx, [ebp+58h]
0x6054E1: mov     eax, [ecx]
0x6054E3: mov     edx, [eax+42Ch]
0x6054E9: push    0
0x6054EB: push    1
0x6054ED: push    1
0x6054EF: push    ebp
0x6054F0: call    edx
0x6054F2: cmp     ds:0B333C4h, ebp
0x6054F8: jnz     short loc_60550A
0x6054FA: fldz
0x6054FC: fcomp   [esp+0E8h+arg_0]
0x605503: fnstsw  ax
0x605505: test    ah, 44h
0x605508: jp      short loc_605525
0x60550A: mov     ecx, [ebp+58h]
0x60550D: test    ecx, ecx
0x60550F: jz      short loc_605525
0x605511: mov     eax, [ecx]
0x605513: mov     edx, [eax+8]
0x605516: call    edx
0x605518: test    eax, eax
0x60551A: jnz     short loc_605525
0x60551C: mov     ecx, [ebp+58h]
0x60551F: push    ebp
0x605520: call    sub_633250
0x605525: mov     ecx, ebp
0x605527: call    sub_5F12D0
0x60552C: mov     ecx, [ebp+58h]
0x60552F: test    ecx, ecx
0x605531: jz      short loc_605550
0x605533: mov     eax, [ecx]
0x605535: mov     eax, [eax+18Ch]
0x60553B: lea     edx, [esp+0E8h+var_B9+1]
0x60553F: push    edx
0x605540: call    eax
0x605542: mov     ebx, 1
0x605547: mov     [esp+0E8h+var_4], ebx
0x60554E: jmp     short loc_605561
0x605550: mov     [esp+0E8h+var_A8], 0
0x605558: lea     eax, [esp+0E8h+var_A8]
0x60555C: mov     ebx, 2
0x605561: test    bl, 2
0x605564: mov     edi, [eax]
0x605566: jz      short loc_605578
0x605568: and     ebx, 0FFFFFFFDh
0x60556B: lea     ecx, [esp+0E8h+var_A8]; this
0x60556F: mov     dword ptr [esp+0E8h+var_D0], ebx
0x605573: call    sub_7016A0
0x605578: test    bl, 1
0x60557B: mov     [esp+0E8h+var_4], 0FFFFFFFFh
0x605586: jz      short loc_605591
0x605588: lea     ecx, [esp+0E8h+var_B9+1]; this
0x60558C: call    sub_7016A0
0x605591: mov     edx, [ebp+0]
0x605594: mov     eax, [edx+154h]
0x60559A: mov     ecx, ebp
0x60559C: call    eax
0x60559E: mov     ecx, ds:0B333C4h
0x6055A4: cmp     ebp, ecx
0x6055A6: mov     esi, eax
0x6055A8: jz      loc_60572D
0x6055AE: test    esi, esi
0x6055B0: jz      loc_60572D
0x6055B6: cmp     byte ptr [ecx+588h], 0
0x6055BD: jz      short loc_6055DC
0x6055BF: mov     eax, ds:0B3BB10h
0x6055C4: test    eax, eax
0x6055C6: jz      short loc_6055DC
0x6055C8: mov     ecx, [eax+88h]
0x6055CE: mov     edx, [eax+8Ch]
0x6055D4: mov     eax, [eax+90h]
0x6055DA: jmp     short loc_60561B
0x6055DC: mov     eax, ds:0B3BB0Ch
0x6055E1: test    eax, eax
0x6055E3: jnz     short loc_6055C8
0x6055E5: push    offset dword_B258E8; int
0x6055EA: lea     ebx, [ecx+2Ch]
0x6055ED: call    sub_5E40C0
0x6055F2: push    ecx
0x6055F3: lea     ecx, [esp+0F0h+var_90]
0x6055F7: fstp    [esp+0F0h+a3]; float
0x6055FA: push    ecx; int
0x6055FB: call    sub_47DA10
0x605600: add     esp, 0Ch
0x605603: push    eax
0x605604: lea     edx, [esp+0ECh+var_18]
0x60560B: push    edx
0x60560C: mov     ecx, ebx
0x60560E: call    sub_47D9B0
0x605613: mov     ecx, [eax]
0x605615: mov     edx, [eax+4]
0x605618: mov     eax, [eax+8]
0x60561B: mov     dword ptr [esp+0E8h+var_D0], ecx
0x60561F: fld     dword ptr [esp+0E8h+var_D0]
0x605623: mov     ecx, [esi+20h]
0x605626: mov     [esp+0E8h+var_A0], ecx
0x60562A: fsub    [esp+0E8h+var_A0]
0x60562E: mov     ecx, [esi+2Ch]
0x605631: mov     dword ptr [esp+0E8h+var_D0+4], edx
0x605635: mov     edx, [esi+24h]
0x605638: fstp    [esp+0E8h+var_90]
0x60563C: fld     dword ptr [esp+0E8h+var_D0+4]
0x605640: mov     [esp+0E8h+var_9C], edx
0x605644: fsub    [esp+0E8h+var_9C]
0x605648: mov     [esp+0E8h+var_C8], eax
0x60564C: mov     eax, [esi+28h]
0x60564F: mov     [esp+0E8h+var_98], eax
0x605653: fstp    [esp+0E8h+var_8C]
0x605657: mov     [esp+0E8h+var_94], ecx
0x60565B: fld     [esp+0E8h+var_C8]
0x60565F: lea     ecx, [esp+0E8h+var_90]
0x605663: fsub    [esp+0E8h+var_98]
0x605667: fstp    [esp+0E8h+var_88]
0x60566B: call    sub_404C90
0x605670: fld     [esp+0E8h+var_94]
0x605674: push    esi
0x605675: fmul    qword ptr ds:0A3FA98h
0x60567B: xor     bl, bl
0x60567D: push    offset dword_B35288
0x605682: mov     byte ptr [esp+0F0h+var_A4], bl
0x605686: fsubp   st(1), st
0x605688: fstp    [esp+0F0h+var_A8]
0x60568C: call    sub_435CC0
0x605691: add     esp, 8
0x605694: test    al, al
0x605696: jz      short loc_6056DB
0x605698: fld     [esp+0E8h+var_A8]
0x60569C: fld     dword ptr ds:0B0762Ch
0x6056A2: fmul    dword ptr ds:0B075F0h
0x6056A8: fstp    dword ptr [esp+0E8h+var_D0]
0x6056AC: fdiv    dword ptr [esp+0E8h+var_D0]
0x6056B0: fstp    dword ptr [esp+0E8h+var_D0]
0x6056B4: fld     dword ptr [esp+0E8h+var_D0]
0x6056B8: fmul    st, st
0x6056BA: fstp    dword ptr [esp+0E8h+var_D0]
0x6056BE: fld     dword ptr [esp+0E8h+var_D0]
0x6056C2: fld     dword ptr [esi+0E4h]
0x6056C8: fcompp
0x6056CA: fnstsw  ax
0x6056CC: test    ah, 5
0x6056CF: jp      short loc_6056D5
0x6056D1: mov     bl, 1
0x6056D3: jmp     short loc_6056D7
0x6056D5: xor     bl, bl
0x6056D7: mov     byte ptr [esp+0E8h+var_A4], bl
0x6056DB: call    InitBSShaderAccumulator
0x6056E0: mov     ecx, eax
0x6056E2: test    ecx, ecx
0x6056E4: jz      short loc_60571D
0x6056E6: cmp     dword ptr [ecx+2228h], 0
0x6056ED: jz      short loc_60571D
0x6056EF: test    bl, bl
0x6056F1: jnz     short loc_605705
0x6056F3: fldz
0x6056F5: mov     byte ptr [esp+0E8h+var_C4], 1
0x6056FA: fcomp   [esp+0E8h+var_A8]
0x6056FE: fnstsw  ax
0x605700: test    ah, 5
0x605703: jnp     short loc_60570A
0x605705: mov     byte ptr [esp+0E8h+var_C4], 0
0x60570A: mov     edx, [esp+0E8h+var_C4]
0x60570E: push    edx; float
0x60570F: mov     edx, [ebp+0Ch]
0x605712: lea     eax, [esp+0ECh+var_A0]
0x605716: push    eax; int
0x605717: push    edx; int
0x605718: call    sub_7ABD00
0x60571D: test    edi, edi
0x60571F: jz      short loc_605740
0x605721: mov     eax, [esp+0E8h+var_A4]
0x605725: push    eax
0x605726: mov     ecx, edi
0x605728: call    sub_5EA2F0
0x60572D: test    edi, edi
0x60572F: jz      short loc_605740
0x605731: movzx   ecx, byte ptr ds:0B333B8h
0x605738: push    ecx
0x605739: mov     ecx, edi
0x60573B: call    sub_5EA320
0x605740: mov     ecx, dword ptr [esp+0E8h+var_C]
0x605747: mov     large fs:0, ecx
0x60574E: pop     ecx
0x60574F: pop     edi
0x605750: pop     esi
0x605751: pop     ebp
0x605752: pop     ebx
0x605753: add     esp, 0D4h
0x605759: retn    4
