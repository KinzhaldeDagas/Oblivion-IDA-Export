0x7E2650: push    0FFFFFFFFh
0x7E2652: push    offset ??1BSShaderProperty@@UAE@XZ_SEH
0x7E2657: mov     eax, large fs:0
0x7E265D: push    eax
0x7E265E: push    ecx
0x7E265F: push    esi
0x7E2660: mov     eax, ds:0B30AACh
0x7E2665: xor     eax, esp
0x7E2667: push    eax
0x7E2668: lea     eax, [esp+18h+var_C]
0x7E266C: mov     large fs:0, eax
0x7E2672: mov     esi, ecx
0x7E2674: mov     [esp+18h+var_10], esi
0x7E2678: mov     dword ptr [esi], offset ??_7BSShaderProperty@@6B@; const BSShaderProperty::`vftable'
0x7E267E: mov     [esp+18h+var_4], 4
0x7E2686: mov     dword ptr [esi+1Ch], 0
0x7E268D: call    sub_7E24C0
0x7E2692: lea     ecx, [esi+58h]
0x7E2695: mov     byte ptr [esp+18h+var_4], 3
0x7E269A: call    ??1?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@UAE@XZ; NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(void)
0x7E269F: lea     ecx, [esi+48h]
0x7E26A2: mov     byte ptr [esp+18h+var_4], 2
0x7E26A7: call    ??1?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@UAE@XZ; NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(void)
0x7E26AC: lea     ecx, [esi+38h]
0x7E26AF: mov     byte ptr [esp+18h+var_4], 1
0x7E26B4: call    ??1?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@UAE@XZ; NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(void)
0x7E26B9: lea     ecx, [esi+28h]
0x7E26BC: mov     byte ptr [esp+18h+var_4], 0
0x7E26C1: call    ??1?$NiTPointerList@PAVRenderPass@BSShaderProperty@@@@UAE@XZ; NiTPointerList<BSShaderProperty::RenderPass *>::~NiTPointerList<BSShaderProperty::RenderPass *>(void)
0x7E26C6: mov     ecx, esi; this
0x7E26C8: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7E26D0: call    ??1NiDitherProperty@@UAE@XZ; NiDitherProperty::~NiDitherProperty(void)
0x7E26D5: mov     ecx, [esp+18h+var_C]
0x7E26D9: mov     large fs:0, ecx
0x7E26E0: pop     ecx
0x7E26E1: pop     esi
0x7E26E2: add     esp, 10h
0x7E26E5: retn
