0x7E27F0: push    0FFFFFFFFh; [constructor audit] Initializes four empty pass lists before calling FreeAllNodes573880; their head pointers are NULL, so those calls perform no virtual callbacks or allocations. Base ObjectNET/Object construction is field initialization. No suballocation in this constructor path.
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
0x7E2889: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7E288E: mov     ecx, ebx
0x7E2890: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7E2895: mov     ecx, ebp
0x7E2897: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7E289C: lea     ecx, [esi+58h]
0x7E289F: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
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
0x9CF5D0: mov     ecx, [ebp-10h]; this
0x9CF5D3: jmp     j_??1NiDitherProperty@@UAE@XZ; NiDitherProperty::~NiDitherProperty(void)
0x9CF5D8: mov     ecx, [ebp-10h]
0x9CF5DB: add     ecx, 28h ; '('
0x9CF5DE: jmp     j_??1?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@UAE@XZ; NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(void)
0x9CF5E3: mov     ecx, [ebp-10h]
0x9CF5E6: add     ecx, 38h ; '8'
0x9CF5E9: jmp     j_??1?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@UAE@XZ; NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(void)
0x9CF5EE: mov     ecx, [ebp-10h]
0x9CF5F1: add     ecx, 48h ; 'H'
0x9CF5F4: jmp     j_??1?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@UAE@XZ; NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(void)
0x9CF5F9: mov     ecx, [ebp-10h]
0x9CF5FC: add     ecx, 58h ; 'X'
0x9CF5FF: jmp     j_??1?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@UAE@XZ; NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(void)
0x9CF604: mov     edx, [esp+arg_4]
0x9CF608: lea     eax, [edx-14h]
0x9CF60B: mov     ecx, [edx-18h]
0x9CF60E: xor     ecx, eax
0x9CF610: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CF615: mov     eax, offset stru_AF820C
0x9CF61A: jmp     ___CxxFrameHandler3
