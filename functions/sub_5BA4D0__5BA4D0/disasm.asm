0x5BA4D0: push    0FFFFFFFFh
0x5BA4D2: push    offset SEH_5BA4D0
0x5BA4D7: mov     eax, large fs:0
0x5BA4DD: push    eax
0x5BA4DE: sub     esp, 64h
0x5BA4E1: push    ebx; a3
0x5BA4E2: push    ebp; a3
0x5BA4E3: push    esi; a3
0x5BA4E4: push    edi; a3
0x5BA4E5: mov     eax, ds:0B30AACh
0x5BA4EA: xor     eax, esp
0x5BA4EC: push    eax; a3
0x5BA4ED: lea     eax, [esp+84h+var_C]
0x5BA4F1: mov     large fs:0, eax
0x5BA4F7: push    3FFh
0x5BA4FC: call    Menu_GetOpenMenuTile
0x5BA501: mov     esi, eax
0x5BA503: xor     ebp, ebp
0x5BA505: add     esp, 4
0x5BA508: cmp     esi, ebp
0x5BA50A: jz      loc_5BAC94
0x5BA510: mov     ecx, esi
0x5BA512: call    Tile_GetParentMenu
0x5BA517: mov     ecx, esi
0x5BA519: mov     edi, eax
0x5BA51B: call    sub_5893B0
0x5BA520: test    al, al
0x5BA522: jnz     short loc_5BA535
0x5BA524: mov     eax, [edi+24h]
0x5BA527: cmp     eax, 8
0x5BA52A: jz      short loc_5BA535
0x5BA52C: cmp     eax, 1
0x5BA52F: jnz     loc_5BAC94
0x5BA535: push    ebp
0x5BA536: mov     ecx, edi
0x5BA538: call    sub_5B8FC0
0x5BA53D: mov     ecx, ds:0B333C4h; this
0x5BA543: call    TESObjectREFR_GetParentCell
0x5BA548: test    eax, eax
0x5BA54A: jz      loc_5BAC94
0x5BA550: mov     ecx, [edi+58h]; this
0x5BA553: fld1
0x5BA555: push    ecx
0x5BA556: fstp    [esp+88h+var_88]; a3
0x5BA559: push    0FA1h; a2
0x5BA55E: call    Tile_SetFloat
0x5BA563: fld     dword ptr ds:0A379B4h
0x5BA569: mov     ecx, [edi+60h]; this
0x5BA56C: push    ecx
0x5BA56D: fstp    [esp+88h+var_88]; a3
0x5BA570: push    0FA1h; a2
0x5BA575: call    Tile_SetFloat
0x5BA57A: mov     ecx, edi
0x5BA57C: call    sub_5B7550
0x5BA581: fld1
0x5BA583: cmp     eax, ebp
0x5BA585: jz      loc_5BAC83
0x5BA58B: mov     ecx, [edi+64h]; this
0x5BA58E: push    ecx
0x5BA58F: fstp    [esp+88h+var_88]; a3
0x5BA592: push    0FA1h; a2
0x5BA597: call    Tile_SetFloat
0x5BA59C: fld     dword ptr ds:0A379B4h
0x5BA5A2: mov     ecx, [edi+64h]; this
0x5BA5A5: push    ecx
0x5BA5A6: fstp    [esp+88h+var_88]; a3
0x5BA5A9: push    0FA1h; a2
0x5BA5AE: call    Tile_SetFloat
0x5BA5B3: mov     eax, [edi+68h]
0x5BA5B6: mov     esi, [eax+34h]
0x5BA5B9: cmp     esi, ebp
0x5BA5BB: jz      short loc_5BA5D8
0x5BA5BD: lea     ecx, [ecx+0]
0x5BA5C0: mov     ecx, [esi+8]
0x5BA5C3: cmp     ecx, ebp
0x5BA5C5: lea     eax, [esi+8]
0x5BA5C8: mov     esi, [esi]
0x5BA5CA: jz      short loc_5BA5D4
0x5BA5CC: mov     edx, [ecx]
0x5BA5CE: mov     eax, [edx]
0x5BA5D0: push    1; a3
0x5BA5D2: call    eax
0x5BA5D4: cmp     esi, ebp
0x5BA5D6: jnz     short loc_5BA5C0
0x5BA5D8: mov     ecx, [edi+68h]
0x5BA5DB: add     ecx, 30h ; '0'
0x5BA5DE: call    NiTPointerList__FreeAllNodes
0x5BA5E3: mov     ecx, ds:0B333C4h; this
0x5BA5E9: call    TESObjectREFR_GetWorldSpace
0x5BA5EE: mov     ecx, ds:0B3F9A8h
0x5BA5F4: mov     edx, ds:0B3F9ACh
0x5BA5FA: mov     esi, eax
0x5BA5FC: cmp     esi, ebp
0x5BA5FE: mov     eax, ds:0B3F9B0h
0x5BA603: mov     [esp+84h+var_54.m_data], ecx
0x5BA607: mov     dword ptr [esp+84h+var_54.m_dataLen], edx
0x5BA60B: mov     [esp+84h+var_4C], eax
0x5BA60F: jnz     short loc_5BA630
0x5BA611: push    ebp
0x5BA612: lea     ecx, [esp+88h+var_54]
0x5BA616: push    ecx
0x5BA617: mov     ecx, ds:0B333C4h; this
0x5BA61D: call    TESObjectREFR_GetParentCell
0x5BA622: mov     ecx, ds:0B33A98h
0x5BA628: push    eax
0x5BA629: call    sub_44EE00
0x5BA62E: mov     esi, eax
0x5BA630: mov     ecx, [edi+0C4h]
0x5BA636: cmp     ecx, ebp
0x5BA638: jz      short loc_5BA64E
0x5BA63A: call    BSSimpleList_Clear
0x5BA63F: mov     eax, [edi+0C4h]
0x5BA645: push    eax
0x5BA646: call    FormHeapFree
0x5BA64B: add     esp, 4
0x5BA64E: cmp     esi, ebp
0x5BA650: mov     [edi+0C4h], ebp
0x5BA656: jz      short loc_5BA665
0x5BA658: mov     ecx, esi
0x5BA65A: call    sub_4F0620
0x5BA65F: mov     [edi+0C4h], eax
0x5BA665: mov     ebx, [edi+0C4h]
0x5BA66B: cmp     ebx, ebp
0x5BA66D: jz      loc_5BA77C
0x5BA673: mov     esi, [ebx]
0x5BA675: cmp     esi, ebp
0x5BA677: jz      loc_5BA77C
0x5BA67D: mov     ebx, [ebx+4]
0x5BA680: mov     ecx, esi
0x5BA682: call    sub_4D7730
0x5BA687: mov     ecx, eax
0x5BA689: call    sub_42B310
0x5BA68E: test    al, al
0x5BA690: jz      loc_5BA772
0x5BA696: mov     edx, [esi+8]
0x5BA699: shr     edx, 0Bh
0x5BA69C: test    dl, 1
0x5BA69F: jnz     loc_5BA772
0x5BA6A5: mov     eax, [esi]
0x5BA6A7: mov     edx, [eax+174h]
0x5BA6AD: mov     ecx, esi
0x5BA6AF: call    edx
0x5BA6B1: mov     ecx, [eax]
0x5BA6B3: mov     [esp+84h+var_70+4], ecx
0x5BA6B7: mov     edx, [eax+4]
0x5BA6BA: push    1; float
0x5BA6BC: mov     [esp+88h+var_68], edx
0x5BA6C0: mov     eax, [eax+8]
0x5BA6C3: lea     ecx, [esp+88h+var_3C]
0x5BA6C7: push    ecx; int
0x5BA6C8: mov     ecx, ds:0B333C4h; this
0x5BA6CE: lea     edx, [esp+8Ch+var_70+4]
0x5BA6D2: push    edx; int
0x5BA6D3: mov     [esp+90h+var_64], eax
0x5BA6D7: call    TESObjectREFR_GetParentCell
0x5BA6DC: mov     ecx, eax
0x5BA6DE: call    sub_4CCE20
0x5BA6E3: lea     eax, [esp+84h+var_3C]
0x5BA6E7: push    eax
0x5BA6E8: call    sub_4D2D00
0x5BA6ED: mov     [esp+88h+var_70], eax
0x5BA6F1: fild    [esp+88h+var_70]
0x5BA6F5: add     esp, 4
0x5BA6F8: fmul    qword ptr ds:0A3C770h
0x5BA6FE: fmul    qword ptr ds:0A3DDD8h
0x5BA704: call    Double_To_SInt32
0x5BA709: mov     ebp, eax
0x5BA70B: test    ebp, ebp
0x5BA70D: jle     short loc_5BA772
0x5BA70F: mov     ecx, esi
0x5BA711: call    sub_4D7730
0x5BA716: mov     ecx, eax
0x5BA718: call    sub_42B340
0x5BA71D: test    al, al
0x5BA71F: jnz     short loc_5BA772
0x5BA721: push    0; char
0x5BA723: push    0; char
0x5BA725: push    0; char
0x5BA727: push    ebp; int
0x5BA728: push    1; char
0x5BA72A: push    1; int
0x5BA72C: mov     ecx, esi
0x5BA72E: call    sub_4D7730
0x5BA733: mov     ecx, eax
0x5BA735: call    sub_42B340
0x5BA73A: mov     ecx, esi
0x5BA73C: push    eax; char
0x5BA73D: call    sub_4D7730
0x5BA742: mov     ecx, eax
0x5BA744: call    sub_42B370
0x5BA749: push    eax; int
0x5BA74A: mov     ecx, esi
0x5BA74C: call    sub_4D7730
0x5BA751: mov     ecx, eax; this
0x5BA753: call    TESModel_GetModelPath
0x5BA758: fld     [esp+0A4h+var_68]
0x5BA75C: push    eax; int
0x5BA75D: sub     esp, 8
0x5BA760: fstp    [esp+0B0h+var_AC]; float
0x5BA764: mov     ecx, edi
0x5BA766: fld     [esp+0B0h+var_70+4]
0x5BA76A: fstp    [esp+0B0h+var_B0]; float
0x5BA76D: call    sub_5B87D0
0x5BA772: xor     ebp, ebp
0x5BA774: cmp     ebx, ebp
0x5BA776: jnz     loc_5BA673
0x5BA77C: mov     [esp+84h+var_5C.m_data], ebp
0x5BA780: mov     [esp+84h+var_5C.m_dataLen], bp
0x5BA785: mov     [esp+84h+var_5C.m_bufLen], bp
0x5BA78A: mov     ebx, [edi+0C8h]
0x5BA790: cmp     ebx, ebp
0x5BA792: mov     [esp+84h+var_4], ebp
0x5BA799: jz      loc_5BA8CD
0x5BA79F: mov     esi, [ebx]
0x5BA7A1: test    esi, esi
0x5BA7A3: jz      loc_5BA8CD
0x5BA7A9: mov     edx, [esi]
0x5BA7AB: mov     eax, [edx+170h]
0x5BA7B1: mov     ebx, [ebx+4]
0x5BA7B4: mov     ecx, esi
0x5BA7B6: xor     ebp, ebp
0x5BA7B8: call    eax
0x5BA7BA: cmp     byte ptr [eax+4], 18h
0x5BA7BE: jnz     short loc_5BA7CE
0x5BA7C0: mov     edx, [esi]
0x5BA7C2: mov     eax, [edx+170h]
0x5BA7C8: mov     ecx, esi
0x5BA7CA: call    eax
0x5BA7CC: mov     ebp, eax
0x5BA7CE: mov     ecx, [esi+8]
0x5BA7D1: shr     ecx, 0Dh
0x5BA7D4: test    cl, 1
0x5BA7D7: jnz     loc_5BA8C5
0x5BA7DD: test    ebp, ebp
0x5BA7DF: jz      loc_5BA8C5
0x5BA7E5: mov     ecx, ebp
0x5BA7E7: call    sub_4B6D00
0x5BA7EC: test    al, al
0x5BA7EE: jnz     loc_5BA8C5
0x5BA7F4: mov     edx, [esi]
0x5BA7F6: mov     eax, [edx+174h]
0x5BA7FC: mov     ecx, esi
0x5BA7FE: call    eax
0x5BA800: mov     ecx, [eax]
0x5BA802: mov     [esp+84h+var_70+4], ecx
0x5BA806: mov     edx, [eax+4]
0x5BA809: push    1; float
0x5BA80B: mov     [esp+88h+var_68], edx
0x5BA80F: mov     eax, [eax+8]
0x5BA812: lea     ecx, [esp+88h+var_3C]
0x5BA816: push    ecx; int
0x5BA817: mov     ecx, ds:0B333C4h; this
0x5BA81D: lea     edx, [esp+8Ch+var_70+4]
0x5BA821: push    edx; int
0x5BA822: mov     [esp+90h+var_64], eax
0x5BA826: call    TESObjectREFR_GetParentCell
0x5BA82B: mov     ecx, eax
0x5BA82D: call    sub_4CCE20
0x5BA832: lea     eax, [esp+84h+var_3C]
0x5BA836: push    eax
0x5BA837: call    sub_4D2D00
0x5BA83C: mov     [esp+88h+var_70], eax
0x5BA840: fild    [esp+88h+var_70]
0x5BA844: add     esp, 4
0x5BA847: fmul    qword ptr ds:0A3C770h
0x5BA84D: fmul    qword ptr ds:0A3DDD8h
0x5BA853: call    Double_To_SInt32
0x5BA858: mov     ebp, eax
0x5BA85A: test    ebp, ebp
0x5BA85C: jle     short loc_5BA8C5
0x5BA85E: mov     ecx, esi; this
0x5BA860: call    GetTeleportExtraData
0x5BA865: test    eax, eax
0x5BA867: jz      short loc_5BA877
0x5BA869: lea     ecx, [esp+84h+var_5C]
0x5BA86D: push    ecx
0x5BA86E: mov     ecx, eax
0x5BA870: call    sub_42B650
0x5BA875: jmp     short loc_5BA898
0x5BA877: mov     edx, [esi]
0x5BA879: mov     eax, [edx+170h]
0x5BA87F: push    0; a3
0x5BA881: mov     ecx, esi
0x5BA883: call    eax
0x5BA885: push    eax; a1
0x5BA886: call    TESFullName_GetNameForForm
0x5BA88B: add     esp, 4
0x5BA88E: push    eax; a2
0x5BA88F: lea     ecx, [esp+8Ch+var_5C]; this
0x5BA893: call    BSStringT_Set
0x5BA898: mov     ecx, [esp+84h+var_5C.m_data]
0x5BA89C: fld     [esp+84h+var_68]
0x5BA8A0: push    0; char
0x5BA8A2: push    0; char
0x5BA8A4: push    0; char
0x5BA8A6: push    ebp; int
0x5BA8A7: push    1; char
0x5BA8A9: push    1; int
0x5BA8AB: push    0; char
0x5BA8AD: push    0Ch; int
0x5BA8AF: push    ecx; int
0x5BA8B0: sub     esp, 8
0x5BA8B3: fstp    [esp+0B0h+var_AC]; float
0x5BA8B7: mov     ecx, edi
0x5BA8B9: fld     [esp+0B0h+var_70+4]
0x5BA8BD: fstp    [esp+0B0h+var_B0]; float
0x5BA8C0: call    sub_5B87D0
0x5BA8C5: test    ebx, ebx
0x5BA8C7: jnz     loc_5BA79F
0x5BA8CD: mov     ecx, [edi+0C8h]
0x5BA8D3: call    BSSimpleList_Clear
0x5BA8D8: mov     ecx, ds:0B333C4h
0x5BA8DE: call    sub_65D830
0x5BA8E3: mov     esi, eax
0x5BA8E5: test    esi, esi
0x5BA8E7: mov     [edi+0CCh], eax
0x5BA8ED: jz      short loc_5BA96A
0x5BA8EF: nop
0x5BA8F0: mov     ecx, [esi]
0x5BA8F2: test    ecx, ecx
0x5BA8F4: jz      short loc_5BA96A
0x5BA8F6: mov     eax, [ecx+10h]
0x5BA8F9: test    eax, eax
0x5BA8FB: mov     esi, [esi+4]
0x5BA8FE: mov     byte ptr [esp+84h+var_70], 1
0x5BA903: jnz     short loc_5BA915
0x5BA905: push    1
0x5BA907: call    sub_52B440
0x5BA90C: test    eax, eax
0x5BA90E: mov     byte ptr [esp+84h+var_70], 0
0x5BA913: jz      short loc_5BA966
0x5BA915: mov     edx, [eax]
0x5BA917: mov     ecx, eax
0x5BA919: mov     eax, [edx+174h]
0x5BA91F: call    eax
0x5BA921: mov     ecx, [eax]
0x5BA923: mov     edx, [eax+4]
0x5BA926: mov     eax, [eax+8]
0x5BA929: push    0; char
0x5BA92B: push    1; char
0x5BA92D: mov     [esp+8Ch+var_70+4], ecx
0x5BA931: mov     ecx, [esp+8Ch+var_70]
0x5BA935: push    ecx; char
0x5BA936: push    0FFh; int
0x5BA93B: push    0; char
0x5BA93D: push    2; int
0x5BA93F: push    1; char
0x5BA941: push    63h ; 'c'; int
0x5BA943: push    0; int
0x5BA945: mov     [esp+0A8h+var_68], edx
0x5BA949: fld     [esp+0A8h+var_68]
0x5BA94D: sub     esp, 8
0x5BA950: fstp    [esp+0B0h+var_AC]; float
0x5BA954: mov     ecx, edi
0x5BA956: fld     [esp+0B0h+var_70+4]
0x5BA95A: mov     [esp+0B0h+var_64], eax
0x5BA95E: fstp    [esp+0B0h+var_B0]; float
0x5BA961: call    sub_5B87D0
0x5BA966: test    esi, esi
0x5BA968: jnz     short loc_5BA8F0
0x5BA96A: mov     esi, ds:0B333C4h
0x5BA970: mov     ecx, [esi+634h]
0x5BA976: mov     edx, [esi+62Ch]
0x5BA97C: mov     eax, [esi+630h]
0x5BA982: mov     [esp+84h+var_64], ecx
0x5BA986: push    offset Vector3_InitValue?
0x5BA98B: lea     ecx, [esp+88h+var_70+4]
0x5BA98F: mov     [esp+88h+var_70+4], edx
0x5BA993: mov     [esp+88h+var_68], eax
0x5BA997: call    sub_8AA390
0x5BA99C: test    al, al
0x5BA99E: jz      short loc_5BA9E8
0x5BA9A0: mov     ebx, [esi+638h]
0x5BA9A6: mov     ecx, esi
0x5BA9A8: call    sub_4D8AF0
0x5BA9AD: cmp     ebx, eax
0x5BA9AF: jnz     short loc_5BA9E2
0x5BA9B1: fld     [esp+84h+var_68]
0x5BA9B5: push    1; char
0x5BA9B7: push    0; char
0x5BA9B9: push    0; char
0x5BA9BB: push    0FFh; int
0x5BA9C0: push    0; char
0x5BA9C2: push    3; int
0x5BA9C4: push    0; char
0x5BA9C6: push    63h ; 'c'; int
0x5BA9C8: push    offset aLocal_set; "local_set"
0x5BA9CD: sub     esp, 8
0x5BA9D0: fstp    [esp+0B0h+var_AC]; float
0x5BA9D4: mov     ecx, edi
0x5BA9D6: fld     [esp+0B0h+var_70+4]
0x5BA9DA: fstp    [esp+0B0h+var_B0]; float
0x5BA9DD: call    sub_5B87D0
0x5BA9E2: mov     esi, ds:0B333C4h
0x5BA9E8: mov     edx, [esi]
0x5BA9EA: mov     eax, [edx+174h]
0x5BA9F0: mov     ecx, esi
0x5BA9F2: call    eax
0x5BA9F4: mov     edx, [eax+4]
0x5BA9F7: mov     ecx, [eax]
0x5BA9F9: mov     eax, [eax+8]
0x5BA9FC: push    0; char
0x5BA9FE: push    0; char
0x5BAA00: push    0; char
0x5BAA02: push    0FFh; int
0x5BAA07: push    0; char
0x5BAA09: push    4; int
0x5BAA0B: push    0; char
0x5BAA0D: push    62h ; 'b'; int
0x5BAA0F: push    offset aLocal_player; "local_player"
0x5BAA14: mov     [esp+0A8h+var_68], edx
0x5BAA18: fld     [esp+0A8h+var_68]
0x5BAA1C: sub     esp, 8
0x5BAA1F: fstp    [esp+0B0h+var_AC]; float
0x5BAA23: mov     [esp+0B0h+var_70+4], ecx
0x5BAA27: fld     [esp+0B0h+var_70+4]
0x5BAA2B: mov     ecx, edi
0x5BAA2D: fstp    [esp+0B0h+var_B0]; float
0x5BAA30: mov     [esp+0B0h+var_64], eax
0x5BAA34: call    sub_5B87D0
0x5BAA39: mov     ebx, eax
0x5BAA3B: test    ebx, ebx
0x5BAA3D: mov     [esp+84h+var_60], ebx
0x5BAA41: jz      short loc_5BAA52
0x5BAA43: mov     ecx, ebx
0x5BAA45: mov     [edi+0FCh], ebx
0x5BAA4B: call    sub_58E870
0x5BAA50: jmp     short loc_5BAA5C
0x5BAA52: mov     dword ptr [edi+0FCh], 0
0x5BAA5C: mov     esi, [edi+0FCh]
0x5BAA62: test    esi, esi
0x5BAA64: jz      loc_5BAB73
0x5BAA6A: mov     ebp, [esi+24h]
0x5BAA6D: test    ebp, ebp
0x5BAA6F: jz      loc_5BAB73
0x5BAA75: mov     ecx, ds:0B333C4h; this
0x5BAA7B: call    TESObjectREFR_GetParentCell
0x5BAA80: mov     ecx, eax
0x5BAA82: call    sub_4CCE00
0x5BAA87: fstp    qword ptr [esp+84h+var_70+4]
0x5BAA8B: mov     ecx, ds:0B333C4h
0x5BAA91: mov     edx, [ecx]
0x5BAA93: mov     eax, [edx+1E0h]
0x5BAA99: call    eax
0x5BAA9B: fadd    qword ptr [esp+84h+var_70+4]
0x5BAA9F: push    ecx
0x5BAAA0: lea     ecx, [esp+88h+var_30]
0x5BAAA4: fstp    [esp+88h+var_70]
0x5BAAA8: fld     [esp+88h+var_70]
0x5BAAAC: fchs
0x5BAAAE: fstp    [esp+88h+var_88]; float
0x5BAAB1: call    sub_70FD80
0x5BAAB6: push    0FCBh
0x5BAABB: mov     ecx, esi
0x5BAABD: call    Tile_GetFloat
0x5BAAC2: fmul    qword ptr ds:0A2FAA0h
0x5BAAC8: push    0FCAh
0x5BAACD: mov     ecx, esi
0x5BAACF: fstp    [esp+88h+var_70]
0x5BAAD3: call    Tile_GetFloat
0x5BAAD8: fmul    qword ptr ds:0A2FAA0h
0x5BAADE: mov     byte ptr [esi+6], 1
0x5BAAE2: xor     esi, esi
0x5BAAE4: cmp     [ebp+0B8h], si
0x5BAAEB: fstp    [esp+84h+var_70+4]
0x5BAAEF: jbe     short loc_5BAB57
0x5BAAF1: movzx   ecx, word ptr [ebp+0B6h]
0x5BAAF8: cmp     ecx, esi
0x5BAAFA: ja      short loc_5BAB00
0x5BAAFC: xor     eax, eax
0x5BAAFE: jmp     short loc_5BAB09
0x5BAB00: mov     edx, [ebp+0B0h]
0x5BAB06: mov     eax, [edx+esi*4]
0x5BAB09: push    eax
0x5BAB0A: push    offset dword_B3FCD4
0x5BAB0F: call    NiRTTI_Cast
0x5BAB14: add     esp, 8
0x5BAB17: test    eax, eax
0x5BAB19: jz      short loc_5BAB49
0x5BAB1B: fld     [esp+84h+var_70]
0x5BAB1F: push    offset Vector3_InitValue?
0x5BAB24: fstp    [esp+88h+var_48]
0x5BAB28: lea     ecx, [esp+88h+var_48]
0x5BAB2C: fldz
0x5BAB2E: push    ecx
0x5BAB2F: fstp    [esp+8Ch+var_44]
0x5BAB33: lea     edx, [esp+8Ch+var_30]
0x5BAB37: fld     [esp+8Ch+var_70+4]
0x5BAB3B: push    edx
0x5BAB3C: fchs
0x5BAB3E: mov     ecx, eax
0x5BAB40: fstp    [esp+90h+var_40]
0x5BAB44: call    sub_5B6860
0x5BAB49: movzx   eax, word ptr [ebp+0B8h]
0x5BAB50: add     esi, 1
0x5BAB53: cmp     esi, eax
0x5BAB55: jb      short loc_5BAAF1
0x5BAB57: test    ebx, ebx
0x5BAB59: jz      loc_5BAC62
0x5BAB5F: mov     ecx, [ebx+24h]; this
0x5BAB62: test    ecx, ecx
0x5BAB64: jz      short loc_5BAB73
0x5BAB66: fldz
0x5BAB68: push    1; a3
0x5BAB6A: push    ecx
0x5BAB6B: fstp    [esp+8Ch+a2]; a2
0x5BAB6E: call    NiAVObject_UpdateNiAVObject
0x5BAB73: test    ebx, ebx
0x5BAB75: jz      loc_5BAC62
0x5BAB7B: cmp     [esp+84h+arg_0], 0
0x5BAB83: jz      loc_5BAC62
0x5BAB89: mov     ecx, [edi+64h]
0x5BAB8C: push    0FAEh
0x5BAB91: call    Tile_GetFloat
0x5BAB96: call    Double_To_SInt32
0x5BAB9B: mov     ecx, [edi+64h]
0x5BAB9E: mov     ebp, eax
0x5BABA0: push    0FAFh
0x5BABA5: mov     [esp+88h+var_70+4], ebp
0x5BABA9: call    Tile_GetFloat
0x5BABAE: call    Double_To_SInt32
0x5BABB3: fild    [esp+84h+var_70+4]
0x5BABB7: mov     esi, [esp+84h+var_60]
0x5BABBB: mov     ebx, eax
0x5BABBD: push    0FADh
0x5BABC2: fstp    [esp+88h+var_70+4]
0x5BABC6: mov     ecx, esi
0x5BABC8: mov     [esp+88h+var_70], ebx
0x5BABCC: call    Tile_GetFloat
0x5BABD1: fsubr   [esp+84h+var_70+4]
0x5BABD5: push    0FACh
0x5BABDA: mov     ecx, esi
0x5BABDC: fstp    [esp+88h+var_70+4]
0x5BABE0: fild    [esp+88h+var_70]
0x5BABE4: fstp    [esp+88h+var_60]
0x5BABE8: call    Tile_GetFloat
0x5BABED: fsubr   [esp+84h+var_60]
0x5BABF1: mov     esi, [edi+60h]
0x5BABF4: push    ecx
0x5BABF5: mov     ecx, esi; this
0x5BABF7: fstp    [esp+88h+var_60]
0x5BABFB: fld     [esp+88h+var_70+4]
0x5BABFF: fstp    [esp+88h+var_88]; a3
0x5BAC02: push    0FB8h; a2
0x5BAC07: call    Tile_SetFloat
0x5BAC0C: fld     [esp+84h+var_60]
0x5BAC10: push    ecx
0x5BAC11: fstp    [esp+88h+var_88]; a3
0x5BAC14: push    0FB9h; a2
0x5BAC19: mov     ecx, esi; this
0x5BAC1B: call    Tile_SetFloat
0x5BAC20: mov     ecx, [edi+70h]; this
0x5BAC23: mov     eax, ebp
0x5BAC25: cdq
0x5BAC26: sub     eax, edx
0x5BAC28: sar     eax, 1
0x5BAC2A: mov     [esp+84h+var_60], eax
0x5BAC2E: push    ecx
0x5BAC2F: fild    [esp+88h+var_60]
0x5BAC33: fstp    [esp+88h+var_88]; a3
0x5BAC36: push    0FAEh; a2
0x5BAC3B: call    Tile_SetFloat
0x5BAC40: mov     edi, [edi+70h]
0x5BAC43: mov     eax, ebx
0x5BAC45: cdq
0x5BAC46: sub     eax, edx
0x5BAC48: sar     eax, 1
0x5BAC4A: mov     [esp+84h+var_60], eax
0x5BAC4E: push    ecx
0x5BAC4F: fild    [esp+88h+var_60]
0x5BAC53: mov     ecx, edi; this
0x5BAC55: fstp    [esp+88h+var_88]; a3
0x5BAC58: push    0FAFh; a2
0x5BAC5D: call    Tile_SetFloat
0x5BAC62: mov     ecx, [esp+84h+var_5C.m_data]
0x5BAC66: push    ecx
0x5BAC67: call    FormHeapFree
0x5BAC6C: add     esp, 4
0x5BAC6F: mov     ecx, [esp+84h+var_C]
0x5BAC73: mov     large fs:0, ecx
0x5BAC7A: pop     ecx
0x5BAC7B: pop     edi
0x5BAC7C: pop     esi
0x5BAC7D: pop     ebp
0x5BAC7E: pop     ebx
0x5BAC7F: add     esp, 70h
0x5BAC82: retn
0x5BAC83: push    ecx
0x5BAC84: mov     ecx, [edi+64h]; this
0x5BAC87: fstp    [esp+88h+var_88]; a3
0x5BAC8A: push    0FA1h; a2
0x5BAC8F: call    Tile_SetFloat
0x5BAC94: mov     ecx, [esp+84h+var_C]
0x5BAC98: mov     large fs:0, ecx
0x5BAC9F: pop     ecx
0x5BACA0: pop     edi
0x5BACA1: pop     esi
0x5BACA2: pop     ebp
0x5BACA3: pop     ebx
0x5BACA4: add     esp, 70h
0x5BACA7: retn
