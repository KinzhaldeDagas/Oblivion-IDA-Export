0x7ACF40: sub     esp, 0Ch
0x7ACF43: mov     eax, ds:0B3F928h
0x7ACF48: push    ebp
0x7ACF49: push    esi
0x7ACF4A: push    edi
0x7ACF4B: mov     edi, ecx
0x7ACF4D: mov     [esp+18h+var_4], eax
0x7ACF51: mov     eax, [edi+20h]
0x7ACF54: xor     ebp, ebp
0x7ACF56: cmp     eax, ebp
0x7ACF58: mov     [edi+30h], eax
0x7ACF5B: jz      short loc_7ACF6F
0x7ACF5D: mov     ecx, [edi+28h]
0x7ACF60: add     eax, 0FFFFFFFFh
0x7ACF63: mov     [edi+30h], eax
0x7ACF66: mov     esi, [ecx+eax*4]
0x7ACF69: mov     [esp+18h+var_C], esi
0x7ACF6D: jmp     short loc_7ACF75
0x7ACF6F: mov     [esp+18h+var_C], ebp
0x7ACF73: mov     esi, ebp
0x7ACF75: cmp     [edi+58h], ebp
0x7ACF78: push    ebx
0x7ACF79: jz      short loc_7ACF83
0x7ACF7B: mov     edx, [edi+50h]
0x7ACF7E: mov     ebx, [edx+8]
0x7ACF81: jmp     short loc_7ACF85
0x7ACF83: xor     ebx, ebx
0x7ACF85: cmp     esi, ebp
0x7ACF87: mov     byte ptr ds:0B42CDDh, 1
0x7ACF8E: jz      loc_7AD13F
0x7ACF94: cmp     ebx, ebp
0x7ACF96: jz      short loc_7ACFFE
0x7ACF98: mov     eax, [edi+30h]
0x7ACF9B: fld     dword ptr [ebx+14h]
0x7ACF9E: mov     ecx, [edi+2Ch]
0x7ACFA1: fld     dword ptr [ecx+eax*4]
0x7ACFA4: fcompp
0x7ACFA6: fnstsw  ax
0x7ACFA8: test    ah, 5
0x7ACFAB: jp      short loc_7ACFFE
0x7ACFAD: push    1
0x7ACFAF: push    ebx
0x7ACFB0: mov     ecx, edi
0x7ACFB2: call    sub_7ABAC0
0x7ACFB7: push    ebx
0x7ACFB8: mov     dword ptr [ebx], offset ??_7?$BSTPersistentList@V?$NiTPointerAllocator@I@@PAVRenderPass@BSShaderProperty@@@@6B@; const BSTPersistentList<NiTPointerAllocator<uint>,BSShaderProperty::RenderPass *>::`vftable'
0x7ACFBE: call    FormHeapFree
0x7ACFC3: mov     ecx, [edi+50h]
0x7ACFC6: mov     eax, [ecx]
0x7ACFC8: lea     esi, [edi+4Ch]
0x7ACFCB: add     esp, 4
0x7ACFCE: cmp     eax, ebp
0x7ACFD0: mov     [esi+4], eax
0x7ACFD3: jz      short loc_7ACFDA
0x7ACFD5: mov     [eax+4], ebp
0x7ACFD8: jmp     short loc_7ACFDD
0x7ACFDA: mov     [esi+8], ebp
0x7ACFDD: mov     edx, [esi]
0x7ACFDF: mov     eax, [edx+8]
0x7ACFE2: push    ecx
0x7ACFE3: mov     ecx, esi
0x7ACFE5: call    eax
0x7ACFE7: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7ACFEB: cmp     [edi+58h], ebp
0x7ACFEE: mov     esi, [esp+1Ch+var_C]
0x7ACFF2: jz      short loc_7ACFFC
0x7ACFF4: mov     ecx, [edi+50h]
0x7ACFF7: mov     ebx, [ecx+8]
0x7ACFFA: jmp     short loc_7ACF94
0x7ACFFC: xor     ebx, ebx
0x7ACFFE: push    4
0x7AD000: mov     ecx, esi
0x7AD002: call    NiNode_GetNiPropertyByID
0x7AD007: cmp     eax, ebp
0x7AD009: jz      loc_7AD104
0x7AD00F: mov     edx, [eax]
0x7AD011: mov     ecx, eax
0x7AD013: mov     eax, [edx+54h]
0x7AD016: call    eax
0x7AD018: cmp     eax, 0FFFFFFFFh
0x7AD01B: jnz     short loc_7AD041
0x7AD01D: cmp     word ptr ds:0B42EACh, 6
0x7AD025: jz      loc_7AD137
0x7AD02B: mov     edx, [esi]
0x7AD02D: mov     eax, [esp+1Ch+var_4]
0x7AD031: mov     edx, [edx+84h]
0x7AD037: push    eax
0x7AD038: mov     ecx, esi
0x7AD03A: call    edx
0x7AD03C: jmp     loc_7AD137
0x7AD041: mov     eax, [edi+21C4h]
0x7AD047: cmp     eax, ebp
0x7AD049: mov     [esp+1Ch+var_8], eax
0x7AD04D: jz      loc_7AD11E
0x7AD053: mov     ebp, [eax+8]
0x7AD056: test    ebp, ebp
0x7AD058: lea     ecx, [eax+8]
0x7AD05B: mov     eax, [eax]
0x7AD05D: jz      loc_7AD0F4
0x7AD063: mov     ecx, [ebp+0]
0x7AD066: cmp     ecx, [esp+1Ch+var_C]
0x7AD06A: jnz     loc_7AD0F4
0x7AD070: mov     esi, [ecx+0BCh]
0x7AD076: test    esi, esi
0x7AD078: jz      short loc_7AD0D5
0x7AD07A: mov     eax, [esi]
0x7AD07C: mov     edx, [eax+1Ch]
0x7AD07F: mov     ecx, esi
0x7AD081: call    edx
0x7AD083: cmp     eax, 1
0x7AD086: jl      short loc_7AD0A4
0x7AD088: mov     eax, [esi]
0x7AD08A: mov     edx, [eax+1Ch]
0x7AD08D: mov     ecx, esi
0x7AD08F: call    edx
0x7AD091: cmp     eax, 5
0x7AD094: jg      short loc_7AD0A4
0x7AD096: movzx   eax, word ptr [ebp+4]
0x7AD09A: push    1
0x7AD09C: push    eax
0x7AD09D: call    sub_7D1320
0x7AD0A2: jmp     short loc_7AD0BE
0x7AD0A4: mov     edx, [esi]
0x7AD0A6: mov     eax, [edx+1Ch]
0x7AD0A9: mov     ecx, esi
0x7AD0AB: call    eax
0x7AD0AD: cmp     eax, 1Bh
0x7AD0B0: jnz     short loc_7AD0D5
0x7AD0B2: movzx   ecx, word ptr [ebp+4]
0x7AD0B6: push    1
0x7AD0B8: push    ecx
0x7AD0B9: call    sub_7FD260
0x7AD0BE: mov     ecx, [esi+30h]
0x7AD0C1: mov     edx, [ecx]
0x7AD0C3: mov     eax, [edx+48h]
0x7AD0C6: add     esp, 8
0x7AD0C9: call    eax
0x7AD0CB: mov     ecx, [esi+2Ch]
0x7AD0CE: mov     edx, [ecx]
0x7AD0D0: mov     eax, [edx+48h]
0x7AD0D3: call    eax
0x7AD0D5: movzx   ecx, word ptr [ebp+4]
0x7AD0D9: push    ecx; float
0x7AD0DA: push    ebp; int
0x7AD0DB: mov     ecx, edi
0x7AD0DD: call    sub_7A9820
0x7AD0E2: lea     edx, [esp+1Ch+var_8]
0x7AD0E6: push    edx
0x7AD0E7: lea     ecx, [edi+21C0h]
0x7AD0ED: call    sub_7AA860
0x7AD0F2: xor     eax, eax
0x7AD0F4: test    eax, eax
0x7AD0F6: mov     [esp+1Ch+var_8], eax
0x7AD0FA: jnz     loc_7AD053
0x7AD100: xor     ebp, ebp
0x7AD102: jmp     short loc_7AD11E
0x7AD104: cmp     byte ptr [edi+21E3h], 0
0x7AD10B: jz      short loc_7AD11E
0x7AD10D: mov     ecx, [esp+1Ch+var_4]
0x7AD111: mov     eax, [esi]
0x7AD113: mov     edx, [eax+84h]
0x7AD119: push    ecx
0x7AD11A: mov     ecx, esi
0x7AD11C: call    edx
0x7AD11E: mov     eax, [edi+30h]
0x7AD121: cmp     eax, ebp
0x7AD123: jz      short loc_7AD13F
0x7AD125: mov     ecx, [edi+28h]
0x7AD128: add     eax, 0FFFFFFFFh
0x7AD12B: mov     [edi+30h], eax
0x7AD12E: mov     edx, [ecx+eax*4]
0x7AD131: mov     [esp+1Ch+var_C], edx
0x7AD135: mov     esi, edx
0x7AD137: cmp     esi, ebp
0x7AD139: jnz     loc_7ACF94
0x7AD13F: mov     eax, [edi+1Ch]
0x7AD142: cmp     eax, ebp
0x7AD144: pop     ebx
0x7AD145: jz      short loc_7AD184
0x7AD147: cmp     [eax+0Ch], ebp
0x7AD14A: jz      short loc_7AD1B7
0x7AD14C: lea     esp, [esp+0]
0x7AD150: mov     esi, [edi+1Ch]
0x7AD153: mov     ecx, [esi+4]
0x7AD156: mov     eax, [ecx]
0x7AD158: cmp     eax, ebp
0x7AD15A: mov     [esi+4], eax
0x7AD15D: jz      short loc_7AD164
0x7AD15F: mov     [eax+4], ebp
0x7AD162: jmp     short loc_7AD167
0x7AD164: mov     [esi+8], ebp
0x7AD167: mov     eax, [esi]
0x7AD169: mov     edx, [eax+8]
0x7AD16C: push    ecx
0x7AD16D: mov     ecx, esi
0x7AD16F: call    edx
0x7AD171: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7AD175: mov     eax, [edi+1Ch]
0x7AD178: cmp     [eax+0Ch], ebp
0x7AD17B: jnz     short loc_7AD150
0x7AD17D: pop     edi
0x7AD17E: pop     esi
0x7AD17F: pop     ebp
0x7AD180: add     esp, 0Ch
0x7AD183: retn
0x7AD184: cmp     [edi+18h], ebp
0x7AD187: jz      short loc_7AD1B7
0x7AD189: lea     esi, [edi+0Ch]
0x7AD18C: lea     esp, [esp+0]
0x7AD190: mov     ecx, [esi+4]
0x7AD193: mov     eax, [ecx]
0x7AD195: cmp     eax, ebp
0x7AD197: mov     [esi+4], eax
0x7AD19A: jz      short loc_7AD1A1
0x7AD19C: mov     [eax+4], ebp
0x7AD19F: jmp     short loc_7AD1A4
0x7AD1A1: mov     [esi+8], ebp
0x7AD1A4: mov     edx, [esi]
0x7AD1A6: mov     eax, [edx+8]
0x7AD1A9: push    ecx
0x7AD1AA: mov     ecx, esi
0x7AD1AC: call    eax
0x7AD1AE: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7AD1B2: cmp     [edi+18h], ebp
0x7AD1B5: jnz     short loc_7AD190
0x7AD1B7: pop     edi
0x7AD1B8: pop     esi
0x7AD1B9: pop     ebp
0x7AD1BA: add     esp, 0Ch
0x7AD1BD: retn
