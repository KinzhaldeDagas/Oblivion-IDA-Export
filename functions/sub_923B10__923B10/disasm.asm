0x923B10: mov     eax, [esp+arg_0]
0x923B14: mov     ecx, [esp+arg_4]
0x923B18: mov     edx, [esp+arg_8]
0x923B1C: push    ebx
0x923B1D: mov     ebx, [esp+4+arg_10]
0x923B21: push    ebp
0x923B22: push    esi
0x923B23: mov     esi, [esp+0Ch+arg_14]
0x923B27: mov     [esi], eax
0x923B29: mov     eax, ebx
0x923B2B: and     eax, 8000000Fh
0x923B30: push    edi
0x923B31: mov     [esi+4], ecx
0x923B34: mov     [esi+8], edx
0x923B37: jns     short loc_923B3E
0x923B39: dec     eax
0x923B3A: or      eax, 0FFFFFFF0h
0x923B3D: inc     eax
0x923B3E: sub     ebx, eax
0x923B40: lea     ecx, [ebx+ebx*4]
0x923B43: shl     ecx, 1
0x923B45: mov     edi, [esp+10h+arg_C]
0x923B49: mov     eax, 88888889h
0x923B4E: imul    ecx
0x923B50: add     edx, ecx
0x923B52: mov     ebp, ebx
0x923B54: sar     edx, 5
0x923B57: imul    ebp, 1Eh
0x923B5A: mov     [esp+10h+arg_14], ecx
0x923B5E: mov     ecx, edx
0x923B60: shr     ecx, 1Fh
0x923B63: fild    [esp+10h+arg_14]
0x923B67: add     ecx, edx
0x923B69: mov     eax, 88888889h
0x923B6E: imul    ebp
0x923B70: fmul    dword ptr ds:0A9DD90h
0x923B76: add     edi, 0Fh
0x923B79: and     edi, 0FFFFFFF0h
0x923B7C: add     edx, ebp
0x923B7E: sar     edx, 5
0x923B81: mov     [esi+0Ch], edi
0x923B84: lea     edi, [ecx+edi+0Fh]
0x923B88: mov     eax, edx
0x923B8A: shr     eax, 1Fh
0x923B8D: and     edi, 0FFFFFFF0h
0x923B90: add     eax, edx
0x923B92: lea     eax, [eax+edi+0Fh]
0x923B96: and     eax, 0FFFFFFF0h
0x923B99: mov     [esi+10h], edi
0x923B9C: mov     [esi+14h], edi
0x923B9F: lea     edi, [ecx+eax+0Fh]
0x923BA3: and     edi, 0FFFFFFF0h
0x923BA6: mov     [esi+18h], eax
0x923BA9: mov     [esi+1Ch], eax
0x923BAC: mov     [esi+20h], edi
0x923BAF: mov     [esi+24h], edi
0x923BB2: call    __ftol2
0x923BB7: mov     ecx, [esp+10h+arg_C]
0x923BBB: mov     edx, [esi+0Ch]
0x923BBE: sub     edi, eax
0x923BC0: mov     eax, [esi+14h]
0x923BC3: add     edi, 0Fh
0x923BC6: and     edi, 0FFFFFFF0h
0x923BC9: add     ecx, ebx
0x923BCB: mov     [esi+38h], ecx
0x923BCE: mov     ecx, [esi+1Ch]
0x923BD1: mov     [esi+48h], eax
0x923BD4: mov     eax, [esi+24h]
0x923BD7: mov     [esi+28h], edi
0x923BDA: mov     [esi+34h], edi
0x923BDD: mov     [esi+3Ch], edi
0x923BE0: mov     [esi+40h], edi
0x923BE3: pop     edi
0x923BE4: mov     [esi+44h], edx
0x923BE7: mov     [esi+4Ch], ecx
0x923BEA: mov     [esi+2Ch], eax
0x923BED: mov     [esi+30h], eax
0x923BF0: pop     esi
0x923BF1: pop     ebp
0x923BF2: pop     ebx
0x923BF3: retn
