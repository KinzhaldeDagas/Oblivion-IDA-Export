0x4ED1B0: push    0FFFFFFFFh
0x4ED1B2: push    offset SEH_4ED1B0
0x4ED1B7: mov     eax, large fs:0
0x4ED1BD: push    eax
0x4ED1BE: sub     esp, 0Ch
0x4ED1C1: push    ebx
0x4ED1C2: push    ebp
0x4ED1C3: push    esi
0x4ED1C4: push    edi
0x4ED1C5: mov     eax, ds:0B30AACh
0x4ED1CA: xor     eax, esp
0x4ED1CC: push    eax
0x4ED1CD: lea     eax, [esp+2Ch+var_C]
0x4ED1D1: mov     large fs:0, eax
0x4ED1D7: mov     edi, ecx
0x4ED1D9: mov     eax, [edi+3Ch]
0x4ED1DC: xor     ebp, ebp
0x4ED1DE: cmp     eax, ebp
0x4ED1E0: jz      loc_4ED2EB
0x4ED1E6: xor     esi, esi
0x4ED1E8: mov     [esp+2Ch+var_18], ebp
0x4ED1EC: mov     [esp+2Ch+var_4], ebp
0x4ED1F0: mov     [esp+2Ch+var_14], ebp
0x4ED1F4: push    1; a1
0x4ED1F6: mov     byte ptr [esp+30h+var_4], 1
0x4ED1FB: call    GetShaderDefinition
0x4ED200: mov     ebx, eax
0x4ED202: add     esp, 4
0x4ED205: cmp     ebx, ebp
0x4ED207: jz      loc_4ED2E3
0x4ED20D: cmp     [ebx+4], ebp
0x4ED210: jz      loc_4ED2E3
0x4ED216: push    0F0h ; 'ð'; Size
0x4ED21B: call    FormHeapAlloc
0x4ED220: add     esp, 4
0x4ED223: mov     [esp+2Ch+var_10], eax
0x4ED227: cmp     eax, ebp
0x4ED229: mov     byte ptr [esp+2Ch+var_4], 2
0x4ED22E: jz      short loc_4ED23B
0x4ED230: mov     ecx, eax; this
0x4ED232: call    ??0BSShaderPPLightingProperty@@QAE@XZ; BSShaderPPLightingProperty::BSShaderPPLightingProperty(void)
0x4ED237: mov     esi, eax
0x4ED239: jmp     short loc_4ED23D
0x4ED23B: xor     esi, esi
0x4ED23D: or      dword ptr [esi+1Ch], 3000h
0x4ED244: mov     [esi+24h], ebp
0x4ED247: mov     ecx, [edi+3Ch]; this
0x4ED24A: push    esi; a2
0x4ED24B: mov     byte ptr [esp+30h+var_4], 1
0x4ED250: call    sub_405680
0x4ED255: mov     ebp, [edi+3Ch]
0x4ED258: mov     eax, [esi]
0x4ED25A: mov     edx, [eax+68h]
0x4ED25D: push    ebp
0x4ED25E: mov     ecx, esi
0x4ED260: call    edx
0x4ED262: mov     ebp, [ebp+0B4h]
0x4ED268: push    eax
0x4ED269: mov     ecx, ebp
0x4ED26B: call    sub_6C61E0
0x4ED270: xor     ebp, ebp
0x4ED272: cmp     [ebx+4], ebp
0x4ED275: jz      short loc_4ED2E3
0x4ED277: cmp     esi, ebp
0x4ED279: jz      short loc_4ED2BB
0x4ED27B: mov     eax, [edi+40h]
0x4ED27E: mov     edx, [esi]
0x4ED280: push    eax
0x4ED281: mov     eax, [edx+80h]
0x4ED287: push    ebp
0x4ED288: mov     ecx, esi
0x4ED28A: call    eax
0x4ED28C: mov     edx, [esi]
0x4ED28E: mov     eax, [edx+80h]
0x4ED294: push    ebp
0x4ED295: push    1
0x4ED297: mov     ecx, esi
0x4ED299: call    eax
0x4ED29B: mov     eax, [edi+44h]
0x4ED29E: mov     edx, [esi]
0x4ED2A0: push    eax
0x4ED2A1: mov     eax, [edx+84h]
0x4ED2A7: push    ebp
0x4ED2A8: mov     ecx, esi
0x4ED2AA: call    eax
0x4ED2AC: mov     edx, [esi]
0x4ED2AE: mov     eax, [edx+84h]
0x4ED2B4: push    ebp
0x4ED2B5: push    1
0x4ED2B7: mov     ecx, esi
0x4ED2B9: call    eax
0x4ED2BB: mov     eax, [ebx+4]
0x4ED2BE: mov     ecx, [edi+3Ch]; this
0x4ED2C1: push    eax; a2
0x4ED2C2: call    sub_4EC910
0x4ED2C7: mov     ecx, [ebx+4]
0x4ED2CA: mov     eax, [edi+3Ch]
0x4ED2CD: mov     edx, [ecx]
0x4ED2CF: push    eax
0x4ED2D0: mov     eax, [edx+18h]
0x4ED2D3: call    eax
0x4ED2D5: cmp     esi, ebp
0x4ED2D7: jz      short loc_4ED2E3
0x4ED2D9: mov     edx, [esi]
0x4ED2DB: mov     eax, [edx+7Ch]
0x4ED2DE: push    ebp
0x4ED2DF: mov     ecx, esi
0x4ED2E1: call    eax
0x4ED2E3: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4ED2EB: mov     ecx, [edi+3Ch]; this
0x4ED2EE: call    NiAVObject_InitializePropertyState
0x4ED2F3: fldz
0x4ED2F5: push    1; a3
0x4ED2F7: push    ecx
0x4ED2F8: mov     ecx, [edi+3Ch]; this
0x4ED2FB: fstp    [esp+34h+a2]; a2
0x4ED2FE: call    NiAVObject_UpdateNiAVObject
0x4ED303: mov     ecx, [edi+38h]
0x4ED306: call    sub_4ECB70
0x4ED30B: mov     ecx, dword ptr [esp+2Ch+var_C]
0x4ED30F: mov     large fs:0, ecx
0x4ED316: pop     ecx
0x4ED317: pop     edi
0x4ED318: pop     esi
0x4ED319: pop     ebp
0x4ED31A: pop     ebx
0x4ED31B: add     esp, 18h
0x4ED31E: retn
