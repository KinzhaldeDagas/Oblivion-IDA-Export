0x7E27F0: push    0FFFFFFFFh
0x7E27F2: push    offset ??0BSShaderProperty@@QAE@XZ_SEH
0x7E27F7: mov     eax, large fs:0
0x7E27FD: push    eax
0x7E27FE: push    ecx
0x7E27FF: push    ebx
0x7E2800: push    ebp
0x7E2801: push    esi
0x7E2802: push    edi
0x7E2803: mov     eax, ds:0B30AACh
0x7E2808: xor     eax, esp
0x7E280A: push    eax
0x7E280B: lea     eax, [esp+24h+var_C]
0x7E280F: mov     large fs:0, eax
0x7E2815: mov     esi, ecx
0x7E2817: mov     [esp+24h+var_10], esi
0x7E281B: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7E2820: mov     word ptr [esi+18h], 1
0x7E2826: xor     edi, edi
0x7E2828: lea     ecx, [esi+28h]
0x7E282B: mov     dword ptr [esi], offset ??_7BSShaderProperty@@6B@; const BSShaderProperty::`vftable'
0x7E2831: mov     [esp+24h+var_4], edi
0x7E2835: mov     [ecx+0Ch], edi
0x7E2838: mov     [ecx+4], edi
0x7E283B: mov     [ecx+8], edi
0x7E283E: mov     dword ptr [ecx], offset ??_7?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@6B@; const NiTPointerList<BSShaderProperty::RenderPass *>::`vftable'
0x7E2844: lea     ebx, [esi+38h]
0x7E2847: mov     [ebx+0Ch], edi
0x7E284A: mov     [ebx+4], edi
0x7E284D: mov     [ebx+8], edi
0x7E2850: mov     dword ptr [ebx], offset ??_7?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@6B@; const NiTPointerList<BSShaderProperty::RenderPass *>::`vftable'
0x7E2856: lea     ebp, [esi+48h]
0x7E2859: mov     [ebp+0Ch], edi
0x7E285C: mov     [ebp+4], edi
0x7E285F: mov     [ebp+8], edi
0x7E2862: mov     dword ptr [ebp+0], offset ??_7?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@6B@; const NiTPointerList<BSShaderProperty::RenderPass *>::`vftable'
0x7E2869: mov     [esi+64h], edi
0x7E286C: mov     [esi+5Ch], edi
0x7E286F: mov     [esi+60h], edi
0x7E2872: mov     dword ptr [esi+58h], offset ??_7?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@6B@; const NiTPointerList<BSShaderProperty::RenderPass *>::`vftable'
0x7E2879: fld1
0x7E287B: fstp    dword ptr [esi+20h]
0x7E287E: mov     byte ptr [esp+24h+var_4], 4
0x7E2883: mov     [esi+1Ch], edi
0x7E2886: mov     [esi+24h], edi
0x7E2889: call    NiTPointerList__FreeAllNodes
0x7E288E: mov     ecx, ebx
0x7E2890: call    NiTPointerList__FreeAllNodes
0x7E2895: mov     ecx, ebp
0x7E2897: call    NiTPointerList__FreeAllNodes
0x7E289C: lea     ecx, [esi+58h]
0x7E289F: call    NiTPointerList__FreeAllNodes
0x7E28A4: mov     [esi+68h], edi
0x7E28A7: mov     eax, esi
0x7E28A9: mov     ecx, [esp+24h+var_C]
0x7E28AD: mov     large fs:0, ecx
0x7E28B4: pop     ecx
0x7E28B5: pop     edi
0x7E28B6: pop     esi
0x7E28B7: pop     ebp
0x7E28B8: pop     ebx
0x7E28B9: add     esp, 10h
0x7E28BC: retn
