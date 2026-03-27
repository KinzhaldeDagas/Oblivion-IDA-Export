0x5C5F00: push    0FFFFFFFFh
0x5C5F02: push    offset SEH_5C5F00
0x5C5F07: mov     eax, large fs:0
0x5C5F0D: push    eax
0x5C5F0E: sub     esp, 0Ch
0x5C5F11: push    ebx; a3
0x5C5F12: push    ebp; a3
0x5C5F13: push    esi; a3
0x5C5F14: push    edi; a3
0x5C5F15: mov     eax, ds:0B30AACh
0x5C5F1A: xor     eax, esp
0x5C5F1C: push    eax; a3
0x5C5F1D: lea     eax, [esp+2Ch+var_C]
0x5C5F21: mov     large fs:0, eax
0x5C5F27: mov     esi, ecx
0x5C5F29: mov     eax, ds:0B39330h
0x5C5F2E: push    0FAEh; int
0x5C5F33: sub     esp, 8
0x5C5F36: mov     ecx, esp; this
0x5C5F38: xor     edi, edi
0x5C5F3A: mov     [esp+38h+a3], esp
0x5C5F3E: push    edi; a3
0x5C5F3F: push    eax; a2
0x5C5F40: mov     [ecx], edi
0x5C5F42: mov     [ecx+4], di
0x5C5F46: mov     [ecx+6], di
0x5C5F4A: call    BSStringT_Set
0x5C5F4F: mov     eax, ds:0B38F88h
0x5C5F54: sub     esp, 8
0x5C5F57: mov     ecx, esp; this
0x5C5F59: mov     [esp+40h+var_14], esp
0x5C5F5D: push    edi; a3
0x5C5F5E: push    eax; a2
0x5C5F5F: mov     [esp+48h+var_4], edi
0x5C5F63: mov     [ecx], edi
0x5C5F65: mov     [ecx+4], di
0x5C5F69: mov     [ecx+6], di
0x5C5F6D: call    BSStringT_Set
0x5C5F72: or      ebp, 0FFFFFFFFh
0x5C5F75: mov     ecx, esi
0x5C5F77: mov     [esp+40h+var_4], ebp
0x5C5F7B: call    sub_5C3440
0x5C5F80: mov     ecx, eax
0x5C5F82: call    Tile_GetFloat
0x5C5F87: call    Double_To_SInt32
0x5C5F8C: mov     eax, [esi+eax*4+8F0h]
0x5C5F93: movzx   ecx, al
0x5C5F96: mov     [esp+2Ch+a3], ecx
0x5C5F9A: sub     esp, 8
0x5C5F9D: fild    [esp+34h+a3]
0x5C5FA1: mov     ecx, esp; this
0x5C5FA3: mov     [esi+878h], eax
0x5C5FA9: mov     eax, ds:0B38FC0h
0x5C5FAE: fdiv    qword ptr ds:0A3DDD8h
0x5C5FB4: mov     [esp+34h+var_14], esp; a3
0x5C5FB8: push    edi; a3
0x5C5FB9: push    eax; a2
0x5C5FBA: mov     [ecx], edi
0x5C5FBC: mov     [ecx+4], di
0x5C5FC0: mov     [ecx+6], di
0x5C5FC4: fstp    [esp+3Ch+a3]; a3
0x5C5FC8: call    BSStringT_Set
0x5C5FCD: mov     eax, ds:0B38F88h
0x5C5FD2: sub     esp, 8
0x5C5FD5: mov     ecx, esp; this
0x5C5FD7: mov     [esp+3Ch+var_10], esp; a3
0x5C5FDB: push    edi; a3
0x5C5FDC: push    eax; a2
0x5C5FDD: mov     [esp+44h+var_4], 1
0x5C5FE5: mov     [ecx], edi
0x5C5FE7: mov     [ecx+4], di
0x5C5FEB: mov     [ecx+6], di
0x5C5FEF: call    BSStringT_Set
0x5C5FF4: mov     ecx, esi
0x5C5FF6: mov     [esp+3Ch+var_4], ebp
0x5C5FFA: call    sub_5C3440
0x5C5FFF: fld     dword ptr ds:0A6D2D8h
0x5C6005: push    ecx
0x5C6006: mov     ebx, eax
0x5C6008: fstp    [esp+30h+a2]; a3
0x5C600B: push    0FB1h; a2
0x5C6010: mov     ecx, ebx; this
0x5C6012: call    Tile_SetFloat
0x5C6017: fld     [esp+2Ch+a3]
0x5C601B: push    ecx
0x5C601C: fstp    [esp+30h+a2]; a3
0x5C601F: push    0FB1h; a2
0x5C6024: mov     ecx, ebx; this
0x5C6026: call    Tile_SetFloat
0x5C602B: fldz
0x5C602D: push    ecx
0x5C602E: fstp    [esp+30h+a2]; a3
0x5C6031: push    0FB1h; a2
0x5C6036: mov     ecx, ebx; this
0x5C6038: call    Tile_SetFloat
0x5C603D: movzx   edx, byte ptr [esi+879h]
0x5C6044: mov     [esp+2Ch+a3], edx
0x5C6048: mov     eax, ds:0B38FC8h
0x5C604D: fild    [esp+2Ch+a3]
0x5C6051: sub     esp, 8
0x5C6054: mov     ecx, esp; this
0x5C6056: mov     [esp+34h+var_10], esp
0x5C605A: fdiv    qword ptr ds:0A3DDD8h
0x5C6060: push    edi; a3
0x5C6061: push    eax; a2
0x5C6062: mov     [ecx], edi
0x5C6064: mov     [ecx+4], di
0x5C6068: mov     [ecx+6], di
0x5C606C: fstp    [esp+3Ch+a3]; a3
0x5C6070: call    BSStringT_Set
0x5C6075: mov     eax, ds:0B38F88h
0x5C607A: sub     esp, 8
0x5C607D: mov     ecx, esp; this
0x5C607F: mov     [esp+3Ch+var_14], esp
0x5C6083: push    edi; a3
0x5C6084: push    eax; a2
0x5C6085: mov     [esp+44h+var_4], 2
0x5C608D: mov     [ecx], edi
0x5C608F: mov     [ecx+4], di
0x5C6093: mov     [ecx+6], di
0x5C6097: call    BSStringT_Set
0x5C609C: mov     ecx, esi
0x5C609E: mov     [esp+3Ch+var_4], ebp
0x5C60A2: call    sub_5C3440
0x5C60A7: fld     dword ptr ds:0A6D2D8h
0x5C60AD: push    ecx
0x5C60AE: mov     ebx, eax
0x5C60B0: fstp    [esp+30h+a2]; a3
0x5C60B3: push    0FB1h; a2
0x5C60B8: mov     ecx, ebx; this
0x5C60BA: call    Tile_SetFloat
0x5C60BF: fld     [esp+2Ch+a3]
0x5C60C3: push    ecx
0x5C60C4: fstp    [esp+30h+a2]; a3
0x5C60C7: push    0FB1h; a2
0x5C60CC: mov     ecx, ebx; this
0x5C60CE: call    Tile_SetFloat
0x5C60D3: fldz
0x5C60D5: push    ecx
0x5C60D6: fstp    [esp+30h+a2]; a3
0x5C60D9: push    0FB1h; a2
0x5C60DE: mov     ecx, ebx; this
0x5C60E0: call    Tile_SetFloat
0x5C60E5: movzx   eax, byte ptr [esi+87Ah]
0x5C60EC: mov     [esp+2Ch+a3], eax
0x5C60F0: mov     eax, ds:0B38FD0h
0x5C60F5: fild    [esp+2Ch+a3]
0x5C60F9: sub     esp, 8
0x5C60FC: mov     ecx, esp; this
0x5C60FE: mov     [esp+34h+var_10], esp
0x5C6102: fdiv    qword ptr ds:0A3DDD8h
0x5C6108: push    edi; a3
0x5C6109: push    eax; a2
0x5C610A: mov     [ecx], edi
0x5C610C: mov     [ecx+4], di
0x5C6110: mov     [ecx+6], di
0x5C6114: fstp    [esp+3Ch+a3]
0x5C6118: call    BSStringT_Set
0x5C611D: mov     eax, ds:0B38F88h
0x5C6122: sub     esp, 8
0x5C6125: mov     ecx, esp; this
0x5C6127: mov     [esp+3Ch+var_14], esp
0x5C612B: push    edi; a3
0x5C612C: push    eax; a2
0x5C612D: mov     [esp+44h+var_4], 3
0x5C6135: mov     [ecx], edi
0x5C6137: mov     [ecx+4], di
0x5C613B: mov     [ecx+6], di
0x5C613F: call    BSStringT_Set
0x5C6144: mov     ecx, esi
0x5C6146: mov     [esp+3Ch+var_4], ebp
0x5C614A: call    sub_5C3440
0x5C614F: mov     ebx, eax
0x5C6151: fld     dword ptr ds:0A6D2D8h
0x5C6157: push    ecx
0x5C6158: fstp    [esp+30h+a2]; a3
0x5C615B: push    0FB1h; a2
0x5C6160: mov     ecx, ebx; this
0x5C6162: call    Tile_SetFloat
0x5C6167: fld     [esp+2Ch+a3]
0x5C616B: push    ecx
0x5C616C: fstp    [esp+30h+a2]; a3
0x5C616F: push    0FB1h; a2
0x5C6174: mov     ecx, ebx; this
0x5C6176: call    Tile_SetFloat
0x5C617B: fldz
0x5C617D: push    ecx
0x5C617E: fstp    [esp+30h+a2]; a3
0x5C6181: push    0FB1h; a2
0x5C6186: mov     ecx, ebx; this
0x5C6188: call    Tile_SetFloat
0x5C618D: mov     ecx, ds:0B333C4h
0x5C6193: mov     edx, [ecx]
0x5C6195: mov     eax, [edx+170h]
0x5C619B: call    eax
0x5C619D: mov     ecx, [eax+1C8h]
0x5C61A3: call    sub_51FE90
0x5C61A8: test    al, al
0x5C61AA: mov     eax, ds:0B39330h
0x5C61AF: jnz     loc_5C624A
0x5C61B5: push    0FAEh
0x5C61BA: sub     esp, 8
0x5C61BD: mov     ecx, esp; this
0x5C61BF: mov     [esp+38h+var_10], esp
0x5C61C3: push    edi; a3
0x5C61C4: push    eax; a2
0x5C61C5: mov     [ecx], edi
0x5C61C7: mov     [ecx+4], di
0x5C61CB: mov     [ecx+6], di
0x5C61CF: call    BSStringT_Set
0x5C61D4: mov     eax, ds:0B38F88h
0x5C61D9: sub     esp, 8
0x5C61DC: mov     ecx, esp; this
0x5C61DE: mov     [esp+40h+var_14], esp
0x5C61E2: push    edi; a3
0x5C61E3: push    eax; a2
0x5C61E4: mov     [esp+48h+var_4], 4
0x5C61EC: mov     [ecx], edi
0x5C61EE: mov     [ecx+4], di
0x5C61F2: mov     [ecx+6], di
0x5C61F6: call    BSStringT_Set
0x5C61FB: mov     ecx, esi
0x5C61FD: mov     [esp+40h+var_4], ebp
0x5C6201: call    sub_5C3440
0x5C6206: mov     ecx, eax
0x5C6208: call    Tile_GetFloat
0x5C620D: call    Double_To_SInt32
0x5C6212: lea     eax, [esi+eax*8+930h]
0x5C6219: mov     eax, [eax]
0x5C621B: push    eax
0x5C621C: mov     eax, ds:0B39330h
0x5C6221: push    0FB4h
0x5C6226: sub     esp, 8
0x5C6229: mov     ecx, esp; this
0x5C622B: mov     [esp+3Ch+var_10], esp
0x5C622F: push    edi; a3
0x5C6230: push    eax; a2
0x5C6231: mov     [ecx], edi
0x5C6233: mov     [ecx+4], di
0x5C6237: mov     [ecx+6], di
0x5C623B: call    BSStringT_Set
0x5C6240: mov     [esp+3Ch+var_4], 5
0x5C6248: jmp     short loc_5C6276
0x5C624A: push    offset EmptyString
0x5C624F: push    0FB4h
0x5C6254: sub     esp, 8
0x5C6257: mov     ecx, esp; this
0x5C6259: mov     [esp+3Ch+var_10], esp
0x5C625D: push    edi; a3
0x5C625E: push    eax; a2
0x5C625F: mov     [ecx], edi
0x5C6261: mov     [ecx+4], di
0x5C6265: mov     [ecx+6], di
0x5C6269: call    BSStringT_Set
0x5C626E: mov     [esp+3Ch+var_4], 6
0x5C6276: mov     eax, ds:0B38F88h
0x5C627B: sub     esp, 8
0x5C627E: mov     ecx, esp; this
0x5C6280: mov     [esp+44h+var_14], esp
0x5C6284: push    edi; a3
0x5C6285: mov     [ecx], edi
0x5C6287: mov     [ecx+4], di
0x5C628B: push    eax; a2
0x5C628C: mov     [ecx+6], di
0x5C6290: call    BSStringT_Set
0x5C6295: mov     ecx, esi
0x5C6297: mov     [esp+44h+var_4], ebp
0x5C629B: call    sub_5C3440
0x5C62A0: mov     ecx, eax
0x5C62A2: call    Tile_SetString
0x5C62A7: push    edi
0x5C62A8: mov     ecx, esi
0x5C62AA: call    sub_5C5C30
0x5C62AF: mov     ecx, [esp+2Ch+var_C]
0x5C62B3: mov     large fs:0, ecx
0x5C62BA: pop     ecx
0x5C62BB: pop     edi
0x5C62BC: pop     esi
0x5C62BD: pop     ebp
0x5C62BE: pop     ebx
0x5C62BF: add     esp, 18h
0x5C62C2: retn
