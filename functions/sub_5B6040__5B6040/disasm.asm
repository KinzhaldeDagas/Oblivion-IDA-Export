0x5B6040: push    0FFFFFFFFh
0x5B6042: push    offset SEH_5B6040
0x5B6047: mov     eax, large fs:0
0x5B604D: push    eax
0x5B604E: sub     esp, 20h
0x5B6051: push    ebx
0x5B6052: push    ebp
0x5B6053: push    esi
0x5B6054: push    edi
0x5B6055: mov     eax, ds:0B30AACh
0x5B605A: xor     eax, esp
0x5B605C: push    eax; a3
0x5B605D: lea     eax, [esp+40h+var_C]
0x5B6061: mov     large fs:0, eax
0x5B6067: push    414h
0x5B606C: call    Menu_GetOpenMenuTile
0x5B6071: add     esp, 4
0x5B6074: test    eax, eax
0x5B6076: jz      short loc_5B6082
0x5B6078: mov     edx, [eax]
0x5B607A: mov     ecx, eax
0x5B607C: mov     eax, [edx]
0x5B607E: push    1; a3
0x5B6080: call    eax
0x5B6082: call    sub_57CC00
0x5B6087: call    CloseAllMenus
0x5B608C: push    3
0x5B608E: call    sub_578CF0
0x5B6093: push    38h ; '8'; Size
0x5B6095: call    FormHeapAlloc
0x5B609A: add     esp, 8
0x5B609D: mov     [esp+40h+var_14], eax
0x5B60A1: test    eax, eax
0x5B60A3: mov     [esp+40h+var_4], 0
0x5B60AB: jz      short loc_5B60B8
0x5B60AD: mov     ecx, eax
0x5B60AF: call    NiAlphaAccumulator_Constructor
0x5B60B4: mov     edi, eax
0x5B60B6: jmp     short loc_5B60BA
0x5B60B8: xor     edi, edi
0x5B60BA: mov     ebx, ds:0B3F928h
0x5B60C0: mov     esi, [ebx+8]
0x5B60C3: add     ebx, 8
0x5B60C6: cmp     esi, edi
0x5B60C8: mov     [esp+40h+var_4], 0FFFFFFFFh
0x5B60D0: jz      short loc_5B6102
0x5B60D2: test    esi, esi
0x5B60D4: jz      short loc_5B60F2
0x5B60D6: lea     ecx, [esi+4]
0x5B60D9: push    ecx; a3
0x5B60DA: call    dword ptr ds:0A2807Ch
0x5B60E0: test    eax, eax
0x5B60E2: jnz     short loc_5B60F2
0x5B60E4: test    esi, esi
0x5B60E6: jz      short loc_5B60F2
0x5B60E8: mov     edx, [esi]
0x5B60EA: mov     eax, [edx]
0x5B60EC: push    1; a3
0x5B60EE: mov     ecx, esi
0x5B60F0: call    eax
0x5B60F2: test    edi, edi
0x5B60F4: mov     [ebx], edi
0x5B60F6: jz      short loc_5B6102
0x5B60F8: add     edi, 4
0x5B60FB: push    edi; a3
0x5B60FC: call    dword ptr ds:0A28078h
0x5B6102: push    1; arg1
0x5B6104: push    0; canCreate
0x5B6106: call    InterfaceManager_GetSingleton
0x5B610B: add     esp, 8
0x5B610E: mov     esi, eax
0x5B6110: call    InterfaceManager_GetDepth
0x5B6115: fstp    [esp+40h+var_2C]; a3
0x5B6119: mov     ecx, [esi+68h]; TileWindow *
0x5B611C: push    offset aDataMenusOptio; "Data\\Menus\\Options\\main_menu.xml"
0x5B6121: call    Menu_LoadXML
0x5B6126: mov     ebp, eax
0x5B6128: mov     ecx, ebp
0x5B612A: mov     [esp+40h+var_18], ebp
0x5B612E: call    Tile_GetParentMenu
0x5B6133: mov     esi, eax
0x5B6135: test    esi, esi
0x5B6137: mov     [esp+40h+var_14], esi
0x5B613B: jz      loc_5B64A2
0x5B6141: mov     edx, [esi]
0x5B6143: mov     eax, [edx+34h]
0x5B6146: mov     ecx, esi
0x5B6148: call    eax
0x5B614A: cmp     eax, 414h
0x5B614F: jnz     loc_5B6492
0x5B6155: push    0; int
0x5B6157: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5B615C: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5B6161: push    0; int
0x5B6163: push    ebp; void *
0x5B6164: call    OblivionDynamicCast
0x5B6169: add     esp, 14h
0x5B616C: push    eax
0x5B616D: mov     ecx, esi
0x5B616F: call    Menu_SetTileMenu
0x5B6174: push    0; int
0x5B6176: push    offset ??_R0?AVMainMenu@@@8; struct TypeDescriptor *
0x5B617B: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5B6180: push    0; int
0x5B6182: push    esi; void *
0x5B6183: call    OblivionDynamicCast
0x5B6188: mov     esi, eax
0x5B618A: add     esp, 14h
0x5B618D: cmp     dword ptr [esi+30h], 0
0x5B6191: jz      short loc_5B61B1
0x5B6193: cmp     dword ptr [esi+34h], 0
0x5B6197: jz      short loc_5B61B1
0x5B6199: cmp     dword ptr [esi+38h], 0
0x5B619D: jz      short loc_5B61B1
0x5B619F: cmp     dword ptr [esi+3Ch], 0
0x5B61A3: jz      short loc_5B61B1
0x5B61A5: cmp     dword ptr [esi+40h], 0
0x5B61A9: jz      short loc_5B61B1
0x5B61AB: cmp     dword ptr [esi+44h], 0
0x5B61AF: jnz     short loc_5B61D4
0x5B61B1: push    offset aMainMenuCreati; "Main Menu Creation Failed... Are your m"...
0x5B61B6: call    PrintError
0x5B61BB: add     esp, 4
0x5B61BE: xor     eax, eax
0x5B61C0: mov     ecx, dword ptr [esp+40h+var_C]
0x5B61C4: mov     large fs:0, ecx
0x5B61CB: pop     ecx
0x5B61CC: pop     edi
0x5B61CD: pop     esi
0x5B61CE: pop     ebp
0x5B61CF: pop     ebx
0x5B61D0: add     esp, 2Ch
0x5B61D3: retn
0x5B61D4: push    0FA5h
0x5B61D9: mov     ecx, ebp
0x5B61DB: call    Tile_GetFloat
0x5B61E0: fcomp   dword ptr ds:0A69770h
0x5B61E6: fnstsw  ax
0x5B61E8: test    ah, 44h
0x5B61EB: jnp     short loc_5B6206
0x5B61ED: push    0FA5h
0x5B61F2: mov     ecx, ebp
0x5B61F4: call    Tile_GetFloat
0x5B61F9: fcomp   qword ptr ds:0A69778h
0x5B61FF: fnstsw  ax
0x5B6201: test    ah, 44h
0x5B6204: jp      short loc_5B621A
0x5B6206: fld     [esp+40h+var_2C]
0x5B620A: push    ecx
0x5B620B: fstp    [esp+44h+var_44]; a3
0x5B620E: push    0FABh; a2
0x5B6213: mov     ecx, ebp; this
0x5B6215: call    Tile_SetFloat
0x5B621A: push    offset aVersion; "version"
0x5B621F: push    ebp; int
0x5B6220: call    sub_58B800
0x5B6225: add     esp, 8
0x5B6228: lea     ecx, [esp+40h+dwHandle]
0x5B622C: push    ecx; lpdwHandle
0x5B622D: push    offset tstrFilename; "Oblivion.EXE"
0x5B6232: mov     edi, eax
0x5B6234: call    GetFileVersionInfoSizeA_0
0x5B6239: mov     ebx, eax
0x5B623B: test    ebx, ebx
0x5B623D: jz      short loc_5B6292
0x5B623F: test    edi, edi
0x5B6241: jz      short loc_5B6292
0x5B6243: push    ebx; Size
0x5B6244: call    FormHeapAlloc
0x5B6249: mov     edx, [esp+44h+dwHandle]
0x5B624D: add     esp, 4
0x5B6250: mov     ebp, eax
0x5B6252: push    ebp; lpData
0x5B6253: push    ebx; dwLen
0x5B6254: push    edx; dwHandle
0x5B6255: push    offset tstrFilename; "Oblivion.EXE"
0x5B625A: call    GetFileVersionInfoA_0
0x5B625F: lea     eax, [esp+40h+puLen]
0x5B6263: push    eax; puLen
0x5B6264: lea     ecx, [esp+44h+lpBuffer]
0x5B6268: push    ecx; lplpBuffer
0x5B6269: push    offset SubBlock; "\\StringFileInfo\\040904b0\\ProductVers"...
0x5B626E: push    ebp; pBlock
0x5B626F: call    VerQueryValueA_0
0x5B6274: mov     edx, [esp+40h+lpBuffer]
0x5B6278: push    edx
0x5B6279: push    0FDEh
0x5B627E: mov     ecx, edi
0x5B6280: call    Tile_SetString
0x5B6285: push    ebp
0x5B6286: call    FormHeapFree
0x5B628B: mov     ebp, [esp+44h+var_18]
0x5B628F: add     esp, 4
0x5B6292: cmp     byte ptr ds:0B3B408h, 0
0x5B6299: push    ecx
0x5B629A: mov     ecx, [esi+44h]; this
0x5B629D: jz      short loc_5B62A3
0x5B629F: fld1
0x5B62A1: jmp     short loc_5B62A9
0x5B62A3: fld     dword ptr ds:0A379B4h
0x5B62A9: fstp    [esp+44h+var_44]; a3
0x5B62AC: push    0FA1h; a2
0x5B62B1: call    Tile_SetFloat
0x5B62B6: push    0; float
0x5B62B8: mov     ecx, ebp
0x5B62BA: call    sub_58FBA0
0x5B62BF: fild    dword ptr ds:0B06C50h
0x5B62C5: fidiv   dword ptr ds:0B06C4Ch
0x5B62CB: fcomp   qword ptr ds:0A31C70h
0x5B62D1: fnstsw  ax
0x5B62D3: test    ah, 44h
0x5B62D6: jnp     short loc_5B633C
0x5B62D8: mov     eax, [esi+44h]
0x5B62DB: mov     ecx, [eax+24h]; this
0x5B62DE: mov     edx, [ecx+54h]
0x5B62E1: mov     eax, [ecx+58h]
0x5B62E4: mov     [esp+40h+var_2C], edx
0x5B62E8: fld     [esp+40h+var_2C]
0x5B62EC: fsub    qword ptr ds:0A6B808h
0x5B62F2: mov     edx, [ecx+5Ch]
0x5B62F5: mov     [esp+40h+var_28+4], edx
0x5B62F9: push    0; a3
0x5B62FB: fstp    [esp+44h+var_2C]
0x5B62FF: mov     edx, [esp+44h+var_2C]
0x5B6303: fld     [esp+44h+var_28+4]
0x5B6307: mov     [ecx+54h], edx
0x5B630A: fadd    qword ptr ds:0A6CBA0h
0x5B6310: mov     [ecx+58h], eax
0x5B6313: push    ecx
0x5B6314: fstp    [esp+48h+var_28+4]
0x5B6318: mov     eax, [esp+48h+var_28+4]
0x5B631C: fld     qword ptr ds:0A6CB98h
0x5B6322: mov     [ecx+5Ch], eax
0x5B6325: fabs
0x5B6327: fstp    [esp+48h+var_18]
0x5B632B: fld     [esp+48h+var_18]
0x5B632F: fstp    dword ptr [ecx+60h]
0x5B6332: fldz
0x5B6334: fstp    [esp+48h+a2]; a2
0x5B6337: call    NiAVObject_UpdateNiAVObject
0x5B633C: mov     ecx, ds:0B33B00h
0x5B6342: call    sub_45D450
0x5B6347: mov     ecx, ds:0B33B00h
0x5B634D: mov     eax, [ecx+6Ch]
0x5B6350: test    eax, eax
0x5B6352: jz      short loc_5B6396
0x5B6354: cmp     dword ptr [eax], 0
0x5B6357: jz      short loc_5B6396
0x5B6359: fld     dword ptr ds:0A379B4h
0x5B635F: push    ecx
0x5B6360: mov     ecx, [esi+28h]; this
0x5B6363: fstp    [esp+44h+var_44]; a3
0x5B6366: push    0FA1h; a2
0x5B636B: call    Tile_SetFloat
0x5B6370: push    1; arg1
0x5B6372: push    0; canCreate
0x5B6374: call    InterfaceManager_GetSingleton
0x5B6379: push    1
0x5B637B: call    sub_5966F0
0x5B6380: mov     ecx, [esi+28h]
0x5B6383: add     esp, 0Ch
0x5B6386: push    eax
0x5B6387: push    0FF0h
0x5B638C: call    sub_57D300
0x5B6391: fld1
0x5B6393: push    ecx
0x5B6394: jmp     short loc_5B63E0
0x5B6396: fld1
0x5B6398: push    ecx
0x5B6399: mov     ecx, [esi+28h]; this
0x5B639C: fstp    [esp+44h+var_44]; a3
0x5B639F: push    0FA1h; a2
0x5B63A4: call    Tile_SetFloat
0x5B63A9: push    1; arg1
0x5B63AB: push    0; canCreate
0x5B63AD: call    InterfaceManager_GetSingleton
0x5B63B2: push    1; arg1
0x5B63B4: push    0; canCreate
0x5B63B6: call    InterfaceManager_GetSingleton
0x5B63BB: add     dword ptr [eax+8Ch], 1
0x5B63C2: fild    dword ptr [eax+8Ch]
0x5B63C8: mov     edx, [eax+8Ch]
0x5B63CE: add     eax, 8Ch ; 'Œ'
0x5B63D3: test    edx, edx
0x5B63D5: jge     short loc_5B63DD
0x5B63D7: fadd    dword ptr ds:0A2FC78h
0x5B63DD: add     esp, 0Ch
0x5B63E0: mov     ecx, [esi+30h]; this
0x5B63E3: fstp    [esp+44h+var_44]; a3
0x5B63E6: push    0FF0h; a2
0x5B63EB: call    Tile_SetFloat
0x5B63F0: test    edi, edi
0x5B63F2: jz      loc_5B647C
0x5B63F8: push    0FD2h
0x5B63FD: mov     ecx, edi
0x5B63FF: call    Tile_GetFloat
0x5B6404: fdiv    qword ptr ds:0A309F0h
0x5B640A: mov     eax, [edi+24h]
0x5B640D: push    0FADh
0x5B6412: mov     ecx, edi
0x5B6414: fstp    [esp+44h+var_18]
0x5B6418: fld     [esp+44h+var_18]
0x5B641C: fld     st
0x5B641E: fabs
0x5B6420: fstp    [esp+44h+var_18]
0x5B6424: fld     [esp+44h+var_18]
0x5B6428: fstp    dword ptr [eax+60h]
0x5B642B: fld1
0x5B642D: fdivrp  st(1), st
0x5B642F: fstp    qword ptr [esp+44h+var_2C]
0x5B6433: call    Tile_GetFloat
0x5B6438: fmul    qword ptr [esp+40h+var_2C]
0x5B643C: push    ecx
0x5B643D: mov     ecx, edi; this
0x5B643F: fstp    [esp+44h+var_18]
0x5B6443: fld     [esp+44h+var_18]
0x5B6447: fstp    [esp+44h+var_44]; a3
0x5B644A: push    0FADh; a2
0x5B644F: call    Tile_SetFloat
0x5B6454: push    0FACh
0x5B6459: mov     ecx, edi
0x5B645B: call    Tile_GetFloat
0x5B6460: fmul    qword ptr [esp+40h+var_2C]
0x5B6464: push    ecx
0x5B6465: mov     ecx, edi; this
0x5B6467: fstp    [esp+44h+var_18]
0x5B646B: fld     [esp+44h+var_18]
0x5B646F: fstp    [esp+44h+var_44]; a3
0x5B6472: push    0FACh; a2
0x5B6477: call    Tile_SetFloat
0x5B647C: push    0; float
0x5B647E: mov     ecx, ebp
0x5B6480: call    sub_58FBA0
0x5B6485: mov     ecx, [esp+40h+var_14]; int
0x5B6489: push    0; char
0x5B648B: call    EnableMenu
0x5B6490: jmp     short loc_5B64A2
0x5B6492: cmp     dword ptr [esi+4], 0
0x5B6496: jz      short loc_5B64A2
0x5B6498: mov     edx, [esi]
0x5B649A: mov     eax, [edx]
0x5B649C: push    1
0x5B649E: mov     ecx, esi
0x5B64A0: call    eax
0x5B64A2: mov     eax, ebp
0x5B64A4: mov     ecx, dword ptr [esp+40h+var_C]
0x5B64A8: mov     large fs:0, ecx
0x5B64AF: pop     ecx
0x5B64B0: pop     edi
0x5B64B1: pop     esi
0x5B64B2: pop     ebp
0x5B64B3: pop     ebx
0x5B64B4: add     esp, 2Ch
0x5B64B7: retn
