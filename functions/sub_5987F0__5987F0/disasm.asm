0x5987F0: sub     esp, 24h
0x5987F3: fld     dword ptr ds:0A53954h
0x5987F9: push    ebx; a3
0x5987FA: push    ebp; a3
0x5987FB: push    esi; a3
0x5987FC: push    edi; a3
0x5987FD: push    ecx
0x5987FE: mov     esi, ecx
0x598800: fstp    [esp+38h+a2]; a3
0x598803: mov     ebp, [esi+30h]
0x598806: mov     ecx, [esi+4]; this
0x598809: mov     ebx, [ebp+38h]
0x59880C: or      edi, 0FFFFFFFFh
0x59880F: push    0FAFh; a2
0x598814: mov     [esp+3Ch+var_4], ebp; a3
0x598818: mov     [esp+3Ch+var_14], 0; a3
0x598820: mov     [esp+3Ch+a3], edi; a3
0x598824: call    Tile_SetFloat
0x598829: fld     dword ptr ds:0A53954h
0x59882F: push    ecx
0x598830: mov     ecx, [esi+4]; this
0x598833: fstp    [esp+38h+a2]; a3
0x598836: push    0FB0h; a2
0x59883B: call    Tile_SetFloat
0x598840: fld     dword ptr ds:0A53954h
0x598846: push    ecx
0x598847: mov     ecx, [esi+4]; this
0x59884A: fstp    [esp+38h+a2]; a3
0x59884D: push    0FB1h; a2
0x598852: call    Tile_SetFloat
0x598857: fld     dword ptr ds:0A53954h
0x59885D: push    ecx
0x59885E: mov     ecx, [esi+4]; this
0x598861: fstp    [esp+38h+a2]; a3
0x598864: push    0FB2h; a2
0x598869: call    Tile_SetFloat
0x59886E: fld     dword ptr ds:0A53954h
0x598874: push    ecx
0x598875: mov     ecx, [esi+4]; this
0x598878: fstp    [esp+38h+a2]; a3
0x59887B: push    0FBDh; a2
0x598880: call    Tile_SetFloat
0x598885: fld     dword ptr ds:0A53954h
0x59888B: push    ecx
0x59888C: mov     ecx, [esi+4]; this
0x59888F: fstp    [esp+38h+a2]; a3
0x598892: push    0FBEh; a2
0x598897: call    Tile_SetFloat
0x59889C: fld     dword ptr ds:0A53954h
0x5988A2: push    ecx
0x5988A3: mov     ecx, [esi+4]; this
0x5988A6: fstp    [esp+38h+a2]; a3
0x5988A9: push    0FBFh; a2
0x5988AE: call    Tile_SetFloat
0x5988B3: fld     dword ptr ds:0A53954h
0x5988B9: push    ecx
0x5988BA: mov     ecx, [esi+4]; this
0x5988BD: fstp    [esp+38h+a2]; a3
0x5988C0: push    0FC0h; a2
0x5988C5: call    Tile_SetFloat
0x5988CA: fld     dword ptr ds:0A53954h
0x5988D0: push    ecx
0x5988D1: mov     ecx, [esi+4]; this
0x5988D4: fstp    [esp+38h+a2]; a3
0x5988D7: push    0FC1h; a2
0x5988DC: call    Tile_SetFloat
0x5988E1: fld     dword ptr ds:0A53954h
0x5988E7: push    ecx
0x5988E8: mov     ecx, [esi+38h]; this
0x5988EB: fstp    [esp+38h+a2]; a3
0x5988EE: push    0FAFh; a2
0x5988F3: call    Tile_SetFloat
0x5988F8: fld     dword ptr ds:0A53954h
0x5988FE: push    ecx
0x5988FF: mov     ecx, [esi+38h]; this
0x598902: fstp    [esp+38h+a2]; a3
0x598905: push    0FB0h; a2
0x59890A: call    Tile_SetFloat
0x59890F: fld     dword ptr ds:0A53954h
0x598915: push    ecx
0x598916: fstp    [esp+38h+a2]; a3
0x598919: push    0FB1h; a2
0x59891E: mov     ecx, [esi+38h]; this
0x598921: call    Tile_SetFloat
0x598926: fld     dword ptr ds:0A53954h
0x59892C: push    ecx
0x59892D: mov     ecx, [esi+38h]; this
0x598930: fstp    [esp+38h+a2]; a3
0x598933: push    0FB2h; a2
0x598938: call    Tile_SetFloat
0x59893D: cmp     byte ptr [esi+64h], 0
0x598941: mov     eax, [esi+58h]
0x598944: mov     [esp+34h+var_10], eax
0x598948: jz      short loc_598951
0x59894A: mov     ecx, [esi+5Ch]
0x59894D: mov     [esp+34h+var_10], ecx
0x598951: test    ebx, ebx
0x598953: mov     byte ptr [esp+34h+var_24+3], 0
0x598958: jz      loc_598D36
0x59895E: jmp     short loc_598964
0x598960: mov     ebx, [esp+34h+var_C]
0x598964: mov     ebp, [ebx+8]
0x598967: mov     edx, [ebx+4]
0x59896A: lea     eax, [ebx+8]
0x59896D: push    0FB7h
0x598972: mov     ecx, ebp
0x598974: mov     [esp+38h+var_C], edx; a3
0x598978: mov     [esp+38h+var_18], ebp; a3
0x59897C: call    Tile_GetFloat
0x598981: call    Double_To_SInt32
0x598986: test    ebp, ebp
0x598988: mov     ebx, eax
0x59898A: mov     [esp+34h+var_1C], ebx
0x59898E: mov     [esp+34h+var_8], ebx; a3
0x598992: jz      short loc_598A01
0x598994: cmp     byte ptr [esi+64h], 0
0x598998: mov     ecx, ebp
0x59899A: jz      short loc_5989B5
0x59899C: movzx   eax, byte ptr [esi+61h]
0x5989A0: push    eax
0x5989A1: push    0FB9h
0x5989A6: call    Tile_GetFloat
0x5989AB: call    Double_To_SInt32
0x5989B0: mov     ecx, [esi+44h]
0x5989B3: jmp     short loc_5989CC
0x5989B5: push    0; a3
0x5989B7: push    0FB9h
0x5989BC: call    Tile_GetFloat
0x5989C1: call    Double_To_SInt32
0x5989C6: mov     ecx, ds:0B333C4h; this
0x5989CC: push    eax; a2
0x5989CD: call    GetInventoryEntryOfItem
0x5989D2: mov     ebp, eax
0x5989D4: test    ebp, ebp
0x5989D6: jz      short loc_5989FD
0x5989D8: mov     ecx, [ebp+8]
0x5989DB: push    ecx
0x5989DC: lea     edx, [esp+38h+var_1C]
0x5989E0: push    edx
0x5989E1: call    sub_5AA210
0x5989E6: add     esp, 8
0x5989E9: mov     ecx, ebp
0x5989EB: call    ContainerEntryExtraData_DestroyDataTable
0x5989F0: push    ebp
0x5989F1: call    FormHeapFree
0x5989F6: mov     ebx, [esp+38h+var_1C]
0x5989FA: add     esp, 4
0x5989FD: mov     ebp, [esp+34h+var_18]
0x598A01: cmp     ebx, [esp+34h+var_14]
0x598A05: jz      loc_598BF4
0x598A0B: mov     eax, [esp+34h+arg_0]
0x598A0F: test    eax, ebx
0x598A11: jz      loc_598BF4
0x598A17: push    0FBCh
0x598A1C: mov     ecx, ebp
0x598A1E: call    Tile_GetFloat
0x598A23: fcomp   dword ptr ds:0A379B4h
0x598A29: fnstsw  ax
0x598A2B: test    ah, 44h
0x598A2E: jp      short loc_598A37
0x598A30: mov     eax, 1
0x598A35: jmp     short loc_598A39
0x598A37: xor     eax, eax
0x598A39: movzx   ecx, byte ptr [esi+64h]
0x598A3D: cmp     eax, ecx
0x598A3F: jnz     loc_598BF4
0x598A45: cmp     ebx, 1
0x598A48: jnz     short loc_598A5F
0x598A4A: fild    [esp+34h+a3]
0x598A4E: push    ecx
0x598A4F: mov     ecx, [esi+4]
0x598A52: fstp    [esp+38h+a2]
0x598A55: push    0FAFh
0x598A5A: jmp     loc_598BE8
0x598A5F: cmp     ebx, 2
0x598A62: jnz     short loc_598A79
0x598A64: fild    [esp+34h+a3]
0x598A68: push    ecx
0x598A69: mov     ecx, [esi+4]
0x598A6C: fstp    [esp+38h+a2]
0x598A6F: push    0FB0h
0x598A74: jmp     loc_598BE8
0x598A79: mov     eax, [esp+34h+arg_0]
0x598A7D: cmp     eax, 4
0x598A80: jz      loc_598B46
0x598A86: cmp     eax, 8
0x598A89: jz      loc_598B46
0x598A8F: cmp     eax, 0Fh
0x598A92: jl      loc_598BF4
0x598A98: cmp     ebx, 4
0x598A9B: jnz     short loc_598AB2
0x598A9D: fild    [esp+34h+a3]
0x598AA1: push    ecx
0x598AA2: mov     ecx, [esi+4]
0x598AA5: fstp    [esp+38h+a2]
0x598AA8: push    0FB1h
0x598AAD: jmp     loc_598BE8
0x598AB2: cmp     ebx, 5
0x598AB5: jnz     short loc_598AC0
0x598AB7: push    ecx
0x598AB8: mov     ecx, [esi+4]
0x598ABB: jmp     loc_598BDC
0x598AC0: cmp     ebx, 6
0x598AC3: jnz     short loc_598ADA
0x598AC5: fild    [esp+34h+a3]
0x598AC9: push    ecx
0x598ACA: mov     ecx, [esi+4]
0x598ACD: fstp    [esp+38h+a2]
0x598AD0: push    0FBDh
0x598AD5: jmp     loc_598BE8
0x598ADA: cmp     ebx, 8
0x598ADD: jnz     short loc_598AF4
0x598ADF: fild    [esp+34h+a3]
0x598AE3: push    ecx
0x598AE4: mov     ecx, [esi+4]
0x598AE7: fstp    [esp+38h+a2]
0x598AEA: push    0FBEh
0x598AEF: jmp     loc_598BE8
0x598AF4: cmp     ebx, 9
0x598AF7: jnz     short loc_598B0E
0x598AF9: fild    [esp+34h+a3]
0x598AFD: push    ecx
0x598AFE: mov     ecx, [esi+4]
0x598B01: fstp    [esp+38h+a2]
0x598B04: push    0FBFh
0x598B09: jmp     loc_598BE8
0x598B0E: cmp     ebx, 0Ah
0x598B11: jnz     short loc_598B28
0x598B13: fild    [esp+34h+a3]
0x598B17: push    ecx
0x598B18: mov     ecx, [esi+4]
0x598B1B: fstp    [esp+38h+a2]
0x598B1E: push    0FC0h
0x598B23: jmp     loc_598BE8
0x598B28: cmp     ebx, 0Bh
0x598B2B: jnz     loc_598BF4
0x598B31: fild    [esp+34h+a3]
0x598B35: push    ecx
0x598B36: mov     ecx, [esi+4]
0x598B39: fstp    [esp+38h+a2]
0x598B3C: push    0FC1h
0x598B41: jmp     loc_598BE8
0x598B46: cmp     ebx, 4
0x598B49: jnz     short loc_598B60
0x598B4B: fild    [esp+34h+a3]
0x598B4F: push    ecx
0x598B50: mov     ecx, [esi+38h]
0x598B53: fstp    [esp+38h+a2]
0x598B56: push    0FAFh
0x598B5B: jmp     loc_598BE8
0x598B60: cmp     ebx, 5
0x598B63: jnz     short loc_598B77
0x598B65: fild    [esp+34h+a3]
0x598B69: push    ecx
0x598B6A: mov     ecx, [esi+38h]
0x598B6D: fstp    [esp+38h+a2]
0x598B70: push    0FB0h
0x598B75: jmp     short loc_598BE8
0x598B77: cmp     ebx, 6
0x598B7A: jnz     short loc_598B8E
0x598B7C: fild    [esp+34h+a3]
0x598B80: push    ecx
0x598B81: mov     ecx, [esi+38h]
0x598B84: fstp    [esp+38h+a2]
0x598B87: push    0FB1h
0x598B8C: jmp     short loc_598BE8
0x598B8E: cmp     ebx, 8
0x598B91: jnz     short loc_598BA5
0x598B93: fild    [esp+34h+a3]
0x598B97: push    ecx
0x598B98: mov     ecx, [esi+38h]
0x598B9B: fstp    [esp+38h+a2]
0x598B9E: push    0FAFh
0x598BA3: jmp     short loc_598BE8
0x598BA5: cmp     ebx, 9
0x598BA8: jnz     short loc_598BBC
0x598BAA: fild    [esp+34h+a3]
0x598BAE: push    ecx
0x598BAF: mov     ecx, [esi+38h]
0x598BB2: fstp    [esp+38h+a2]
0x598BB5: push    0FB0h
0x598BBA: jmp     short loc_598BE8
0x598BBC: cmp     ebx, 0Ah
0x598BBF: jnz     short loc_598BD3
0x598BC1: fild    [esp+34h+a3]
0x598BC5: push    ecx
0x598BC6: mov     ecx, [esi+38h]
0x598BC9: fstp    [esp+38h+a2]
0x598BCC: push    0FB1h
0x598BD1: jmp     short loc_598BE8
0x598BD3: cmp     ebx, 0Bh
0x598BD6: jnz     short loc_598BF4
0x598BD8: push    ecx
0x598BD9: mov     ecx, [esi+38h]; this
0x598BDC: fild    [esp+38h+a3]
0x598BE0: fstp    [esp+38h+a2]; a3
0x598BE3: push    0FB2h; a2
0x598BE8: call    Tile_SetFloat
0x598BED: add     edi, 1
0x598BF0: mov     [esp+34h+a3], edi; a3
0x598BF4: push    0FBCh
0x598BF9: mov     ecx, ebp
0x598BFB: call    Tile_GetFloat
0x598C00: fcomp   dword ptr ds:0A379B4h
0x598C06: fnstsw  ax
0x598C08: test    ah, 44h
0x598C0B: jp      short loc_598C14
0x598C0D: mov     eax, 1
0x598C12: jmp     short loc_598C16
0x598C14: xor     eax, eax
0x598C16: movzx   edx, byte ptr [esi+64h]
0x598C1A: cmp     eax, edx
0x598C1C: jnz     short loc_598C22
0x598C1E: mov     [esp+34h+var_14], ebx; a3
0x598C22: mov     eax, [esp+34h+arg_0]
0x598C26: test    [esp+34h+var_8], eax
0x598C2A: jz      loc_598CF1
0x598C30: push    0FBCh
0x598C35: mov     ecx, ebp
0x598C37: call    Tile_GetFloat
0x598C3C: fld     dword ptr ds:0A379B4h
0x598C42: fucom   st(1)
0x598C44: fnstsw  ax
0x598C46: fstp    st(1)
0x598C48: test    ah, 44h
0x598C4B: jp      short loc_598C54
0x598C4D: mov     eax, 1
0x598C52: jmp     short loc_598C56
0x598C54: xor     eax, eax
0x598C56: movzx   ecx, byte ptr [esi+64h]
0x598C5A: cmp     eax, ecx
0x598C5C: jnz     loc_598CEF
0x598C62: push    ecx
0x598C63: fstp    [esp+38h+a2]; a3
0x598C66: push    0FB6h; a2
0x598C6B: mov     ecx, ebp; this
0x598C6D: call    Tile_SetFloat
0x598C72: fild    [esp+34h+a3]
0x598C76: push    ecx
0x598C77: mov     ecx, ebp; this
0x598C79: fstp    [esp+38h+a2]; a3
0x598C7C: push    0FAAh; a2
0x598C81: call    Tile_SetFloat
0x598C86: add     edi, 1
0x598C89: cmp     edi, [esp+34h+var_10]
0x598C8D: mov     [esp+34h+a3], edi
0x598C91: jle     loc_598D27
0x598C97: cmp     byte ptr [esp+34h+var_24+3], 0
0x598C9C: jnz     loc_598D27
0x598CA2: push    1; arg1
0x598CA4: push    0; canCreate
0x598CA6: call    InterfaceManager_GetSingleton
0x598CAB: push    1; arg1
0x598CAD: push    0; canCreate
0x598CAF: call    InterfaceManager_GetSingleton
0x598CB4: add     dword ptr [eax+8Ch], 1
0x598CBB: fild    dword ptr [eax+8Ch]
0x598CC1: mov     edx, [eax+8Ch]
0x598CC7: add     eax, 8Ch ; 'Œ'
0x598CCC: test    edx, edx
0x598CCE: jge     short loc_598CD6
0x598CD0: fadd    dword ptr ds:0A2FC78h
0x598CD6: add     esp, 0Ch
0x598CD9: fstp    [esp+38h+a2]; a3
0x598CDC: push    0FF0h; a2
0x598CE1: mov     ecx, ebp; this
0x598CE3: call    Tile_SetFloat
0x598CE8: mov     byte ptr [esp+34h+var_24+3], 1
0x598CED: jmp     short loc_598D27
0x598CEF: fstp    st
0x598CF1: fld1
0x598CF3: push    ecx
0x598CF4: fstp    [esp+38h+a2]; a3
0x598CF7: mov     ecx, ebp; this
0x598CF9: push    0FB6h; a2
0x598CFE: call    Tile_SetFloat
0x598D03: cmp     ebx, [esp+34h+arg_0]
0x598D07: push    ecx
0x598D08: mov     ecx, ebp; this
0x598D0A: jle     short loc_598D14
0x598D0C: fld     dword ptr ds:0A6B040h
0x598D12: jmp     short loc_598D1A
0x598D14: fld     dword ptr ds:0A53954h
0x598D1A: fstp    [esp+38h+a2]; a3
0x598D1D: push    0FAAh; a2
0x598D22: call    Tile_SetFloat
0x598D27: cmp     [esp+34h+var_C], 0
0x598D2C: jnz     loc_598960
0x598D32: mov     ebp, [esp+34h+var_4]
0x598D36: xor     eax, eax
0x598D38: add     edi, 0FFFFFFFFh
0x598D3B: test    edi, edi
0x598D3D: setl    al
0x598D40: push    ecx
0x598D41: mov     ecx, ebp; this
0x598D43: sub     eax, 1
0x598D46: and     eax, edi
0x598D48: mov     [esp+38h+arg_0], eax; a3
0x598D4C: fild    [esp+38h+arg_0]
0x598D50: fstp    [esp+38h+a2]; a3
0x598D53: push    0FAEh; a2
0x598D58: call    Tile_SetFloat
0x598D5D: xor     ecx, ecx
0x598D5F: test    edi, edi
0x598D61: setl    cl
0x598D64: sub     ecx, 1
0x598D67: and     ecx, edi
0x598D69: mov     [esp+34h+arg_0], ecx
0x598D6D: fild    [esp+34h+arg_0]
0x598D71: push    ecx
0x598D72: mov     ecx, [esi+4]; this
0x598D75: fstp    [esp+38h+a2]; a3
0x598D78: push    0FB3h; a2
0x598D7D: call    Tile_SetFloat
0x598D82: mov     ecx, [esi+4]
0x598D85: push    0FC1h
0x598D8A: call    Tile_GetFloat
0x598D8F: fcomp   dword ptr ds:0A53954h
0x598D95: fnstsw  ax
0x598D97: test    ah, 44h
0x598D9A: jp      short loc_598DBB
0x598D9C: mov     edi, [esi+4]
0x598D9F: push    0FB3h
0x598DA4: mov     ecx, edi
0x598DA6: call    Tile_GetFloat
0x598DAB: push    ecx
0x598DAC: fstp    [esp+38h+a2]; a3
0x598DAF: push    0FC1h; a2
0x598DB4: mov     ecx, edi; this
0x598DB6: call    Tile_SetFloat
0x598DBB: mov     ecx, [esi+4]
0x598DBE: push    0FC0h
0x598DC3: call    Tile_GetFloat
0x598DC8: fcomp   dword ptr ds:0A53954h
0x598DCE: fnstsw  ax
0x598DD0: test    ah, 44h
0x598DD3: jp      short loc_598DF4
0x598DD5: mov     edi, [esi+4]
0x598DD8: push    0FC1h
0x598DDD: mov     ecx, edi
0x598DDF: call    Tile_GetFloat
0x598DE4: push    ecx
0x598DE5: fstp    [esp+38h+a2]; a3
0x598DE8: push    0FC0h; a2
0x598DED: mov     ecx, edi; this
0x598DEF: call    Tile_SetFloat
0x598DF4: mov     ecx, [esi+4]
0x598DF7: push    0FBFh
0x598DFC: call    Tile_GetFloat
0x598E01: fcomp   dword ptr ds:0A53954h
0x598E07: fnstsw  ax
0x598E09: test    ah, 44h
0x598E0C: jp      short loc_598E2D
0x598E0E: mov     edi, [esi+4]
0x598E11: push    0FC0h
0x598E16: mov     ecx, edi
0x598E18: call    Tile_GetFloat
0x598E1D: push    ecx
0x598E1E: fstp    [esp+38h+a2]; a3
0x598E21: push    0FBFh; a2
0x598E26: mov     ecx, edi; this
0x598E28: call    Tile_SetFloat
0x598E2D: mov     ecx, [esi+4]
0x598E30: push    0FBEh
0x598E35: call    Tile_GetFloat
0x598E3A: fcomp   dword ptr ds:0A53954h
0x598E40: fnstsw  ax
0x598E42: test    ah, 44h
0x598E45: jp      short loc_598E66
0x598E47: mov     edi, [esi+4]
0x598E4A: push    0FBFh
0x598E4F: mov     ecx, edi
0x598E51: call    Tile_GetFloat
0x598E56: push    ecx
0x598E57: fstp    [esp+38h+a2]; a3
0x598E5A: push    0FBEh; a2
0x598E5F: mov     ecx, edi; this
0x598E61: call    Tile_SetFloat
0x598E66: mov     ecx, [esi+4]
0x598E69: push    0FBDh
0x598E6E: call    Tile_GetFloat
0x598E73: fcomp   dword ptr ds:0A53954h
0x598E79: fnstsw  ax
0x598E7B: test    ah, 44h
0x598E7E: jp      short loc_598E9F
0x598E80: mov     edi, [esi+4]
0x598E83: push    0FBEh
0x598E88: mov     ecx, edi
0x598E8A: call    Tile_GetFloat
0x598E8F: push    ecx
0x598E90: fstp    [esp+38h+a2]; a3
0x598E93: push    0FBDh; a2
0x598E98: mov     ecx, edi; this
0x598E9A: call    Tile_SetFloat
0x598E9F: mov     ecx, [esi+4]
0x598EA2: push    0FB2h
0x598EA7: call    Tile_GetFloat
0x598EAC: fcomp   dword ptr ds:0A53954h
0x598EB2: fnstsw  ax
0x598EB4: test    ah, 44h
0x598EB7: jp      short loc_598ED8
0x598EB9: mov     edi, [esi+4]
0x598EBC: push    0FBDh
0x598EC1: mov     ecx, edi
0x598EC3: call    Tile_GetFloat
0x598EC8: push    ecx
0x598EC9: fstp    [esp+38h+a2]; a3
0x598ECC: push    0FB2h; a2
0x598ED1: mov     ecx, edi; this
0x598ED3: call    Tile_SetFloat
0x598ED8: mov     ecx, [esi+4]
0x598EDB: push    0FB1h
0x598EE0: call    Tile_GetFloat
0x598EE5: fcomp   dword ptr ds:0A53954h
0x598EEB: fnstsw  ax
0x598EED: test    ah, 44h
0x598EF0: jp      short loc_598F11
0x598EF2: mov     edi, [esi+4]
0x598EF5: push    0FB2h
0x598EFA: mov     ecx, edi
0x598EFC: call    Tile_GetFloat
0x598F01: push    ecx
0x598F02: fstp    [esp+38h+a2]; a3
0x598F05: push    0FB1h; a2
0x598F0A: mov     ecx, edi; this
0x598F0C: call    Tile_SetFloat
0x598F11: mov     ecx, [esi+4]
0x598F14: push    0FB0h
0x598F19: call    Tile_GetFloat
0x598F1E: fcomp   dword ptr ds:0A53954h
0x598F24: fnstsw  ax
0x598F26: test    ah, 44h
0x598F29: jp      short loc_598F4A
0x598F2B: mov     edi, [esi+4]
0x598F2E: push    0FB1h
0x598F33: mov     ecx, edi
0x598F35: call    Tile_GetFloat
0x598F3A: push    ecx
0x598F3B: fstp    [esp+38h+a2]; a3
0x598F3E: push    0FB0h; a2
0x598F43: mov     ecx, edi; this
0x598F45: call    Tile_SetFloat
0x598F4A: mov     ecx, [esi+4]
0x598F4D: push    0FAFh
0x598F52: call    Tile_GetFloat
0x598F57: fcomp   dword ptr ds:0A53954h
0x598F5D: fnstsw  ax
0x598F5F: test    ah, 44h
0x598F62: jp      short loc_598F83
0x598F64: mov     edi, [esi+4]
0x598F67: push    0FB0h
0x598F6C: mov     ecx, edi
0x598F6E: call    Tile_GetFloat
0x598F73: push    ecx
0x598F74: fstp    [esp+38h+a2]; a3
0x598F77: push    0FAFh; a2
0x598F7C: mov     ecx, edi; this
0x598F7E: call    Tile_SetFloat
0x598F83: mov     ecx, [esi+38h]
0x598F86: push    0FB2h
0x598F8B: call    Tile_GetFloat
0x598F90: fcomp   dword ptr ds:0A53954h
0x598F96: fnstsw  ax
0x598F98: test    ah, 44h
0x598F9B: jp      short loc_598FBB
0x598F9D: mov     ecx, [esi+4]
0x598FA0: push    0FB3h
0x598FA5: call    Tile_GetFloat
0x598FAA: push    ecx
0x598FAB: mov     ecx, [esi+38h]; this
0x598FAE: fstp    [esp+38h+a2]; a3
0x598FB1: push    0FB2h; a2
0x598FB6: call    Tile_SetFloat
0x598FBB: mov     ecx, [esi+38h]
0x598FBE: push    0FB1h
0x598FC3: call    Tile_GetFloat
0x598FC8: fcomp   dword ptr ds:0A53954h
0x598FCE: fnstsw  ax
0x598FD0: test    ah, 44h
0x598FD3: jp      short loc_598FF3
0x598FD5: mov     ecx, [esi+38h]
0x598FD8: push    0FB2h
0x598FDD: call    Tile_GetFloat
0x598FE2: push    ecx
0x598FE3: mov     ecx, [esi+38h]; this
0x598FE6: fstp    [esp+38h+a2]; a3
0x598FE9: push    0FB1h; a2
0x598FEE: call    Tile_SetFloat
0x598FF3: mov     ecx, [esi+38h]
0x598FF6: push    0FB0h
0x598FFB: call    Tile_GetFloat
0x599000: fcomp   dword ptr ds:0A53954h
0x599006: fnstsw  ax
0x599008: test    ah, 44h
0x59900B: jp      short loc_59902B
0x59900D: mov     ecx, [esi+38h]
0x599010: push    0FB1h
0x599015: call    Tile_GetFloat
0x59901A: push    ecx
0x59901B: mov     ecx, [esi+38h]; this
0x59901E: fstp    [esp+38h+a2]; a3
0x599021: push    0FB0h; a2
0x599026: call    Tile_SetFloat
0x59902B: mov     ecx, [esi+38h]
0x59902E: push    0FAFh
0x599033: call    Tile_GetFloat
0x599038: fcomp   dword ptr ds:0A53954h
0x59903E: fnstsw  ax
0x599040: test    ah, 44h
0x599043: jp      short loc_599063
0x599045: mov     ecx, [esi+38h]
0x599048: push    0FB0h
0x59904D: call    Tile_GetFloat
0x599052: push    ecx
0x599053: mov     ecx, [esi+38h]; this
0x599056: fstp    [esp+38h+a2]; a3
0x599059: push    0FAFh; a2
0x59905E: call    Tile_SetFloat
0x599063: pop     edi
0x599064: pop     esi
0x599065: pop     ebp
0x599066: pop     ebx
0x599067: add     esp, 24h
0x59906A: retn    4
