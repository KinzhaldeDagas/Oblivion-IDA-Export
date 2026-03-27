0x53F1F0: push    0FFFFFFFFh
0x53F1F2: push    offset SEH_6CED50
0x53F1F7: mov     eax, large fs:0
0x53F1FD: push    eax
0x53F1FE: sub     esp, 8
0x53F201: push    ebx
0x53F202: push    ebp
0x53F203: push    esi
0x53F204: push    edi
0x53F205: mov     eax, ds:0B30AACh
0x53F20A: xor     eax, esp
0x53F20C: push    eax
0x53F20D: lea     eax, [esp+28h+var_C]
0x53F211: mov     large fs:0, eax
0x53F217: mov     edi, ecx
0x53F219: mov     eax, [edi+4]
0x53F21C: test    eax, eax
0x53F21E: lea     ebx, [edi+4]
0x53F221: jz      loc_53F2AF
0x53F227: mov     ecx, [edi+0Ch]
0x53F22A: mov     edx, [ecx]
0x53F22C: mov     edx, [edx+88h]
0x53F232: push    eax
0x53F233: lea     eax, [esp+2Ch+var_14]
0x53F237: push    eax
0x53F238: call    edx
0x53F23A: mov     eax, [esp+28h+var_14]
0x53F23E: test    eax, eax
0x53F240: mov     ebp, ds:0A2807Ch
0x53F246: jz      short loc_53F262
0x53F248: mov     esi, eax
0x53F24A: add     eax, 4
0x53F24D: push    eax; lpAddend
0x53F24E: call    ebp ; InterlockedDecrement
0x53F250: test    eax, eax
0x53F252: jnz     short loc_53F262
0x53F254: test    esi, esi
0x53F256: jz      short loc_53F262
0x53F258: mov     eax, [esi]
0x53F25A: mov     edx, [eax]
0x53F25C: push    1
0x53F25E: mov     ecx, esi
0x53F260: call    edx
0x53F262: lea     esi, [edi+8]
0x53F265: push    ebx
0x53F266: mov     ecx, esi
0x53F268: call    sub_55E2A0
0x53F26D: mov     ecx, [esi]
0x53F26F: push    offset aLastPrecipRoot; "Last Precip Root"
0x53F274: call    NiObjectNET_SetName
0x53F279: mov     ecx, [edi+0Ch]
0x53F27C: mov     esi, [esi]
0x53F27E: mov     eax, [ecx]
0x53F280: mov     edx, [eax+84h]
0x53F286: push    1
0x53F288: push    esi
0x53F289: call    edx
0x53F28B: mov     esi, [ebx]
0x53F28D: test    esi, esi
0x53F28F: jz      short loc_53F2AF
0x53F291: lea     eax, [esi+4]
0x53F294: push    eax; lpAddend
0x53F295: call    ebp ; InterlockedDecrement
0x53F297: test    eax, eax
0x53F299: jnz     short loc_53F2A9
0x53F29B: test    esi, esi
0x53F29D: jz      short loc_53F2A9
0x53F29F: mov     edx, [esi]
0x53F2A1: mov     eax, [edx]
0x53F2A3: push    1
0x53F2A5: mov     ecx, esi
0x53F2A7: call    eax
0x53F2A9: mov     dword ptr [ebx], 0
0x53F2AF: mov     esi, [esp+28h+Str1]
0x53F2B3: test    esi, esi
0x53F2B5: jz      loc_53F409
0x53F2BB: cmp     byte ptr [esi], 0
0x53F2BE: jz      loc_53F409
0x53F2C4: mov     ecx, ds:0B33A1Ch
0x53F2CA: push    1
0x53F2CC: push    0
0x53F2CE: push    0
0x53F2D0: push    esi
0x53F2D1: call    sub_439EB0
0x53F2D6: mov     ebp, eax
0x53F2D8: test    ebp, ebp
0x53F2DA: jz      loc_53F409
0x53F2E0: push    offset aSkySnow_nif; "Sky\\Snow.NIF"
0x53F2E5: push    esi; Str1
0x53F2E6: call    __strcmp
0x53F2EB: fldz
0x53F2ED: mov     edx, [ebp+0]
0x53F2F0: add     esp, 8
0x53F2F3: test    eax, eax
0x53F2F5: mov     eax, [edx+60h]
0x53F2F8: setz    cl
0x53F2FB: xor     esi, esi
0x53F2FD: push    esi
0x53F2FE: mov     byte ptr [esp+2Ch+Str1], cl
0x53F302: push    ecx
0x53F303: mov     ecx, ebp
0x53F305: fstp    [esp+30h+var_30]
0x53F308: call    eax
0x53F30A: push    0DCh ; 'Ü'; Size
0x53F30F: call    FormHeapAlloc
0x53F314: add     esp, 4
0x53F317: mov     [esp+28h+var_10], eax
0x53F31B: cmp     eax, esi
0x53F31D: mov     [esp+28h+var_4], esi
0x53F321: jz      short loc_53F32D
0x53F323: push    esi
0x53F324: mov     ecx, eax; this
0x53F326: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x53F32B: jmp     short loc_53F32F
0x53F32D: xor     eax, eax
0x53F32F: push    eax; a2
0x53F330: mov     ecx, ebx; this
0x53F332: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x53F33A: call    NiSmartPointer_Set??
0x53F33F: fldz
0x53F341: fstp    dword ptr [edi+10h]
0x53F344: cmp     word ptr [ebp+0B8h], 0
0x53F34C: jbe     loc_53F3DD
0x53F352: movzx   ecx, word ptr [ebp+0B6h]
0x53F359: cmp     ecx, esi
0x53F35B: ja      short loc_53F361
0x53F35D: xor     eax, eax
0x53F35F: jmp     short loc_53F36A
0x53F361: mov     edx, [ebp+0B0h]
0x53F367: mov     eax, [edx+esi*4]
0x53F36A: push    eax
0x53F36B: push    offset dword_B3FAB0
0x53F370: call    NiRTTI_Cast
0x53F375: add     esp, 8
0x53F378: test    eax, eax
0x53F37A: jz      short loc_53F3CB
0x53F37C: cmp     word ptr [eax+0B6h], 0
0x53F384: ja      short loc_53F38A
0x53F386: xor     eax, eax
0x53F388: jmp     short loc_53F392
0x53F38A: mov     eax, [eax+0B0h]
0x53F390: mov     eax, [eax]
0x53F392: push    eax
0x53F393: push    offset dword_B40864
0x53F398: call    NiRTTI_Cast
0x53F39D: add     esp, 8
0x53F3A0: test    eax, eax
0x53F3A2: jz      short loc_53F3CB
0x53F3A4: mov     ecx, [edi+0Ch]
0x53F3A7: mov     edx, [esp+28h+Str1]
0x53F3AB: add     ecx, 64h ; 'd'
0x53F3AE: push    edx
0x53F3AF: push    ecx
0x53F3B0: push    eax
0x53F3B1: mov     ecx, edi
0x53F3B3: call    sub_53DA20
0x53F3B8: test    eax, eax
0x53F3BA: jz      short loc_53F3CB
0x53F3BC: mov     ecx, [ebx]
0x53F3BE: mov     edx, [ecx]
0x53F3C0: push    1
0x53F3C2: push    eax
0x53F3C3: mov     eax, [edx+84h]
0x53F3C9: call    eax
0x53F3CB: movzx   ecx, word ptr [ebp+0B8h]
0x53F3D2: add     esi, 1
0x53F3D5: cmp     esi, ecx
0x53F3D7: jb      loc_53F352
0x53F3DD: mov     ecx, [ebx]
0x53F3DF: push    offset aCurrentPrecipR; "Current Precip Root"
0x53F3E4: call    NiObjectNET_SetName
0x53F3E9: mov     ecx, [edi+0Ch]
0x53F3EC: mov     edx, [ecx]
0x53F3EE: mov     eax, [ebx]
0x53F3F0: mov     edx, [edx+84h]
0x53F3F6: push    1
0x53F3F8: push    eax
0x53F3F9: call    edx
0x53F3FB: mov     ecx, [ebx]; this
0x53F3FD: call    NiAVObject_InitializePropertyState
0x53F402: mov     ecx, [ebx]
0x53F404: call    NiNode_UpdateDynamicEffectState
0x53F409: mov     ecx, dword ptr [esp+28h+var_C]
0x53F40D: mov     large fs:0, ecx
0x53F414: pop     ecx
0x53F415: pop     edi
0x53F416: pop     esi
0x53F417: pop     ebp
0x53F418: pop     ebx
0x53F419: add     esp, 14h
0x53F41C: retn    4
