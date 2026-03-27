0x6FC010: push    0FFFFFFFFh
0x6FC012: push    offset SEH_6FC010
0x6FC017: mov     eax, large fs:0
0x6FC01D: push    eax
0x6FC01E: sub     esp, 0D0h
0x6FC024: push    ebx
0x6FC025: push    ebp
0x6FC026: push    esi
0x6FC027: push    edi
0x6FC028: mov     eax, ds:0B30AACh
0x6FC02D: xor     eax, esp
0x6FC02F: push    eax
0x6FC030: lea     eax, [esp+0F0h+var_C]
0x6FC037: mov     large fs:0, eax
0x6FC03D: push    0DCh ; 'Ü'; Size
0x6FC042: call    FormHeapAlloc
0x6FC047: add     esp, 4
0x6FC04A: mov     [esp+0F0h+var_8C], eax
0x6FC04E: xor     edi, edi
0x6FC050: cmp     eax, edi
0x6FC052: mov     [esp+0F0h+var_4], edi
0x6FC059: jz      short loc_6FC069
0x6FC05B: push    edi
0x6FC05C: mov     ecx, eax; this
0x6FC05E: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x6FC063: mov     [esp+0F0h+var_74], eax
0x6FC067: jmp     short loc_6FC06D
0x6FC069: mov     [esp+0F0h+var_74], edi
0x6FC06D: mov     ecx, [esp+0F0h+var_74]
0x6FC071: push    offset aBstestobjectsS; "BSTestObjects Sphere"
0x6FC076: mov     [esp+0F4h+var_4], 0FFFFFFFFh
0x6FC081: call    NiObjectNET_SetName
0x6FC086: fild    [esp+0F0h+arg_8]
0x6FC08D: mov     eax, [esp+0F0h+arg_8]
0x6FC094: test    eax, eax
0x6FC096: jge     short loc_6FC09E
0x6FC098: fadd    dword ptr ds:0A2FC78h
0x6FC09E: fstp    [esp+0F0h+var_DC]
0x6FC0A2: mov     eax, [esp+0F0h+arg_4]
0x6FC0A9: fld     dword ptr ds:0B3F9A4h
0x6FC0AF: mov     ecx, eax
0x6FC0B1: test    ecx, ecx
0x6FC0B3: fld     st
0x6FC0B5: fld     [esp+0F0h+var_DC]
0x6FC0B9: mov     [esp+0F0h+var_8C], ecx
0x6FC0BD: fld     st
0x6FC0BF: fdivp   st(2), st
0x6FC0C1: fxch    st(1)
0x6FC0C3: fstp    [esp+0F0h+var_64]
0x6FC0CA: fild    [esp+0F0h+var_8C]
0x6FC0CE: jge     short loc_6FC0D6
0x6FC0D0: fadd    dword ptr ds:0A2FC78h
0x6FC0D6: fstp    [esp+0F0h+var_DC]
0x6FC0DA: lea     esi, [eax+eax+2]
0x6FC0DE: fxch    st(1)
0x6FC0E0: xor     ecx, ecx
0x6FC0E2: fadd    st, st
0x6FC0E4: mov     eax, esi
0x6FC0E6: fld     [esp+0F0h+var_DC]
0x6FC0EA: mov     edx, 0Ch
0x6FC0EF: fld     st
0x6FC0F1: mul     edx
0x6FC0F3: fdivp   st(2), st
0x6FC0F5: seto    cl
0x6FC0F8: neg     ecx
0x6FC0FA: or      ecx, eax
0x6FC0FC: push    ecx; Size
0x6FC0FD: fxch    st(1)
0x6FC0FF: fstp    [esp+0F4h+var_68]
0x6FC106: fld1
0x6FC108: fld     st
0x6FC10A: fdivrp  st(2), st
0x6FC10C: fxch    st(1)
0x6FC10E: fstp    [esp+0F4h+var_70]
0x6FC115: fdivrp  st(1), st
0x6FC117: fstp    [esp+0F4h+var_6C]
0x6FC11E: call    FormHeapAlloc
0x6FC123: mov     dword ptr [esp+0F4h+var_B8], eax
0x6FC127: xor     ecx, ecx
0x6FC129: mov     eax, esi
0x6FC12B: mov     edx, 0Ch
0x6FC130: mul     edx
0x6FC132: seto    cl
0x6FC135: neg     ecx
0x6FC137: or      ecx, eax
0x6FC139: push    ecx; Size
0x6FC13A: call    FormHeapAlloc
0x6FC13F: add     esp, 8
0x6FC142: cmp     [esp+0F0h+arg_C], edi
0x6FC149: mov     ebx, eax
0x6FC14B: mov     [esp+0F0h+var_A8], ebx
0x6FC14F: jz      short loc_6FC19E
0x6FC151: xor     ecx, ecx
0x6FC153: mov     eax, esi
0x6FC155: mov     edx, 10h
0x6FC15A: mul     edx
0x6FC15C: seto    cl
0x6FC15F: neg     ecx
0x6FC161: or      ecx, eax
0x6FC163: push    ecx; Size
0x6FC164: call    FormHeapAlloc
0x6FC169: mov     edi, eax
0x6FC16B: add     esp, 4
0x6FC16E: mov     [esp+0F0h+var_8C], edi
0x6FC172: test    edi, edi
0x6FC174: mov     [esp+0F0h+var_4], 1
0x6FC17F: jz      short loc_6FC191
0x6FC181: push    offset sub_47EA50
0x6FC186: push    esi
0x6FC187: push    10h
0x6FC189: push    edi
0x6FC18A: call    sub_401080
0x6FC18F: jmp     short loc_6FC193
0x6FC191: xor     edi, edi
0x6FC193: mov     [esp+0F0h+var_4], 0FFFFFFFFh
0x6FC19E: xor     ecx, ecx
0x6FC1A0: mov     eax, esi
0x6FC1A2: mov     edx, 8
0x6FC1A7: mul     edx
0x6FC1A9: seto    cl
0x6FC1AC: mov     dword ptr [esp+0F0h+var_D0+4], edi
0x6FC1B0: neg     ecx
0x6FC1B2: or      ecx, eax
0x6FC1B4: push    ecx; Size
0x6FC1B5: call    FormHeapAlloc
0x6FC1BA: mov     dword ptr [esp+0F4h+var_B8+4], eax
0x6FC1BE: mov     eax, [esp+0F4h+arg_4]
0x6FC1C5: lea     eax, [eax+eax*2]
0x6FC1C8: xor     ecx, ecx
0x6FC1CA: add     eax, eax
0x6FC1CC: mov     edx, 2
0x6FC1D1: mul     edx
0x6FC1D3: seto    cl
0x6FC1D6: neg     ecx
0x6FC1D8: or      ecx, eax
0x6FC1DA: push    ecx; Size
0x6FC1DB: call    FormHeapAlloc
0x6FC1E0: fldz
0x6FC1E2: mov     ecx, dword ptr [esp+0F8h+var_B8]
0x6FC1E6: fst     dword ptr [esp+0F8h+var_C8]
0x6FC1EA: fst     dword ptr [esp+0F8h+var_C8+4]
0x6FC1EE: mov     ebp, eax
0x6FC1F0: fld     [esp+0F8h+arg_0]
0x6FC1F7: mov     eax, dword ptr [esp+0F8h+var_C8]
0x6FC1FB: mov     edx, dword ptr [esp+0F8h+var_C8+4]
0x6FC1FF: fld     st
0x6FC201: mov     [ecx], eax
0x6FC203: fst     [esp+0F8h+var_54]
0x6FC20A: fstp    [esp+0F8h+var_C0]
0x6FC20E: mov     [ecx+4], edx
0x6FC211: mov     eax, [esp+0F8h+var_C0]
0x6FC215: fxch    st(1)
0x6FC217: mov     [ecx+8], eax
0x6FC21A: fst     dword ptr [esp+0F8h+var_C8]
0x6FC21E: mov     edx, dword ptr [esp+0F8h+var_C8]
0x6FC222: fst     dword ptr [esp+0F8h+var_C8+4]
0x6FC226: mov     eax, dword ptr [esp+0F8h+var_C8+4]
0x6FC22A: fld1
0x6FC22C: mov     [ebx], edx
0x6FC22E: fst     [esp+0F8h+var_C0]
0x6FC232: mov     [ebx+4], eax
0x6FC235: mov     eax, [esp+0F8h+arg_C]
0x6FC23C: mov     edx, [esp+0F8h+var_C0]
0x6FC240: add     esp, 8
0x6FC243: xor     esi, esi
0x6FC245: test    eax, eax
0x6FC247: mov     [ebx+8], edx
0x6FC24A: jz      short loc_6FC266
0x6FC24C: mov     edi, [eax]
0x6FC24E: mov     edx, dword ptr [esp+0F0h+var_D0+4]
0x6FC252: mov     [edx], edi
0x6FC254: mov     edi, [eax+4]
0x6FC257: mov     [edx+4], edi
0x6FC25A: mov     edi, [eax+8]
0x6FC25D: mov     [edx+8], edi
0x6FC260: mov     eax, [eax+0Ch]
0x6FC263: mov     [edx+0Ch], eax
0x6FC266: cmp     [esp+0F0h+arg_4], esi
0x6FC26D: fld     dword ptr ds:0A3D65Ch
0x6FC273: mov     eax, dword ptr [esp+0F0h+var_B8+4]
0x6FC277: fstp    [esp+0F0h+var_8C]
0x6FC27B: mov     edx, [esp+0F0h+var_8C]
0x6FC27F: fxch    st(1)
0x6FC281: fst     [esp+0F0h+var_88]
0x6FC285: mov     [eax], edx
0x6FC287: mov     edx, [esp+0F0h+var_88]
0x6FC28B: fst     [esp+0F0h+var_A4]
0x6FC28F: mov     [eax+4], edx
0x6FC292: mov     edi, 1
0x6FC297: mov     [esp+0F0h+var_D8], esi
0x6FC29B: jbe     loc_6FC496
0x6FC2A1: fstp    st
0x6FC2A3: fstp    st(1)
0x6FC2A5: fstp    st
0x6FC2A7: fld     [esp+0F0h+var_64]
0x6FC2AE: fst     [esp+0F0h+var_B0]
0x6FC2B2: call    __CIsin
0x6FC2B7: fstp    [esp+0F0h+var_90]
0x6FC2BB: fld     [esp+0F0h+var_B0]
0x6FC2BF: call    __CIcos
0x6FC2C4: fstp    [esp+0F0h+var_DC]
0x6FC2C8: fld     [esp+0F0h+var_DC]
0x6FC2CC: mov     eax, dword ptr [esp+0F0h+var_B8+4]
0x6FC2D0: mov     ecx, dword ptr [esp+0F0h+var_D0+4]
0x6FC2D4: fstp    [esp+0F0h+var_DC]
0x6FC2D8: fld     [esp+0F0h+var_DC]
0x6FC2DC: add     eax, 8
0x6FC2DF: fld     [esp+0F0h+var_54]
0x6FC2E6: mov     dword ptr [esp+0F0h+var_A0+4], eax
0x6FC2EA: mov     eax, dword ptr [esp+0F0h+var_B8]
0x6FC2EE: fmul    st, st(1)
0x6FC2F0: add     ecx, 10h
0x6FC2F3: add     ebx, 0Ch
0x6FC2F6: sub     eax, [esp+0F0h+var_A8]
0x6FC2FA: fstp    [esp+0F0h+var_C0]
0x6FC2FE: mov     dword ptr [esp+0F0h+var_D0], ecx
0x6FC302: fstp    [esp+0F0h+var_78]
0x6FC306: mov     [esp+0F0h+var_D4], eax
0x6FC30A: fld     [esp+0F0h+var_6C]
0x6FC311: fstp    dword ptr [esp+0F0h+var_98+4]
0x6FC315: jmp     short loc_6FC322
0x6FC317: jmp     short loc_6FC320
0x6FC319: align 10h
0x6FC320: fstp    st
0x6FC322: mov     edx, [esp+0F0h+var_D8]
0x6FC326: fild    [esp+0F0h+var_D8]
0x6FC32A: test    edx, edx
0x6FC32C: jge     short loc_6FC334
0x6FC32E: fadd    dword ptr ds:0A2FC78h
0x6FC334: fmul    [esp+0F0h+var_68]
0x6FC33B: fstp    [esp+0F0h+var_BC]
0x6FC33F: fld     [esp+0F0h+var_BC]
0x6FC343: call    __CIsin
0x6FC348: fstp    [esp+0F0h+var_DC]
0x6FC34C: fld     [esp+0F0h+var_DC]
0x6FC350: fstp    [esp+0F0h+var_DC]
0x6FC354: fld     [esp+0F0h+var_DC]
0x6FC358: fchs
0x6FC35A: fmul    [esp+0F0h+var_90]
0x6FC35E: fstp    [esp+0F0h+var_84]
0x6FC362: fld     [esp+0F0h+var_BC]
0x6FC366: call    __CIcos
0x6FC36B: fstp    [esp+0F0h+var_DC]
0x6FC36F: fld     [esp+0F0h+var_DC]
0x6FC373: mov     eax, [esp+0F0h+var_D4]
0x6FC377: fstp    [esp+0F0h+var_DC]
0x6FC37B: fld     [esp+0F0h+var_DC]
0x6FC37F: fmul    [esp+0F0h+var_90]
0x6FC383: fstp    [esp+0F0h+var_DC]
0x6FC387: fld     [esp+0F0h+var_84]
0x6FC38B: fld     st
0x6FC38D: fld     [esp+0F0h+arg_0]
0x6FC394: fld     st
0x6FC396: fmulp   st(2), st
0x6FC398: fxch    st(1)
0x6FC39A: fstp    dword ptr [esp+0F0h+var_C8]
0x6FC39E: mov     ecx, dword ptr [esp+0F0h+var_C8]
0x6FC3A2: mov     [eax+ebx], ecx
0x6FC3A5: mov     ecx, [esp+0F0h+var_C0]
0x6FC3A9: fld     st
0x6FC3AB: fst     [esp+0F0h+var_54]
0x6FC3B2: fld     [esp+0F0h+var_DC]
0x6FC3B6: fld     st
0x6FC3B8: fmulp   st(2), st
0x6FC3BA: fxch    st(1)
0x6FC3BC: fstp    dword ptr [esp+0F0h+var_C8+4]
0x6FC3C0: mov     edx, dword ptr [esp+0F0h+var_C8+4]
0x6FC3C4: mov     [eax+ebx+4], edx
0x6FC3C8: fxch    st(2)
0x6FC3CA: mov     [eax+ebx+8], ecx
0x6FC3CE: fstp    [esp+0F0h+var_80]
0x6FC3D2: mov     edx, [esp+0F0h+var_80]
0x6FC3D6: fxch    st(1)
0x6FC3D8: mov     ecx, [esp+0F0h+var_78]
0x6FC3DC: fstp    [esp+0F0h+var_7C]
0x6FC3E0: mov     eax, [esp+0F0h+var_7C]
0x6FC3E4: mov     [ebx], edx
0x6FC3E6: mov     [ebx+4], eax
0x6FC3E9: mov     eax, [esp+0F0h+arg_C]
0x6FC3F0: test    eax, eax
0x6FC3F2: mov     [ebx+8], ecx
0x6FC3F5: mov     ecx, dword ptr [esp+0F0h+var_D0]
0x6FC3F9: jz      short loc_6FC411
0x6FC3FB: mov     edx, [eax]
0x6FC3FD: mov     [ecx], edx
0x6FC3FF: mov     edx, [eax+4]
0x6FC402: mov     [ecx+4], edx
0x6FC405: mov     edx, [eax+8]
0x6FC408: mov     [ecx+8], edx
0x6FC40B: mov     eax, [eax+0Ch]
0x6FC40E: mov     [ecx+0Ch], eax
0x6FC411: fld     [esp+0F0h+var_A4]
0x6FC415: mov     eax, dword ptr [esp+0F0h+var_A0+4]
0x6FC419: fst     dword ptr [esp+0F0h+var_98]
0x6FC41D: mov     edx, dword ptr [esp+0F0h+var_98]
0x6FC421: fadd    [esp+0F0h+var_70]
0x6FC428: add     ecx, 10h
0x6FC42B: mov     [eax], edx
0x6FC42D: mov     edx, dword ptr [esp+0F0h+var_98+4]
0x6FC431: mov     dword ptr [esp+0F0h+var_D0], ecx
0x6FC435: fstp    [esp+0F0h+var_A4]
0x6FC439: mov     ecx, [esp+0F0h+var_D8]
0x6FC43D: mov     [eax+4], edx
0x6FC440: add     eax, 8
0x6FC443: add     edi, 1
0x6FC446: add     ebx, 0Ch
0x6FC449: test    ecx, ecx
0x6FC44B: mov     dword ptr [esp+0F0h+var_A0+4], eax
0x6FC44F: jbe     short loc_6FC474
0x6FC451: mov     word ptr [ebp+esi*2+0], 0
0x6FC458: movzx   eax, di
0x6FC45B: add     esi, 1
0x6FC45E: lea     edx, [eax-2]
0x6FC461: mov     [ebp+esi*2+0], dx
0x6FC466: add     esi, 1
0x6FC469: add     eax, 0FFFFFFFFh
0x6FC46C: mov     [ebp+esi*2+0], ax
0x6FC471: add     esi, 1
0x6FC474: add     ecx, 1
0x6FC477: cmp     ecx, [esp+0F0h+arg_4]
0x6FC47E: mov     [esp+0F0h+var_D8], ecx
0x6FC482: jb      loc_6FC320
0x6FC488: fldz
0x6FC48A: mov     ebx, [esp+0F0h+var_A8]
0x6FC48E: fld1
0x6FC490: mov     ecx, dword ptr [esp+0F0h+var_B8]
0x6FC494: fxch    st(1)
0x6FC496: mov     word ptr [ebp+esi*2+0], 0
0x6FC49D: fst     dword ptr [esp+0F0h+var_C8]
0x6FC4A1: mov     edx, dword ptr [esp+0F0h+var_C8]
0x6FC4A5: fst     dword ptr [esp+0F0h+var_C8+4]
0x6FC4A9: add     esi, 1
0x6FC4AC: fxch    st(2)
0x6FC4AE: lea     eax, [edi-1]
0x6FC4B1: fchs
0x6FC4B3: mov     [ebp+esi*2+0], ax
0x6FC4B8: fstp    [esp+0F0h+var_C0]
0x6FC4BC: mov     word ptr [ebp+esi*2+2], 1
0x6FC4C3: fxch    st(1)
0x6FC4C5: lea     eax, [edi+edi*2]
0x6FC4C8: fst     dword ptr [esp+0F0h+var_C8]
0x6FC4CC: add     esi, 1
0x6FC4CF: add     eax, eax
0x6FC4D1: add     eax, eax
0x6FC4D3: mov     [eax+ecx], edx
0x6FC4D6: mov     edx, dword ptr [esp+0F0h+var_C8+4]
0x6FC4DA: fstp    dword ptr [esp+0F0h+var_C8+4]
0x6FC4DE: fld     dword ptr ds:0A30634h
0x6FC4E4: mov     [eax+ecx+4], edx
0x6FC4E8: mov     edx, [esp+0F0h+var_C0]
0x6FC4EC: fstp    [esp+0F0h+var_C0]
0x6FC4F0: mov     [eax+ecx+8], edx
0x6FC4F4: mov     ecx, dword ptr [esp+0F0h+var_C8]
0x6FC4F8: mov     edx, dword ptr [esp+0F0h+var_C8+4]
0x6FC4FC: mov     [eax+ebx], ecx
0x6FC4FF: mov     ecx, [esp+0F0h+var_C0]
0x6FC503: mov     [eax+ebx+4], edx
0x6FC507: mov     [eax+ebx+8], ecx
0x6FC50B: mov     ecx, [esp+0F0h+arg_C]
0x6FC512: add     esi, 1
0x6FC515: test    ecx, ecx
0x6FC517: mov     dword ptr [esp+0F0h+var_B0], edi
0x6FC51B: jz      short loc_6FC53C
0x6FC51D: mov     edx, [ecx]
0x6FC51F: mov     eax, edi
0x6FC521: shl     eax, 4
0x6FC524: add     eax, dword ptr [esp+0F0h+var_D0+4]
0x6FC528: mov     [eax], edx
0x6FC52A: mov     edx, [ecx+4]
0x6FC52D: mov     [eax+4], edx
0x6FC530: mov     edx, [ecx+8]
0x6FC533: mov     [eax+8], edx
0x6FC536: mov     ecx, [ecx+0Ch]
0x6FC539: mov     [eax+0Ch], ecx
0x6FC53C: fld     dword ptr ds:0A3D65Ch
0x6FC542: mov     eax, dword ptr [esp+0F0h+var_B8+4]
0x6FC546: fstp    [esp+0F0h+var_8C]
0x6FC54A: mov     edx, [esp+0F0h+var_8C]
0x6FC54E: mov     [eax+edi*8], edx
0x6FC551: fst     [esp+0F0h+var_88]
0x6FC555: mov     ecx, [esp+0F0h+var_88]
0x6FC559: mov     [eax+edi*8+4], ecx
0x6FC55D: fld     dword ptr ds:0B3F9A4h
0x6FC563: fsub    [esp+0F0h+var_64]
0x6FC56A: mov     eax, [esp+0F0h+arg_4]
0x6FC571: add     edi, 1
0x6FC574: test    eax, eax
0x6FC576: fstp    [esp+0F0h+var_D4]
0x6FC57A: mov     dword ptr [esp+0F0h+var_D0], eax
0x6FC57E: fstp    [esp+0F0h+var_A4]
0x6FC582: fld     [esp+0F0h+var_6C]
0x6FC589: fst     [esp+0F0h+var_C8]
0x6FC58D: fld1
0x6FC58F: fsubrp  st(1), st
0x6FC591: fstp    [esp+0F0h+var_D8]
0x6FC595: jbe     loc_6FC78E
0x6FC59B: fld     [esp+0F0h+var_D4]
0x6FC59F: fst     [esp+0F0h+var_98]
0x6FC5A3: call    __CIsin
0x6FC5A8: fstp    [esp+0F0h+var_90]
0x6FC5AC: fld     [esp+0F0h+var_98]
0x6FC5B0: call    __CIcos
0x6FC5B5: fstp    [esp+0F0h+var_DC]
0x6FC5B9: fld     [esp+0F0h+var_DC]
0x6FC5BD: mov     edx, dword ptr [esp+0F0h+var_B8+4]
0x6FC5C1: fstp    [esp+0F0h+var_DC]
0x6FC5C5: lea     eax, [edx+edi*8]
0x6FC5C8: fld     [esp+0F0h+var_DC]
0x6FC5CC: mov     [esp+0F0h+var_BC], eax
0x6FC5D0: fld     [esp+0F0h+var_54]
0x6FC5D7: mov     eax, edi
0x6FC5D9: fmul    st, st(1)
0x6FC5DB: shl     eax, 4
0x6FC5DE: add     eax, dword ptr [esp+0F0h+var_D0+4]
0x6FC5E2: lea     ecx, [edi+edi*2]
0x6FC5E5: fstp    [esp+0F0h+var_78]
0x6FC5E9: lea     ebx, [ebx+ecx*4]
0x6FC5EC: fstp    [esp+0F0h+var_58]
0x6FC5F3: fld     [esp+0F0h+var_D8]
0x6FC5F7: mov     [esp+0F0h+var_D8], eax
0x6FC5FB: mov     eax, dword ptr [esp+0F0h+var_B8]
0x6FC5FF: fstp    dword ptr [esp+0F0h+var_98+4]
0x6FC603: sub     eax, [esp+0F0h+var_A8]
0x6FC607: mov     [esp+0F0h+var_D4], eax
0x6FC60B: jmp     short loc_6FC610
0x6FC60D: align 10h
0x6FC610: mov     eax, dword ptr [esp+0F0h+var_D0]
0x6FC614: cmp     eax, [esp+0F0h+arg_4]
0x6FC61B: jnz     short loc_6FC621
0x6FC61D: fldz
0x6FC61F: jmp     short loc_6FC63A
0x6FC621: test    eax, eax
0x6FC623: mov     [esp+0F0h+var_8C], eax
0x6FC627: fild    [esp+0F0h+var_8C]
0x6FC62B: jge     short loc_6FC633
0x6FC62D: fadd    dword ptr ds:0A2FC78h
0x6FC633: fmul    [esp+0F0h+var_68]
0x6FC63A: fstp    dword ptr [esp+0F0h+var_A0+4]
0x6FC63E: fld     dword ptr [esp+0F0h+var_A0+4]
0x6FC642: call    __CIsin
0x6FC647: fstp    [esp+0F0h+var_DC]
0x6FC64B: fld     [esp+0F0h+var_DC]
0x6FC64F: fstp    [esp+0F0h+var_DC]
0x6FC653: fld     [esp+0F0h+var_DC]
0x6FC657: fchs
0x6FC659: fmul    [esp+0F0h+var_90]
0x6FC65D: fstp    [esp+0F0h+var_84]
0x6FC661: fld     dword ptr [esp+0F0h+var_A0+4]
0x6FC665: call    __CIcos
0x6FC66A: fstp    [esp+0F0h+var_DC]
0x6FC66E: fld     [esp+0F0h+var_DC]
0x6FC672: mov     eax, [esp+0F0h+var_D4]
0x6FC676: fstp    [esp+0F0h+var_DC]
0x6FC67A: fld     [esp+0F0h+var_90]
0x6FC67E: fmul    [esp+0F0h+var_DC]
0x6FC682: fstp    [esp+0F0h+var_DC]
0x6FC686: fld     [esp+0F0h+var_84]
0x6FC68A: fld     st
0x6FC68C: fld     [esp+0F0h+arg_0]
0x6FC693: fld     st
0x6FC695: fmulp   st(2), st
0x6FC697: fxch    st(1)
0x6FC699: fstp    [esp+0F0h+var_80]
0x6FC69D: mov     edx, [esp+0F0h+var_80]
0x6FC6A1: fld     [esp+0F0h+var_DC]
0x6FC6A5: mov     [ebx+eax], edx
0x6FC6A8: mov     edx, [esp+0F0h+var_78]
0x6FC6AC: fld     st
0x6FC6AE: fmulp   st(2), st
0x6FC6B0: fxch    st(1)
0x6FC6B2: fstp    [esp+0F0h+var_7C]
0x6FC6B6: mov     ecx, [esp+0F0h+var_7C]
0x6FC6BA: mov     [ebx+eax+4], ecx
0x6FC6BE: fxch    st(1)
0x6FC6C0: mov     [ebx+eax+8], edx
0x6FC6C4: fstp    [esp+0F0h+var_60]
0x6FC6CB: mov     eax, [esp+0F0h+var_60]
0x6FC6D2: mov     edx, [esp+0F0h+var_58]
0x6FC6D9: fstp    [esp+0F0h+var_5C]
0x6FC6E0: mov     ecx, [esp+0F0h+var_5C]
0x6FC6E7: mov     [ebx], eax
0x6FC6E9: mov     eax, [esp+0F0h+arg_C]
0x6FC6F0: test    eax, eax
0x6FC6F2: mov     [ebx+4], ecx
0x6FC6F5: mov     ecx, [esp+0F0h+var_D8]
0x6FC6F9: mov     [ebx+8], edx
0x6FC6FC: jz      short loc_6FC714
0x6FC6FE: mov     edx, [eax]
0x6FC700: mov     [ecx], edx
0x6FC702: mov     edx, [eax+4]
0x6FC705: mov     [ecx+4], edx
0x6FC708: mov     edx, [eax+8]
0x6FC70B: mov     [ecx+8], edx
0x6FC70E: mov     eax, [eax+0Ch]
0x6FC711: mov     [ecx+0Ch], eax
0x6FC714: fld     [esp+0F0h+var_A4]
0x6FC718: mov     eax, [esp+0F0h+var_BC]
0x6FC71C: fst     dword ptr [esp+0F0h+var_98]
0x6FC720: mov     edx, dword ptr [esp+0F0h+var_98]
0x6FC724: fsub    [esp+0F0h+var_70]
0x6FC72B: mov     [eax], edx
0x6FC72D: mov     edx, dword ptr [esp+0F0h+var_98+4]
0x6FC731: mov     [eax+4], edx
0x6FC734: add     eax, 8
0x6FC737: fstp    [esp+0F0h+var_A4]
0x6FC73B: mov     [esp+0F0h+var_BC], eax
0x6FC73F: mov     eax, dword ptr [esp+0F0h+var_D0]
0x6FC743: add     ecx, 10h
0x6FC746: add     edi, 1
0x6FC749: add     ebx, 0Ch
0x6FC74C: cmp     eax, [esp+0F0h+arg_4]
0x6FC753: mov     [esp+0F0h+var_D8], ecx
0x6FC757: jz      short loc_6FC77F
0x6FC759: mov     cx, word ptr [esp+0F0h+var_B0]
0x6FC75E: mov     [ebp+esi*2+0], cx
0x6FC763: movzx   eax, di
0x6FC766: add     esi, 1
0x6FC769: lea     edx, [eax-2]
0x6FC76C: mov     [ebp+esi*2+0], dx
0x6FC771: add     esi, 1
0x6FC774: add     eax, 0FFFFFFFFh
0x6FC777: mov     [ebp+esi*2+0], ax
0x6FC77C: add     esi, 1
0x6FC77F: sub     dword ptr [esp+0F0h+var_D0], 1
0x6FC784: jnz     loc_6FC610
0x6FC78A: mov     ebx, [esp+0F0h+var_A8]
0x6FC78E: mov     eax, dword ptr [esp+0F0h+var_B0]
0x6FC792: mov     [ebp+esi*2+0], ax
0x6FC797: add     esi, 1
0x6FC79A: lea     ecx, [edi-1]
0x6FC79D: mov     [ebp+esi*2+0], cx
0x6FC7A2: add     esi, 1
0x6FC7A5: add     eax, 1
0x6FC7A8: mov     [ebp+esi*2+0], ax
0x6FC7AD: push    0C0h ; 'À'; Size
0x6FC7B2: add     esi, 1
0x6FC7B5: call    FormHeapAlloc
0x6FC7BA: mov     ecx, eax
0x6FC7BC: add     esp, 4
0x6FC7BF: mov     [esp+0F0h+var_8C], ecx
0x6FC7C3: test    ecx, ecx
0x6FC7C5: mov     [esp+0F0h+var_4], 2
0x6FC7D0: jz      short loc_6FC800
0x6FC7D2: mov     eax, 55555556h
0x6FC7D7: imul    esi
0x6FC7D9: push    ebp
0x6FC7DA: mov     eax, edx
0x6FC7DC: shr     eax, 1Fh
0x6FC7DF: add     eax, edx
0x6FC7E1: mov     edx, dword ptr [esp+0F4h+var_B8+4]
0x6FC7E5: push    eax
0x6FC7E6: mov     eax, dword ptr [esp+0F8h+var_D0+4]
0x6FC7EA: push    0
0x6FC7EC: push    1
0x6FC7EE: push    edx
0x6FC7EF: mov     edx, dword ptr [esp+104h+var_B8]
0x6FC7F3: push    eax
0x6FC7F4: push    ebx
0x6FC7F5: push    edx
0x6FC7F6: push    edi
0x6FC7F7: call    sub_7174B0
0x6FC7FC: mov     esi, eax
0x6FC7FE: jmp     short loc_6FC802
0x6FC800: xor     esi, esi
0x6FC802: mov     eax, [esi]
0x6FC804: mov     edx, [eax+90h]
0x6FC80A: mov     ecx, esi
0x6FC80C: mov     [esp+0F0h+var_4], 0FFFFFFFFh
0x6FC817: call    edx
0x6FC819: mov     ebx, [esp+0F0h+var_74]
0x6FC81D: mov     eax, [ebx]
0x6FC81F: mov     edx, [eax+84h]
0x6FC825: push    0
0x6FC827: push    esi
0x6FC828: mov     ecx, ebx
0x6FC82A: call    edx
0x6FC82C: fldz
0x6FC82E: mov     edi, [esp+0F0h+arg_8]
0x6FC835: fstp    [esp+0F0h+var_D8]
0x6FC839: mov     ebp, [esp+0F0h+arg_4]
0x6FC840: add     edi, 0FFFFFFFEh
0x6FC843: lea     esi, [ebp+ebp+2]
0x6FC847: imul    esi, edi
0x6FC84A: xor     ecx, ecx
0x6FC84C: mov     eax, esi
0x6FC84E: mov     edx, 0Ch
0x6FC853: mul     edx
0x6FC855: seto    cl
0x6FC858: mov     [esp+0F0h+var_4C], edi
0x6FC85F: neg     ecx
0x6FC861: or      ecx, eax
0x6FC863: push    ecx; Size
0x6FC864: call    FormHeapAlloc
0x6FC869: mov     [esp+0F4h+var_DC], eax
0x6FC86D: xor     ecx, ecx
0x6FC86F: mov     eax, esi
0x6FC871: mov     edx, 0Ch
0x6FC876: mul     edx
0x6FC878: seto    cl
0x6FC87B: neg     ecx
0x6FC87D: or      ecx, eax
0x6FC87F: push    ecx; Size
0x6FC880: call    FormHeapAlloc
0x6FC885: add     esp, 8
0x6FC888: cmp     [esp+0F0h+arg_C], 0
0x6FC890: mov     [esp+0F0h+var_84], eax
0x6FC894: jz      short loc_6FC8E5
0x6FC896: xor     ecx, ecx
0x6FC898: mov     eax, esi
0x6FC89A: mov     edx, 10h
0x6FC89F: mul     edx
0x6FC8A1: seto    cl
0x6FC8A4: neg     ecx
0x6FC8A6: or      ecx, eax
0x6FC8A8: push    ecx; Size
0x6FC8A9: call    FormHeapAlloc
0x6FC8AE: add     esp, 4
0x6FC8B1: test    eax, eax
0x6FC8B3: jz      short loc_6FC8DD
0x6FC8B5: lea     edx, [esi-1]
0x6FC8B8: test    edx, edx
0x6FC8BA: jl      short loc_6FC8DF
0x6FC8BC: fldz
0x6FC8BE: lea     ecx, [eax+8]
0x6FC8C1: fst     dword ptr [ecx-8]
0x6FC8C4: add     ecx, 10h
0x6FC8C7: sub     edx, 1
0x6FC8CA: fst     dword ptr [ecx-14h]
0x6FC8CD: fst     dword ptr [ecx-10h]
0x6FC8D0: fst     dword ptr [ecx-0Ch]
0x6FC8D3: jns     short loc_6FC8C1
0x6FC8D5: fstp    st
0x6FC8D7: mov     dword ptr [esp+0F0h+var_D0+4], eax
0x6FC8DB: jmp     short loc_6FC8ED
0x6FC8DD: xor     eax, eax
0x6FC8DF: mov     dword ptr [esp+0F0h+var_D0+4], eax
0x6FC8E3: jmp     short loc_6FC8ED
0x6FC8E5: mov     dword ptr [esp+0F0h+var_D0+4], 0
0x6FC8ED: xor     ecx, ecx
0x6FC8EF: mov     eax, esi
0x6FC8F1: mov     edx, 8
0x6FC8F6: mul     edx
0x6FC8F8: seto    cl
0x6FC8FB: neg     ecx
0x6FC8FD: or      ecx, eax
0x6FC8FF: push    ecx; Size
0x6FC900: call    FormHeapAlloc
0x6FC905: mov     [esp+0F4h+var_44], eax
0x6FC90C: xor     ecx, ecx
0x6FC90E: mov     eax, edi
0x6FC910: mov     edx, 2
0x6FC915: mul     edx
0x6FC917: seto    cl
0x6FC91A: neg     ecx
0x6FC91C: or      ecx, eax
0x6FC91E: push    ecx; Size
0x6FC91F: call    FormHeapAlloc
0x6FC924: mov     [esp+0F8h+var_48], eax
0x6FC92B: xor     ecx, ecx
0x6FC92D: mov     eax, esi
0x6FC92F: mov     edx, 2
0x6FC934: mul     edx
0x6FC936: seto    cl
0x6FC939: neg     ecx
0x6FC93B: or      ecx, eax
0x6FC93D: push    ecx; Size
0x6FC93E: call    FormHeapAlloc
0x6FC943: xor     esi, esi
0x6FC945: add     esp, 0Ch
0x6FC948: cmp     edi, esi
0x6FC94A: mov     [esp+0F0h+var_BC], eax
0x6FC94E: mov     dword ptr [esp+0F0h+var_B8+4], esi
0x6FC952: jbe     loc_6FCD1A
0x6FC958: mov     eax, dword ptr [esp+0F0h+var_B8+4]
0x6FC95C: fld     [esp+0F0h+var_64]
0x6FC963: add     eax, 1
0x6FC966: fst     [esp+0F0h+var_B0]
0x6FC96A: test    eax, eax
0x6FC96C: mov     dword ptr [esp+0F0h+var_98], eax
0x6FC970: fild    dword ptr [esp+0F0h+var_98]
0x6FC974: mov     [esp+0F0h+var_8C], eax
0x6FC978: jge     short loc_6FC980
0x6FC97A: fadd    dword ptr ds:0A2FC78h
0x6FC980: fmulp   st(1), st
0x6FC982: mov     dword ptr [esp+0F0h+var_B8], 0
0x6FC98A: fstp    [esp+0F0h+var_D4]
0x6FC98E: fldz
0x6FC990: fstp    [esp+0F0h+var_A4]
0x6FC994: fld     [esp+0F0h+var_D4]
0x6FC998: fst     [esp+0F0h+var_98]
0x6FC99C: call    __CIsin
0x6FC9A1: fstp    [esp+0F0h+var_90]
0x6FC9A5: fld     [esp+0F0h+var_98]
0x6FC9A9: call    __CIcos
0x6FC9AE: fstp    dword ptr [esp+0F0h+var_A0]
0x6FC9B2: fld     dword ptr [esp+0F0h+var_A0]
0x6FC9B6: fstp    [esp+0F0h+var_1C]
0x6FC9BD: fld     [esp+0F0h+var_D8]
0x6FC9C1: fstp    [esp+0F0h+var_5C]
0x6FC9C8: fld     [esp+0F0h+var_98]
0x6FC9CC: fadd    [esp+0F0h+var_B0]
0x6FC9D0: fstp    dword ptr [esp+0F0h+var_A0]
0x6FC9D4: fld     dword ptr [esp+0F0h+var_A0]
0x6FC9D8: fst     [esp+0F0h+var_98]
0x6FC9DC: call    __CIsin
0x6FC9E1: fstp    dword ptr [esp+0F0h+var_54]
0x6FC9E8: fld     [esp+0F0h+var_98]
0x6FC9EC: call    __CIcos
0x6FC9F1: fstp    dword ptr [esp+0F0h+var_A0]
0x6FC9F5: fld     dword ptr [esp+0F0h+var_A0]
0x6FC9F9: mov     eax, [esp+0F0h+var_44]
0x6FCA00: mov     ecx, [esp+0F0h+var_84]
0x6FCA04: fstp    dword ptr [esp+0F0h+var_98]
0x6FCA08: fld     [esp+0F0h+var_D8]
0x6FCA0C: mov     edx, [esp+0F0h+var_DC]
0x6FCA10: fadd    [esp+0F0h+var_C8]
0x6FCA14: lea     ebp, [eax+esi*8]
0x6FCA17: mov     eax, esi
0x6FCA19: lea     edi, [esi+esi*2]
0x6FCA1C: shl     eax, 4
0x6FCA1F: fstp    dword ptr [esp+0F0h+var_A0]
0x6FCA23: add     eax, dword ptr [esp+0F0h+var_D0+4]
0x6FCA27: fld     dword ptr [esp+0F0h+var_A0]
0x6FCA2B: add     edi, edi
0x6FCA2D: fstp    [esp+0F0h+var_7C]
0x6FCA31: add     edi, edi
0x6FCA33: lea     ebx, [edi+ecx]
0x6FCA36: mov     [esp+0F0h+var_D8], eax
0x6FCA3A: add     edi, edx
0x6FCA3C: lea     esp, [esp+0]
0x6FCA40: mov     eax, dword ptr [esp+0F0h+var_B8]
0x6FCA44: cmp     eax, [esp+0F0h+arg_4]
0x6FCA4B: jnz     short loc_6FCA51
0x6FCA4D: fldz
0x6FCA4F: jmp     short loc_6FCA6A
0x6FCA51: test    eax, eax
0x6FCA53: mov     dword ptr [esp+0F0h+var_B0], eax
0x6FCA57: fild    dword ptr [esp+0F0h+var_B0]
0x6FCA5B: jge     short loc_6FCA63
0x6FCA5D: fadd    dword ptr ds:0A2FC78h
0x6FCA63: fmul    [esp+0F0h+var_68]
0x6FCA6A: fstp    dword ptr [esp+0F0h+var_B0]
0x6FCA6E: fld     dword ptr [esp+0F0h+var_B0]
0x6FCA72: call    __CIsin
0x6FCA77: fstp    dword ptr [esp+0F0h+var_A0+4]
0x6FCA7B: fld     dword ptr [esp+0F0h+var_A0+4]
0x6FCA7F: fstp    [esp+0F0h+var_D4]
0x6FCA83: fld     [esp+0F0h+var_D4]
0x6FCA87: fchs
0x6FCA89: fmul    [esp+0F0h+var_90]
0x6FCA8D: fstp    [esp+0F0h+var_D4]
0x6FCA91: fld     dword ptr [esp+0F0h+var_B0]
0x6FCA95: call    __CIcos
0x6FCA9A: fstp    dword ptr [esp+0F0h+var_B0]
0x6FCA9E: fld     dword ptr [esp+0F0h+var_B0]
0x6FCAA2: fst     dword ptr [esp+0F0h+var_B0]
0x6FCAA6: fld     [esp+0F0h+var_90]
0x6FCAAA: fmul    dword ptr [esp+0F0h+var_B0]
0x6FCAAE: fstp    [esp+0F0h+var_A8]
0x6FCAB2: fld     [esp+0F0h+var_1C]
0x6FCAB9: fstp    dword ptr [esp+0F0h+var_D0]
0x6FCABD: fld     [esp+0F0h+var_D4]
0x6FCAC1: fld     st
0x6FCAC3: fld     [esp+0F0h+arg_0]
0x6FCACA: fld     st
0x6FCACC: fmulp   st(2), st
0x6FCACE: fxch    st(1)
0x6FCAD0: fstp    [esp+0F0h+var_40]
0x6FCAD7: mov     eax, [esp+0F0h+var_40]
0x6FCADE: fld     [esp+0F0h+var_A8]
0x6FCAE2: mov     [edi], eax
0x6FCAE4: fld     st
0x6FCAE6: fmul    st, st(2)
0x6FCAE8: fstp    [esp+0F0h+var_3C]
0x6FCAEF: mov     ecx, [esp+0F0h+var_3C]
0x6FCAF6: fld     dword ptr [esp+0F0h+var_D0]
0x6FCAFA: mov     [edi+4], ecx
0x6FCAFD: fld     st
0x6FCAFF: fmul    st, st(3)
0x6FCB01: fstp    [esp+0F0h+var_38]
0x6FCB08: mov     edx, [esp+0F0h+var_38]
0x6FCB0F: fxch    st(3)
0x6FCB11: mov     [edi+8], edx
0x6FCB14: fstp    [esp+0F0h+var_34]
0x6FCB1B: mov     eax, [esp+0F0h+var_34]
0x6FCB22: mov     [ebx], eax
0x6FCB24: mov     eax, [esp+0F0h+var_D8]
0x6FCB28: fstp    [esp+0F0h+var_30]
0x6FCB2F: mov     ecx, [esp+0F0h+var_30]
0x6FCB36: fxch    st(1)
0x6FCB38: mov     [ebx+4], ecx
0x6FCB3B: fstp    [esp+0F0h+var_2C]
0x6FCB42: mov     ecx, [esp+0F0h+arg_C]
0x6FCB49: test    ecx, ecx
0x6FCB4B: mov     edx, [esp+0F0h+var_2C]
0x6FCB52: mov     [ebx+8], edx
0x6FCB55: jz      short loc_6FCB6D
0x6FCB57: mov     edx, [ecx]
0x6FCB59: mov     [eax], edx
0x6FCB5B: mov     edx, [ecx+4]
0x6FCB5E: mov     [eax+4], edx
0x6FCB61: mov     edx, [ecx+8]
0x6FCB64: mov     [eax+8], edx
0x6FCB67: mov     edx, [ecx+0Ch]
0x6FCB6A: mov     [eax+0Ch], edx
0x6FCB6D: fld     [esp+0F0h+var_A4]
0x6FCB71: add     edi, 0Ch
0x6FCB74: fst     [esp+0F0h+var_60]
0x6FCB7B: mov     edx, [esp+0F0h+var_60]
0x6FCB82: fld     dword ptr [esp+0F0h+var_A0+4]
0x6FCB86: mov     [ebp+0], edx
0x6FCB89: fstp    dword ptr [esp+0F0h+var_B0]
0x6FCB8D: mov     edx, [esp+0F0h+var_5C]
0x6FCB94: fld     dword ptr [esp+0F0h+var_B0]
0x6FCB98: mov     [ebp+4], edx
0x6FCB9B: fchs
0x6FCB9D: mov     edx, [esp+0F0h+var_BC]
0x6FCBA1: fld     dword ptr [esp+0F0h+var_54]
0x6FCBA8: mov     [edx+esi*2], si
0x6FCBAC: fld     st
0x6FCBAE: add     ebx, 0Ch
0x6FCBB1: fmulp   st(2), st
0x6FCBB3: add     esi, 1
0x6FCBB6: fxch    st(1)
0x6FCBB8: add     eax, 10h
0x6FCBBB: add     ebp, 8
0x6FCBBE: test    ecx, ecx
0x6FCBC0: fstp    [esp+0F0h+var_D4]
0x6FCBC4: fxch    st(3)
0x6FCBC6: fstp    dword ptr [esp+0F0h+var_B0]
0x6FCBCA: fld     dword ptr [esp+0F0h+var_B0]
0x6FCBCE: fmulp   st(3), st
0x6FCBD0: fxch    st(2)
0x6FCBD2: fstp    [esp+0F0h+var_A8]
0x6FCBD6: fld     dword ptr [esp+0F0h+var_98]
0x6FCBDA: fstp    dword ptr [esp+0F0h+var_D0]
0x6FCBDE: fld     [esp+0F0h+var_D4]
0x6FCBE2: fld     st
0x6FCBE4: fmul    st, st(2)
0x6FCBE6: fstp    [esp+0F0h+var_28]
0x6FCBED: mov     edx, [esp+0F0h+var_28]
0x6FCBF4: fld     [esp+0F0h+var_A8]
0x6FCBF8: mov     [edi], edx
0x6FCBFA: fld     st
0x6FCBFC: fmul    st, st(3)
0x6FCBFE: fstp    [esp+0F0h+var_24]
0x6FCC05: mov     edx, [esp+0F0h+var_24]
0x6FCC0C: fld     dword ptr [esp+0F0h+var_D0]
0x6FCC10: mov     [edi+4], edx
0x6FCC13: fld     st
0x6FCC15: fmulp   st(4), st
0x6FCC17: fxch    st(3)
0x6FCC19: fstp    [esp+0F0h+var_20]
0x6FCC20: mov     edx, [esp+0F0h+var_20]
0x6FCC27: mov     [edi+8], edx
0x6FCC2A: fxch    st(1)
0x6FCC2C: fstp    [esp+0F0h+var_18]
0x6FCC33: mov     edx, [esp+0F0h+var_18]
0x6FCC3A: mov     [ebx], edx
0x6FCC3C: fstp    [esp+0F0h+var_14]
0x6FCC43: mov     edx, [esp+0F0h+var_14]
0x6FCC4A: mov     [ebx+4], edx
0x6FCC4D: fstp    [esp+0F0h+var_10]
0x6FCC54: mov     edx, [esp+0F0h+var_10]
0x6FCC5B: mov     [ebx+8], edx
0x6FCC5E: jz      short loc_6FCC76
0x6FCC60: mov     edx, [ecx]
0x6FCC62: mov     [eax], edx
0x6FCC64: mov     edx, [ecx+4]
0x6FCC67: mov     [eax+4], edx
0x6FCC6A: mov     edx, [ecx+8]
0x6FCC6D: mov     [eax+8], edx
0x6FCC70: mov     ecx, [ecx+0Ch]
0x6FCC73: mov     [eax+0Ch], ecx
0x6FCC76: mov     ecx, [esp+0F0h+var_7C]
0x6FCC7A: fst     [esp+0F0h+var_80]
0x6FCC7E: mov     edx, [esp+0F0h+var_80]
0x6FCC82: fadd    [esp+0F0h+var_70]
0x6FCC89: add     eax, 10h
0x6FCC8C: mov     [ebp+0], edx
0x6FCC8F: mov     edx, [esp+0F0h+var_BC]
0x6FCC93: fstp    [esp+0F0h+var_A4]
0x6FCC97: mov     [esp+0F0h+var_D8], eax
0x6FCC9B: mov     eax, dword ptr [esp+0F0h+var_B8]
0x6FCC9F: mov     [ebp+4], ecx
0x6FCCA2: add     eax, 1
0x6FCCA5: mov     [edx+esi*2], si
0x6FCCA9: add     esi, 1
0x6FCCAC: add     edi, 0Ch
0x6FCCAF: add     ebx, 0Ch
0x6FCCB2: add     ebp, 8
0x6FCCB5: cmp     eax, [esp+0F0h+arg_4]
0x6FCCBC: mov     dword ptr [esp+0F0h+var_B8], eax
0x6FCCC0: jbe     loc_6FCA40
0x6FCCC6: mov     eax, [esp+0F0h+arg_4]
0x6FCCCD: fld     [esp+0F0h+var_6C]
0x6FCCD4: mov     edx, dword ptr [esp+0F0h+var_B8+4]
0x6FCCD8: fstp    [esp+0F0h+var_C8]
0x6FCCDC: mov     ecx, [esp+0F0h+var_48]
0x6FCCE3: fld     dword ptr [esp+0F0h+var_A0]
0x6FCCE7: lea     eax, [eax+eax+2]
0x6FCCEB: fstp    [esp+0F0h+var_D8]
0x6FCCEF: mov     [ecx+edx*2], ax
0x6FCCF3: mov     eax, [esp+0F0h+var_8C]
0x6FCCF7: cmp     eax, [esp+0F0h+var_4C]
0x6FCCFE: mov     dword ptr [esp+0F0h+var_B8+4], eax
0x6FCD02: jb      loc_6FC958
0x6FCD08: mov     edi, [esp+0F0h+var_4C]
0x6FCD0F: mov     ebx, [esp+0F0h+var_74]
0x6FCD13: mov     ebp, [esp+0F0h+arg_4]
0x6FCD1A: push    0C0h ; 'À'; Size
0x6FCD1F: call    FormHeapAlloc
0x6FCD24: add     esp, 4
0x6FCD27: mov     [esp+0F0h+var_8C], eax
0x6FCD2B: test    eax, eax
0x6FCD2D: mov     [esp+0F0h+var_4], 3
0x6FCD38: jz      short loc_6FCD78
0x6FCD3A: mov     ecx, [esp+0F0h+var_BC]
0x6FCD3E: imul    ebp, edi
0x6FCD41: mov     edx, [esp+0F0h+var_48]
0x6FCD48: push    ecx
0x6FCD49: mov     ecx, [esp+0F4h+var_44]
0x6FCD50: push    edx
0x6FCD51: mov     edx, dword ptr [esp+0F8h+var_D0+4]
0x6FCD55: push    edi
0x6FCD56: add     ebp, ebp
0x6FCD58: push    ebp
0x6FCD59: push    0
0x6FCD5B: push    1
0x6FCD5D: push    ecx
0x6FCD5E: mov     ecx, [esp+10Ch+var_84]
0x6FCD65: push    edx
0x6FCD66: mov     edx, [esp+110h+var_DC]
0x6FCD6A: push    ecx
0x6FCD6B: push    edx
0x6FCD6C: push    esi
0x6FCD6D: mov     ecx, eax
0x6FCD6F: call    sub_719960
0x6FCD74: mov     esi, eax
0x6FCD76: jmp     short loc_6FCD7A
0x6FCD78: xor     esi, esi
0x6FCD7A: mov     eax, [esi]
0x6FCD7C: mov     edx, [eax+90h]
0x6FCD82: mov     ecx, esi
0x6FCD84: mov     [esp+0F0h+var_4], 0FFFFFFFFh
0x6FCD8F: call    edx
0x6FCD91: mov     eax, [ebx]
0x6FCD93: mov     edx, [eax+84h]
0x6FCD99: push    0
0x6FCD9B: push    esi
0x6FCD9C: mov     ecx, ebx
0x6FCD9E: call    edx
0x6FCDA0: mov     eax, ebx
0x6FCDA2: mov     ecx, [esp+0F0h+var_C]
0x6FCDA9: mov     large fs:0, ecx
0x6FCDB0: pop     ecx
0x6FCDB1: pop     edi
0x6FCDB2: pop     esi
0x6FCDB3: pop     ebp
0x6FCDB4: pop     ebx
0x6FCDB5: add     esp, 0DCh
0x6FCDBB: retn
