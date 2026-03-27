0x441970: push    0FFFFFFFFh
0x441972: push    offset TES_constr_SEH
0x441977: mov     eax, large fs:0
0x44197D: push    eax
0x44197E: sub     esp, 8
0x441981: push    ebx
0x441982: push    esi
0x441983: push    edi
0x441984: mov     eax, ds:0B30AACh
0x441989: xor     eax, esp
0x44198B: push    eax
0x44198C: lea     eax, [esp+24h+var_C]
0x441990: mov     large fs:0, eax
0x441996: mov     esi, ecx
0x441998: mov     [esp+24h+var_14], esi
0x44199C: xor     ebx, ebx
0x44199E: mov     dword ptr [esi], offset ??_7TES@@6B@; const TES::`vftable'
0x4419A4: mov     [esi+78h], ebx
0x4419A7: mov     [esi+7Ch], ebx
0x4419AA: mov     [esi+80h], ebx
0x4419B0: mov     [esi+84h], ebx
0x4419B6: mov     [esi+8Ch], ebx
0x4419BC: mov     [esi+90h], ebx
0x4419C2: mov     [esi+94h], ebx
0x4419C8: mov     [esp+24h+var_4], ebx
0x4419CC: mov     [esi+98h], ebx
0x4419D2: mov     [esi+9Ch], ebx
0x4419D8: push    0ACh ; '¬'
0x4419DD: push    ebx
0x4419DE: push    esi
0x4419DF: mov     byte ptr [esp+30h+var_4], 2
0x4419E4: mov     [esi+0A0h], ebx
0x4419EA: mov     [esi+0A4h], ebx
0x4419F0: call    __memset
0x4419F5: mov     dword ptr ds:0B3F580h, 1
0x4419FF: call    sub_5350F0
0x441A04: call    sub_537760
0x441A09: fld     dword ptr ds:0B33A40h
0x441A0F: mov     eax, ds:0B0520Ch
0x441A14: fstp    dword ptr ds:0BA7920h
0x441A1A: fld     dword ptr ds:0B33A38h
0x441A20: mov     cl, ds:0B0521Ch
0x441A26: mov     edx, ds:0B05224h
0x441A2C: fstp    dword ptr ds:0BA791Ch
0x441A32: fld     dword ptr ds:0B05234h
0x441A38: mov     ds:0BA7918h, eax
0x441A3D: mov     eax, ds:0B0522Ch
0x441A42: fstp    dword ptr ds:0B2E2F0h
0x441A48: fld     dword ptr ds:0B05214h
0x441A4E: push    28h ; '('; Size
0x441A50: fstp    dword ptr ds:0B2E764h
0x441A56: mov     dword ptr ds:0B2E300h, offset sub_4DE010
0x441A60: fld     dword ptr ds:0B33A50h
0x441A66: mov     ds:0BA7909h, cl
0x441A6C: fmul    st, st
0x441A6E: mov     ds:0B2E2F4h, edx
0x441A74: mov     ds:0B2E2F8h, eax
0x441A79: mov     dword ptr ds:0BA7A88h, offset sub_4E2160
0x441A83: fstp    dword ptr ds:0B2E784h
0x441A89: mov     dword ptr ds:0BA7A84h, offset ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x441A93: call    FormHeapAlloc
0x441A98: add     esp, 10h
0x441A9B: mov     [esp+24h+var_10], eax
0x441A9F: cmp     eax, ebx
0x441AA1: mov     byte ptr [esp+24h+var_4], 3
0x441AA6: jz      short loc_441AB1
0x441AA8: mov     ecx, eax; this
0x441AAA: call    ??0GridCellArray@@QAE@XZ; GridCellArray::GridCellArray(void)
0x441AAF: jmp     short loc_441AB3
0x441AB1: xor     eax, eax
0x441AB3: mov     [esi+8], eax
0x441AB6: mov     edx, [eax]
0x441AB8: mov     ecx, eax
0x441ABA: mov     eax, [edx+4]
0x441ABD: mov     byte ptr [esp+24h+var_4], 2
0x441AC2: call    eax
0x441AC4: push    14h; Size
0x441AC6: call    FormHeapAlloc
0x441ACB: add     esp, 4
0x441ACE: mov     [esp+24h+var_10], eax
0x441AD2: cmp     eax, ebx
0x441AD4: mov     byte ptr [esp+24h+var_4], 4
0x441AD9: jz      short loc_441AE4
0x441ADB: mov     ecx, eax; this
0x441ADD: call    ??0GridDistantArray@@QAE@XZ; GridDistantArray::GridDistantArray(void)
0x441AE2: jmp     short loc_441AE6
0x441AE4: xor     eax, eax
0x441AE6: mov     [esi+4], eax
0x441AE9: mov     edx, [eax]
0x441AEB: mov     ecx, eax
0x441AED: mov     eax, [edx+4]
0x441AF0: mov     byte ptr [esp+24h+var_4], 2
0x441AF5: call    eax
0x441AF7: call    sub_4BE8A0
0x441AFC: call    sub_4BDCD0
0x441B01: push    3Ch ; '<'; Size
0x441B03: call    FormHeapAlloc
0x441B08: add     esp, 4
0x441B0B: mov     [esp+24h+var_10], eax
0x441B0F: cmp     eax, ebx
0x441B11: mov     byte ptr [esp+24h+var_4], 5
0x441B16: jz      short loc_441B21
0x441B18: mov     ecx, eax; this
0x441B1A: call    ??0IOManager@@QAE@XZ; IOManager::IOManager(void)
0x441B1F: jmp     short loc_441B23
0x441B21: xor     eax, eax
0x441B23: push    1Ch; Size
0x441B25: mov     byte ptr [esp+28h+var_4], 2
0x441B2A: mov     ds:0B33A10h, eax
0x441B2F: call    FormHeapAlloc
0x441B34: add     esp, 4
0x441B37: mov     [esp+24h+var_10], eax
0x441B3B: cmp     eax, ebx
0x441B3D: mov     byte ptr [esp+24h+var_4], 6
0x441B42: jz      short loc_441B4D
0x441B44: mov     ecx, eax
0x441B46: call    ModelLoader_constr
0x441B4B: jmp     short loc_441B4F
0x441B4D: xor     eax, eax
0x441B4F: push    0CE0h; Size
0x441B54: mov     byte ptr [esp+28h+var_4], 2
0x441B59: mov     ds:0B33A1Ch, eax
0x441B5E: call    FormHeapAlloc
0x441B63: add     esp, 4
0x441B66: mov     [esp+24h+var_10], eax
0x441B6A: cmp     eax, ebx
0x441B6C: mov     byte ptr [esp+24h+var_4], 7
0x441B71: jz      short loc_441B7C
0x441B73: mov     ecx, eax
0x441B75: call    TESDataHandler_constr
0x441B7A: jmp     short loc_441B7E
0x441B7C: xor     eax, eax
0x441B7E: mov     ecx, [esp+24h+lpString2]
0x441B82: push    ecx; lpString2
0x441B83: mov     ecx, eax
0x441B85: mov     byte ptr [esp+28h+var_4], 2
0x441B8A: mov     ds:0B33A98h, eax
0x441B8F: call    sub_44A2B0
0x441B94: push    1C4h; Size
0x441B99: call    FormHeapAlloc
0x441B9E: add     esp, 4
0x441BA1: mov     [esp+24h+lpString2], eax
0x441BA5: cmp     eax, ebx
0x441BA7: mov     byte ptr [esp+24h+var_4], 8
0x441BAC: jz      short loc_441BB7
0x441BAE: mov     ecx, eax
0x441BB0: call    sub_45B300
0x441BB5: jmp     short loc_441BB9
0x441BB7: xor     eax, eax
0x441BB9: mov     ds:0B33B00h, eax
0x441BBE: mov     eax, ds:0B06A2Ch
0x441BC3: lea     edx, [eax+2]
0x441BC6: imul    edx, eax
0x441BC9: lea     eax, [edx+1]
0x441BCC: cmp     ds:0B051DCh, eax
0x441BD2: mov     byte ptr [esp+24h+var_4], 2
0x441BD7: jnb     short loc_441BDE
0x441BD9: mov     ds:0B051DCh, eax
0x441BDE: mov     edi, ds:0B051D4h
0x441BE4: cmp     edi, 1
0x441BE7: jnb     short loc_441BF4
0x441BE9: mov     edi, 1
0x441BEE: mov     ds:0B051D4h, edi
0x441BF4: xor     ecx, ecx
0x441BF6: mov     eax, edi
0x441BF8: mov     edx, 4
0x441BFD: mul     edx
0x441BFF: seto    cl
0x441C02: neg     ecx
0x441C04: or      ecx, eax
0x441C06: push    ecx; Size
0x441C07: call    FormHeapAlloc
0x441C0C: mov     [esi+38h], eax
0x441C0F: mov     eax, ds:0B051DCh
0x441C14: xor     ecx, ecx
0x441C16: mov     edx, 4
0x441C1B: mul     edx
0x441C1D: seto    cl
0x441C20: neg     ecx
0x441C22: or      ecx, eax
0x441C24: push    ecx; Size
0x441C25: call    FormHeapAlloc
0x441C2A: add     esp, 8
0x441C2D: mov     [esi+3Ch], eax
0x441C30: xor     eax, eax
0x441C32: cmp     eax, ds:0B051D4h
0x441C38: jnb     short loc_441C45
0x441C3A: mov     ecx, [esi+38h]
0x441C3D: mov     [ecx+eax*4], ebx
0x441C40: add     eax, 1
0x441C43: jmp     short loc_441C32
0x441C45: xor     eax, eax
0x441C47: cmp     eax, ds:0B051DCh
0x441C4D: jnb     short loc_441C5A
0x441C4F: mov     edx, [esi+3Ch]
0x441C52: mov     [edx+eax*4], ebx
0x441C55: add     eax, 1
0x441C58: jmp     short loc_441C47
0x441C5A: mov     eax, 7FFFFFFFh
0x441C5F: mov     [esi+20h], eax
0x441C62: mov     [esi+24h], eax
0x441C65: mov     [esi+28h], eax
0x441C68: mov     [esi+2Ch], eax
0x441C6B: mov     [esi+48h], eax
0x441C6E: mov     [esi+4Ch], eax
0x441C71: mov     eax, [esp+24h+arg_4]
0x441C75: push    0E0h ; 'à'; Size
0x441C7A: mov     [esi+44h], ebx
0x441C7D: mov     [esi+40h], ebx
0x441C80: mov     [esi+0Ch], eax
0x441C83: call    FormHeapAlloc
0x441C88: mov     edi, eax
0x441C8A: add     esp, 4
0x441C8D: mov     [esp+24h+lpString2], edi
0x441C91: cmp     edi, ebx
0x441C93: mov     byte ptr [esp+24h+var_4], 9
0x441C98: jz      short loc_441CAA
0x441C9A: push    ebx
0x441C9B: mov     ecx, edi; this
0x441C9D: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x441CA2: mov     dword ptr [edi], offset ??_7BSTempNodeManager@@6B@; const BSTempNodeManager::`vftable'
0x441CA8: jmp     short loc_441CAC
0x441CAA: xor     edi, edi
0x441CAC: mov     ecx, [esi+0Ch]
0x441CAF: cmp     ecx, ebx
0x441CB1: mov     byte ptr [esp+24h+var_4], 2
0x441CB6: mov     [esi+14h], edi
0x441CB9: jz      short loc_441CC7
0x441CBB: mov     edx, [ecx]
0x441CBD: mov     eax, [edx+84h]
0x441CC3: push    ebx
0x441CC4: push    edi
0x441CC5: call    eax
0x441CC7: mov     ecx, [esp+24h+arg_8]
0x441CCB: mov     [esi+10h], ecx
0x441CCE: mov     ecx, [esp+24h+arg_C]
0x441CD2: mov     [esi+5Ch], ecx
0x441CD5: call    Sky__GetSunDirectionalLight
0x441CDA: mov     ecx, [esi+5Ch]
0x441CDD: mov     [esi+18h], eax
0x441CE0: call    sub_53FB50
0x441CE5: mov     [esi+1Ch], eax
0x441CE8: mov     [esi+69h], bl
0x441CEB: mov     [esi+74h], ebx
0x441CEE: mov     [esi+30h], ebx
0x441CF1: mov     byte ptr [esi+0A8h], 1
0x441CF8: mov     eax, ds:0B06A2Ch
0x441CFD: imul    eax, eax
0x441D00: cmp     ds:0B33A2Ch, eax
0x441D06: jnb     short loc_441D0D
0x441D08: mov     ds:0B33A2Ch, eax
0x441D0D: mov     [esi+53h], bl
0x441D10: mov     [esi+58h], ebx
0x441D13: cmp     ds:0B05244h, bl
0x441D19: jnz     short loc_441D22
0x441D1B: mov     byte ptr ds:0B3F958h, 1
0x441D22: mov     [esi+88h], ebx
0x441D28: mov     [esi+51h], bl
0x441D2B: mov     [esi+52h], bl
0x441D2E: mov     byte ptr [esi+0A9h], 1
0x441D35: mov     eax, esi
0x441D37: mov     ecx, dword ptr [esp+24h+var_C]
0x441D3B: mov     large fs:0, ecx
0x441D42: pop     ecx
0x441D43: pop     edi
0x441D44: pop     esi
0x441D45: pop     ebx
0x441D46: add     esp, 14h
0x441D49: retn    10h
