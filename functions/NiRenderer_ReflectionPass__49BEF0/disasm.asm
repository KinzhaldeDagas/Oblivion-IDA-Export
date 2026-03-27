0x49BEF0: push    ebp
0x49BEF1: mov     ebp, esp
0x49BEF3: and     esp, 0FFFFFFF0h
0x49BEF6: push    0FFFFFFFFh
0x49BEF8: push    offset SEH_49BEF0
0x49BEFD: mov     eax, large fs:0
0x49BF03: push    eax
0x49BF04: sub     esp, 2C8h
0x49BF0A: push    ebx
0x49BF0B: push    esi
0x49BF0C: push    edi
0x49BF0D: mov     eax, ds:0B30AACh
0x49BF12: xor     eax, esp
0x49BF14: push    eax
0x49BF15: lea     eax, [esp+2E4h+var_C]
0x49BF1C: mov     large fs:0, eax
0x49BF22: mov     esi, ecx
0x49BF24: mov     [esp+2E4h+var_2C0], esi
0x49BF28: xor     edi, edi
0x49BF2A: cmp     byte ptr ds:0B07050h, 0
0x49BF31: mov     [esp+2E4h+var_260], edi
0x49BF38: jz      loc_49CA34
0x49BF3E: cmp     byte ptr ds:0B42F3Eh, 0
0x49BF45: jz      loc_49CA34
0x49BF4B: mov     ebx, [ebp+arg_0]
0x49BF4E: cmp     ebx, edi
0x49BF50: jz      loc_49CA34
0x49BF56: cmp     [esi], edi
0x49BF58: jnz     short loc_49BFC1
0x49BF5A: push    124h; Size
0x49BF5F: call    FormHeapAlloc
0x49BF64: add     esp, 4
0x49BF67: mov     [esp+2E4h+var_2A0], eax
0x49BF6B: cmp     eax, edi
0x49BF6D: mov     [esp+2E4h+var_4], edi
0x49BF74: jz      short loc_49BF7F
0x49BF76: mov     ecx, eax
0x49BF78: call    sub_70D590
0x49BF7D: jmp     short loc_49BF81
0x49BF7F: xor     eax, eax
0x49BF81: push    eax; a2
0x49BF82: mov     ecx, esi; this
0x49BF84: mov     [esp+2E8h+var_4], 0FFFFFFFFh
0x49BF8F: call    NiSmartPointer_Set??
0x49BF94: cmp     dword ptr [esi+4], 0
0x49BF98: lea     edi, [esi+4]
0x49BF9B: jnz     short loc_49BFC1
0x49BF9D: mov     eax, ds:0B43104h
0x49BFA2: mov     ecx, ds:0B42F50h
0x49BFA8: push    0
0x49BFAA: push    0
0x49BFAC: push    0
0x49BFAE: push    100h
0x49BFB3: push    eax
0x49BFB4: call    sub_7C2420
0x49BFB9: push    eax; a2
0x49BFBA: mov     ecx, edi; this
0x49BFBC: call    NiSmartPointer_Set??
0x49BFC1: fld     dword ptr [esi+44h]
0x49BFC4: mov     ecx, ds:0B070B0h
0x49BFCA: test    ecx, ecx
0x49BFCC: fstp    [esp+2E4h+var_2B4]
0x49BFD0: fild    dword ptr ds:0B070B0h
0x49BFD6: jge     short loc_49BFDE
0x49BFD8: fadd    dword ptr ds:0A2FC78h
0x49BFDE: push    ecx
0x49BFDF: mov     ecx, ds:0B333C4h
0x49BFE5: fstp    [esp+2E8h+var_2E8]; float
0x49BFE8: call    sub_65E5E0
0x49BFED: test    eax, eax
0x49BFEF: jz      short loc_49C003
0x49BFF1: mov     ecx, eax
0x49BFF3: call    TESObjectCELL_GetWaterHeight
0x49BFF8: fstp    [esp+2E4h+var_2B4]
0x49BFFC: fld     [esp+2E4h+var_2B4]
0x49C000: fstp    dword ptr [esi+44h]
0x49C003: fldz
0x49C005: lea     edx, [esp+2E4h+var_2AC]
0x49C009: fst     [esp+2E4h+var_2AC]
0x49C00D: push    edx
0x49C00E: fst     [esp+2E8h+var_2A8]
0x49C012: lea     eax, [esp+2E8h+var_284]
0x49C016: fld     [esp+2E8h+var_2B4]
0x49C01A: push    eax
0x49C01B: fstp    [esp+2ECh+var_2A4]
0x49C01F: lea     ecx, [esp+2ECh+var_1A8]
0x49C026: fst     [esp+2ECh+var_284]
0x49C02A: fstp    [esp+2ECh+var_280]
0x49C02E: fld1
0x49C030: fstp    [esp+2ECh+var_27C]
0x49C034: call    sub_716E00
0x49C039: fld     dword ptr [ebx+64h]
0x49C03C: mov     ecx, [ebx+88h]
0x49C042: fstp    [esp+2E4h+var_23C]
0x49C049: fld     dword ptr [ebx+70h]
0x49C04C: mov     edx, [ebx+8Ch]
0x49C052: mov     eax, [ebx+90h]
0x49C058: fstp    [esp+2E4h+var_238]
0x49C05F: fld     dword ptr [ebx+7Ch]
0x49C062: mov     [esp+2E4h+var_26C], ecx
0x49C066: fstp    [esp+2E4h+var_234]
0x49C06D: lea     ecx, [esp+2E4h+var_284]
0x49C071: fldz
0x49C073: push    ecx
0x49C074: fst     [esp+2E8h+var_284]
0x49C078: mov     [esp+2E8h+var_268], edx
0x49C07F: fst     [esp+2E8h+var_280]
0x49C083: lea     edx, [esp+2E8h+var_2AC]
0x49C087: fld     dword ptr ds:0A30634h
0x49C08D: mov     [esp+2E8h+var_264], eax
0x49C094: fstp    [esp+2E8h+var_27C]
0x49C098: push    edx
0x49C099: lea     eax, [esp+2ECh+var_290]
0x49C09D: push    eax
0x49C09E: lea     ecx, [esp+2F0h+var_1CC]
0x49C0A5: fst     [esp+2F0h+var_2AC]
0x49C0A9: fld1
0x49C0AB: fst     [esp+2F0h+var_2A8]
0x49C0AF: fstp    [esp+2F0h+var_290]
0x49C0B3: fst     [esp+2F0h+var_2A4]
0x49C0B7: fst     [esp+2F0h+var_28C]
0x49C0BB: fstp    [esp+2F0h+var_288]
0x49C0BF: call    sub_70FCC0
0x49C0C4: fld     [esp+2E4h+var_264]
0x49C0CB: lea     ecx, [esp+2E4h+var_1CC]
0x49C0D2: fsub    [esp+2E4h+var_2B4]
0x49C0D6: push    ecx
0x49C0D7: lea     edx, [esp+2E8h+var_23C]
0x49C0DE: push    edx
0x49C0DF: lea     eax, [esp+2ECh+var_248]
0x49C0E6: fstp    [esp+2ECh+var_264]
0x49C0ED: push    eax
0x49C0EE: call    sub_710250
0x49C0F3: fld     dword ptr [ebx+6Ch]
0x49C0F6: fstp    [esp+2F0h+var_278]
0x49C0FA: add     esp, 0Ch
0x49C0FD: fld     dword ptr [ebx+78h]
0x49C100: fstp    [esp+2E4h+var_274]
0x49C104: fld     dword ptr [ebx+84h]
0x49C10A: fchs
0x49C10C: fstp    [esp+2E4h+var_270]
0x49C110: fld     [esp+2E4h+var_244]
0x49C117: fld     st
0x49C119: fld     [esp+2E4h+var_270]
0x49C11D: fld     st
0x49C11F: fmulp   st(2), st
0x49C121: fld     [esp+2E4h+var_240]
0x49C128: fld     st
0x49C12A: fld     [esp+2E4h+var_274]
0x49C12E: fld     st
0x49C130: fmulp   st(2), st
0x49C132: fxch    st(4)
0x49C134: fsubrp  st(1), st
0x49C136: fstp    [esp+2E4h+var_2D0]
0x49C13A: fld     [esp+2E4h+var_278]
0x49C13E: fld     st
0x49C140: fmulp   st(2), st
0x49C142: fld     [esp+2E4h+var_248]
0x49C149: lea     ecx, [esp+2E4h+var_278]
0x49C14D: fld     st
0x49C14F: push    ecx
0x49C150: fmulp   st(4), st
0x49C152: lea     edx, [esp+2E8h+var_290]
0x49C156: fxch    st(2)
0x49C158: push    edx
0x49C159: lea     eax, [esp+2ECh+var_248]
0x49C160: fsubrp  st(3), st
0x49C162: push    eax
0x49C163: fxch    st(2)
0x49C165: lea     ecx, [esp+2F0h+var_154]
0x49C16C: fstp    [esp+2F0h+var_2C4]
0x49C170: fmulp   st(2), st
0x49C172: fmulp   st(2), st
0x49C174: fsubrp  st(1), st
0x49C176: fstp    [esp+2F0h+var_2CC]
0x49C17A: fld     [esp+2F0h+var_2D0]
0x49C17E: fchs
0x49C180: fstp    [esp+2F0h+var_2D0]
0x49C184: fld     [esp+2F0h+var_2C4]
0x49C188: fchs
0x49C18A: fstp    [esp+2F0h+var_2C4]
0x49C18E: fld     [esp+2F0h+var_2CC]
0x49C192: fchs
0x49C194: fstp    [esp+2F0h+var_2CC]
0x49C198: fld     [esp+2F0h+var_2D0]
0x49C19C: fstp    [esp+2F0h+var_290]
0x49C1A0: fld     [esp+2F0h+var_2C4]
0x49C1A4: fstp    [esp+2F0h+var_28C]
0x49C1A8: fld     [esp+2F0h+var_2CC]
0x49C1AC: fstp    [esp+2F0h+var_288]
0x49C1B0: call    sub_70FCC0
0x49C1B5: lea     ecx, [esp+2E4h+var_1CC]
0x49C1BC: push    ecx
0x49C1BD: lea     edx, [esp+2E8h+var_26C]
0x49C1C1: push    edx
0x49C1C2: lea     eax, [esp+2ECh+var_29C]
0x49C1C6: push    eax
0x49C1C7: call    sub_710250
0x49C1CC: fld     [esp+2F0h+var_294]
0x49C1D0: fadd    [esp+2F0h+var_2B4]
0x49C1D4: mov     eax, [esi]
0x49C1D6: mov     ecx, [esp+2F0h+var_29C]
0x49C1DA: add     esp, 0Ch
0x49C1DD: fstp    [esp+2E4h+var_294]
0x49C1E1: mov     [eax+54h], ecx
0x49C1E4: mov     edx, [esp+2E4h+var_298]
0x49C1E8: mov     [eax+58h], edx
0x49C1EB: mov     ecx, [esp+2E4h+var_294]
0x49C1EF: mov     [eax+5Ch], ecx
0x49C1F2: mov     esi, [esi]
0x49C1F4: lea     edi, [esi+30h]
0x49C1F7: mov     ecx, 9
0x49C1FC: lea     esi, [esp+2E4h+var_154]
0x49C203: rep movsd
0x49C205: fld     dword ptr [ebx+94h]
0x49C20B: fstp    [esp+2E4h+var_2D0]
0x49C20F: fld     [esp+2E4h+var_2D0]
0x49C213: fabs
0x49C215: fstp    [esp+2E4h+var_2D0]
0x49C219: fld     [esp+2E4h+var_2D0]
0x49C21D: mov     esi, [esp+2E4h+var_2C0]
0x49C221: mov     eax, [esi]
0x49C223: fstp    dword ptr [eax+60h]
0x49C226: mov     ecx, [esi+4]; this
0x49C229: call    BSRenderedTexture__UseTextureToRender
0x49C22E: push    eax; a2
0x49C22F: push    7; a1
0x49C231: call    NiRenderer_BeginScene
0x49C236: mov     ecx, ds:0B3F928h
0x49C23C: mov     eax, [esi]
0x49C23E: mov     edi, 1
0x49C243: add     esp, 8
0x49C246: cmp     [ecx+200h], edi
0x49C24C: jz      short loc_49C256
0x49C24E: cmp     [ecx+204h], edi
0x49C254: jnz     short loc_49C26F
0x49C256: cmp     byte ptr [ecx+20Ch], 1
0x49C25D: jnz     short loc_49C26F
0x49C25F: mov     edx, [ecx]
0x49C261: add     eax, 110h
0x49C266: push    eax
0x49C267: mov     eax, [edx+144h]
0x49C26D: call    eax
0x49C26F: mov     ecx, [esi]; this
0x49C271: add     ebx, 0ECh ; 'ì'
0x49C277: push    ebx; a2
0x49C278: call    Camera_SetFrustum
0x49C27D: fldz
0x49C27F: mov     ecx, [esi]; this
0x49C281: push    edi; a3
0x49C282: push    ecx
0x49C283: fstp    dword ptr [esp+2ECh+var_2F0+4]; a2
0x49C286: call    NiAVObject_UpdateNiAVObject
0x49C28B: mov     eax, ds:0B35230h
0x49C290: mov     cl, [eax+18h]
0x49C293: or      [eax+18h], di
0x49C297: mov     eax, ds:0B35234h
0x49C29C: and     cl, 1
0x49C29F: test    eax, eax
0x49C2A1: mov     byte ptr [esp+2E4h+var_2C8+3], 0
0x49C2A6: mov     [esp+2E4h+var_2B5], cl
0x49C2AA: jz      short loc_49C2BA
0x49C2AC: mov     cl, [eax+18h]
0x49C2AF: and     cl, 1
0x49C2B2: or      [eax+18h], di
0x49C2B6: mov     byte ptr [esp+2E4h+var_2C8+3], cl
0x49C2BA: mov     esi, edi
0x49C2BC: push    esi
0x49C2BD: call    sub_7B2130
0x49C2C2: mov     ecx, ds:0B333C4h
0x49C2C8: add     esp, 4
0x49C2CB: push    esi
0x49C2CC: mov     byte ptr [esp+2E8h+var_25C], al
0x49C2D3: call    PlayerCharacter_GetPlayerNode
0x49C2D8: mov     al, [eax+18h]
0x49C2DB: mov     ecx, ds:0B333C4h
0x49C2E1: and     al, 1
0x49C2E3: push    esi
0x49C2E4: mov     [esp+2E8h+var_2B6], al
0x49C2E8: call    PlayerCharacter_GetPlayerNode
0x49C2ED: fldz
0x49C2EF: or      [eax+18h], si
0x49C2F3: mov     ecx, ds:0B333A0h
0x49C2F9: mov     eax, [ecx+5Ch]
0x49C2FC: mov     ebx, [eax+4]
0x49C2FF: mov     edx, [ebx+54h]
0x49C302: mov     eax, [ebx+58h]
0x49C305: mov     ecx, [ebx+5Ch]
0x49C308: mov     [esp+2E4h+var_2AC], edx
0x49C30C: mov     edx, [esp+2E4h+var_29C]
0x49C310: mov     [ebx+54h], edx
0x49C313: mov     [esp+2E4h+var_2A8], eax
0x49C317: mov     eax, [esp+2E4h+var_298]
0x49C31B: mov     [esp+2E4h+var_2A4], ecx
0x49C31F: mov     [ebx+58h], eax
0x49C322: mov     ecx, [esp+2E4h+var_294]
0x49C326: push    esi; a3
0x49C327: push    ecx
0x49C328: mov     [ebx+5Ch], ecx
0x49C32B: fstp    dword ptr [esp+2ECh+var_2F0+4]; a2
0x49C32E: mov     ecx, ebx; this
0x49C330: call    NiAVObject_UpdateNiAVObject
0x49C335: mov     eax, ds:0B36094h
0x49C33A: test    eax, eax
0x49C33C: mov     byte ptr [esp+2E4h+var_2C8+2], 0
0x49C341: mov     [esp+2E4h+var_2A0], eax
0x49C345: jz      short loc_49C355
0x49C347: mov     cl, [eax+18h]
0x49C34A: and     cl, 1
0x49C34D: or      [eax+18h], si
0x49C351: mov     byte ptr [esp+2E4h+var_2C8+2], cl
0x49C355: mov     esi, ds:0B06A2Ch
0x49C35B: xor     edx, edx
0x49C35D: mov     eax, esi
0x49C35F: div     dword ptr ds:0B070E0h
0x49C365: test    eax, eax
0x49C367: mov     [esp+2E4h+var_2B0], eax
0x49C36B: fild    [esp+2E4h+var_2B0]
0x49C36F: jge     short loc_49C377
0x49C371: fadd    dword ptr ds:0A2FC78h
0x49C377: fstp    [esp+2E4h+var_2D0]
0x49C37B: sub     esp, 8
0x49C37E: fld     [esp+2ECh+var_2D0]
0x49C382: fstp    [esp+2ECh+var_2F0+4]; double
0x49C385: call    _floor
0x49C38A: fstp    [esp+2ECh+var_2D0]
0x49C38E: add     esp, 8
0x49C391: fld     [esp+2E4h+var_2D0]
0x49C395: call    Double_To_SInt32
0x49C39A: mov     [esp+2E4h+var_2C4], eax
0x49C39E: xor     edi, edi
0x49C3A0: cmp     edi, esi
0x49C3A2: jnb     short loc_49C41D
0x49C3A4: mov     [esp+2E4h+var_2CC], 0
0x49C3AC: lea     esp, [esp+0]
0x49C3B0: cmp     [esp+2E4h+var_2CC], esi
0x49C3B4: jnb     short loc_49C418
0x49C3B6: mov     edx, [esp+2E4h+var_2CC]
0x49C3BA: mov     eax, ds:0B333A0h
0x49C3BF: mov     ecx, [eax+8]
0x49C3C2: push    edx
0x49C3C3: push    edi
0x49C3C4: call    GetGridEntry
0x49C3C9: cmp     edi, [esp+2E4h+var_2C4]
0x49C3CD: mov     esi, eax
0x49C3CF: jl      short loc_49C3EC
0x49C3D1: mov     edx, [esp+2E4h+var_2CC]
0x49C3D5: mov     ecx, [esp+2E4h+var_2C4]
0x49C3D9: cmp     edx, ecx
0x49C3DB: jl      short loc_49C3EC
0x49C3DD: mov     eax, ds:0B06A2Ch
0x49C3E2: sub     eax, ecx
0x49C3E4: cmp     edi, eax
0x49C3E6: jnb     short loc_49C3EC
0x49C3E8: cmp     edx, eax
0x49C3EA: jb      short loc_49C40B
0x49C3EC: test    esi, esi
0x49C3EE: jz      short loc_49C40B
0x49C3F0: mov     ecx, [esi]; this
0x49C3F2: test    ecx, ecx
0x49C3F4: jz      short loc_49C40B
0x49C3F6: call    TESObjectCELL_GetNiNode?
0x49C3FB: test    eax, eax
0x49C3FD: jz      short loc_49C40B
0x49C3FF: mov     ecx, [esi]; this
0x49C401: call    TESObjectCELL_GetNiNode?
0x49C406: or      word ptr [eax+18h], 1
0x49C40B: add     [esp+2E4h+var_2CC], 1
0x49C410: mov     esi, ds:0B06A2Ch
0x49C416: jmp     short loc_49C3B0
0x49C418: add     edi, 1
0x49C41B: jmp     short loc_49C3A0
0x49C41D: push    0
0x49C41F: lea     ecx, [esp+2E8h+a2]
0x49C426: call    TESWaterCullingProcess__TESWaterCullingProcess
0x49C42B: mov     ecx, [esp+2E4h+var_2C0]
0x49C42F: mov     edx, [ecx]
0x49C431: mov     [esp+2E4h+var_4], 1
0x49C43C: mov     dword ptr [esp+2E4h+a2+0Ch], edx
0x49C443: call    InitBSShaderAccumulator
0x49C448: mov     esi, ds:0A28078h
0x49C44E: mov     edi, eax
0x49C450: test    edi, edi
0x49C452: mov     [esp+2E4h+var_2D0], edi
0x49C456: jz      short loc_49C45E
0x49C458: lea     eax, [edi+4]
0x49C45B: push    eax; lpAddend
0x49C45C: call    esi ; InterlockedIncrement
0x49C45E: mov     ecx, ds:0B3F928h
0x49C464: mov     eax, [ecx+8]
0x49C467: test    eax, eax
0x49C469: mov     [esp+2E4h+var_2CC], eax
0x49C46D: jz      short loc_49C475
0x49C46F: add     eax, 4
0x49C472: push    eax; lpAddend
0x49C473: call    esi ; InterlockedIncrement
0x49C475: mov     eax, ds:0B3F928h
0x49C47A: mov     esi, [eax+8]
0x49C47D: add     eax, 8
0x49C480: cmp     esi, edi
0x49C482: mov     byte ptr [esp+2E4h+var_4], 3
0x49C48A: mov     [esp+2E4h+var_2BC], eax
0x49C48E: jz      short loc_49C4C4
0x49C490: test    esi, esi
0x49C492: jz      short loc_49C4B0
0x49C494: lea     edx, [esi+4]
0x49C497: push    edx; lpAddend
0x49C498: call    dword ptr ds:0A2807Ch
0x49C49E: test    eax, eax
0x49C4A0: jnz     short loc_49C4B0
0x49C4A2: test    esi, esi
0x49C4A4: jz      short loc_49C4B0
0x49C4A6: mov     eax, [esi]
0x49C4A8: mov     edx, [eax]
0x49C4AA: push    1
0x49C4AC: mov     ecx, esi
0x49C4AE: call    edx
0x49C4B0: test    edi, edi
0x49C4B2: mov     eax, [esp+2E4h+var_2BC]
0x49C4B6: mov     [eax], edi
0x49C4B8: jz      short loc_49C4C4
0x49C4BA: add     edi, 4
0x49C4BD: push    edi; lpAddend
0x49C4BE: call    dword ptr ds:0A28078h
0x49C4C4: mov     esi, [esp+2E4h+var_2C0]
0x49C4C8: mov     edi, [esp+2E4h+var_2D0]
0x49C4CC: mov     byte ptr ds:0B42CE8h, 1
0x49C4D3: mov     eax, [esi]
0x49C4D5: mov     edx, [edi]
0x49C4D7: push    eax
0x49C4D8: mov     eax, [edx+4Ch]
0x49C4DB: mov     ecx, edi
0x49C4DD: call    eax
0x49C4DF: mov     byte ptr [edi+21E0h], 1
0x49C4E6: mov     eax, [esi]
0x49C4E8: mov     ecx, ds:0B3F928h
0x49C4EE: push    eax
0x49C4EF: call    SetCameraViewProj
0x49C4F4: mov     eax, [esi]
0x49C4F6: add     eax, 0ECh ; 'ì'
0x49C4FB: push    eax; a2
0x49C4FC: lea     ecx, [esp+2E8h+a2]; this
0x49C503: call    NiCullingProcess__SetFrustum
0x49C508: lea     ecx, [esp+2E4h+a2]
0x49C50F: push    ecx; a2
0x49C510: mov     ecx, ebx; this
0x49C512: call    NiAVObject_Render
0x49C517: mov     edx, ds:0B43104h
0x49C51D: mov     eax, [edx+280h]
0x49C523: mov     ecx, ds:0B3F928h
0x49C529: mov     [esp+2E4h+var_2B0], eax
0x49C52D: mov     eax, [esi]
0x49C52F: push    eax
0x49C530: call    SetCameraViewProj
0x49C535: mov     esi, [esi]
0x49C537: add     esi, 0ECh ; 'ì'
0x49C53D: push    esi; a2
0x49C53E: lea     ecx, [esp+2E8h+a2]; this
0x49C545: call    NiCullingProcess__SetFrustum
0x49C54A: mov     eax, ds:0B43104h
0x49C54F: lea     esi, [eax+980h]
0x49C555: mov     ecx, 10h
0x49C55A: lea     edi, [esp+2E4h+var_210]
0x49C561: rep movsd
0x49C563: fld     [esp+2E4h+var_200]
0x49C56A: fld     dword ptr ds:0B3F930h
0x49C570: fld     st
0x49C572: fmulp   st(2), st
0x49C574: fld     [esp+2E4h+var_210]
0x49C57B: fld     dword ptr ds:0B3F92Ch
0x49C581: fld     st
0x49C583: fmulp   st(2), st
0x49C585: fxch    st(3)
0x49C587: faddp   st(1), st
0x49C589: fld     [esp+2E4h+var_1F0]
0x49C590: fld     dword ptr ds:0B3F934h
0x49C596: fld     st
0x49C598: fmulp   st(2), st
0x49C59A: fxch    st(2)
0x49C59C: faddp   st(1), st
0x49C59E: fstp    [esp+2E4h+var_2BC]
0x49C5A2: fld     [esp+2E4h+var_2BC]
0x49C5A6: fchs
0x49C5A8: fstp    [esp+2E4h+var_1E0]
0x49C5AF: fld     [esp+2E4h+var_20C]
0x49C5B6: fmul    st, st(3)
0x49C5B8: fld     [esp+2E4h+var_1FC]
0x49C5BF: fmul    st, st(3)
0x49C5C1: faddp   st(1), st
0x49C5C3: fld     [esp+2E4h+var_1EC]
0x49C5CA: fmul    st, st(2)
0x49C5CC: faddp   st(1), st
0x49C5CE: fstp    [esp+2E4h+var_2BC]
0x49C5D2: fld     [esp+2E4h+var_2BC]
0x49C5D6: fchs
0x49C5D8: fstp    [esp+2E4h+var_1DC]
0x49C5DF: fld     [esp+2E4h+var_1F8]
0x49C5E6: fmulp   st(2), st
0x49C5E8: fld     [esp+2E4h+var_208]
0x49C5EF: fmulp   st(3), st
0x49C5F1: fxch    st(1)
0x49C5F3: faddp   st(2), st
0x49C5F5: fmul    [esp+2E4h+var_1E8]
0x49C5FC: faddp   st(1), st
0x49C5FE: fstp    [esp+2E4h+var_2BC]
0x49C602: fld     [esp+2E4h+var_2BC]
0x49C606: lea     esi, [eax+9C0h]
0x49C60C: fchs
0x49C60E: mov     ecx, 10h
0x49C613: fstp    [esp+2E4h+var_1D8]
0x49C61A: lea     edi, [esp+2E4h+var_90]
0x49C621: rep movsd
0x49C623: lea     ecx, [esp+2E4h+var_90]
0x49C62A: push    ecx
0x49C62B: lea     edx, [esp+2E8h+var_210]
0x49C632: push    edx
0x49C633: lea     eax, [esp+2ECh+var_198]
0x49C63A: push    eax
0x49C63B: call    D3DXMatrixMultiply_0
0x49C640: lea     ecx, [esp+2E4h+var_198]
0x49C647: push    ecx
0x49C648: push    0
0x49C64A: lea     edx, [esp+2ECh+var_50]
0x49C651: push    edx
0x49C652: call    D3DXMatrixInverse_0
0x49C657: lea     eax, [esp+2E4h+var_50]
0x49C65E: push    eax
0x49C65F: lea     ecx, [esp+2E8h+var_198]
0x49C666: push    ecx
0x49C667: call    D3DXMatrixTranspose_0
0x49C66C: fldz
0x49C66E: fst     [esp+2E4h+var_258]
0x49C675: lea     edx, [esp+2E4h+var_258]
0x49C67C: fstp    [esp+2E4h+var_254]
0x49C683: push    edx
0x49C684: fld1
0x49C686: mov     eax, edx
0x49C688: fstp    [esp+2E8h+var_250]
0x49C68F: push    eax
0x49C690: fld     [esp+2ECh+var_2B4]
0x49C694: fchs
0x49C696: fstp    [esp+2ECh+var_24C]
0x49C69D: call    D3DXPlaneNormalize_0
0x49C6A2: lea     ecx, [esp+2E4h+var_198]
0x49C6A9: push    ecx
0x49C6AA: lea     edx, [esp+2E8h+var_258]
0x49C6B1: push    edx
0x49C6B2: lea     eax, [esp+2ECh+var_230]
0x49C6B9: push    eax
0x49C6BA: call    D3DXPlaneTransform_0
0x49C6BF: fld     [esp+2E4h+var_230]
0x49C6C6: mov     eax, [esp+2E4h+var_2B0]
0x49C6CA: fstp    [esp+2E4h+var_220]
0x49C6D1: fld     [esp+2E4h+var_22C]
0x49C6D8: lea     edx, [esp+2E4h+var_220]
0x49C6DF: fstp    [esp+2E4h+var_21C]
0x49C6E6: push    edx
0x49C6E7: fld     [esp+2E8h+var_228]
0x49C6EE: push    0
0x49C6F0: fstp    [esp+2ECh+var_218]
0x49C6F7: push    eax
0x49C6F8: fld     [esp+2F0h+var_224]
0x49C6FF: fstp    [esp+2F0h+var_214]
0x49C706: mov     ecx, [eax]
0x49C708: mov     eax, [ecx+0DCh]
0x49C70E: call    eax
0x49C710: mov     ecx, ds:0B43104h
0x49C716: mov     ecx, [ecx+8ACh]
0x49C71C: mov     edx, [ecx]
0x49C71E: mov     eax, [edx+64h]
0x49C721: push    0
0x49C723: push    1
0x49C725: push    98h ; '˜'
0x49C72A: call    eax
0x49C72C: fld     dword ptr ds:0A3F424h
0x49C732: or      word ptr [ebx+18h], 1
0x49C737: mov     cl, ds:0B09AE5h
0x49C73D: mov     byte ptr [esp+2E4h+var_2B0], cl
0x49C741: push    ecx
0x49C742: fstp    [esp+2E8h+var_2E8]
0x49C745: push    0
0x49C747: call    sub_4EA010
0x49C74C: mov     edx, ds:0B333A0h
0x49C752: mov     ecx, [edx+4]
0x49C755: add     esp, 8
0x49C758: push    0
0x49C75A: call    sub_483CD0
0x49C75F: mov     ecx, [ebp+arg_4]; this
0x49C762: lea     eax, [esp+2E4h+a2]
0x49C769: push    eax; a2
0x49C76A: call    NiAVObject_Render
0x49C76F: mov     ecx, [esp+2E4h+var_2D0]
0x49C773: mov     edx, [ecx]
0x49C775: mov     eax, [edx+50h]
0x49C778: call    eax
0x49C77A: mov     ecx, ds:0B43104h
0x49C780: mov     ecx, [ecx+8ACh]
0x49C786: mov     edx, [ecx]
0x49C788: mov     eax, [edx+64h]
0x49C78B: push    0
0x49C78D: push    0
0x49C78F: push    98h ; '˜'
0x49C794: call    eax
0x49C796: fld     dword ptr ds:0A3F424h
0x49C79C: push    ecx
0x49C79D: mov     ecx, [esp+2E8h+var_2B0]
0x49C7A1: fstp    [esp+2E8h+var_2E8]
0x49C7A4: push    ecx
0x49C7A5: call    sub_4EA010
0x49C7AA: mov     edx, ds:0B333A0h
0x49C7B0: mov     ecx, [edx+4]
0x49C7B3: add     esp, 8
0x49C7B6: push    1
0x49C7B8: call    sub_483CD0
0x49C7BD: and     word ptr [ebx+18h], 0FFFEh
0x49C7C3: mov     edi, ds:0B3F928h
0x49C7C9: mov     esi, [edi+8]
0x49C7CC: add     edi, 8
0x49C7CF: cmp     esi, [esp+2E4h+var_2CC]
0x49C7D3: jz      short loc_49C809
0x49C7D5: test    esi, esi
0x49C7D7: jz      short loc_49C7F5
0x49C7D9: lea     eax, [esi+4]
0x49C7DC: push    eax; lpAddend
0x49C7DD: call    dword ptr ds:0A2807Ch
0x49C7E3: test    eax, eax
0x49C7E5: jnz     short loc_49C7F5
0x49C7E7: test    esi, esi
0x49C7E9: jz      short loc_49C7F5
0x49C7EB: mov     edx, [esi]
0x49C7ED: mov     eax, [edx]
0x49C7EF: push    1
0x49C7F1: mov     ecx, esi
0x49C7F3: call    eax
0x49C7F5: mov     eax, [esp+2E4h+var_2CC]
0x49C7F9: test    eax, eax
0x49C7FB: mov     [edi], eax
0x49C7FD: jz      short loc_49C809
0x49C7FF: add     eax, 4
0x49C802: push    eax; lpAddend
0x49C803: call    dword ptr ds:0A28078h
0x49C809: mov     byte ptr ds:0B42CE8h, 0
0x49C810: mov     dword ptr [esp+2E4h+a2+0Ch], 0
0x49C81B: call    NiRenderer_EndScene
0x49C820: cmp     [esp+2E4h+var_2B5], 0
0x49C825: mov     eax, ds:0B35230h
0x49C82A: mov     edi, 1
0x49C82F: mov     esi, 0FFFEh
0x49C834: jz      short loc_49C83C
0x49C836: or      [eax+18h], di
0x49C83A: jmp     short loc_49C840
0x49C83C: and     [eax+18h], si
0x49C840: mov     eax, ds:0B35234h
0x49C845: test    eax, eax
0x49C847: jz      short loc_49C85A
0x49C849: cmp     byte ptr [esp+2E4h+var_2C8+3], 0
0x49C84E: jz      short loc_49C856
0x49C850: or      [eax+18h], di
0x49C854: jmp     short loc_49C85A
0x49C856: and     [eax+18h], si
0x49C85A: mov     ecx, [esp+2E4h+var_25C]
0x49C861: push    ecx
0x49C862: call    sub_7B2130
0x49C867: fldz
0x49C869: mov     edx, [esp+2E8h+var_2AC]
0x49C86D: mov     eax, [esp+2E8h+var_2A8]
0x49C871: mov     ecx, [esp+2E8h+var_2A4]
0x49C875: add     esp, 4
0x49C878: mov     [ebx+54h], edx
0x49C87B: push    edi; a3
0x49C87C: mov     [ebx+58h], eax
0x49C87F: push    ecx
0x49C880: mov     [ebx+5Ch], ecx
0x49C883: fstp    dword ptr [esp+2ECh+var_2F0+4]; a2
0x49C886: mov     ecx, ebx; this
0x49C888: call    NiAVObject_UpdateNiAVObject
0x49C88D: mov     ecx, ds:0B333C4h
0x49C893: push    edi
0x49C894: call    PlayerCharacter_GetPlayerNode
0x49C899: cmp     [esp+2E4h+var_2B6], 0
0x49C89E: jz      short loc_49C8A6
0x49C8A0: or      [eax+18h], di
0x49C8A4: jmp     short loc_49C8AA
0x49C8A6: and     [eax+18h], si
0x49C8AA: mov     eax, [esp+2E4h+var_2A0]
0x49C8AE: test    eax, eax
0x49C8B0: jz      short loc_49C8C3
0x49C8B2: cmp     byte ptr [esp+2E4h+var_2C8+2], 0
0x49C8B7: jz      short loc_49C8BF
0x49C8B9: or      [eax+18h], di
0x49C8BD: jmp     short loc_49C8C3
0x49C8BF: and     [eax+18h], si
0x49C8C3: xor     esi, esi
0x49C8C5: cmp     esi, ds:0B06A2Ch
0x49C8CB: jnb     short loc_49C931
0x49C8CD: xor     ebx, ebx
0x49C8CF: nop
0x49C8D0: cmp     ebx, ds:0B06A2Ch
0x49C8D6: jnb     short loc_49C92C
0x49C8D8: mov     edx, ds:0B333A0h
0x49C8DE: mov     ecx, [edx+8]
0x49C8E1: push    ebx
0x49C8E2: push    esi
0x49C8E3: call    GetGridEntry
0x49C8E8: cmp     esi, [esp+2E4h+var_2C4]
0x49C8EC: mov     edi, eax
0x49C8EE: jl      short loc_49C907
0x49C8F0: mov     ecx, [esp+2E4h+var_2C4]
0x49C8F4: cmp     ebx, ecx
0x49C8F6: jl      short loc_49C907
0x49C8F8: mov     eax, ds:0B06A2Ch
0x49C8FD: sub     eax, ecx
0x49C8FF: cmp     esi, eax
0x49C901: jnb     short loc_49C907
0x49C903: cmp     ebx, eax
0x49C905: jb      short loc_49C927
0x49C907: test    edi, edi
0x49C909: jz      short loc_49C927
0x49C90B: mov     ecx, [edi]; this
0x49C90D: test    ecx, ecx
0x49C90F: jz      short loc_49C927
0x49C911: call    TESObjectCELL_GetNiNode?
0x49C916: test    eax, eax
0x49C918: jz      short loc_49C927
0x49C91A: mov     ecx, [edi]; this
0x49C91C: call    TESObjectCELL_GetNiNode?
0x49C921: and     word ptr [eax+18h], 0FFFEh
0x49C927: add     ebx, 1
0x49C92A: jmp     short loc_49C8D0
0x49C92C: add     esi, 1
0x49C92F: jmp     short loc_49C8C5
0x49C931: cmp     dword ptr ds:0B45DCCh, 0
0x49C938: jz      loc_49C9D1
0x49C93E: mov     eax, [esp+2E4h+var_2C0]
0x49C942: mov     eax, [eax+4]
0x49C945: test    eax, eax
0x49C947: jz      short loc_49C959
0x49C949: mov     esi, [esp+2E4h+var_2C0]
0x49C94D: mov     cl, byte ptr [esp+2E4h+var_260]
0x49C954: add     eax, 20h ; ' '
0x49C957: jmp     short loc_49C968
0x49C959: xor     esi, esi
0x49C95B: mov     [esp+2E4h+var_2C0], esi
0x49C95F: lea     eax, [esp+2E4h+var_2C0]
0x49C963: mov     ecx, 1
0x49C968: test    cl, 1
0x49C96B: mov     edi, [eax]
0x49C96D: jz      short loc_49C98B
0x49C96F: test    esi, esi
0x49C971: jz      short loc_49C98B
0x49C973: lea     ecx, [esi+4]
0x49C976: push    ecx; lpAddend
0x49C977: call    dword ptr ds:0A2807Ch
0x49C97D: test    eax, eax
0x49C97F: jnz     short loc_49C98B
0x49C981: mov     edx, [esi]
0x49C983: mov     eax, [edx]
0x49C985: push    1
0x49C987: mov     ecx, esi
0x49C989: call    eax
0x49C98B: mov     ebx, ds:0B45DCCh
0x49C991: mov     esi, [ebx+108h]
0x49C997: add     ebx, 108h
0x49C99D: cmp     esi, edi
0x49C99F: jz      short loc_49C9D1
0x49C9A1: test    esi, esi
0x49C9A3: jz      short loc_49C9C1
0x49C9A5: lea     ecx, [esi+4]
0x49C9A8: push    ecx; lpAddend
0x49C9A9: call    dword ptr ds:0A2807Ch
0x49C9AF: test    eax, eax
0x49C9B1: jnz     short loc_49C9C1
0x49C9B3: test    esi, esi
0x49C9B5: jz      short loc_49C9C1
0x49C9B7: mov     edx, [esi]
0x49C9B9: mov     eax, [edx]
0x49C9BB: push    1
0x49C9BD: mov     ecx, esi
0x49C9BF: call    eax
0x49C9C1: test    edi, edi
0x49C9C3: mov     [ebx], edi
0x49C9C5: jz      short loc_49C9D1
0x49C9C7: add     edi, 4
0x49C9CA: push    edi; lpAddend
0x49C9CB: call    dword ptr ds:0A28078h
0x49C9D1: mov     esi, [esp+2E4h+var_2CC]
0x49C9D5: test    esi, esi
0x49C9D7: mov     byte ptr [esp+2E4h+var_4], 2
0x49C9DF: jz      short loc_49C9F9
0x49C9E1: lea     ecx, [esi+4]
0x49C9E4: push    ecx; lpAddend
0x49C9E5: call    dword ptr ds:0A2807Ch
0x49C9EB: test    eax, eax
0x49C9ED: jnz     short loc_49C9F9
0x49C9EF: mov     edx, [esi]
0x49C9F1: mov     eax, [edx]
0x49C9F3: push    1
0x49C9F5: mov     ecx, esi
0x49C9F7: call    eax
0x49C9F9: mov     esi, [esp+2E4h+var_2D0]
0x49C9FD: lea     ecx, [esi+4]
0x49CA00: push    ecx; lpAddend
0x49CA01: mov     byte ptr [esp+2E8h+var_4], 1
0x49CA09: call    dword ptr ds:0A2807Ch
0x49CA0F: test    eax, eax
0x49CA11: jnz     short loc_49CA1D
0x49CA13: mov     edx, [esi]
0x49CA15: mov     eax, [edx]
0x49CA17: push    1
0x49CA19: mov     ecx, esi
0x49CA1B: call    eax
0x49CA1D: lea     ecx, [esp+2E4h+a2]; this
0x49CA24: mov     [esp+2E4h+var_4], 0FFFFFFFFh
0x49CA2F: call    ??1BSCullingProcess@@UAE@XZ; BSCullingProcess::~BSCullingProcess(void)
0x49CA34: mov     ecx, dword ptr [esp+2E4h+var_C]
0x49CA3B: mov     large fs:0, ecx
0x49CA42: pop     ecx
0x49CA43: pop     edi
0x49CA44: pop     esi
0x49CA45: pop     ebx
0x49CA46: mov     esp, ebp
0x49CA48: pop     ebp
0x49CA49: retn    8
